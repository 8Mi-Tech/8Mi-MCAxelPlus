#include "mainwindow.h"
#include <DApplication>
#include <DWidgetUtil>  //Dtk::Widget::moveToCenter(&w); 要调用它，就得引用DWidgetUtil
//#include <DSysInfo>

DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();  //让bar处在标题栏中
    DApplication dtk(argc, argv);
     dtk.setAttribute(Qt::AA_UseHighDpiPixmaps);
     dtk.loadTranslator();
     dtk.setOrganizationName("8Mi-Tech");
     dtk.setApplicationVersion(DApplication::buildVersion("1.0"));
     dtk.setProductName("8Mi-DTKDebug");
     dtk.setApplicationName("8Mi-DTKDebug"); //只有在这儿修改窗口标题才有效
     dtk.setApplicationAcknowledgementPage("https://blog.8mi.tech");
     dtk.setApplicationAcknowledgementVisible(true);
     dtk.setVisibleMenuIcon(true);
     dtk.setApplicationDescription("Minecraft C&S Download");
     dtk.setApplicationLicense("GPL-3.0");
     //dtk.setWindowIcon(QIcon("./icon.svg"));
     //dtk.setProductIcon(QIcon("./icon.svg"));
    MainWindow w;
    w.show();

    //让打开时界面显示在正中
    Dtk::Widget::moveToCenter(&w);
    return dtk.exec();
}

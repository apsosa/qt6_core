#include <QCoreApplication>
#include <QtDebug>


/*! Documentation comment
 * \brief main
 * \param argc
 * \param argv
 * \return
 */

/* multilineal comment
 *
 *
 *
 */

int main(int argc, char *argv[])
{
    //this an example of a qt app
    QCoreApplication a(argc, argv);
    qInfo() << "Hello World";
    return a.exec();
}

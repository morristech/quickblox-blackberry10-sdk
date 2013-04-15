// Default empty project template
#ifndef QBSamples_HPP_
#define QBSamples_HPP_

#include <QObject>

namespace bb {
namespace cascades {
class Application;
}
}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class QBSamples : public QObject
{
    Q_OBJECT
public:
    QBSamples(bb::cascades::Application *app);
    virtual ~QBSamples();

//	Q_INVOKABLE void login(QString login, QString password);
//	Q_INVOKABLE void regist(QString login, QString password);
//	Q_INVOKABLE void singout();

public slots:
	static int displayWidth();
	static int displayHeight();
private:
};


#endif /* QBSamples_HPP_ */

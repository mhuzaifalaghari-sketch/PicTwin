#ifndef LOGIN_H
#define LOGIN_H

class LoginForm : public QDialog{
	Q_OBJECT
signals:
	void noAccount();
	void checkLoginsuccesful();

public:
	QLineEdit* username;
	QLineEdit* password;

	QPushButton* login;
	QPushButton* signup;

	QLabel* NOAccoutn;
	QLabel* loginNotsuccesful;

	QVBoxLayout* LayoutForm;

//	bool login = false;

	LoginForm(QWidget* parent = nullptr);
	~LoginForm();

	void checkCredientials();

	


	QString Getusername;
	QString GetPassword;




};

#endif // !LOGIN_H


#include "User.h"
using namespace std;
//default constructor
User::User(){}
//constructor
User::User(string user_name, string name, string password, Sex sex, IdType id_type, string id, string phone):_user_name(user_name), _name(name), _password(password), _sex(sex), _id_type(id_type), _id(id), _phone(phone){}
	
//获取信息
string User::GetUserName() const{
	return _user_name;
}
string User::GetName() const{
	return _name;
}
string User::GetPassword() const{
	return _password;
}
Sex User::GetSex() const{
	return _sex;
}
IdType User::GetIDType() const{
	return _id_type;
}
string User::GetId() const{
	return _id;
}
string User::GetPhone() const{
	return _phone;
}
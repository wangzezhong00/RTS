#include "User.h"
#include<string>
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
void User::SetUserName(const string user_name){
	_user_name=user_name;
}
void User::SetName(const string name){
	_name=name;
}
void User::SetPassword(const string password){
	_password=password;
}
void User::SetSex(const Sex sex){
	_sex=sex;
}
void User::SetIDType(const IdType idtype){
	_id_type=idtype;
}
void User::SetId(const string id){
	_id=id;
}
void User::SetPhone(const string phone){
	_phone=phone;
}
Student::Student(){
}
Student::Student(string user_name, string name, string password, Sex sex, IdType id_type, string id, string phone, string school, string stu_id):User(user_name,name,password,sex,id_type,id,phone),_school(school),_stu_id(stu_id){
}
string Student::GetSchool() const{
	return _school;
}
string Student::GetStuid() const{
	return _stu_id;
}
void Student::SetSchool(const string school){
	_school=school;
}
void Student::SetStuId(const string stu_id){
	_stu_id=stu_id;
}
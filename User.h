#ifndef USER_H
#define USER_H
#include <string>
enum Sex {male, female};
enum IdType {ID, HM, TW, PP};//身份证件类型：身份证、港澳通行证、台胞通行证、护照


class User{
public:
	User();//default constructor
	User(std::string user_name, std::string name, std::string password, Sex sex, IdType id_type, std::string id, std::string phone);//constructor
	
	//获取信息
	std::string GetUserName() const;
	std::string GetName() const;
	std::string GetPassword() const;
	Sex GetSex() const;
	IdType GetIDType() const;
	std::string GetId() const;
	std::string GetPhone() const;

	//修改信息
	void SetUserName(const std::string user_name);
	void SetName(const std::string name);
	void SetPassword(const std::string password);
	void SetSex(const Sex sex);
	void SetIDType(const IdType idtype);
	void SetId(const std::string id);
	void SetPhone(const std::string phone);

	//购买车票...(虚函数）
	//显示购买车票...
	//查询车票...
protected:
	std::string _user_name;//用户名
	std::string _name;//姓名
	std::string _password;//密码
	Sex _sex;//性别
	IdType _id_type;//身份证件类型
	std::string _id;//身份证件号码
	std::string _phone;//联系方式
	
	//已购买车票...
};

class Student: public User{
public:
	Student(){}
	Student(std::string user_name, std::string name, std::string password, Sex sex, IdType id_type, std::string id, std::string phone, std::string school, std::string stu_id);

	//
	std::string GetSchool() const;
	std::string GetStuid() const;

	//
	void SetSchool(const std::string school);
	void SetStuId(const std::string stu_id);

private:
	std::string _school;//学校
	std::string _stu_id;//学号
};
#endif
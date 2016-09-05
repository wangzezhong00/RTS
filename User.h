#ifndef USER_H
#define USER_H
#include <string>
enum Sex {male, female};
enum IdType {ID, HM, TW, PP};//���֤�����ͣ����֤���۰�ͨ��֤��̨��ͨ��֤������


class User{
public:
	User();//default constructor
	User(std::string user_name, std::string name, std::string password, Sex sex, IdType id_type, std::string id, std::string phone);//constructor
	
	//��ȡ��Ϣ
	std::string GetUserName() const;
	std::string GetName() const;
	std::string GetPassword() const;
	Sex GetSex() const;
	IdType GetIDType() const;
	std::string GetId() const;
	std::string GetPhone() const;

	//�޸���Ϣ
	void SetUserName(const std::string user_name);
	void SetName(const std::string name);
	void SetPassword(const std::string password);
	void SetSex(const Sex sex);
	void SetIDType(const IdType idtype);
	void SetId(const std::string id);
	void SetPhone(const std::string phone);

	//����Ʊ...(�麯����
	//��ʾ����Ʊ...
	//��ѯ��Ʊ...
protected:
	std::string _user_name;//�û���
	std::string _name;//����
	std::string _password;//����
	Sex _sex;//�Ա�
	IdType _id_type;//���֤������
	std::string _id;//���֤������
	std::string _phone;//��ϵ��ʽ
	
	//�ѹ���Ʊ...
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
	std::string _school;//ѧУ
	std::string _stu_id;//ѧ��
};
#endif
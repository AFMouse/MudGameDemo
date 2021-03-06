/*************************************************
Copyright (C), 2019-2019, DREACYOU
File name:	datastruct.h 
Author:		DREACYOU
Version:	0.0.1.0
Date:		2019.6.11
Description: 数据结构 
Others: 
Function List: 

History: 

*************************************************/
#ifndef	_DATASTRUCT_H
#define	_DATASTRUCT_H

#define DROPITEMIDMAX		2	//物品ID号上限
#define	MONSTERIDMAX		3	//怪物ID号上限
#define	MILIIDMAX			8	//装备ID号上限


//精灵属性 
typedef struct spiritattribute
{
	unsigned char	Name[12];
	signed	 int	HP;
	unsigned int	MP;
	unsigned int	ATK;
	unsigned int	MATK;
	unsigned int	DEF;		
	unsigned int	MDEF;
}SpiritAttribute;

//人物属性 
typedef struct theone
{
	unsigned char	Name[12];
	signed	 int	HP;
	unsigned int	MP;
	unsigned int	ATK;
	unsigned int	MATK;
	unsigned int	DEF;
	unsigned int	MDEF;
	
	unsigned char	sex;		//性别
	unsigned int	equipment;	//装备位状态

}TheOne;

//物品属性
typedef struct item
{
	unsigned int	ID;
	unsigned char	Name[12];
	unsigned int	HP;
	unsigned int	MP;
	unsigned int	ATK;
	unsigned int	MATK;
	unsigned int	DEF;
	unsigned int	MDEF;
	
	unsigned int	location;
}Items;

#endif


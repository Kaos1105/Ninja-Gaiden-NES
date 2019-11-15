﻿#pragma once
#include "StateGameObject.h"

class YellowBird : public StateGameObject
{
private:
	//static Thug * __instance;
public:
	YellowBird(int x, int y);
	void LoadResources() override;
	//Hàm set
	//Hàm get
	int GetIdleAnimID() override;
	int GetWalkAnimID() override;
	int GetJumpAnimID() override;
	int GetCrouchAnimID() override;
	int GetStandAttackAnimID() override;
	int GetCrouchAttackAnimID() override;
	int GetDyingAnimID() override;

	float GetDefaultWalkSpeed() override { return YELLOW_BIRD_WALKING_SPEED; }
	float GetDefautJumpSpeed() override { return YELLOW_BIRD_JUMP_SPEED_Y; }

	//static Thug * GetInstance();
	//Hàm trạng thái

	//Các hàm hành động nhân vật
	//Hàm cập nhật
	void Update(DWORD dt) override;
	//Hàm render
	void Render() override;
};
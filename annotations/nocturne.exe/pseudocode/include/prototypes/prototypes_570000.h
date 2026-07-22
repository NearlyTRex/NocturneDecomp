#pragma once

// Dependencies
#include "system/basetypes.h"
#include "system/winbase.h"
#include "system/windef.h"
#include "system/winnt.h"

// =============================================================================
// FUNCTION PROTOTYPES - Range 0x570000
// =============================================================================

undefined4 FUN_00570007(void);
int FUN_0057000d(int param_1,int param_2);
uint FUN_00570075(int param_1);
void FUN_005700c0(int param_1,undefined4 param_2,int param_3);
int FUN_005700d0(int param_1,undefined4 param_2,int param_3,uint param_4);
void FUN_005701af(int param_1,undefined4 param_2,undefined4 param_3);
undefined4 FUN_005701cc(void);
int FUN_005701cf(int param_1,byte param_2);
int FUN_00570248(undefined4 param_1);
undefined4 FUN_00570272(int param_1);
void FUN_00570410(int param_1);
void FUN_0057042d(undefined4 param_1);
int FUN_00570449(int param_1,byte param_2);
void FUN_00570510(int param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_00570554(uint param_1,byte *param_2);
undefined4 FUN_005705c0(int param_1);
undefined8 FUN_005706aa(undefined4 param_1,undefined4 param_2);
undefined8 FUN_005706dd(uint param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 FUN_005707db(double param_1,byte param_2);
undefined4 FUN_00570870(undefined4 param_1,undefined4 param_2);
void FUN_005708c0(FILETIME *param_1,LPWORD param_2,LPWORD param_3);
void FUN_005709b0(uint param_1,uint param_2);
undefined4 FUN_00570a30(undefined4 *param_1);
undefined4 FUN_00570a70(uint param_1);
undefined4 FUN_00570ad0(undefined4 param_1,uint *param_2,uint param_3);
int FUN_00570bd0(undefined4 *param_1,short *param_2,uint param_3);
undefined4 FUN_00570ca0(byte *param_1);
char * FUN_00570ce0(char *param_1,char *param_2,int param_3);
undefined8 FUN_00570d50(void);
void FUN_005710a0(undefined4 param_1,undefined4 param_2);
undefined1 * FUN_00571150(void);
void FUN_00571160(void);
LPVOID FUN_00571170(void);
undefined4 * FUN_005711a8(void);
undefined4 FUN_00571280(undefined4 param_1,int param_2);
void FUN_005712ec(int param_1);
void FUN_00571364(void);
void FUN_005713a0(int param_1);
void thunk_FUN_00571364(void);
int FUN_005713e0(short *param_1);
undefined4 * FUN_00571410(undefined4 *param_1,undefined4 *param_2,uint param_3);
undefined4 FUN_00571440(short *param_1);
void FUN_0057146c(void);
undefined4 FUN_005714e0(void);
undefined4 FUN_005714ec(void);
void FUN_00571500(void);
undefined4 FUN_00571510(int param_1,undefined4 param_2);
undefined4 FUN_00571564(int param_1);
undefined4 FUN_00571588(int param_1);
undefined4 FUN_005715d0(int param_1);
undefined4 FUN_00571630(void);
char FUN_00571668(void);
bool FUN_00571694(void);
undefined4 FUN_005716d8(undefined4 param_1);
undefined4 FUN_00571718(int param_1,int param_2);
undefined4 FUN_005717d8(undefined4 param_1);
void FUN_005718c4(void);
undefined8 FUN_00571a9d(void);
void FUN_00571b2c(void);
void FUN_00571b8e(void);
int FUN_00571bd0(void);
undefined4 FUN_00571bdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,int param_6,undefined4 param_7);
uint FUN_00571c60(int *param_1);
uint FUN_00571cc6(int *param_1);
int FUN_00571d4f(int param_1,int param_2,int param_3);
int FUN_00571d9f(int param_1);
undefined4 FUN_00571dc7(undefined4 param_1);
void FUN_00571df8(int param_1,uint param_2,uint param_3,int param_4);
int FUN_00571e75(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void FUN_00571ee0(undefined4 param_1);
void FUN_00571ef0(undefined4 param_1);
uint FUN_00571efe(int param_1,uint param_2);
int FUN_00571fd1(int param_1,int param_2);
uint FUN_005721d7(int param_1);
int FUN_005722dc(int param_1,int param_2,int param_3);
int FUN_00572338(int param_1,undefined4 param_2,uint param_3);
undefined4 FUN_005723ae(int param_1);
void FUN_005729e8(int param_1,undefined4 param_2);
undefined8 FUN_00572a35(int *param_1);
undefined4 FUN_00572a90(undefined4 param_1,int param_2);
WORD FUN_00572b00(uint *param_1);
void FUN_00572d50(byte *param_1,byte *param_2);
undefined4 FUN_00572d90(undefined4 param_1);
int FUN_00572e00(byte *param_1,byte *param_2);
undefined4 FUN_00572e60(void);
void FUN_00572e64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_00572e88(void);
void FUN_00572e90(undefined4 param_1);
void FUN_00572ea0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
uint FUN_00572ef0(uint param_1,uint param_2);
int FUN_00572f40(undefined4 param_1);
DWORD FUN_0057301c(uint param_1,LPCVOID param_2,DWORD param_3);
uint FUN_005733e0(uint param_1,char *param_2,DWORD param_3);
undefined4 thunk_FUN_00573ffb(void);
int FUN_00573660(char *param_1,int param_2);
undefined4 FUN_00573a31(undefined4 param_1,undefined4 param_2);
undefined4 FUN_00573afc(char *param_1);
int FUN_00573ca0(char *param_1,int param_2);
void FUN_00573db0(undefined4 param_1);
void FUN_00573e30(undefined4 *param_1);
void FUN_00573fc8(void);
undefined4 FUN_00573ffb(void);
int FUN_00574000(undefined4 param_1);
int FUN_00574030(undefined2 *param_1,char *param_2,int param_3);
undefined4 FUN_00574264(short *param_1);
int FUN_00574404(short *param_1,int param_2);
int FUN_00574520(int param_1);
int FUN_005746f0(int param_1);
byte FUN_00574710(uint param_1);
undefined4 FUN_00574760(uint param_1);
byte FUN_005747b0(uint param_1);
undefined4 FUN_005747f0(void);
undefined4 FUN_005747f6(int param_1);
void FUN_005748d5(void);
void FUN_00574a13(int param_1,int param_2,int param_3,DWORD param_4,DWORD param_5,DWORD param_6,DWORD param_7,DWORD param_8,DWORD param_9,DWORD param_10,DWORD param_11,LPCSTR param_12);
void FUN_00574ad9(void);
void FUN_00574b63(void);


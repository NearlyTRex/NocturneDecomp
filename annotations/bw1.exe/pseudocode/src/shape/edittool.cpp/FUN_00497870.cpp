// Name: FUN_00497870
// Address: 00497870
// Address Range: [[00497870, 00498207]]
// Convention: unknown
// Signature: void FUN_00497870(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497870(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_00497830(param_1);
  if (_DAT_01c3f544 != 0) {
    iVar4 = (uVar1 & 0xff) * 3;
    FUN_00517d50((uint)(byte)(&DAT_01c4e9fa)[iVar4] |
                 (uint)(byte)(&DAT_01c4e9f8)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c4e9f9)[iVar4] << 8);
    uVar1 = _DAT_01c4f020;
  }
  _DAT_01c4f020 = uVar1;
  if (_DAT_01c3f540 == 0) {
    if ((((-1 < _DAT_01c4353c) && (-1 < _DAT_01c43540)) &&
        ((_DAT_01c4353c < DAT_0061b498 && (_DAT_01c43540 < DAT_0061b49c)))) &&
       ((param_2 == 0 ||
        ((((_DAT_01c4f008 <= _DAT_01c4353c && (_DAT_01c4353c < _DAT_01c4f010)) &&
          (_DAT_01c4f00c <= _DAT_01c43540)) && (_DAT_01c43540 < _DAT_01c4f014)))))) {
      if (_DAT_01c3f544 == 0) {
        FUN_00401130(_DAT_01c4353c,_DAT_01c43540);
      }
      else {
        FUN_00517f10(_DAT_01c4353c,_DAT_01c43540);
      }
    }
    for (iVar4 = 1; iVar4 <= DAT_0061abc4 / 2; iVar4 = iVar4 + 1) {
      iVar3 = _DAT_01c4353c - iVar4;
      if ((((-1 < iVar3) && (-1 < _DAT_01c43540)) &&
          ((iVar3 < DAT_0061b498 && (_DAT_01c43540 < DAT_0061b49c)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c4f008 <= iVar3 && (iVar3 < _DAT_01c4f010)) &&
           ((_DAT_01c4f00c <= _DAT_01c43540 && (_DAT_01c43540 < _DAT_01c4f014)))))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(iVar3,_DAT_01c43540);
        }
        else {
          FUN_00517f10(iVar3,_DAT_01c43540);
        }
      }
      iVar3 = _DAT_01c4353c + iVar4;
      if (((((-1 < iVar3) && (-1 < _DAT_01c43540)) && (iVar3 < DAT_0061b498)) &&
          (_DAT_01c43540 < DAT_0061b49c)) &&
         ((param_2 == 0 ||
          (((_DAT_01c4f008 <= iVar3 && (iVar3 < _DAT_01c4f010)) &&
           ((_DAT_01c4f00c <= _DAT_01c43540 && (_DAT_01c43540 < _DAT_01c4f014)))))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(iVar3,_DAT_01c43540);
        }
        else {
          FUN_00517f10(iVar3,_DAT_01c43540);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= DAT_0061abc8 / 2) {
      iVar3 = _DAT_01c43540 - iVar4;
      if ((((-1 < _DAT_01c4353c) && (-1 < iVar3)) &&
          ((_DAT_01c4353c < DAT_0061b498 && (iVar3 < DAT_0061b49c)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c4f008 <= _DAT_01c4353c && (_DAT_01c4353c < _DAT_01c4f010)) &&
            (_DAT_01c4f00c <= iVar3)) && (iVar3 < _DAT_01c4f014)))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(_DAT_01c4353c,iVar3);
        }
        else {
          FUN_00517f10(_DAT_01c4353c,iVar3);
        }
      }
      iVar3 = _DAT_01c43540 + iVar4;
      if ((((_DAT_01c4353c < 0) || (iVar3 < 0)) ||
          ((DAT_0061b498 <= _DAT_01c4353c || (DAT_0061b49c <= iVar3)))) ||
         ((param_2 != 0 &&
          (((_DAT_01c4353c < _DAT_01c4f008 || (_DAT_01c4f010 <= _DAT_01c4353c)) ||
           ((iVar3 < _DAT_01c4f00c || (_DAT_01c4f014 <= iVar3)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (_DAT_01c3f544 == 0) {
        FUN_00401130(_DAT_01c4353c,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_00517f10(_DAT_01c4353c,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (_DAT_01c3f540 < 2) {
    iVar5 = _DAT_01c43540 - DAT_0061abc8 / 2;
    iVar3 = DAT_0061abc8 + iVar5 + -1;
    iVar4 = iVar5;
    while (iVar4 = iVar4 + 1, iVar4 < iVar3) {
      if (((((-1 < _DAT_01c4353c) && (-1 < iVar4)) && (_DAT_01c4353c < DAT_0061b498)) &&
          (iVar4 < DAT_0061b49c)) &&
         ((param_2 == 0 ||
          (((_DAT_01c4f008 <= _DAT_01c4353c && (_DAT_01c4353c < _DAT_01c4f010)) &&
           ((_DAT_01c4f00c <= iVar4 && (iVar4 < _DAT_01c4f014)))))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(_DAT_01c4353c,iVar4);
        }
        else {
          FUN_00517f10(_DAT_01c4353c,iVar4);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= DAT_0061abc4 / 2) {
      iVar2 = _DAT_01c4353c - iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < DAT_0061b498 && (iVar5 < DAT_0061b49c)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c4f008 <= iVar2 && (iVar2 < _DAT_01c4f010)) && (_DAT_01c4f00c <= iVar5)) &&
           (iVar5 < _DAT_01c4f014)))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(iVar2,iVar5);
        }
        else {
          FUN_00517f10(iVar2,iVar5);
        }
      }
      iVar2 = _DAT_01c4353c + iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < DAT_0061b498 && (iVar5 < DAT_0061b49c)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c4f008 <= iVar2 && (iVar2 < _DAT_01c4f010)) &&
           ((_DAT_01c4f00c <= iVar5 && (iVar5 < _DAT_01c4f014)))))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(iVar2,iVar5);
        }
        else {
          FUN_00517f10(iVar2,iVar5);
        }
      }
      iVar2 = _DAT_01c4353c - iVar4;
      if (((((-1 < iVar2) && (-1 < iVar3)) && (iVar2 < DAT_0061b498)) && (iVar3 < DAT_0061b49c)) &&
         ((param_2 == 0 ||
          (((_DAT_01c4f008 <= iVar2 && (iVar2 < _DAT_01c4f010)) &&
           ((_DAT_01c4f00c <= iVar3 && (iVar3 < _DAT_01c4f014)))))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(iVar2,iVar3);
        }
        else {
          FUN_00517f10(iVar2,iVar3);
        }
      }
      iVar2 = _DAT_01c4353c + iVar4;
      if ((((iVar2 < 0) || (iVar3 < 0)) || ((DAT_0061b498 <= iVar2 || (DAT_0061b49c <= iVar3)))) ||
         ((param_2 != 0 &&
          ((((iVar2 < _DAT_01c4f008 || (_DAT_01c4f010 <= iVar2)) || (iVar3 < _DAT_01c4f00c)) ||
           (_DAT_01c4f014 <= iVar3)))))) {
        iVar4 = iVar4 + 1;
      }
      else if (_DAT_01c3f544 == 0) {
        FUN_00401130(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_00517f10(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (_DAT_01c3f540 == 2) {
    if ((((-1 < _DAT_01c4353c) && (-1 < _DAT_01c43540)) &&
        ((_DAT_01c4353c < DAT_0061b498 && (_DAT_01c43540 < DAT_0061b49c)))) &&
       ((param_2 == 0 ||
        (((_DAT_01c4f008 <= _DAT_01c4353c && (_DAT_01c4353c < _DAT_01c4f010)) &&
         ((_DAT_01c4f00c <= _DAT_01c43540 && (_DAT_01c43540 < _DAT_01c4f014)))))))) {
      if (_DAT_01c3f544 == 0) {
        FUN_00401130(_DAT_01c4353c,_DAT_01c43540);
      }
      else {
        FUN_00517f10(_DAT_01c4353c,_DAT_01c43540);
      }
    }
    iVar4 = 1;
    while (iVar4 <= DAT_0061abc4 / 2) {
      iVar5 = _DAT_01c4353c - iVar4;
      iVar3 = _DAT_01c43540 - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && (iVar5 < DAT_0061b498)) &&
         ((iVar3 < DAT_0061b49c &&
          ((param_2 == 0 ||
           (((_DAT_01c4f008 <= iVar5 && (iVar5 < _DAT_01c4f010)) &&
            ((_DAT_01c4f00c <= iVar3 && (iVar3 < _DAT_01c4f014)))))))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(iVar5,iVar3);
        }
        else {
          FUN_00517f10(iVar5,iVar3);
        }
      }
      iVar3 = _DAT_01c4353c + iVar4;
      iVar5 = _DAT_01c43540 - iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < DAT_0061b498 && (iVar5 < DAT_0061b49c)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c4f008 <= iVar3 && (iVar3 < _DAT_01c4f010)) && (_DAT_01c4f00c <= iVar5)) &&
           (iVar5 < _DAT_01c4f014)))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(iVar3,iVar5);
        }
        else {
          FUN_00517f10(iVar3,iVar5);
        }
      }
      iVar5 = _DAT_01c4353c - iVar4;
      iVar3 = _DAT_01c43540 + iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && ((iVar5 < DAT_0061b498 && (iVar3 < DAT_0061b49c)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c4f008 <= iVar5 && (iVar5 < _DAT_01c4f010)) &&
           ((_DAT_01c4f00c <= iVar3 && (iVar3 < _DAT_01c4f014)))))))) {
        if (_DAT_01c3f544 == 0) {
          FUN_00401130(iVar5,iVar3);
        }
        else {
          FUN_00517f10(iVar5,iVar3);
        }
      }
      iVar3 = _DAT_01c4353c + iVar4;
      iVar5 = _DAT_01c43540 + iVar4;
      if (((((iVar3 < 0) || (iVar5 < 0)) || (DAT_0061b498 <= iVar3)) || (DAT_0061b49c <= iVar5)) ||
         ((param_2 != 0 &&
          (((iVar3 < _DAT_01c4f008 || (_DAT_01c4f010 <= iVar3)) ||
           ((iVar5 < _DAT_01c4f00c || (_DAT_01c4f014 <= iVar5)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (_DAT_01c3f544 == 0) {
        FUN_00401130(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_00517f10(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xa0d;
    FUN_005030e0("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}

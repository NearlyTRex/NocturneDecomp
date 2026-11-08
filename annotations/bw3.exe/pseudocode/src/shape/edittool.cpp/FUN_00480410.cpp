// Name: FUN_00480410
// Address: 00480410
// Address Range: [[00480410, 00480da7]]
// Convention: unknown
// Signature: void FUN_00480410(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480410(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_004803d0(param_1);
  if (_DAT_01c5baec != 0) {
    iVar4 = (uVar1 & 0xff) * 3;
    FUN_004f3520((uint)(byte)(&DAT_01c6af9a)[iVar4] |
                 (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10 |
                 (uint)(byte)(&DAT_01c6af99)[iVar4] << 8);
    uVar1 = _DAT_01c6b5c0;
  }
  _DAT_01c6b5c0 = uVar1;
  if (_DAT_01c5bae8 == 0) {
    if ((((-1 < _DAT_01c5fadc) && (-1 < _DAT_01c5fae0)) &&
        ((_DAT_01c5fadc < DAT_005fba18 && (_DAT_01c5fae0 < DAT_005fba1c)))) &&
       ((param_2 == 0 ||
        ((((_DAT_01c6b5a8 <= _DAT_01c5fadc && (_DAT_01c5fadc < _DAT_01c6b5b0)) &&
          (_DAT_01c6b5ac <= _DAT_01c5fae0)) && (_DAT_01c5fae0 < _DAT_01c6b5b4)))))) {
      if (_DAT_01c5baec == 0) {
        FUN_00401130(_DAT_01c5fadc,_DAT_01c5fae0);
      }
      else {
        FUN_004f36e0(_DAT_01c5fadc,_DAT_01c5fae0);
      }
    }
    for (iVar4 = 1; iVar4 <= DAT_005fb144 / 2; iVar4 = iVar4 + 1) {
      iVar3 = _DAT_01c5fadc - iVar4;
      if ((((-1 < iVar3) && (-1 < _DAT_01c5fae0)) &&
          ((iVar3 < DAT_005fba18 && (_DAT_01c5fae0 < DAT_005fba1c)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c6b5a8 <= iVar3 && (iVar3 < _DAT_01c6b5b0)) &&
           ((_DAT_01c6b5ac <= _DAT_01c5fae0 && (_DAT_01c5fae0 < _DAT_01c6b5b4)))))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(iVar3,_DAT_01c5fae0);
        }
        else {
          FUN_004f36e0(iVar3,_DAT_01c5fae0);
        }
      }
      iVar3 = _DAT_01c5fadc + iVar4;
      if (((((-1 < iVar3) && (-1 < _DAT_01c5fae0)) && (iVar3 < DAT_005fba18)) &&
          (_DAT_01c5fae0 < DAT_005fba1c)) &&
         ((param_2 == 0 ||
          (((_DAT_01c6b5a8 <= iVar3 && (iVar3 < _DAT_01c6b5b0)) &&
           ((_DAT_01c6b5ac <= _DAT_01c5fae0 && (_DAT_01c5fae0 < _DAT_01c6b5b4)))))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(iVar3,_DAT_01c5fae0);
        }
        else {
          FUN_004f36e0(iVar3,_DAT_01c5fae0);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= DAT_005fb148 / 2) {
      iVar3 = _DAT_01c5fae0 - iVar4;
      if ((((-1 < _DAT_01c5fadc) && (-1 < iVar3)) &&
          ((_DAT_01c5fadc < DAT_005fba18 && (iVar3 < DAT_005fba1c)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c6b5a8 <= _DAT_01c5fadc && (_DAT_01c5fadc < _DAT_01c6b5b0)) &&
            (_DAT_01c6b5ac <= iVar3)) && (iVar3 < _DAT_01c6b5b4)))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(_DAT_01c5fadc,iVar3);
        }
        else {
          FUN_004f36e0(_DAT_01c5fadc,iVar3);
        }
      }
      iVar3 = _DAT_01c5fae0 + iVar4;
      if ((((_DAT_01c5fadc < 0) || (iVar3 < 0)) ||
          ((DAT_005fba18 <= _DAT_01c5fadc || (DAT_005fba1c <= iVar3)))) ||
         ((param_2 != 0 &&
          (((_DAT_01c5fadc < _DAT_01c6b5a8 || (_DAT_01c6b5b0 <= _DAT_01c5fadc)) ||
           ((iVar3 < _DAT_01c6b5ac || (_DAT_01c6b5b4 <= iVar3)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (_DAT_01c5baec == 0) {
        FUN_00401130(_DAT_01c5fadc,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_004f36e0(_DAT_01c5fadc,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (_DAT_01c5bae8 < 2) {
    iVar5 = _DAT_01c5fae0 - DAT_005fb148 / 2;
    iVar3 = DAT_005fb148 + iVar5 + -1;
    iVar4 = iVar5;
    while (iVar4 = iVar4 + 1, iVar4 < iVar3) {
      if (((((-1 < _DAT_01c5fadc) && (-1 < iVar4)) && (_DAT_01c5fadc < DAT_005fba18)) &&
          (iVar4 < DAT_005fba1c)) &&
         ((param_2 == 0 ||
          (((_DAT_01c6b5a8 <= _DAT_01c5fadc && (_DAT_01c5fadc < _DAT_01c6b5b0)) &&
           ((_DAT_01c6b5ac <= iVar4 && (iVar4 < _DAT_01c6b5b4)))))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(_DAT_01c5fadc,iVar4);
        }
        else {
          FUN_004f36e0(_DAT_01c5fadc,iVar4);
        }
      }
    }
    iVar4 = 1;
    while (iVar4 <= DAT_005fb144 / 2) {
      iVar2 = _DAT_01c5fadc - iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < DAT_005fba18 && (iVar5 < DAT_005fba1c)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c6b5a8 <= iVar2 && (iVar2 < _DAT_01c6b5b0)) && (_DAT_01c6b5ac <= iVar5)) &&
           (iVar5 < _DAT_01c6b5b4)))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(iVar2,iVar5);
        }
        else {
          FUN_004f36e0(iVar2,iVar5);
        }
      }
      iVar2 = _DAT_01c5fadc + iVar4;
      if ((((-1 < iVar2) && (-1 < iVar5)) && ((iVar2 < DAT_005fba18 && (iVar5 < DAT_005fba1c)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c6b5a8 <= iVar2 && (iVar2 < _DAT_01c6b5b0)) &&
           ((_DAT_01c6b5ac <= iVar5 && (iVar5 < _DAT_01c6b5b4)))))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(iVar2,iVar5);
        }
        else {
          FUN_004f36e0(iVar2,iVar5);
        }
      }
      iVar2 = _DAT_01c5fadc - iVar4;
      if (((((-1 < iVar2) && (-1 < iVar3)) && (iVar2 < DAT_005fba18)) && (iVar3 < DAT_005fba1c)) &&
         ((param_2 == 0 ||
          (((_DAT_01c6b5a8 <= iVar2 && (iVar2 < _DAT_01c6b5b0)) &&
           ((_DAT_01c6b5ac <= iVar3 && (iVar3 < _DAT_01c6b5b4)))))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(iVar2,iVar3);
        }
        else {
          FUN_004f36e0(iVar2,iVar3);
        }
      }
      iVar2 = _DAT_01c5fadc + iVar4;
      if ((((iVar2 < 0) || (iVar3 < 0)) || ((DAT_005fba18 <= iVar2 || (DAT_005fba1c <= iVar3)))) ||
         ((param_2 != 0 &&
          ((((iVar2 < _DAT_01c6b5a8 || (_DAT_01c6b5b0 <= iVar2)) || (iVar3 < _DAT_01c6b5ac)) ||
           (_DAT_01c6b5b4 <= iVar3)))))) {
        iVar4 = iVar4 + 1;
      }
      else if (_DAT_01c5baec == 0) {
        FUN_00401130(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_004f36e0(iVar2,iVar3);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else if (_DAT_01c5bae8 == 2) {
    if ((((-1 < _DAT_01c5fadc) && (-1 < _DAT_01c5fae0)) &&
        ((_DAT_01c5fadc < DAT_005fba18 && (_DAT_01c5fae0 < DAT_005fba1c)))) &&
       ((param_2 == 0 ||
        (((_DAT_01c6b5a8 <= _DAT_01c5fadc && (_DAT_01c5fadc < _DAT_01c6b5b0)) &&
         ((_DAT_01c6b5ac <= _DAT_01c5fae0 && (_DAT_01c5fae0 < _DAT_01c6b5b4)))))))) {
      if (_DAT_01c5baec == 0) {
        FUN_00401130(_DAT_01c5fadc,_DAT_01c5fae0);
      }
      else {
        FUN_004f36e0(_DAT_01c5fadc,_DAT_01c5fae0);
      }
    }
    iVar4 = 1;
    while (iVar4 <= DAT_005fb144 / 2) {
      iVar5 = _DAT_01c5fadc - iVar4;
      iVar3 = _DAT_01c5fae0 - iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && (iVar5 < DAT_005fba18)) &&
         ((iVar3 < DAT_005fba1c &&
          ((param_2 == 0 ||
           (((_DAT_01c6b5a8 <= iVar5 && (iVar5 < _DAT_01c6b5b0)) &&
            ((_DAT_01c6b5ac <= iVar3 && (iVar3 < _DAT_01c6b5b4)))))))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(iVar5,iVar3);
        }
        else {
          FUN_004f36e0(iVar5,iVar3);
        }
      }
      iVar3 = _DAT_01c5fadc + iVar4;
      iVar5 = _DAT_01c5fae0 - iVar4;
      if ((((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < DAT_005fba18 && (iVar5 < DAT_005fba1c)))) &&
         ((param_2 == 0 ||
          ((((_DAT_01c6b5a8 <= iVar3 && (iVar3 < _DAT_01c6b5b0)) && (_DAT_01c6b5ac <= iVar5)) &&
           (iVar5 < _DAT_01c6b5b4)))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(iVar3,iVar5);
        }
        else {
          FUN_004f36e0(iVar3,iVar5);
        }
      }
      iVar5 = _DAT_01c5fadc - iVar4;
      iVar3 = _DAT_01c5fae0 + iVar4;
      if ((((-1 < iVar5) && (-1 < iVar3)) && ((iVar5 < DAT_005fba18 && (iVar3 < DAT_005fba1c)))) &&
         ((param_2 == 0 ||
          (((_DAT_01c6b5a8 <= iVar5 && (iVar5 < _DAT_01c6b5b0)) &&
           ((_DAT_01c6b5ac <= iVar3 && (iVar3 < _DAT_01c6b5b4)))))))) {
        if (_DAT_01c5baec == 0) {
          FUN_00401130(iVar5,iVar3);
        }
        else {
          FUN_004f36e0(iVar5,iVar3);
        }
      }
      iVar3 = _DAT_01c5fadc + iVar4;
      iVar5 = _DAT_01c5fae0 + iVar4;
      if (((((iVar3 < 0) || (iVar5 < 0)) || (DAT_005fba18 <= iVar3)) || (DAT_005fba1c <= iVar5)) ||
         ((param_2 != 0 &&
          (((iVar3 < _DAT_01c6b5a8 || (_DAT_01c6b5b0 <= iVar3)) ||
           ((iVar5 < _DAT_01c6b5ac || (_DAT_01c6b5b4 <= iVar5)))))))) {
        iVar4 = iVar4 + 1;
      }
      else if (_DAT_01c5baec == 0) {
        FUN_00401130(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
      else {
        FUN_004f36e0(iVar3,iVar5);
        iVar4 = iVar4 + 1;
      }
    }
  }
  else {
    _DAT_01d71de0 = "..\\shape\\edittool.cpp";
    _DAT_01d71de4 = 0xa10;
    FUN_004e4330("CEditorTools::setMousePointerType - invalid type!");
  }
  return;
}

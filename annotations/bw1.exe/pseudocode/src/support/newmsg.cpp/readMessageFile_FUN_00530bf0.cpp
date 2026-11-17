// Name: support_newmsg.cpp_readMessageFile_FUN_00530bf0
// Address: 00530bf0
// Address Range: [[00530bf0, 00530fab]]
// Convention: __cdecl
// Signature: void __cdecl support_newmsg_cpp_readMessageFile_FUN_00530bf0(char *message_file)

#include "nocturne.h"

void __cdecl support_newmsg_cpp_readMessageFile_FUN_00530bf0(char *message_file)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  _FILE *file_handle;
  long lVar4;
  int iVar5;
  int iVar7;
  void *pvVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  char local_31c [256];
  char local_21c [256];
  char local_11c [256];
  int local_1c;
  int local_18;
  int local_14;
  int iVar6;
  
  bVar13 = 0;
  local_1c = 0;
  iVar3 = engine_dosio_cpp_getFileSize_FUN_00478fb0(&g_CHAR_005ec4f8,message_file);
  if ((iVar3 < 1) ||
     (file_handle = engine_dosio_cpp_getFile_FUN_00479180
                              (&g_CHAR_005ec4fc,message_file,"rt"),
     file_handle == (_FILE *)0x0)) {
    return;
  }
  lVar4 = _ftell(file_handle);
  local_18 = iVar3 + lVar4;
  _fgets(local_21c,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  _fgets(local_21c,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  if (local_1c != 0) {
    g_CHAR_PTR_01d1d400 = "..\\support\\newmsg.cpp";
    g_INT_01d1d404 = 0x5b;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Unknown message file version");
  }
  _fgets(local_21c,0xff,file_handle);
  _fscanf(file_handle,"\"%[^\"]\"\n");
  do {
    _fscanf(file_handle," ");
    lVar4 = _ftell(file_handle);
    if (local_18 <= lVar4) {
      _fclose(file_handle);
      if (0 < g_INT_01d7f1c0) {
        iVar3 = g_INT_01d7f1c0 * 4;
        iVar6 = 0;
        do {
          iVar5 = iVar6 + 4;
          *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f1c4 + iVar6) =
               *(uint *)((int)g_INT_ARRAY_01d80164 + iVar6);
          *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f994 + iVar6) =
               *(uint *)((int)g_CHAR_PTR_ARRAY_01d80930 + iVar6 + 4);
          iVar6 = iVar5;
        } while (iVar5 < iVar3);
      }
      local_14 = 0;
      for (iVar3 = 0; iVar6 = local_14, iVar3 < g_INT_01d7f1c0 + -1; iVar3 = iVar3 + 1) {
        iVar5 = iVar3 + 1;
        if (iVar5 < g_INT_01d7f1c0) {
          iVar11 = iVar5 * 4;
          do {
            iVar7 = _strcmp
                              (*(char **)((int)g_CHAR_PTR_ARRAY_01d7f1c4 + iVar6),
                               *(char **)((int)g_CHAR_PTR_ARRAY_01d7f1c4 + iVar11));
            if (0 < iVar7) {
              uVar2 = *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f1c4 + iVar6);
              *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f1c4 + iVar6) =
                   *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f1c4 + iVar11);
              *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f1c4 + iVar11) = uVar2;
              uVar2 = *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f994 + iVar6);
              *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f994 + iVar6) =
                   *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f994 + iVar11);
              *(uint *)((int)g_CHAR_PTR_ARRAY_01d7f994 + iVar11) = uVar2;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 4;
          } while (iVar5 < g_INT_01d7f1c0);
        }
        local_14 = local_14 + 4;
      }
      g_INT_01d7f1bc = 1;
      return;
    }
    iVar3 = _fscanf(file_handle,"\"%[^\"]\", \"%[^\"]\"\n");
    if (iVar3 != 2) {
      g_CHAR_PTR_01d1d400 = "..\\support\\newmsg.cpp";
      g_INT_01d1d404 = 0x6f;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Error reading %s");
    }
    if (499 < g_INT_01d7f1c0) {
      g_CHAR_PTR_01d1d400 = "..\\support\\newmsg.cpp";
      g_INT_01d1d404 = 0x74;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Too many messages in %s");
    }
    uVar10 = 0xffffffff;
    pcVar9 = local_11c;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    pvVar8 = malloc(~uVar10);
    g_INT_ARRAY_01d80164[g_INT_01d7f1c0] = (int)pvVar8;
    if (pvVar8 == (void *)0x0) {
      g_CHAR_PTR_01d1d400 = "..\\support\\newmsg.cpp";
      g_INT_01d1d404 = 0x77;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Out of memory mallocing message tag : %s");
    }
    uVar10 = 0xffffffff;
    pcVar9 = local_31c;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar9 = (char *)malloc(~uVar10);
    g_CHAR_PTR_ARRAY_01d80930[g_INT_01d7f1c0 + 1] = pcVar9;
    if (pcVar9 == (char *)0x0) {
      g_CHAR_PTR_01d1d400 = "..\\support\\newmsg.cpp";
      g_INT_01d1d404 = 0x7a;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Out of memory mallocing message tag : %s");
    }
    pcVar9 = local_11c;
    pcVar12 = (char *)g_INT_ARRAY_01d80164[g_INT_01d7f1c0];
    do {
      cVar1 = *pcVar9;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
    pcVar9 = g_CHAR_PTR_ARRAY_01d80930[g_INT_01d7f1c0 + 1];
    pcVar12 = local_31c;
    do {
      cVar1 = *pcVar12;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    g_INT_01d7f1c0 = g_INT_01d7f1c0 + 1;
  } while( true );
}

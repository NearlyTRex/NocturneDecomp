// Name: core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
// Address: 004be270
// Address Range: [[004be270, 004be58e]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270(CDemonFileManager * this_ptr)

#include "nocturne.h"

void __cdecl
core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(CDemonFileManager *this_ptr)

{
  uint uVar1;
  int iVar2;
  char local_110 [256];
  
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_2d_c_drawText_FUN_00401fd0("Demon File Manager",0,0);
    engine_2d_c_drawText_FUN_00401fd0("Advanced option list",0,0x16);
    engine_2d_c_drawText_FUN_00401fd0("1. Rebuild last .POD",0,0x2c);
    engine_2d_c_drawText_FUN_00401fd0("2. Extract all files from .POD",0,0x37);
    engine_2d_c_drawText_FUN_00401fd0("4. Build a .POD from an old-school response file",0,0x4d);
    engine_2d_c_drawText_FUN_00401fd0("5. Catalog a .POD file",0,0x58);
    engine_2d_c_drawText_FUN_00401fd0("7. Move a set into .POD file",0,0x6e);
    engine_2d_c_drawText_FUN_00401fd0("9. Extract files from .POD interactively",0,0x84);
    engine_2d_c_drawText_FUN_00401fd0("A. Create .POD file from extended response file",0,0x9a);
    engine_2d_c_drawText_FUN_00401fd0("C. Mount/dismount PODs",0,0xa5);
    engine_2d_c_drawText_FUN_00401fd0("Q. Test sound files",0,0x129);
    engine_2d_c_drawText_FUN_00401fd0("R. Refresh sound directory",0,0x134);
    engine_2d_c_drawText_FUN_00401fd0("L. Compare files in pod vs. local files",0,0xfd);
    engine_2d_c_drawText_FUN_00401fd0("T. View audit trail for a pod",0,0x108);
    engine_2d_c_drawText_FUN_00401fd0("V. Verify .POD CRC",0,0x113);
    engine_2d_c_drawText_FUN_00401fd0("X. Cross reference PODs for duplicates",0,0x129);
    engine_2d_c_drawText_FUN_00401fd0("S. Search for files in mounted PODs",0,0x134);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    uVar1 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
    core_dmodel_cpp_freeAllModels_FUN_00478cb0();
    core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
    core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0();
    if (uVar1 < 0x43) {
      if (uVar1 < 0x35) {
        if (uVar1 < 0x32) {
          if (uVar1 == 0x31) {
            engine_fileio_cpp_CFileManager_rebuildLastPod_FUN_004b5a50
                      (&this_ptr->base,(char *)0x0,(char *)0x0);
          }
        }
        else if (uVar1 < 0x33) {
          (*((this_ptr->base).vtable)->extractPodFile)(&this_ptr->base,(char *)0x0);
        }
        else if (uVar1 == 0x34) {
          engine_fileio_cpp_CFileManager_buildPodFromResponseFile_FUN_004b7ac0(&this_ptr->base);
        }
      }
      else if (uVar1 < 0x36) {
        engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460(&this_ptr->base,(char *)0x0);
      }
      else if (uVar1 < 0x39) {
        if (uVar1 == 0x37) {
          core_fileman_cpp_CDemonFileManager_moveSetIntoPod_FUN_004bd930(this_ptr);
        }
      }
      else if (uVar1 < 0x3a) {
        engine_fileio_cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(&this_ptr->base);
      }
      else if (uVar1 == 0x41) {
        core_fileman_cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20(this_ptr);
      }
    }
    else if (uVar1 < 0x44) {
      engine_fileio_cpp_CFileManager_managePodMounts_FUN_004bcec0(&this_ptr->base);
    }
    else if (uVar1 < 0x53) {
      if (uVar1 < 0x51) {
        if (uVar1 == 0x4c) {
          engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(&this_ptr->base,(char *)0x0)
          ;
        }
      }
      else if (uVar1 < 0x52) {
        sound_sndmain_cpp_testSoundFiles_FUN_005ad5c0();
      }
      else {
        iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter source directory containing sound files",local_110,0x100,0);
        if (iVar2 != 0) {
          engine_fileio_cpp_CFileManager_openExtractFileForBuilding_FUN_004b7c10(&this_ptr->base);
          core_fileman_cpp_refreshSoundDirectory_FUN_004be590((FILE *)this_ptr,local_110);
          engine_fileio_cpp_CFileManager_closeExtractFile_FUN_004b7c60(&this_ptr->base);
        }
      }
    }
    else if (uVar1 < 0x54) {
      engine_fileio_cpp_CFileManager_searchMountedPods_FUN_004bcb70(&this_ptr->base,(char *)0x0);
    }
    else if (uVar1 < 0x56) {
      if (uVar1 == 0x54) {
        engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50(&this_ptr->base,(char *)0x0);
      }
    }
    else if (uVar1 < 0x57) {
      engine_fileio_cpp_CFileManager_verifyPodCRC_FUN_004b7c90(&this_ptr->base,(char *)0x0);
    }
    else if (uVar1 == 0x58) {
      engine_fileio_cpp_CFileManager_crossReferencePodDuplicates_FUN_004b9f40
                (&this_ptr->base,(char *)0x0);
    }
  } while (uVar1 != 0x1b);
  engine_2d_c_clearInputAndWait_FUN_00403260();
  return;
}

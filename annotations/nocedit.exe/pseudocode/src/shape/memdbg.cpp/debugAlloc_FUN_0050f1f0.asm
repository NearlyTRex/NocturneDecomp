; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(int size,char *filename,int line_number)
;
; Parameters:
; int              Stack[0x4]:4   size
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   line_number
;
; XREF[38]:
;   cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0 at 00432e35
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 at 0054b1e5
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690 at 0054b7a5
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0 at 0054ba8a
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_0054bdb0 at 0054bdf9
;   core_cloth.cpp_CCloth_allocMemory_FUN_00438c50 at 00438c6f
;   core_course.cpp_CCourse_allocMemory_FUN_00442500 at 0044252c
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840 at 00456864
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0 at 00477cc1
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00478830 at 004788e6
;   ... and 28 more
;
; Called Functions:
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f1f0
        ;   Label: shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050f1f1
    PUSH EDX                            ; 0050f1f5
    MOV ECX,dword ptr [ESP + 0x10]      ; 0050f1f6
    PUSH ECX                            ; 0050f1fa
    MOV EBX,dword ptr [ESP + 0x10]      ; 0050f1fb
    PUSH EBX                            ; 0050f1ff
    CALL shape_memdbg.cpp_debugMalloc_FUN_0050f250 ; 0050f200
        ;   XREF to: 0050f250 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0050f205
    POP EBX                             ; 0050f208
    RET                                 ; 0050f209


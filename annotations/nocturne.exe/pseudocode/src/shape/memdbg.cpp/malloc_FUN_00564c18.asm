; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl shape_memdbg_cpp_malloc_FUN_00564c18(SIZE_T size)
;
; Parameters:
; SIZE_T           Stack[0x4]:4   size
;
; XREF[20]:
;   cockpit_ckptutil.c_FUN_0042e7b0 at 0042e7eb
;   cockpit_pkbitmap.cpp_CPackedBitmapSet_FUN_004f4f90 at 004f505f
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0 at 004f47fb
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80 at 004f4d8b
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_alloc_FUN_004f5350 at 004f5393
;   core_cloth.cpp_CCloth_allocMemory_FUN_004351b0 at 004351c8
;   core_course.cpp_CCourse_allocMemory_FUN_0043b610 at 0043b635
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0 at 0044acca
;   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_004533e0 at 00453479
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00453ff0 at 00454090
;   ... and 10 more
;
; Called Functions:
;   crt_memory.c_operator_new_FUN_0056497c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564c18
        ;   Label: shape_memdbg.cpp_malloc_FUN_00564c18
    PUSH EDX                            ; 00564c1c
    CALL crt_memory.c_operator_new_FUN_0056497c ; 00564c1d
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; void * crt_memory.c_operator_new_FUN_0056497c(ulong size)
    ADD ESP,0x4                         ; 00564c22
    RET                                 ; 00564c25


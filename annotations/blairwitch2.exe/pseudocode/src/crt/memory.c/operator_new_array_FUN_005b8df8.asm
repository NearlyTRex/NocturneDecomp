; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_memory_c_operator_new_array_FUN_005b8df8(undefined4 param_1)
;
;
; XREF[20]:
;   cockpit_ckptutil.c_FUN_0042dae0 at 0042db1b
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60 at 00516aab
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00516f30 at 0051703a
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_00517280 at 00517350
;   cockpit_pkbmpset.cpp_FUN_00517670 at 005176b3
;   core_cloth.cpp_CCloth_allocMemory_FUN_005ade20 at 005ade38
;   core_course.cpp_FUN_00438a90 at 00438aaf
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00446590 at 004465a7
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_0044f760 at 0044f7f8
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_0044e010 at 0044e4c6
;   ... and 10 more
;
; Called Functions:
;   crt_memory.c_operator_new_FUN_005b8be2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b8df8
        ;   Label: crt_memory.c_operator_new_array_FUN_005b8df8
    PUSH EDX                            ; 005b8dfc
    CALL crt_memory.c_operator_new_FUN_005b8be2 ; 005b8dfd
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005b8be2()
    ADD ESP,0x4                         ; 005b8e02
    RET                                 ; 005b8e05


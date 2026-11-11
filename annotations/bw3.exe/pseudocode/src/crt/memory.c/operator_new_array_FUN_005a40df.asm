; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_memory_c_operator_new_array_FUN_005a40df(undefined4 param_1)
;
;
; XREF[20]:
;   cockpit_ckptutil.c_FUN_00436400 at 0043643b
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90 at 0050fadb
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60 at 0051006a
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_005102b0 at 00510380
;   cockpit_pkbmpset.cpp_FUN_005106a0 at 005106e3
;   core_cloth.cpp_CCloth_allocMemory_FUN_0043c2a0 at 0043c2b8
;   core_course.cpp_FUN_00444910 at 0044492f
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00453d90 at 00453da7
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00461fe0 at 00462078
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00460890 at 00460d46
;   ... and 10 more
;
; Called Functions:
;   crt_memory.c_operator_new_FUN_005a3cb2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a40df
        ;   Label: crt_memory.c_operator_new_array_FUN_005a40df
    PUSH EDX                            ; 005a40e3
    CALL crt_memory.c_operator_new_FUN_005a3cb2 ; 005a40e4
        ;   XREF to: 005a3cb2 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005a3cb2()
    ADD ESP,0x4                         ; 005a40e9
    RET                                 ; 005a40ec


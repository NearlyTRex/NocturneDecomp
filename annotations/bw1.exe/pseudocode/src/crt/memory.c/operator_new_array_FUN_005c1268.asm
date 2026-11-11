; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_memory_c_operator_new_array_FUN_005c1268(undefined4 param_1)
;
;
; XREF[20]:
;   cockpit_ckptutil.c_FUN_004387f0 at 0043882b
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0 at 00537dfb
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280 at 0053838a
;   cockpit_pkbitmap.cpp_parsePBGFile_FUN_005385d0 at 005386a0
;   cockpit_pkbmpset.cpp_FUN_005389c0 at 00538a03
;   core_cloth.cpp_CCloth_allocMemory_FUN_0043e640 at 0043e658
;   core_course.cpp_FUN_00447d50 at 00447d6f
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00457c40 at 00457c57
;   core_dmodel.cpp_CKeyFramedModel_buildCollisionTriList_FUN_00468340 at 004683d8
;   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00466be0 at 00467096
;   ... and 10 more
;
; Called Functions:
;   crt_memory.c_operator_new_FUN_005c0f32
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c1268
        ;   Label: crt_memory.c_operator_new_array_FUN_005c1268
    PUSH EDX                            ; 005c126c
    CALL crt_memory.c_operator_new_FUN_005c0f32 ; 005c126d
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_operator_new_FUN_005c0f32()
    ADD ESP,0x4                         ; 005c1272
    RET                                 ; 005c1275


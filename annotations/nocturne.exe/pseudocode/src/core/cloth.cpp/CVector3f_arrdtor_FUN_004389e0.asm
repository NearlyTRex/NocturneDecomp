; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CVector3f_arrdtor_FUN_004389e0(undefined4 param_1)
;
;
; XREF[4]:
;   core_cloth.cpp_SClothVertex_dtor_FUN_004389c0 at 004389cc
;   core_fire.cpp_CCrater_dtor_FUN_0048ca70 at 0048ca7a
;   core_fire.cpp_CGlassParticle_dtor_FUN_0048cb30 at 0048cb3a
;   core_skeleton.cpp_SVert_dtor_FUN_0051f860 at 0051f86a
;
; Referenced Globals:
;   WatcomTypeInfo g_CVectorTypeInfo_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 004389e0 | g_CVectorTypeInfo_005993b0
        ;   Label: core_cloth.cpp_CVector3f_arrdtor_FUN_004389e0
    PUSH 0x3                            ; 004389e5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004389e7
    PUSH EDX                            ; 004389eb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004389ec
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004389f1
    RET                                 ; 004389f4


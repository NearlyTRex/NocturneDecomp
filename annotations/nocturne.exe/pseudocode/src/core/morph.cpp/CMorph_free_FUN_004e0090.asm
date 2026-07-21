; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_free_FUN_004e0090(int param_1)
;
;
; XREF[1]:
;   core_morph.cpp_CMorph_dtor_FUN_004e0070 at 004e0075
;
; Called Functions:
;   core_morph.cpp_CMorphModel_free_FUN_004df290
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e0090
        ;   Label: core_morph.cpp_CMorph_free_FUN_004e0090
    PUSH EDX                            ; 004e0094
    CALL core_morph.cpp_CMorphModel_free_FUN_004df290 ; 004e0095
        ;   XREF to: 004df290 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_free_FUN_004df290()
    ADD ESP,0x4                         ; 004e009a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e009d
    ADD EAX,0x608                       ; 004e00a1
    PUSH EAX                            ; 004e00a6
    CALL core_morph.cpp_CMorphModel_free_FUN_004df290 ; 004e00a7
        ;   XREF to: 004df290 (UNCONDITIONAL_CALL)  ; undefined core_morph.cpp_CMorphModel_free_FUN_004df290()
    ADD ESP,0x4                         ; 004e00ac
    RET                                 ; 004e00af


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shadow_cpp_FUN_00545700(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00545700
        ;   Label: core_shadow.cpp_FUN_00545700
    PUSH EDX                            ; 00545704
    CALL core_charactr.cpp_FUN_0042e220 ; 00545705
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0054570a
    RET                                 ; 0054570d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gargoyle_cpp_FUN_004dd2c0(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004dd2c0
        ;   Label: core_gargoyle.cpp_FUN_004dd2c0
    PUSH EDX                            ; 004dd2c4
    CALL core_charactr.cpp_FUN_0042f240 ; 004dd2c5
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004dd2ca
    RET                                 ; 004dd2cd


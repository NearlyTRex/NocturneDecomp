; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_mimic_cpp_FUN_00520da0(void)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00520da0
        ;   Label: core_mimic.cpp_FUN_00520da0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00520da4
    CMP EDX,dword ptr [EAX + 0x4bdf8]   ; 00520da8
    JNZ 0x00520dba                      ; 00520dae
        ;   XREF to: 00520dba (CONDITIONAL_JUMP)  ; LAB_00520dba
    MOV dword ptr [EAX + 0x4bdf8],0x0   ; 00520db0
    PUSH EDX                            ; 00520dba
        ;   Label: LAB_00520dba
    PUSH EAX                            ; 00520dbb
    CALL core_charactr.cpp_CCharacter_FUN_0042f8a0 ; 00520dbc
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042f8a0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 00520dc1
    RET                                 ; 00520dc4


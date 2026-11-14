; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_prye_cpp_FUN_00517d50(CDemonActor *param_1)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517d50
        ;   Label: core_prye.cpp_FUN_00517d50
    PUSH ESI                            ; 00517d51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00517d52
    TEST EBX,EBX                        ; 00517d56
    JZ 0x00517d74                       ; 00517d58
        ;   XREF to: 00517d74 (CONDITIONAL_JUMP)  ; LAB_00517d74
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 00517d5a
    CMP EAX,0x8                         ; 00517d60
    JA 0x00517db2                       ; 00517d63
        ;   XREF to: 00517db2 (CONDITIONAL_JUMP)  ; LAB_00517db2
    JMP dword ptr [EAX*0x4 + 0x517d20]  ; 00517d65
    XOR EAX,EAX                         ; 00517d74
        ;   Label: LAB_00517d74
    POP ESI                             ; 00517d76
    POP EBX                             ; 00517d77
    RET                                 ; 00517d78
    MOV EAX,0x3                         ; 00517db2
        ;   Label: LAB_00517db2
    POP ESI                             ; 00517db7
    POP EBX                             ; 00517db8
    RET                                 ; 00517db9


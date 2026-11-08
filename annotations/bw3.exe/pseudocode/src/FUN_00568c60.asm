; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00568c60(int param_1)
;
;
; Called Functions:
;   FUN_0057af80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00568c60
        ;   Label: FUN_00568c60
    TEST dword ptr [EAX + 0x300],0x7fffffff ; 00568c64
    JZ 0x00568c73                       ; 00568c6e
        ;   XREF to: 00568c73 (CONDITIONAL_JUMP)  ; LAB_00568c73
    XOR EAX,EAX                         ; 00568c70
    RET                                 ; 00568c72
    PUSH EAX                            ; 00568c73
        ;   Label: LAB_00568c73
    CALL FUN_0057af80                   ; 00568c74
        ;   XREF to: 0057af80 (UNCONDITIONAL_CALL)  ; undefined FUN_0057af80()
    ADD ESP,0x4                         ; 00568c79
    RET                                 ; 00568c7c


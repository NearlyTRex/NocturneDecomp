; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00512a40(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004625a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00512a40
        ;   Label: FUN_00512a40
    ADD EAX,0x158                       ; 00512a44
    PUSH EAX                            ; 00512a49
    CALL FUN_004625a0                   ; 00512a4a
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV EDX,dword ptr [EAX + 0x358]     ; 00512a4f
    ADD ESP,0x4                         ; 00512a55
    TEST EDX,EDX                        ; 00512a58
    JNZ 0x00512a66                      ; 00512a5a
        ;   XREF to: 00512a66 (CONDITIONAL_JUMP)  ; LAB_00512a66
    LEA EAX,[EAX]                       ; 00512a5c
    MOV EAX,0x1                         ; 00512a60
        ;   Label: LAB_00512a60
    RET                                 ; 00512a65
    MOV EAX,dword ptr [ESP + 0x4]       ; 00512a66
        ;   Label: LAB_00512a66
    MOV EDX,dword ptr [ESP + 0x8]       ; 00512a6a
    ADD EAX,0x158                       ; 00512a6e
    MOV dword ptr [EDX + 0x24],EAX      ; 00512a73
    MOV EAX,0x1                         ; 00512a76
    RET                                 ; 00512a7b


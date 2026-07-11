; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00571c60(int *param_1)
;
;
; XREF[1]:
;   FUN_0056fd26 at 0056fd2c
;
; Called Functions:
;   FUN_0056b327
;   FUN_0056ce57
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571c60
        ;   Label: FUN_00571c60
    PUSH ESI                            ; 00571c61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00571c62
    PUSH 0x1                            ; 00571c66
    PUSH EBX                            ; 00571c68
    CALL FUN_0056ce57                   ; 00571c69
        ;   XREF to: 0056ce57 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ce57()
    ADD ESP,0x8                         ; 00571c6e
    TEST EAX,EAX                        ; 00571c71
    JZ 0x00571cbc                       ; 00571c73
        ;   XREF to: 00571cbc (CONDITIONAL_JUMP)  ; LAB_00571cbc
    MOV EAX,dword ptr [EBX]             ; 00571c75
    MOV EAX,dword ptr [EAX + 0x4]       ; 00571c77
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00571c7a
    MOV ESI,dword ptr [EAX + 0x14]      ; 00571c7e
    CMP ESI,dword ptr [EAX + 0x10]      ; 00571c81
    JNC 0x00571c99                      ; 00571c84
        ;   XREF to: 00571c99 (CONDITIONAL_JUMP)  ; LAB_00571c99
    MOV AL,byte ptr [ESI]               ; 00571c86
    AND EAX,0xff                        ; 00571c88
    MOV ESI,EAX                         ; 00571c8d
        ;   Label: LAB_00571c8d
    CMP EAX,-0x1                        ; 00571c8f
    JZ 0x00571ca5                       ; 00571c92
        ;   XREF to: 00571ca5 (CONDITIONAL_JUMP)  ; LAB_00571ca5
    MOV EAX,ESI                         ; 00571c94
    POP ESI                             ; 00571c96
    POP EBX                             ; 00571c97
    RET                                 ; 00571c98
    PUSH EAX                            ; 00571c99
        ;   Label: LAB_00571c99
    MOV ESI,dword ptr [EAX + 0x28]      ; 00571c9a
    CALL dword ptr [ESI + 0x10]         ; 00571c9d
    ADD ESP,0x4                         ; 00571ca0
    JMP 0x00571c8d                      ; 00571ca3
        ;   XREF to: 00571c8d (UNCONDITIONAL_JUMP)  ; LAB_00571c8d
    MOV EAX,dword ptr [EBX]             ; 00571ca5
        ;   Label: LAB_00571ca5
    MOV ECX,dword ptr [EAX + 0x4]       ; 00571ca7
    PUSH 0x4                            ; 00571caa
    ADD EBX,ECX                         ; 00571cac
    PUSH EBX                            ; 00571cae
    CALL FUN_0056b327                   ; 00571caf
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b327()
    ADD ESP,0x8                         ; 00571cb4
    MOV EAX,ESI                         ; 00571cb7
    POP ESI                             ; 00571cb9
    POP EBX                             ; 00571cba
    RET                                 ; 00571cbb
    MOV ESI,0xffffffff                  ; 00571cbc
        ;   Label: LAB_00571cbc
    MOV EAX,ESI                         ; 00571cc1
    POP ESI                             ; 00571cc3
    POP EBX                             ; 00571cc4
    RET                                 ; 00571cc5


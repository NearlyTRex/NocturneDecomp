; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8c60(int param_1,char *param_2)
;
;
; XREF[12]:
;   FUN_00411530 at 004115cd
;   FUN_00415b30 at 00415bf3
;   FUN_004b0580 at 004b064c
;   FUN_004d5e20 at 004d5ec8
;   FUN_004d7fe0 at 004d858e
;   FUN_004d9920 at 004d9a40
;   FUN_004d9c20 at 004d9d63
;   FUN_004ef890 at 004ef9b6
;   FUN_0053f310 at 0053f5a2
;   FUN_00540f50 at 005412f9
;   ... and 2 more
;
; Called Functions:
;   FUN_004d9720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8c60
        ;   Label: FUN_004d8c60
    PUSH ESI                            ; 004d8c61
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d8c62
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d8c66
    TEST EBX,EBX                        ; 004d8c6a
    JZ 0x004d8c95                       ; 004d8c6c
        ;   XREF to: 004d8c95 (CONDITIONAL_JUMP)  ; LAB_004d8c95
    CMP byte ptr [EBX],0x0              ; 004d8c6e
    JZ 0x004d8c98                       ; 004d8c71
        ;   XREF to: 004d8c98 (CONDITIONAL_JUMP)  ; LAB_004d8c98
    MOV EDX,dword ptr [ESI + 0x518]     ; 004d8c73
        ;   Label: LAB_004d8c73
    TEST EDX,EDX                        ; 004d8c79
    JNZ 0x004d8ca4                      ; 004d8c7b
        ;   XREF to: 004d8ca4 (CONDITIONAL_JUMP)  ; LAB_004d8ca4
    MOV dword ptr [EBX + 0x144],EDX     ; 004d8c7d
    MOV dword ptr [EBX + 0x148],EDX     ; 004d8c83
    MOV dword ptr [ESI + 0x514],EBX     ; 004d8c89
    MOV dword ptr [ESI + 0x518],EBX     ; 004d8c8f
    POP ESI                             ; 004d8c95
        ;   Label: LAB_004d8c95
    POP EBX                             ; 004d8c96
    RET                                 ; 004d8c97
    PUSH EBX                            ; 004d8c98
        ;   Label: LAB_004d8c98
    PUSH ESI                            ; 004d8c99
    CALL FUN_004d9720                   ; 004d8c9a
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; undefined FUN_004d9720()
    ADD ESP,0x8                         ; 004d8c9f
    JMP 0x004d8c73                      ; 004d8ca2
        ;   XREF to: 004d8c73 (UNCONDITIONAL_JUMP)  ; LAB_004d8c73
    MOV dword ptr [EBX + 0x144],0x0     ; 004d8ca4
        ;   Label: LAB_004d8ca4
    MOV dword ptr [EBX + 0x148],EDX     ; 004d8cae
    MOV EAX,dword ptr [ESI + 0x518]     ; 004d8cb4
    MOV dword ptr [EAX + 0x144],EBX     ; 004d8cba
    MOV dword ptr [ESI + 0x518],EBX     ; 004d8cc0
    POP ESI                             ; 004d8cc6
    POP EBX                             ; 004d8cc7
    RET                                 ; 004d8cc8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00481b80(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_00519ba0 at 00519bc9
;   FUN_00555360 at 005553c6
;   FUN_00559f80 at 0055b013
;
; Referenced Globals:
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   FUN_00403920
;   FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481b80
        ;   Label: FUN_00481b80
    PUSH ESI                            ; 00481b81
    PUSH EBP                            ; 00481b82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00481b83
    MOV ESI,dword ptr [ESP + 0x14]      ; 00481b87
    CMP dword ptr [EBX + 0xc],0x0       ; 00481b8b
    JNZ 0x00481bc5                      ; 00481b8f
        ;   XREF to: 00481bc5 (CONDITIONAL_JUMP)  ; LAB_00481bc5
    CMP dword ptr [EBX + 0x4],0x0       ; 00481b91
        ;   Label: LAB_00481b91
    JZ 0x00481bd7                       ; 00481b95
        ;   XREF to: 00481bd7 (CONDITIONAL_JUMP)  ; LAB_00481bd7
    XOR ECX,ECX                         ; 00481b97
    MOV EDX,0x486e26                    ; 00481b99 | LAB_00486e26
    MOV dword ptr [0x01c51d14],ECX      ; 00481b9e | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 00481ba4 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDX      ; 00481baa | DAT_01c4f02c
    LEA EAX,[ESI + 0x18]                ; 00481bb0
        ;   Label: LAB_00481bb0
    PUSH EAX                            ; 00481bb3
    MOV EBP,dword ptr [ESI + 0x4]       ; 00481bb4
    PUSH EBP                            ; 00481bb7
    PUSH EBX                            ; 00481bb8
    CALL FUN_00481aa0                   ; 00481bb9
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00481aa0()
    ADD ESP,0xc                         ; 00481bbe
    POP EBP                             ; 00481bc1
        ;   Label: LAB_00481bc1
    POP ESI                             ; 00481bc2
    POP EBX                             ; 00481bc3
    RET                                 ; 00481bc4
    LEA EAX,[ESI + 0x8]                 ; 00481bc5
        ;   Label: LAB_00481bc5
    PUSH EAX                            ; 00481bc8
    CALL FUN_00403920                   ; 00481bc9
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined FUN_00403920()
    ADD ESP,0x4                         ; 00481bce
    TEST EAX,EAX                        ; 00481bd1
    JZ 0x00481bc1                       ; 00481bd3
        ;   XREF to: 00481bc1 (CONDITIONAL_JUMP)  ; LAB_00481bc1
    JMP 0x00481b91                      ; 00481bd5
        ;   XREF to: 00481b91 (UNCONDITIONAL_JUMP)  ; LAB_00481b91
    PUSH EDI                            ; 00481bd7
        ;   Label: LAB_00481bd7
    MOV EBP,0xc0                        ; 00481bd8
    MOV EAX,0x6                         ; 00481bdd
    MOV EDI,0x487148                    ; 00481be2 | LAB_00487148
    MOV dword ptr [0x01c51d14],EBP      ; 00481be7 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 00481bed | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDI      ; 00481bf2 | DAT_01c4f02c
    POP EDI                             ; 00481bf8
    JMP 0x00481bb0                      ; 00481bf9
        ;   XREF to: 00481bb0 (UNCONDITIONAL_JUMP)  ; LAB_00481bb0


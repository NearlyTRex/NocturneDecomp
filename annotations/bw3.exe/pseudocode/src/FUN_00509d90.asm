; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00509d90(int *param_1)
;
;
; XREF[2]:
;   FUN_004b0a20 at 004b0af2
;   FUN_004b13a0 at 004b13df
;
; Called Functions:
;   FUN_004ec940
;   thunk_FUN_00565820
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00509d90
        ;   Label: FUN_00509d90
    PUSH EBP                            ; 00509d91
    MOV ESI,dword ptr [ESP + 0xc]       ; 00509d92
    CALL thunk_FUN_00565820             ; 00509d96
        ;   XREF to: 004ec930 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_00565820()
    MOV EDX,dword ptr [ESI]             ; 00509d9b
    XOR EBP,EBP                         ; 00509d9d
    TEST EDX,EDX                        ; 00509d9f
    JLE 0x00509de6                      ; 00509da1
        ;   XREF to: 00509de6 (CONDITIONAL_JUMP)  ; LAB_00509de6
    PUSH EDI                            ; 00509da3
    PUSH EBX                            ; 00509da4
    LEA EDI,[ESI + 0x324]               ; 00509da5
    MOV EBX,ESI                         ; 00509dab
    MOV ECX,dword ptr [EBX + 0x68b4]    ; 00509dad
        ;   Label: LAB_00509dad
    PUSH ECX                            ; 00509db3
    MOV EDX,dword ptr [EBX + 0x6724]    ; 00509db4
    PUSH EDX                            ; 00509dba
    MOV ECX,dword ptr [EBX + 0x194]     ; 00509dbb
    PUSH ECX                            ; 00509dc1
    MOV EDX,dword ptr [EBX + 0x4]       ; 00509dc2
    PUSH EDX                            ; 00509dc5
    PUSH EDI                            ; 00509dc6
    ADD EBX,0x4                         ; 00509dc7
    MOV EAX,dword ptr [ESI + 0x6a44]    ; 00509dca
    PUSH ESI                            ; 00509dd0
    INC EBP                             ; 00509dd1
    ADD EDI,0x100                       ; 00509dd2
    CALL dword ptr [EAX + 0x4]          ; 00509dd8
    MOV ECX,dword ptr [ESI]             ; 00509ddb
    ADD ESP,0x18                        ; 00509ddd
    CMP EBP,ECX                         ; 00509de0
    JL 0x00509dad                       ; 00509de2
        ;   XREF to: 00509dad (CONDITIONAL_JUMP)  ; LAB_00509dad
    POP EBX                             ; 00509de4
    POP EDI                             ; 00509de5
    CALL FUN_004ec940                   ; 00509de6
        ;   XREF to: 004ec940 (UNCONDITIONAL_CALL)  ; undefined FUN_004ec940()
        ;   Label: LAB_00509de6
    MOV dword ptr [ESI],0x0             ; 00509deb
    POP EBP                             ; 00509df1
    POP ESI                             ; 00509df2
    RET                                 ; 00509df3


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00511c90(int param_1)
;
;
; XREF[2]:
;   FUN_004ce240 at 004ce254
;   FUN_00510460 at 00510477
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01e4fed8
;
; Called Functions:
;   FUN_004e4500
;   FUN_00513eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00511c90
        ;   Label: FUN_00511c90
    PUSH EDI                            ; 00511c91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00511c92
    MOV dword ptr [EBX + 0x138b8],0x7fffffff ; 00511c96
    MOV EAX,dword ptr [EBX + 0x138b8]   ; 00511ca0
    MOV dword ptr [EBX + 0x138b4],EAX   ; 00511ca6
    PUSH EBX                            ; 00511cac
    MOV dword ptr [EBX + 0x138b0],EAX   ; 00511cad
    CALL FUN_00513eb0                   ; 00511cb3
        ;   XREF to: 00513eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00513eb0()
    MOV EDX,dword ptr [0x01e4fed8]      ; 00511cb8 | DAT_01e4fed8
    ADD ESP,0x4                         ; 00511cbe
    CMP EDX,0xc8                        ; 00511cc1
    JGE 0x00511ce3                      ; 00511cc7
        ;   XREF to: 00511ce3 (CONDITIONAL_JUMP)  ; LAB_00511ce3
    MOV EAX,[0x01e4fed8]                ; 00511cc9 | DAT_01e4fed8
        ;   Label: LAB_00511cc9
    LEA EDI,[EAX + 0x1]                 ; 00511cce
    MOV dword ptr [EAX*0x4 + 0x1e4fedc],EBX ; 00511cd1
    MOV dword ptr [0x01e4fed8],EDI      ; 00511cd8 | DAT_01e4fed8
    MOV EAX,EBX                         ; 00511cde
    POP EDI                             ; 00511ce0
    POP EBX                             ; 00511ce1
    RET                                 ; 00511ce2
    PUSH ESI                            ; 00511ce3
        ;   Label: LAB_00511ce3
    MOV ECX,0x5e16ab                    ; 00511ce4
    MOV ESI,0x123                       ; 00511ce9
    PUSH 0x5e16bc                       ; 00511cee
    MOV dword ptr [0x01d046a0],ECX      ; 00511cf3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00511cf9 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00511cff
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00511d04
    POP ESI                             ; 00511d07
    JMP 0x00511cc9                      ; 00511d08
        ;   XREF to: 00511cc9 (UNCONDITIONAL_JUMP)  ; LAB_00511cc9


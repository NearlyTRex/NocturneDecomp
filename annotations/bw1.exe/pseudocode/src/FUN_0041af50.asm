; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041af50(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_0040aa60
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041af50
        ;   Label: FUN_0041af50
    PUSH ESI                            ; 0041af51
    SUB ESP,0x4                         ; 0041af52
    MOV EBX,dword ptr [ESP + 0x18]      ; 0041af55
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0041af59
    PUSH EDX                            ; 0041af5d
    PUSH EBX                            ; 0041af5e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0041af5f
    PUSH ECX                            ; 0041af63
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0041af64
    PUSH ESI                            ; 0041af68
    CALL FUN_0040aa60                   ; 0041af69
        ;   XREF to: 0040aa60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040aa60()
    ADD ESP,0x10                        ; 0041af6e
    PUSH 0x41700000                     ; 0041af71
    PUSH 0x40a00000                     ; 0041af76
    CALL FUN_0040cc00                   ; 0041af7b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 0041af80
    MOV dword ptr [EBX + 0x2c],0x3ca3d70a ; 0041af84
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041af8b
    MOV dword ptr [EBX + 0x4],EAX       ; 0041af8f
    ADD ESP,0x8                         ; 0041af92
    ADD ESP,0x4                         ; 0041af95
    POP ESI                             ; 0041af98
    POP EBX                             ; 0041af99
    RET                                 ; 0041af9a


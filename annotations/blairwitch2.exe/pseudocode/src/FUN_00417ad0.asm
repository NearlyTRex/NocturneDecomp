; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00417ad0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_0040ad50
;   FUN_0040cf60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417ad0
        ;   Label: FUN_00417ad0
    PUSH ESI                            ; 00417ad1
    SUB ESP,0x4                         ; 00417ad2
    MOV EBX,dword ptr [ESP + 0x18]      ; 00417ad5
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00417ad9
    PUSH EDX                            ; 00417add
    PUSH EBX                            ; 00417ade
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00417adf
    PUSH ECX                            ; 00417ae3
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00417ae4
    PUSH ESI                            ; 00417ae8
    CALL FUN_0040ad50                   ; 00417ae9
        ;   XREF to: 0040ad50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ad50()
    ADD ESP,0x10                        ; 00417aee
    PUSH 0x41700000                     ; 00417af1
    PUSH 0x40a00000                     ; 00417af6
    CALL FUN_0040cf60                   ; 00417afb
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x8],EAX       ; 00417b00
    MOV dword ptr [EBX + 0x2c],0x3ca3d70a ; 00417b04
    MOV EAX,dword ptr [ESP + 0x8]       ; 00417b0b
    MOV dword ptr [EBX + 0x4],EAX       ; 00417b0f
    ADD ESP,0x8                         ; 00417b12
    ADD ESP,0x4                         ; 00417b15
    POP ESI                             ; 00417b18
    POP EBX                             ; 00417b19
    RET                                 ; 00417b1a


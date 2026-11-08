; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3e20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004e5f40 at 004e5f87
;
; Called Functions:
;   FUN_0040cc60
;   FUN_00532160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3e20
        ;   Label: FUN_004e3e20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e3e21
    PUSH 0xf                            ; 004e3e25
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e3e27
    PUSH 0x0                            ; 004e3e2b
    MOV dword ptr [EBX + 0x40],EAX      ; 004e3e2d
    CALL FUN_0040cc60                   ; 004e3e30
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 004e3e35
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e3e38
    PUSH EDX                            ; 004e3e3c
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e3e3d
    PUSH ECX                            ; 004e3e41
    PUSH EBX                            ; 004e3e42
    MOV dword ptr [EBX + 0x44],EAX      ; 004e3e43
    CALL FUN_00532160                   ; 004e3e46
        ;   XREF to: 00532160 (UNCONDITIONAL_CALL)  ; undefined FUN_00532160()
    ADD ESP,0xc                         ; 004e3e4b
    POP EBX                             ; 004e3e4e
    RET                                 ; 004e3e4f


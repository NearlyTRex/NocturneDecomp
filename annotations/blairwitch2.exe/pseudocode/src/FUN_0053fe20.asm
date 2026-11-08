; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0053fe20(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0044fd70
;   FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053fe20
        ;   Label: FUN_0053fe20
    MOV EDX,dword ptr [ESP + 0x8]       ; 0053fe21
    PUSH EDX                            ; 0053fe25
    CALL FUN_005899d0                   ; 0053fe26
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005899d0()
    ADD ESP,0x4                         ; 0053fe2b
    PUSH 0x5e6841                       ; 0053fe2e
    MOV EBX,EAX                         ; 0053fe33
    ADD EAX,0x2b4                       ; 0053fe35
    PUSH EAX                            ; 0053fe3a
    MOV dword ptr [EAX + -0x4],0x5fb714 ; 0053fe3b
    CALL FUN_0044fd70                   ; 0053fe42
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x43c],0x7     ; 0053fe47
    MOV dword ptr [EBX + 0x6c8],0xffffffff ; 0053fe51
    MOV dword ptr [EBX + 0x6c4],0x0     ; 0053fe5b
    MOV dword ptr [EBX + 0x434],0x0     ; 0053fe65
    MOV dword ptr [EBX + 0x438],0x0     ; 0053fe6f
    MOV dword ptr [EBX + 0x440],0x0     ; 0053fe79
    ADD ESP,0x8                         ; 0053fe83
    MOV dword ptr [EBX + 0x444],0x40a00000 ; 0053fe86
    MOV EAX,EBX                         ; 0053fe90
    MOV dword ptr [EBX + 0x448],0x0     ; 0053fe92
    POP EBX                             ; 0053fe9c
    RET                                 ; 0053fe9d


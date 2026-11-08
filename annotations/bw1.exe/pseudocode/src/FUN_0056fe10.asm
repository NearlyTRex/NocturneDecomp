; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056fe10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00572340
;   FUN_005a08d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056fe10
        ;   Label: FUN_0056fe10
    PUSH EAX                            ; 0056fe14
    CALL FUN_00572340                   ; 0056fe15
        ;   XREF to: 00572340 (UNCONDITIONAL_CALL)  ; undefined FUN_00572340()
    ADD ESP,0x4                         ; 0056fe1a
    ADD EAX,0x17c                       ; 0056fe1d
    PUSH EAX                            ; 0056fe22
    CALL FUN_005a08d0                   ; 0056fe23
        ;   XREF to: 005a08d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a08d0()
    MOV dword ptr [EAX + -0x5c],0x0     ; 0056fe28
    MOV dword ptr [EAX + -0x28],0x0     ; 0056fe2f
    MOV dword ptr [EAX + -0x24],0x0     ; 0056fe36
    MOV dword ptr [EAX + -0x2c],0x0     ; 0056fe3d
    MOV dword ptr [EAX + -0x20],0x0     ; 0056fe44
    MOV dword ptr [EAX + -0x1c],0xffffffff ; 0056fe4b
    MOV dword ptr [EAX + -0x8],0x0      ; 0056fe52
    MOV dword ptr [EAX + 0x30],0x0      ; 0056fe59
    MOV dword ptr [EAX + -0x18],0x0     ; 0056fe60
    ADD ESP,0x4                         ; 0056fe67
    MOV dword ptr [EAX + -0x14],0x0     ; 0056fe6a
    SUB EAX,0x17c                       ; 0056fe71
    RET                                 ; 0056fe76


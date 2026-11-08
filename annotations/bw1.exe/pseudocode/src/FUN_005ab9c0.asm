; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ab9c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0059afb0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ab9c0
        ;   Label: FUN_005ab9c0
    PUSH EDX                            ; 005ab9c4
    CALL FUN_0059afb0                   ; 005ab9c5
        ;   XREF to: 0059afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059afb0()
    MOV dword ptr [EAX + 0x154],0x607d54 ; 005ab9ca
    MOV dword ptr [EAX + 0x160],0x3f000000 ; 005ab9d4
    MOV dword ptr [EAX + 0x164],0x3f800000 ; 005ab9de
    MOV dword ptr [EAX + 0x168],0x3f000000 ; 005ab9e8
    ADD ESP,0x4                         ; 005ab9f2
    MOV dword ptr [EAX + 0x374],0x0     ; 005ab9f5
    RET                                 ; 005ab9ff


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1a90(undefined4 param_1)
;
;
; Called Functions:
;   FUN_005a14b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1a90
        ;   Label: FUN_005a1a90
    PUSH EDX                            ; 005a1a94
    CALL FUN_005a14b0                   ; 005a1a95
        ;   XREF to: 005a14b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a14b0()
    MOV dword ptr [EAX],0x607454        ; 005a1a9a
    MOV dword ptr [EAX + 0x4],0x0       ; 005a1aa0
    MOV dword ptr [EAX + 0x8],0x0       ; 005a1aa7
    MOV dword ptr [EAX + 0xc],0x0       ; 005a1aae
    MOV dword ptr [EAX + 0x10],0x0      ; 005a1ab5
    ADD ESP,0x4                         ; 005a1abc
    MOV dword ptr [EAX + 0x14],0x1      ; 005a1abf
    RET                                 ; 005a1ac6


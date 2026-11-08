; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00571db0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00510460
;   FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571db0
        ;   Label: FUN_00571db0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00571db1
    PUSH EDX                            ; 00571db5
    CALL FUN_00510460                   ; 00571db6
        ;   XREF to: 00510460 (UNCONDITIONAL_CALL)  ; undefined FUN_00510460()
    ADD ESP,0x4                         ; 00571dbb
    PUSH 0x5ec40c                       ; 00571dbe
    MOV EBX,EAX                         ; 00571dc3
    ADD EAX,0x2b4                       ; 00571dc5
    PUSH EAX                            ; 00571dca
    MOV dword ptr [EAX + -0x4],0x5fc894 ; 00571dcb
    CALL FUN_005478b0                   ; 00571dd2
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005478b0()
    ADD ESP,0x8                         ; 00571dd7
    MOV EAX,EBX                         ; 00571dda
    POP EBX                             ; 00571ddc
    RET                                 ; 00571ddd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058ccc0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0054eae0
;   FUN_005888d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058ccc0
        ;   Label: FUN_0058ccc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0058ccc1
    PUSH EDX                            ; 0058ccc5
    CALL FUN_005888d0                   ; 0058ccc6
        ;   XREF to: 005888d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005888d0()
    ADD ESP,0x4                         ; 0058cccb
    PUSH 0x5d8984                       ; 0058ccce
    MOV EBX,EAX                         ; 0058ccd3
    ADD EAX,0x158                       ; 0058ccd5
    PUSH EAX                            ; 0058ccda
    MOV dword ptr [EAX + -0x4],0x5e68e4 ; 0058ccdb
    CALL FUN_0054eae0                   ; 0058cce2
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV dword ptr [EBX + 0xd140],0x1    ; 0058cce7
    MOV dword ptr [EBX + 0x2538],0x41a00000 ; 0058ccf1
    ADD ESP,0x8                         ; 0058ccfb
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 0058ccfe
    MOV EAX,EBX                         ; 0058cd08
    MOV dword ptr [EBX + 0xce60],0x41200000 ; 0058cd0a
    POP EBX                             ; 0058cd14
    RET                                 ; 0058cd15


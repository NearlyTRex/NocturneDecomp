; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005375c0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00537c30 at 00537c4b
;   FUN_00538480 at 00538498
;
; Called Functions:
;   FUN_005c20d0
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 005375c0
        ;   Label: FUN_005375c0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005375c2
    PUSH EDX                            ; 005375c6
    MOV ECX,dword ptr [ESP + 0xc]       ; 005375c7
    PUSH ECX                            ; 005375cb
    CALL FUN_005c20d0                   ; 005375cc
        ;   XREF to: 005c20d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c20d0()
    ADD ESP,0xc                         ; 005375d1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005375d4
    MOV byte ptr [EAX + 0x13],0x0       ; 005375d8
    RET                                 ; 005375dc


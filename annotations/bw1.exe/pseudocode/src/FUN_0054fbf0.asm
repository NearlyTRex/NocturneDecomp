; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054fbf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_004d1a80 at 004d1c49
;   FUN_004d27b0 at 004d2c9f
;
; Called Functions:
;   FUN_0044cc30
;   FUN_0054f0d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0054fbf0
        ;   Label: FUN_0054fbf0
    PUSH EDX                            ; 0054fbf4
    PUSH 0x1fe37ec                      ; 0054fbf5
    CALL FUN_0044cc30                   ; 0054fbfa
        ;   XREF to: 0044cc30 (UNCONDITIONAL_CALL)  ; undefined FUN_0044cc30()
    ADD ESP,0x8                         ; 0054fbff
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054fc02
    MOV ECX,dword ptr [EAX + 0x15aeb8]  ; 0054fc06
    PUSH ECX                            ; 0054fc0c
    PUSH EAX                            ; 0054fc0d
    CALL FUN_0054f0d0                   ; 0054fc0e
        ;   XREF to: 0054f0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054f0d0()
    ADD ESP,0x8                         ; 0054fc13
    RET                                 ; 0054fc16


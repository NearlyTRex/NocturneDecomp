; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004f27f0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006027e0
;   undefined4 DAT_006027e4
;
; Called Functions:
;   FUN_004a0410
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f27f0
        ;   Label: FUN_004f27f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f27f1
    PUSH EDX                            ; 004f27f5
    CALL FUN_004a0410                   ; 004f27f6
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 004f27fb
    PUSH 0x5e548f                       ; 004f27fe
    MOV EBX,EAX                         ; 004f2803
    ADD EAX,0x158                       ; 004f2805
    PUSH EAX                            ; 004f280a
    MOV dword ptr [EAX + -0x4],0x6027f4 ; 004f280b
    CALL FUN_00569f50                   ; 004f2812
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    FLD float ptr [0x006027e0]          ; 004f2817 | DAT_006027e0
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 004f281d
    FLD float ptr [0x006027e4]          ; 004f2827 | DAT_006027e4
    MOV dword ptr [EBX + 0x2ff0],0x3f000000 ; 004f282d
    ADD ESP,0x8                         ; 004f2837
    MOV dword ptr [EBX + 0x27c0],0x0    ; 004f283a
    MOV EAX,EBX                         ; 004f2844
    FXCH                                ; 004f2846
    FSTP float ptr [EBX + 0x2ff4]       ; 004f2848
    FSTP float ptr [EBX + 0x2ff8]       ; 004f284e
    POP EBX                             ; 004f2854
    RET                                 ; 004f2855


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a4710(int param_1)
;
;
; Called Functions:
;   FUN_0059f980
;   FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4710
        ;   Label: FUN_005a4710
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a4711
    PUSH EDX                            ; 005a4715
    CALL FUN_0059f980                   ; 005a4716
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f980()
    ADD ESP,0x4                         ; 005a471b
    MOV EBX,EAX                         ; 005a471e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a4720
    ADD EAX,0x264                       ; 005a4724
    PUSH EAX                            ; 005a4729
    CALL FUN_005a8290                   ; 005a472a
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8290()
    ADD ESP,0x4                         ; 005a472f
    MOV EAX,EBX                         ; 005a4732
    POP EBX                             ; 005a4734
    RET                                 ; 005a4735


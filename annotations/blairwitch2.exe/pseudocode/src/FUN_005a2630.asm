; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a2630(int param_1)
;
;
; Called Functions:
;   FUN_0059f980
;   FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2630
        ;   Label: FUN_005a2630
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a2631
    PUSH EDX                            ; 005a2635
    CALL FUN_0059f980                   ; 005a2636
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f980()
    ADD ESP,0x4                         ; 005a263b
    MOV EBX,EAX                         ; 005a263e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a2640
    ADD EAX,0x264                       ; 005a2644
    PUSH EAX                            ; 005a2649
    CALL FUN_005a8290                   ; 005a264a
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8290()
    ADD ESP,0x4                         ; 005a264f
    MOV EAX,EBX                         ; 005a2652
    POP EBX                             ; 005a2654
    RET                                 ; 005a2655


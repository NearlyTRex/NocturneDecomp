; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d6610(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e1eb0
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6610
        ;   Label: FUN_004d6610
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d6611
    TEST byte ptr [ESP + 0xc],0x4       ; 004d6615
    JNZ 0x004d666d                      ; 004d661a
        ;   XREF to: 004d666d (CONDITIONAL_JUMP)  ; LAB_004d666d
    PUSH 0x0                            ; 004d661c
    ADD EBX,0x385c                      ; 004d661e
    PUSH EBX                            ; 004d6624
    CALL FUN_00410370                   ; 004d6625
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 004d662a
    PUSH 0x0                            ; 004d662d
    SUB EAX,0x954                       ; 004d662f
    PUSH EAX                            ; 004d6634
    CALL FUN_0043f900                   ; 004d6635
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 004d663a
    PUSH 0x0                            ; 004d663d
    SUB EAX,0x2db0                      ; 004d663f
    PUSH EAX                            ; 004d6644
    CALL FUN_0054bf80                   ; 004d6645
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 004d664a
    PUSH 0x1                            ; 004d664d
    LEA EBX,[EAX + 0xfffffea8]          ; 004d664f
    PUSH EBX                            ; 004d6655
    CALL FUN_00408770                   ; 004d6656
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004d665b
    MOV DL,byte ptr [ESP + 0xc]         ; 004d665e
    MOV EBX,EAX                         ; 004d6662
    TEST DL,0x2                         ; 004d6664
    JNZ 0x004d6688                      ; 004d6667
        ;   XREF to: 004d6688 (CONDITIONAL_JUMP)  ; LAB_004d6688
    MOV EAX,EBX                         ; 004d6669
    POP EBX                             ; 004d666b
    RET                                 ; 004d666c
    PUSH 0x5e1eb0                       ; 004d666d | DAT_005e1eb0
        ;   Label: LAB_004d666d
    PUSH EBX                            ; 004d6672
    CALL FUN_005a308f                   ; 004d6673
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004d6678
    PUSH EAX                            ; 004d667b
    CALL FUN_005a30b6                   ; 004d667c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004d6681
    MOV EAX,EBX                         ; 004d6684
    POP EBX                             ; 004d6686
    RET                                 ; 004d6687
    PUSH EAX                            ; 004d6688
        ;   Label: LAB_004d6688
    CALL FUN_005a30c4                   ; 004d6689
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004d668e
    MOV EAX,EBX                         ; 004d6691
    POP EBX                             ; 004d6693
    RET                                 ; 004d6694


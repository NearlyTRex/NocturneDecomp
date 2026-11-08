; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059b540(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e8170
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_004fa8c0
;   FUN_0050ad40
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b540
        ;   Label: FUN_0059b540
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059b541
    TEST byte ptr [ESP + 0xc],0x4       ; 0059b545
    JNZ 0x0059b5e1                      ; 0059b54a
        ;   XREF to: 0059b5e1 (CONDITIONAL_JUMP)  ; LAB_0059b5e1
    PUSH 0x0                            ; 0059b550
    ADD EBX,0x34174                     ; 0059b552
    PUSH EBX                            ; 0059b558
    CALL FUN_004fa8c0                   ; 0059b559
        ;   XREF to: 004fa8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa8c0()
    ADD ESP,0x8                         ; 0059b55e
    PUSH 0x0                            ; 0059b561
    SUB EAX,0x1d0                       ; 0059b563
    PUSH EAX                            ; 0059b568
    CALL FUN_0043f900                   ; 0059b569
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0059b56e
    PUSH 0x0                            ; 0059b571
    SUB EAX,0x138dc                     ; 0059b573
    PUSH EAX                            ; 0059b578
    CALL FUN_0050ad40                   ; 0059b579
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad40()
    ADD ESP,0x8                         ; 0059b57e
    PUSH 0x0                            ; 0059b581
    SUB EAX,0x138fc                     ; 0059b583
    PUSH EAX                            ; 0059b588
    CALL FUN_0050ad40                   ; 0059b589
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad40()
    ADD ESP,0x8                         ; 0059b58e
    PUSH 0x0                            ; 0059b591
    SUB EAX,0x9570                      ; 0059b593
    PUSH EAX                            ; 0059b598
    CALL FUN_00410370                   ; 0059b599
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0059b59e
    PUSH 0x0                            ; 0059b5a1
    SUB EAX,0x954                       ; 0059b5a3
    PUSH EAX                            ; 0059b5a8
    CALL FUN_0043f900                   ; 0059b5a9
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0059b5ae
    PUSH 0x0                            ; 0059b5b1
    SUB EAX,0x2db0                      ; 0059b5b3
    PUSH EAX                            ; 0059b5b8
    CALL FUN_0054bf80                   ; 0059b5b9
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0059b5be
    PUSH 0x1                            ; 0059b5c1
    LEA EBX,[EAX + 0xfffffea8]          ; 0059b5c3
    PUSH EBX                            ; 0059b5c9
    CALL FUN_00408770                   ; 0059b5ca
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0059b5cf
    MOV DL,byte ptr [ESP + 0xc]         ; 0059b5d2
    MOV EBX,EAX                         ; 0059b5d6
    TEST DL,0x2                         ; 0059b5d8
    JNZ 0x0059b5fc                      ; 0059b5db
        ;   XREF to: 0059b5fc (CONDITIONAL_JUMP)  ; LAB_0059b5fc
    MOV EAX,EBX                         ; 0059b5dd
    POP EBX                             ; 0059b5df
    RET                                 ; 0059b5e0
    PUSH 0x5e8170                       ; 0059b5e1 | DAT_005e8170
        ;   Label: LAB_0059b5e1
    PUSH EBX                            ; 0059b5e6
    CALL FUN_005a308f                   ; 0059b5e7
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0059b5ec
    PUSH EAX                            ; 0059b5ef
    CALL FUN_005a30b6                   ; 0059b5f0
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0059b5f5
    MOV EAX,EBX                         ; 0059b5f8
    POP EBX                             ; 0059b5fa
    RET                                 ; 0059b5fb
    PUSH EAX                            ; 0059b5fc
        ;   Label: LAB_0059b5fc
    CALL FUN_005a30c4                   ; 0059b5fd
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0059b602
    MOV EAX,EBX                         ; 0059b605
    POP EBX                             ; 0059b607
    RET                                 ; 0059b608


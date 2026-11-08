; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00444780(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddb60
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

    PUSH EBX                            ; 00444780
        ;   Label: FUN_00444780
    MOV EBX,dword ptr [ESP + 0x8]       ; 00444781
    TEST byte ptr [ESP + 0xc],0x4       ; 00444785
    JNZ 0x004447dd                      ; 0044478a
        ;   XREF to: 004447dd (CONDITIONAL_JUMP)  ; LAB_004447dd
    PUSH 0x0                            ; 0044478c
    ADD EBX,0x385c                      ; 0044478e
    PUSH EBX                            ; 00444794
    CALL FUN_00410370                   ; 00444795
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0044479a
    PUSH 0x0                            ; 0044479d
    SUB EAX,0x954                       ; 0044479f
    PUSH EAX                            ; 004447a4
    CALL FUN_0043f900                   ; 004447a5
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 004447aa
    PUSH 0x0                            ; 004447ad
    SUB EAX,0x2db0                      ; 004447af
    PUSH EAX                            ; 004447b4
    CALL FUN_0054bf80                   ; 004447b5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 004447ba
    PUSH 0x1                            ; 004447bd
    LEA EBX,[EAX + 0xfffffea8]          ; 004447bf
    PUSH EBX                            ; 004447c5
    CALL FUN_00408770                   ; 004447c6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004447cb
    MOV DL,byte ptr [ESP + 0xc]         ; 004447ce
    MOV EBX,EAX                         ; 004447d2
    TEST DL,0x2                         ; 004447d4
    JNZ 0x004447f8                      ; 004447d7
        ;   XREF to: 004447f8 (CONDITIONAL_JUMP)  ; LAB_004447f8
    MOV EAX,EBX                         ; 004447d9
    POP EBX                             ; 004447db
    RET                                 ; 004447dc
    PUSH 0x5ddb60                       ; 004447dd | DAT_005ddb60
        ;   Label: LAB_004447dd
    PUSH EBX                            ; 004447e2
    CALL FUN_005a308f                   ; 004447e3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004447e8
    PUSH EAX                            ; 004447eb
    CALL FUN_005a30b6                   ; 004447ec
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004447f1
    MOV EAX,EBX                         ; 004447f4
    POP EBX                             ; 004447f6
    RET                                 ; 004447f7
    PUSH EAX                            ; 004447f8
        ;   Label: LAB_004447f8
    CALL FUN_005a30c4                   ; 004447f9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 004447fe
    MOV EAX,EBX                         ; 00444801
    POP EBX                             ; 00444803
    RET                                 ; 00444804


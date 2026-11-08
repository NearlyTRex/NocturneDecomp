; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00463810(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005deb10
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

    PUSH EBX                            ; 00463810
        ;   Label: FUN_00463810
    MOV EBX,dword ptr [ESP + 0x8]       ; 00463811
    TEST byte ptr [ESP + 0xc],0x4       ; 00463815
    JNZ 0x0046386d                      ; 0046381a
        ;   XREF to: 0046386d (CONDITIONAL_JUMP)  ; LAB_0046386d
    PUSH 0x0                            ; 0046381c
    ADD EBX,0x385c                      ; 0046381e
    PUSH EBX                            ; 00463824
    CALL FUN_00410370                   ; 00463825
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0046382a
    PUSH 0x0                            ; 0046382d
    SUB EAX,0x954                       ; 0046382f
    PUSH EAX                            ; 00463834
    CALL FUN_0043f900                   ; 00463835
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0046383a
    PUSH 0x0                            ; 0046383d
    SUB EAX,0x2db0                      ; 0046383f
    PUSH EAX                            ; 00463844
    CALL FUN_0054bf80                   ; 00463845
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0046384a
    PUSH 0x1                            ; 0046384d
    LEA EBX,[EAX + 0xfffffea8]          ; 0046384f
    PUSH EBX                            ; 00463855
    CALL FUN_00408770                   ; 00463856
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0046385b
    MOV DL,byte ptr [ESP + 0xc]         ; 0046385e
    MOV EBX,EAX                         ; 00463862
    TEST DL,0x2                         ; 00463864
    JNZ 0x00463888                      ; 00463867
        ;   XREF to: 00463888 (CONDITIONAL_JUMP)  ; LAB_00463888
    MOV EAX,EBX                         ; 00463869
    POP EBX                             ; 0046386b
    RET                                 ; 0046386c
    PUSH 0x5deb10                       ; 0046386d | DAT_005deb10
        ;   Label: LAB_0046386d
    PUSH EBX                            ; 00463872
    CALL FUN_005a308f                   ; 00463873
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00463878
    PUSH EAX                            ; 0046387b
    CALL FUN_005a30b6                   ; 0046387c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00463881
    MOV EAX,EBX                         ; 00463884
    POP EBX                             ; 00463886
    RET                                 ; 00463887
    PUSH EAX                            ; 00463888
        ;   Label: LAB_00463888
    CALL FUN_005a30c4                   ; 00463889
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0046388e
    MOV EAX,EBX                         ; 00463891
    POP EBX                             ; 00463893
    RET                                 ; 00463894


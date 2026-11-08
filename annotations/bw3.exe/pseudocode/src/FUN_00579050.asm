; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00579050(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e60c0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579050
        ;   Label: FUN_00579050
    MOV EBX,dword ptr [ESP + 0x8]       ; 00579051
    TEST byte ptr [ESP + 0xc],0x4       ; 00579055
    JNZ 0x00579076                      ; 0057905a
        ;   XREF to: 00579076 (CONDITIONAL_JUMP)  ; LAB_00579076
    PUSH 0x1                            ; 0057905c
    PUSH EBX                            ; 0057905e
    CALL FUN_00408770                   ; 0057905f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00579064
    MOV DL,byte ptr [ESP + 0xc]         ; 00579067
    MOV EBX,EAX                         ; 0057906b
    TEST DL,0x2                         ; 0057906d
    JNZ 0x00579091                      ; 00579070
        ;   XREF to: 00579091 (CONDITIONAL_JUMP)  ; LAB_00579091
    MOV EAX,EBX                         ; 00579072
    POP EBX                             ; 00579074
    RET                                 ; 00579075
    PUSH 0x5e60c0                       ; 00579076 | DAT_005e60c0
        ;   Label: LAB_00579076
    PUSH EBX                            ; 0057907b
    CALL FUN_005a308f                   ; 0057907c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00579081
    PUSH EAX                            ; 00579084
    CALL FUN_005a30b6                   ; 00579085
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0057908a
    MOV EAX,EBX                         ; 0057908d
    POP EBX                             ; 0057908f
    RET                                 ; 00579090
    PUSH EAX                            ; 00579091
        ;   Label: LAB_00579091
    CALL FUN_005a30c4                   ; 00579092
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00579097
    MOV EAX,EBX                         ; 0057909a
    POP EBX                             ; 0057909c
    RET                                 ; 0057909d


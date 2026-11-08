; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0040f940(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dbad0
;
; Called Functions:
;   FUN_0057aed0
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f940
        ;   Label: FUN_0040f940
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040f941
    TEST byte ptr [ESP + 0xc],0x4       ; 0040f945
    JNZ 0x0040f966                      ; 0040f94a
        ;   XREF to: 0040f966 (CONDITIONAL_JUMP)  ; LAB_0040f966
    PUSH 0x1                            ; 0040f94c
    PUSH EBX                            ; 0040f94e
    CALL FUN_0057aed0                   ; 0040f94f
        ;   XREF to: 0057aed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057aed0()
    ADD ESP,0x8                         ; 0040f954
    MOV DL,byte ptr [ESP + 0xc]         ; 0040f957
    MOV EBX,EAX                         ; 0040f95b
    TEST DL,0x2                         ; 0040f95d
    JNZ 0x0040f981                      ; 0040f960
        ;   XREF to: 0040f981 (CONDITIONAL_JUMP)  ; LAB_0040f981
    MOV EAX,EBX                         ; 0040f962
    POP EBX                             ; 0040f964
    RET                                 ; 0040f965
    PUSH 0x5dbad0                       ; 0040f966 | DAT_005dbad0
        ;   Label: LAB_0040f966
    PUSH EBX                            ; 0040f96b
    CALL FUN_005a308f                   ; 0040f96c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0040f971
    PUSH EAX                            ; 0040f974
    CALL FUN_005a30b6                   ; 0040f975
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0040f97a
    MOV EAX,EBX                         ; 0040f97d
    POP EBX                             ; 0040f97f
    RET                                 ; 0040f980
    PUSH EAX                            ; 0040f981
        ;   Label: LAB_0040f981
    CALL FUN_005a30c4                   ; 0040f982
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0040f987
    MOV EAX,EBX                         ; 0040f98a
    POP EBX                             ; 0040f98c
    RET                                 ; 0040f98d


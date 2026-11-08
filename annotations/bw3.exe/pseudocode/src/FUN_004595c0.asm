; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004595c0(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005de2e0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004595c0
        ;   Label: FUN_004595c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004595c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004595c5
    JNZ 0x004595e6                      ; 004595ca
        ;   XREF to: 004595e6 (CONDITIONAL_JUMP)  ; LAB_004595e6
    PUSH 0x1                            ; 004595cc
    PUSH EBX                            ; 004595ce
    CALL FUN_00408770                   ; 004595cf
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 004595d4
    MOV DL,byte ptr [ESP + 0xc]         ; 004595d7
    MOV EBX,EAX                         ; 004595db
    TEST DL,0x2                         ; 004595dd
    JNZ 0x00459601                      ; 004595e0
        ;   XREF to: 00459601 (CONDITIONAL_JUMP)  ; LAB_00459601
    MOV EAX,EBX                         ; 004595e2
    POP EBX                             ; 004595e4
    RET                                 ; 004595e5
    PUSH 0x5de2e0                       ; 004595e6 | DAT_005de2e0
        ;   Label: LAB_004595e6
    PUSH EBX                            ; 004595eb
    CALL FUN_005a308f                   ; 004595ec
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 004595f1
    PUSH EAX                            ; 004595f4
    CALL FUN_005a30b6                   ; 004595f5
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 004595fa
    MOV EAX,EBX                         ; 004595fd
    POP EBX                             ; 004595ff
    RET                                 ; 00459600
    PUSH EAX                            ; 00459601
        ;   Label: LAB_00459601
    CALL FUN_005a30c4                   ; 00459602
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00459607
    MOV EAX,EBX                         ; 0045960a
    POP EBX                             ; 0045960c
    RET                                 ; 0045960d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00577640(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fd1e0
;
; Called Functions:
;   FUN_00408930
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577640
        ;   Label: FUN_00577640
    MOV EBX,dword ptr [ESP + 0x8]       ; 00577641
    TEST byte ptr [ESP + 0xc],0x4       ; 00577645
    JNZ 0x00577666                      ; 0057764a
        ;   XREF to: 00577666 (CONDITIONAL_JUMP)  ; LAB_00577666
    PUSH 0x1                            ; 0057764c
    PUSH EBX                            ; 0057764e
    CALL FUN_00408930                   ; 0057764f
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 00577654
    MOV DL,byte ptr [ESP + 0xc]         ; 00577657
    MOV EBX,EAX                         ; 0057765b
    TEST DL,0x2                         ; 0057765d
    JNZ 0x00577681                      ; 00577660
        ;   XREF to: 00577681 (CONDITIONAL_JUMP)  ; LAB_00577681
    MOV EAX,EBX                         ; 00577662
    POP EBX                             ; 00577664
    RET                                 ; 00577665
    PUSH 0x5fd1e0                       ; 00577666 | DAT_005fd1e0
        ;   Label: LAB_00577666
    PUSH EBX                            ; 0057766b
    CALL FUN_005b7fa7                   ; 0057766c
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00577671
    PUSH EAX                            ; 00577674
    CALL FUN_005b7fce                   ; 00577675
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0057767a
    MOV EAX,EBX                         ; 0057767d
    POP EBX                             ; 0057767f
    RET                                 ; 00577680
    PUSH EAX                            ; 00577681
        ;   Label: LAB_00577681
    CALL FUN_005b7fdc                   ; 00577682
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 00577687
    MOV EAX,EBX                         ; 0057768a
    POP EBX                             ; 0057768c
    RET                                 ; 0057768d


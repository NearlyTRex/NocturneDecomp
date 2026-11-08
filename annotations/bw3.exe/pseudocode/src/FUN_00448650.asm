; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00448650(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddf90
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448650
        ;   Label: FUN_00448650
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448651
    TEST byte ptr [ESP + 0xc],0x4       ; 00448655
    JNZ 0x00448676                      ; 0044865a
        ;   XREF to: 00448676 (CONDITIONAL_JUMP)  ; LAB_00448676
    PUSH 0x1                            ; 0044865c
    PUSH EBX                            ; 0044865e
    CALL FUN_00408770                   ; 0044865f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00448664
    MOV DL,byte ptr [ESP + 0xc]         ; 00448667
    MOV EBX,EAX                         ; 0044866b
    TEST DL,0x2                         ; 0044866d
    JNZ 0x00448691                      ; 00448670
        ;   XREF to: 00448691 (CONDITIONAL_JUMP)  ; LAB_00448691
    MOV EAX,EBX                         ; 00448672
    POP EBX                             ; 00448674
    RET                                 ; 00448675
    PUSH 0x5ddf90                       ; 00448676 | DAT_005ddf90
        ;   Label: LAB_00448676
    PUSH EBX                            ; 0044867b
    CALL FUN_005a308f                   ; 0044867c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00448681
    PUSH EAX                            ; 00448684
    CALL FUN_005a30b6                   ; 00448685
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0044868a
    MOV EAX,EBX                         ; 0044868d
    POP EBX                             ; 0044868f
    RET                                 ; 00448690
    PUSH EAX                            ; 00448691
        ;   Label: LAB_00448691
    CALL FUN_005a30c4                   ; 00448692
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00448697
    MOV EAX,EBX                         ; 0044869a
    POP EBX                             ; 0044869c
    RET                                 ; 0044869d


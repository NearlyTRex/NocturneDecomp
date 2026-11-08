; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0042ab20(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dd1f0
;
; Called Functions:
;   FUN_00408770
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ab20
        ;   Label: FUN_0042ab20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042ab21
    TEST byte ptr [ESP + 0xc],0x4       ; 0042ab25
    JNZ 0x0042ab46                      ; 0042ab2a
        ;   XREF to: 0042ab46 (CONDITIONAL_JUMP)  ; LAB_0042ab46
    PUSH 0x1                            ; 0042ab2c
    PUSH EBX                            ; 0042ab2e
    CALL FUN_00408770                   ; 0042ab2f
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0042ab34
    MOV DL,byte ptr [ESP + 0xc]         ; 0042ab37
    MOV EBX,EAX                         ; 0042ab3b
    TEST DL,0x2                         ; 0042ab3d
    JNZ 0x0042ab61                      ; 0042ab40
        ;   XREF to: 0042ab61 (CONDITIONAL_JUMP)  ; LAB_0042ab61
    MOV EAX,EBX                         ; 0042ab42
    POP EBX                             ; 0042ab44
    RET                                 ; 0042ab45
    PUSH 0x5dd1f0                       ; 0042ab46 | DAT_005dd1f0
        ;   Label: LAB_0042ab46
    PUSH EBX                            ; 0042ab4b
    CALL FUN_005a308f                   ; 0042ab4c
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0042ab51
    PUSH EAX                            ; 0042ab54
    CALL FUN_005a30b6                   ; 0042ab55
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0042ab5a
    MOV EAX,EBX                         ; 0042ab5d
    POP EBX                             ; 0042ab5f
    RET                                 ; 0042ab60
    PUSH EAX                            ; 0042ab61
        ;   Label: LAB_0042ab61
    CALL FUN_005a30c4                   ; 0042ab62
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0042ab67
    MOV EAX,EBX                         ; 0042ab6a
    POP EBX                             ; 0042ab6c
    RET                                 ; 0042ab6d


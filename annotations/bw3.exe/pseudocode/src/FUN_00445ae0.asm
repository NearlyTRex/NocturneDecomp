; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00445ae0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ddd10
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

    PUSH EBX                            ; 00445ae0
        ;   Label: FUN_00445ae0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00445ae1
    TEST byte ptr [ESP + 0xc],0x4       ; 00445ae5
    JNZ 0x00445b3d                      ; 00445aea
        ;   XREF to: 00445b3d (CONDITIONAL_JUMP)  ; LAB_00445b3d
    PUSH 0x0                            ; 00445aec
    ADD EBX,0x385c                      ; 00445aee
    PUSH EBX                            ; 00445af4
    CALL FUN_00410370                   ; 00445af5
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 00445afa
    PUSH 0x0                            ; 00445afd
    SUB EAX,0x954                       ; 00445aff
    PUSH EAX                            ; 00445b04
    CALL FUN_0043f900                   ; 00445b05
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 00445b0a
    PUSH 0x0                            ; 00445b0d
    SUB EAX,0x2db0                      ; 00445b0f
    PUSH EAX                            ; 00445b14
    CALL FUN_0054bf80                   ; 00445b15
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 00445b1a
    PUSH 0x1                            ; 00445b1d
    LEA EBX,[EAX + 0xfffffea8]          ; 00445b1f
    PUSH EBX                            ; 00445b25
    CALL FUN_00408770                   ; 00445b26
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 00445b2b
    MOV DL,byte ptr [ESP + 0xc]         ; 00445b2e
    MOV EBX,EAX                         ; 00445b32
    TEST DL,0x2                         ; 00445b34
    JNZ 0x00445b58                      ; 00445b37
        ;   XREF to: 00445b58 (CONDITIONAL_JUMP)  ; LAB_00445b58
    MOV EAX,EBX                         ; 00445b39
    POP EBX                             ; 00445b3b
    RET                                 ; 00445b3c
    PUSH 0x5ddd10                       ; 00445b3d | DAT_005ddd10
        ;   Label: LAB_00445b3d
    PUSH EBX                            ; 00445b42
    CALL FUN_005a308f                   ; 00445b43
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 00445b48
    PUSH EAX                            ; 00445b4b
    CALL FUN_005a30b6                   ; 00445b4c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 00445b51
    MOV EAX,EBX                         ; 00445b54
    POP EBX                             ; 00445b56
    RET                                 ; 00445b57
    PUSH EAX                            ; 00445b58
        ;   Label: LAB_00445b58
    CALL FUN_005a30c4                   ; 00445b59
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 00445b5e
    MOV EAX,EBX                         ; 00445b61
    POP EBX                             ; 00445b63
    RET                                 ; 00445b64


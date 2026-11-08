; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056cc10(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e5650
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

    PUSH EBX                            ; 0056cc10
        ;   Label: FUN_0056cc10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056cc11
    TEST byte ptr [ESP + 0xc],0x4       ; 0056cc15
    JNZ 0x0056cc6d                      ; 0056cc1a
        ;   XREF to: 0056cc6d (CONDITIONAL_JUMP)  ; LAB_0056cc6d
    PUSH 0x0                            ; 0056cc1c
    ADD EBX,0x385c                      ; 0056cc1e
    PUSH EBX                            ; 0056cc24
    CALL FUN_00410370                   ; 0056cc25
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0056cc2a
    PUSH 0x0                            ; 0056cc2d
    SUB EAX,0x954                       ; 0056cc2f
    PUSH EAX                            ; 0056cc34
    CALL FUN_0043f900                   ; 0056cc35
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0056cc3a
    PUSH 0x0                            ; 0056cc3d
    SUB EAX,0x2db0                      ; 0056cc3f
    PUSH EAX                            ; 0056cc44
    CALL FUN_0054bf80                   ; 0056cc45
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0056cc4a
    PUSH 0x1                            ; 0056cc4d
    LEA EBX,[EAX + 0xfffffea8]          ; 0056cc4f
    PUSH EBX                            ; 0056cc55
    CALL FUN_00408770                   ; 0056cc56
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0056cc5b
    MOV DL,byte ptr [ESP + 0xc]         ; 0056cc5e
    MOV EBX,EAX                         ; 0056cc62
    TEST DL,0x2                         ; 0056cc64
    JNZ 0x0056cc88                      ; 0056cc67
        ;   XREF to: 0056cc88 (CONDITIONAL_JUMP)  ; LAB_0056cc88
    MOV EAX,EBX                         ; 0056cc69
    POP EBX                             ; 0056cc6b
    RET                                 ; 0056cc6c
    PUSH 0x5e5650                       ; 0056cc6d | DAT_005e5650
        ;   Label: LAB_0056cc6d
    PUSH EBX                            ; 0056cc72
    CALL FUN_005a308f                   ; 0056cc73
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0056cc78
    PUSH EAX                            ; 0056cc7b
    CALL FUN_005a30b6                   ; 0056cc7c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0056cc81
    MOV EAX,EBX                         ; 0056cc84
    POP EBX                             ; 0056cc86
    RET                                 ; 0056cc87
    PUSH EAX                            ; 0056cc88
        ;   Label: LAB_0056cc88
    CALL FUN_005a30c4                   ; 0056cc89
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0056cc8e
    MOV EAX,EBX                         ; 0056cc91
    POP EBX                             ; 0056cc93
    RET                                 ; 0056cc94


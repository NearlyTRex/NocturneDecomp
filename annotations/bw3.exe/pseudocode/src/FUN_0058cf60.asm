; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0058cf60(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6f70
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

    PUSH EBX                            ; 0058cf60
        ;   Label: FUN_0058cf60
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058cf61
    TEST byte ptr [ESP + 0xc],0x4       ; 0058cf65
    JNZ 0x0058cfbd                      ; 0058cf6a
        ;   XREF to: 0058cfbd (CONDITIONAL_JUMP)  ; LAB_0058cfbd
    PUSH 0x0                            ; 0058cf6c
    ADD EBX,0x385c                      ; 0058cf6e
    PUSH EBX                            ; 0058cf74
    CALL FUN_00410370                   ; 0058cf75
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 0058cf7a
    PUSH 0x0                            ; 0058cf7d
    SUB EAX,0x954                       ; 0058cf7f
    PUSH EAX                            ; 0058cf84
    CALL FUN_0043f900                   ; 0058cf85
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 0058cf8a
    PUSH 0x0                            ; 0058cf8d
    SUB EAX,0x2db0                      ; 0058cf8f
    PUSH EAX                            ; 0058cf94
    CALL FUN_0054bf80                   ; 0058cf95
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 0058cf9a
    PUSH 0x1                            ; 0058cf9d
    LEA EBX,[EAX + 0xfffffea8]          ; 0058cf9f
    PUSH EBX                            ; 0058cfa5
    CALL FUN_00408770                   ; 0058cfa6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 0058cfab
    MOV DL,byte ptr [ESP + 0xc]         ; 0058cfae
    MOV EBX,EAX                         ; 0058cfb2
    TEST DL,0x2                         ; 0058cfb4
    JNZ 0x0058cfd8                      ; 0058cfb7
        ;   XREF to: 0058cfd8 (CONDITIONAL_JUMP)  ; LAB_0058cfd8
    MOV EAX,EBX                         ; 0058cfb9
    POP EBX                             ; 0058cfbb
    RET                                 ; 0058cfbc
    PUSH 0x5e6f70                       ; 0058cfbd | DAT_005e6f70
        ;   Label: LAB_0058cfbd
    PUSH EBX                            ; 0058cfc2
    CALL FUN_005a308f                   ; 0058cfc3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 0058cfc8
    PUSH EAX                            ; 0058cfcb
    CALL FUN_005a30b6                   ; 0058cfcc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0058cfd1
    MOV EAX,EBX                         ; 0058cfd4
    POP EBX                             ; 0058cfd6
    RET                                 ; 0058cfd7
    PUSH EAX                            ; 0058cfd8
        ;   Label: LAB_0058cfd8
    CALL FUN_005a30c4                   ; 0058cfd9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 0058cfde
    MOV EAX,EBX                         ; 0058cfe1
    POP EBX                             ; 0058cfe3
    RET                                 ; 0058cfe4


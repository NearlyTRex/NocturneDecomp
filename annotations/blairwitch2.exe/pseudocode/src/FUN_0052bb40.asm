; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0052bb40(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fb1c0
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052bb40
        ;   Label: FUN_0052bb40
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052bb41
    TEST byte ptr [ESP + 0xc],0x4       ; 0052bb45
    JNZ 0x0052bbad                      ; 0052bb4a
        ;   XREF to: 0052bbad (CONDITIONAL_JUMP)  ; LAB_0052bbad
    PUSH 0x0                            ; 0052bb4c
    ADD EBX,0x3a20                      ; 0052bb4e
    PUSH EBX                            ; 0052bb54
    CALL FUN_0040f2b0                   ; 0052bb55
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0052bb5a
    PUSH 0x0                            ; 0052bb5d
    SUB EAX,0x9c8                       ; 0052bb5f
    PUSH EAX                            ; 0052bb64
    CALL FUN_0059df70                   ; 0052bb65
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0052bb6a
    PUSH 0x0                            ; 0052bb6d
    SUB EAX,0x34c                       ; 0052bb6f
    PUSH EAX                            ; 0052bb74
    CALL FUN_005b1480                   ; 0052bb75
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0052bb7a
    PUSH 0x0                            ; 0052bb7d
    SUB EAX,0x2a58                      ; 0052bb7f
    PUSH EAX                            ; 0052bb84
    CALL FUN_00544d50                   ; 0052bb85
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0052bb8a
    PUSH 0x1                            ; 0052bb8d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0052bb8f
    PUSH EBX                            ; 0052bb95
    CALL FUN_00408930                   ; 0052bb96
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0052bb9b
    MOV DL,byte ptr [ESP + 0xc]         ; 0052bb9e
    MOV EBX,EAX                         ; 0052bba2
    TEST DL,0x2                         ; 0052bba4
    JNZ 0x0052bbc8                      ; 0052bba7
        ;   XREF to: 0052bbc8 (CONDITIONAL_JUMP)  ; LAB_0052bbc8
    MOV EAX,EBX                         ; 0052bba9
    POP EBX                             ; 0052bbab
    RET                                 ; 0052bbac
    PUSH 0x5fb1c0                       ; 0052bbad | DAT_005fb1c0
        ;   Label: LAB_0052bbad
    PUSH EBX                            ; 0052bbb2
    CALL FUN_005b7fa7                   ; 0052bbb3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 0052bbb8
    PUSH EAX                            ; 0052bbbb
    CALL FUN_005b7fce                   ; 0052bbbc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 0052bbc1
    MOV EAX,EBX                         ; 0052bbc4
    POP EBX                             ; 0052bbc6
    RET                                 ; 0052bbc7
    PUSH EAX                            ; 0052bbc8
        ;   Label: LAB_0052bbc8
    CALL FUN_005b7fdc                   ; 0052bbc9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0052bbce
    MOV EAX,EBX                         ; 0052bbd1
    POP EBX                             ; 0052bbd3
    RET                                 ; 0052bbd4


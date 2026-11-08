; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004fff70(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00500310 at 00500606
;
; Referenced Globals:
;   TerminatedCString s_CDraculaBride_005e6e0d
;   TerminatedCString s_CBatman_005e6e1b
;   TerminatedCString s_CBatCreature_005e6e23
;   TerminatedCString s_CBride_005e6e30
;   TerminatedCString s_CShadow_005e6e37
;   TerminatedCString s_CShadowsc_005e6e3f
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fff70
        ;   Label: FUN_004fff70
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fff71
    PUSH 0x5e6e0d                       ; 004fff75 | = "CDraculaBride"
    PUSH EBX                            ; 004fff7a
    CALL FUN_0040c550                   ; 004fff7b
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004fff80
    TEST EAX,EAX                        ; 004fff83
    JZ 0x004fff8e                       ; 004fff85
        ;   XREF to: 004fff8e (CONDITIONAL_JUMP)  ; LAB_004fff8e
    MOV EAX,0x1                         ; 004fff87
        ;   Label: LAB_004fff87
    POP EBX                             ; 004fff8c
    RET                                 ; 004fff8d
    PUSH 0x5e6e1b                       ; 004fff8e | = "CBatman"
        ;   Label: LAB_004fff8e
    PUSH EBX                            ; 004fff93
    CALL FUN_0040c550                   ; 004fff94
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004fff99
    TEST EAX,EAX                        ; 004fff9c
    JNZ 0x004fff87                      ; 004fff9e
        ;   XREF to: 004fff87 (CONDITIONAL_JUMP)  ; LAB_004fff87
    PUSH 0x5e6e23                       ; 004fffa0 | = "CBatCreature"
    PUSH EBX                            ; 004fffa5
    CALL FUN_0040c550                   ; 004fffa6
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004fffab
    TEST EAX,EAX                        ; 004fffae
    JNZ 0x004fff87                      ; 004fffb0
        ;   XREF to: 004fff87 (CONDITIONAL_JUMP)  ; LAB_004fff87
    PUSH 0x5e6e30                       ; 004fffb2 | = "CBride"
    PUSH EBX                            ; 004fffb7
    CALL FUN_0040c550                   ; 004fffb8
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004fffbd
    TEST EAX,EAX                        ; 004fffc0
    JNZ 0x004fff87                      ; 004fffc2
        ;   XREF to: 004fff87 (CONDITIONAL_JUMP)  ; LAB_004fff87
    PUSH 0x5e6e37                       ; 004fffc4 | = "CShadow"
    PUSH EBX                            ; 004fffc9
    CALL FUN_0040c550                   ; 004fffca
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004fffcf
    TEST EAX,EAX                        ; 004fffd2
    JNZ 0x004fff87                      ; 004fffd4
        ;   XREF to: 004fff87 (CONDITIONAL_JUMP)  ; LAB_004fff87
    PUSH 0x5e6e3f                       ; 004fffd6 | = "CShadowsc"
    PUSH EBX                            ; 004fffdb
    CALL FUN_0040c550                   ; 004fffdc
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 004fffe1
    TEST EAX,EAX                        ; 004fffe4
    JNZ 0x004fff87                      ; 004fffe6
        ;   XREF to: 004fff87 (CONDITIONAL_JUMP)  ; LAB_004fff87
    POP EBX                             ; 004fffe8
    RET                                 ; 004fffe9


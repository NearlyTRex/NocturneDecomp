; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005be148(int param_1)
;
;
; XREF[3]:
;   FUN_005bd67c at 005bd78b
;   FUN_005bd9a8 at 005bda15
;   FUN_005bdcac at 005bdd46
;
; Called Functions:
;   FUN_005bd160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005be148
        ;   Label: FUN_005be148
    MOV EBX,dword ptr [ESP + 0x8]       ; 005be149
    MOV EAX,dword ptr [EBX + 0xc]       ; 005be14d
    LEA EDX,[EAX + -0x1]                ; 005be150
    MOV dword ptr [EBX + 0xc],EDX       ; 005be153
    TEST EAX,EAX                        ; 005be156
    JZ 0x005be16b                       ; 005be158
        ;   XREF to: 005be16b (CONDITIONAL_JUMP)  ; LAB_005be16b
    PUSH EBX                            ; 005be15a
    CALL FUN_005bd160                   ; 005be15b
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined FUN_005bd160()
    MOV DL,byte ptr [EBX + 0x10]        ; 005be160
    ADD ESP,0x4                         ; 005be163
    TEST DL,0x2                         ; 005be166
    JZ 0x005be170                       ; 005be169
        ;   XREF to: 005be170 (CONDITIONAL_JUMP)  ; LAB_005be170
    MOV EAX,0xffffffff                  ; 005be16b
        ;   Label: LAB_005be16b
    POP EBX                             ; 005be170
        ;   Label: LAB_005be170
    RET                                 ; 005be171


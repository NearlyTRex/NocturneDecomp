; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte FUN_005cf390(uint param_1)
;
;
; XREF[1]:
;   FUN_005cf340 at 005cf36e
;
; Referenced Globals:
;   undefined4 DAT_00626ad8
;   undefined4 DAT_00626c09
;   undefined4 DAT_02c9f6e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cf390
        ;   Label: FUN_005cf390
    CMP dword ptr [0x02c9f6e0],0x0      ; 005cf394 | DAT_02c9f6e0
    JZ 0x005cf3c6                       ; 005cf39b
        ;   XREF to: 005cf3c6 (CONDITIONAL_JUMP)  ; LAB_005cf3c6
    CMP dword ptr [0x00626ad8],0x3a4    ; 005cf39d | DAT_00626ad8
    JZ 0x005cf3b3                       ; 005cf3a7
        ;   XREF to: 005cf3b3 (CONDITIONAL_JUMP)  ; LAB_005cf3b3
    TEST EAX,EAX                        ; 005cf3a9
    JZ 0x005cf3c8                       ; 005cf3ab
        ;   XREF to: 005cf3c8 (CONDITIONAL_JUMP)  ; LAB_005cf3c8
    MOV EAX,0x1                         ; 005cf3ad
    RET                                 ; 005cf3b2
    AND EAX,0xff                        ; 005cf3b3
        ;   Label: LAB_005cf3b3
    MOV AL,byte ptr [EAX + 0x626c09]    ; 005cf3b8 | DAT_00626c09
    AND AL,0x8                          ; 005cf3be
    AND EAX,0xff                        ; 005cf3c0
    RET                                 ; 005cf3c5
    XOR EAX,EAX                         ; 005cf3c6
        ;   Label: LAB_005cf3c6
    RET                                 ; 005cf3c8
        ;   Label: LAB_005cf3c8


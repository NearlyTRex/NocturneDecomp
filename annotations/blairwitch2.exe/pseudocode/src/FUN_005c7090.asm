; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte FUN_005c7090(uint param_1)
;
;
; XREF[1]:
;   FUN_005c7040 at 005c706e
;
; Referenced Globals:
;   undefined4 DAT_0061f758
;   undefined4 DAT_0061f889
;   undefined4 DAT_026807f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c7090
        ;   Label: FUN_005c7090
    CMP dword ptr [0x026807f0],0x0      ; 005c7094 | DAT_026807f0
    JZ 0x005c70c6                       ; 005c709b
        ;   XREF to: 005c70c6 (CONDITIONAL_JUMP)  ; LAB_005c70c6
    CMP dword ptr [0x0061f758],0x3a4    ; 005c709d | DAT_0061f758
    JZ 0x005c70b3                       ; 005c70a7
        ;   XREF to: 005c70b3 (CONDITIONAL_JUMP)  ; LAB_005c70b3
    TEST EAX,EAX                        ; 005c70a9
    JZ 0x005c70c8                       ; 005c70ab
        ;   XREF to: 005c70c8 (CONDITIONAL_JUMP)  ; LAB_005c70c8
    MOV EAX,0x1                         ; 005c70ad
    RET                                 ; 005c70b2
    AND EAX,0xff                        ; 005c70b3
        ;   Label: LAB_005c70b3
    MOV AL,byte ptr [EAX + 0x61f889]    ; 005c70b8 | DAT_0061f889
    AND AL,0x8                          ; 005c70be
    AND EAX,0xff                        ; 005c70c0
    RET                                 ; 005c70c5
    XOR EAX,EAX                         ; 005c70c6
        ;   Label: LAB_005c70c6
    RET                                 ; 005c70c8
        ;   Label: LAB_005c70c8


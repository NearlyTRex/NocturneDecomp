; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte FUN_005747b0(uint param_1)
;
;
; XREF[1]:
;   FUN_00574760 at 0057478e
;
; Referenced Globals:
;   undefined4 DAT_005c2144
;   undefined4 DAT_005c2201
;   undefined4 DAT_02de5c30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005747b0
        ;   Label: FUN_005747b0
    CMP dword ptr [0x02de5c30],0x0      ; 005747b4 | DAT_02de5c30
    JZ 0x005747e6                       ; 005747bb
        ;   XREF to: 005747e6 (CONDITIONAL_JUMP)  ; LAB_005747e6
    CMP dword ptr [0x005c2144],0x3a4    ; 005747bd | DAT_005c2144
    JZ 0x005747d3                       ; 005747c7
        ;   XREF to: 005747d3 (CONDITIONAL_JUMP)  ; LAB_005747d3
    TEST EAX,EAX                        ; 005747c9
    JZ 0x005747e8                       ; 005747cb
        ;   XREF to: 005747e8 (CONDITIONAL_JUMP)  ; LAB_005747e8
    MOV EAX,0x1                         ; 005747cd
    RET                                 ; 005747d2
    AND EAX,0xff                        ; 005747d3
        ;   Label: LAB_005747d3
    MOV AL,byte ptr [EAX + 0x5c2201]    ; 005747d8 | DAT_005c2201
    AND AL,0x8                          ; 005747de
    AND EAX,0xff                        ; 005747e0
    RET                                 ; 005747e5
    XOR EAX,EAX                         ; 005747e6
        ;   Label: LAB_005747e6
    RET                                 ; 005747e8
        ;   Label: LAB_005747e8


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte FUN_005b2120(uint param_1)
;
;
; XREF[1]:
;   FUN_005b20d0 at 005b20fe
;
; Referenced Globals:
;   undefined4 DAT_00607e7c
;   undefined4 DAT_00607fad
;   undefined4 DAT_02d25930
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005b2120
        ;   Label: FUN_005b2120
    CMP dword ptr [0x02d25930],0x0      ; 005b2124 | DAT_02d25930
    JZ 0x005b2156                       ; 005b212b
        ;   XREF to: 005b2156 (CONDITIONAL_JUMP)  ; LAB_005b2156
    CMP dword ptr [0x00607e7c],0x3a4    ; 005b212d | DAT_00607e7c
    JZ 0x005b2143                       ; 005b2137
        ;   XREF to: 005b2143 (CONDITIONAL_JUMP)  ; LAB_005b2143
    TEST EAX,EAX                        ; 005b2139
    JZ 0x005b2158                       ; 005b213b
        ;   XREF to: 005b2158 (CONDITIONAL_JUMP)  ; LAB_005b2158
    MOV EAX,0x1                         ; 005b213d
    RET                                 ; 005b2142
    AND EAX,0xff                        ; 005b2143
        ;   Label: LAB_005b2143
    MOV AL,byte ptr [EAX + 0x607fad]    ; 005b2148 | DAT_00607fad
    AND AL,0x8                          ; 005b214e
    AND EAX,0xff                        ; 005b2150
    RET                                 ; 005b2155
    XOR EAX,EAX                         ; 005b2156
        ;   Label: LAB_005b2156
    RET                                 ; 005b2158
        ;   Label: LAB_005b2158


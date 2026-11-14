; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005b20d0(uint param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b2080 at 005b2086
;
; Referenced Globals:
;   undefined4 DAT_02d25930
;
; Called Functions:
;   crt_unknown.c_FUN_005b2120
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b20d0
        ;   Label: crt_unknown.c_FUN_005b20d0
    CMP dword ptr [0x02d25930],0x0      ; 005b20d4 | DAT_02d25930
    JZ 0x005b2110                       ; 005b20db
        ;   XREF to: 005b2110 (CONDITIONAL_JUMP)  ; LAB_005b2110
    MOV EAX,EDX                         ; 005b20dd
    SHR EAX,0x8                         ; 005b20df
    AND EAX,0xff                        ; 005b20e2
    MOV AL,byte ptr [EAX + 0x2d25941]   ; 005b20e7
    AND AL,0x1                          ; 005b20ed
    AND EAX,0xff                        ; 005b20ef
    JZ 0x005b2110                       ; 005b20f4
        ;   XREF to: 005b2110 (CONDITIONAL_JUMP)  ; LAB_005b2110
    MOV EAX,EDX                         ; 005b20f6
    AND EAX,0xff                        ; 005b20f8
    PUSH EAX                            ; 005b20fd
    CALL crt_unknown.c_FUN_005b2120     ; 005b20fe
        ;   XREF to: 005b2120 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b2120()
    ADD ESP,0x4                         ; 005b2103
    TEST EAX,EAX                        ; 005b2106
    JZ 0x005b2110                       ; 005b2108
        ;   XREF to: 005b2110 (CONDITIONAL_JUMP)  ; LAB_005b2110
    MOV EAX,0x1                         ; 005b210a
    RET                                 ; 005b210f
    XOR EAX,EAX                         ; 005b2110
        ;   Label: LAB_005b2110
    RET                                 ; 005b2112


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00568e1c(uint *param_1)
;
;
; XREF[1]:
;   FUN_00568d58 at 00568d7e
;
; Referenced Globals:
;   undefined4 DAT_005c1fec
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568e1c
        ;   Label: FUN_00568e1c
    MOV EAX,dword ptr [EDX]             ; 00568e20
    ADD EAX,0x7                         ; 00568e22
    AND AL,0xf8                         ; 00568e25
    TEST EAX,EAX                        ; 00568e27
    JNZ 0x00568e2c                      ; 00568e29
        ;   XREF to: 00568e2c (CONDITIONAL_JUMP)  ; LAB_00568e2c
    RET                                 ; 00568e2b
    MOV dword ptr [EDX],EAX             ; 00568e2c
        ;   Label: LAB_00568e2c
    ADD EAX,0x3c                        ; 00568e2e
    CMP EAX,dword ptr [EDX]             ; 00568e31
    JNC 0x00568e38                      ; 00568e33
        ;   XREF to: 00568e38 (CONDITIONAL_JUMP)  ; LAB_00568e38
    XOR EAX,EAX                         ; 00568e35
    RET                                 ; 00568e37
    MOV ECX,dword ptr [0x005c1fec]      ; 00568e38 | DAT_005c1fec
        ;   Label: LAB_00568e38
    CMP EAX,ECX                         ; 00568e3e
    JNC 0x00568e46                      ; 00568e40
        ;   XREF to: 00568e46 (CONDITIONAL_JUMP)  ; LAB_00568e46
    MOV EAX,ECX                         ; 00568e42
    AND AL,0xfe                         ; 00568e44
    MOV dword ptr [EDX],EAX             ; 00568e46
        ;   Label: LAB_00568e46
    ADD EAX,0xfff                       ; 00568e48
    CMP EAX,dword ptr [EDX]             ; 00568e4d
    JNC 0x00568e54                      ; 00568e4f
        ;   XREF to: 00568e54 (CONDITIONAL_JUMP)  ; LAB_00568e54
    XOR EAX,EAX                         ; 00568e51
    RET                                 ; 00568e53
    XOR AL,AL                           ; 00568e54
        ;   Label: LAB_00568e54
    AND AH,0xf0                         ; 00568e56
    MOV dword ptr [EDX],EAX             ; 00568e59
    TEST EAX,EAX                        ; 00568e5b
    SETNZ AL                            ; 00568e5d
    AND EAX,0xff                        ; 00568e60
    RET                                 ; 00568e65


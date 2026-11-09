; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool crt_unknown_c_FUN_005c69bc(uint *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c68f8 at 005c691e
;
; Referenced Globals:
;   undefined4 DAT_00626a70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c69bc
        ;   Label: crt_unknown.c_FUN_005c69bc
    MOV EAX,dword ptr [EDX]             ; 005c69c0
    ADD EAX,0x7                         ; 005c69c2
    AND AL,0xf8                         ; 005c69c5
    TEST EAX,EAX                        ; 005c69c7
    JNZ 0x005c69cc                      ; 005c69c9
        ;   XREF to: 005c69cc (CONDITIONAL_JUMP)  ; LAB_005c69cc
    RET                                 ; 005c69cb
    MOV dword ptr [EDX],EAX             ; 005c69cc
        ;   Label: LAB_005c69cc
    ADD EAX,0x3c                        ; 005c69ce
    CMP EAX,dword ptr [EDX]             ; 005c69d1
    JNC 0x005c69d8                      ; 005c69d3
        ;   XREF to: 005c69d8 (CONDITIONAL_JUMP)  ; LAB_005c69d8
    XOR EAX,EAX                         ; 005c69d5
    RET                                 ; 005c69d7
    MOV ECX,dword ptr [0x00626a70]      ; 005c69d8 | DAT_00626a70
        ;   Label: LAB_005c69d8
    CMP EAX,ECX                         ; 005c69de
    JNC 0x005c69e6                      ; 005c69e0
        ;   XREF to: 005c69e6 (CONDITIONAL_JUMP)  ; LAB_005c69e6
    MOV EAX,ECX                         ; 005c69e2
    AND AL,0xfe                         ; 005c69e4
    MOV dword ptr [EDX],EAX             ; 005c69e6
        ;   Label: LAB_005c69e6
    ADD EAX,0xfff                       ; 005c69e8
    CMP EAX,dword ptr [EDX]             ; 005c69ed
    JNC 0x005c69f4                      ; 005c69ef
        ;   XREF to: 005c69f4 (CONDITIONAL_JUMP)  ; LAB_005c69f4
    XOR EAX,EAX                         ; 005c69f1
    RET                                 ; 005c69f3
    XOR AL,AL                           ; 005c69f4
        ;   Label: LAB_005c69f4
    AND AH,0xf0                         ; 005c69f6
    MOV dword ptr [EDX],EAX             ; 005c69f9
    TEST EAX,EAX                        ; 005c69fb
    SETNZ AL                            ; 005c69fd
    AND EAX,0xff                        ; 005c6a00
    RET                                 ; 005c6a05


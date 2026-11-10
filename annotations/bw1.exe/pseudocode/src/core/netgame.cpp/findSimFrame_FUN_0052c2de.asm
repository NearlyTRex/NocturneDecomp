; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_netgame_cpp_findSimFrame_FUN_0052c2de(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d715a8
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 0052c2de
        ;   Label: core_netgame.cpp_findSimFrame_FUN_0052c2de
    PUSH EBX                            ; 0052c2e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052c2e1
    MOV ECX,dword ptr [0x01d715a8]      ; 0052c2e5 | DAT_01d715a8
    XOR EDX,EDX                         ; 0052c2eb
    TEST ECX,ECX                        ; 0052c2ed
    JLE 0x0052c316                      ; 0052c2ef
        ;   XREF to: 0052c316 (CONDITIONAL_JUMP)  ; LAB_0052c316
    PUSH ESI                            ; 0052c2f1
    MOV ESI,ECX                         ; 0052c2f2
    SHL ECX,0x2                         ; 0052c2f4
    SUB ECX,ESI                         ; 0052c2f7
    SHL ECX,0x2                         ; 0052c2f9
    MOV ESI,ECX                         ; 0052c2fc
    SHL ECX,0x3                         ; 0052c2fe
    XOR EAX,EAX                         ; 0052c301
    ADD ECX,ESI                         ; 0052c303
    POP ESI                             ; 0052c305
    CMP EBX,dword ptr [EAX + 0x1d715ac] ; 0052c306
        ;   Label: LAB_0052c306
    JZ 0x0052c31f                       ; 0052c30c
        ;   XREF to: 0052c31f (CONDITIONAL_JUMP)  ; LAB_0052c31f
    ADD EAX,0x6c                        ; 0052c30e
    INC EDX                             ; 0052c311
    CMP EAX,ECX                         ; 0052c312
    JL 0x0052c306                       ; 0052c314
        ;   XREF to: 0052c306 (CONDITIONAL_JUMP)  ; LAB_0052c306
    MOV ECX,0xffffffff                  ; 0052c316
        ;   Label: LAB_0052c316
    MOV EAX,ECX                         ; 0052c31b
    POP EBX                             ; 0052c31d
    RET                                 ; 0052c31e
    MOV ECX,EDX                         ; 0052c31f
        ;   Label: LAB_0052c31f
    MOV EAX,ECX                         ; 0052c321
    POP EBX                             ; 0052c323
    RET                                 ; 0052c324


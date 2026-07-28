; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_netgame_cpp_findSimFrame_FUN_004e96e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01d09c00
;   undefined4 DAT_01d09c68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e96e0
        ;   Label: core_netgame.cpp_findSimFrame_FUN_004e96e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e96e1
    MOV ECX,dword ptr [0x01d09c00]      ; 004e96e5 | DAT_01d09c00
    XOR EDX,EDX                         ; 004e96eb
    TEST ECX,ECX                        ; 004e96ed
    JLE 0x004e9714                      ; 004e96ef
        ;   XREF to: 004e9714 (CONDITIONAL_JUMP)  ; LAB_004e9714
    PUSH ESI                            ; 004e96f1
    MOV ESI,ECX                         ; 004e96f2
    SHL ECX,0x2                         ; 004e96f4
    SUB ECX,ESI                         ; 004e96f7
    SHL ECX,0x3                         ; 004e96f9
    ADD ECX,ESI                         ; 004e96fc
    XOR EAX,EAX                         ; 004e96fe
    SHL ECX,0x2                         ; 004e9700
    POP ESI                             ; 004e9703
    CMP EBX,dword ptr [EAX + 0x1d09c04] ; 004e9704 | DAT_01d09c68
        ;   Label: LAB_004e9704
    JZ 0x004e971d                       ; 004e970a
        ;   XREF to: 004e971d (CONDITIONAL_JUMP)  ; LAB_004e971d
    ADD EAX,0x64                        ; 004e970c
    INC EDX                             ; 004e970f
    CMP EAX,ECX                         ; 004e9710
    JL 0x004e9704                       ; 004e9712
        ;   XREF to: 004e9704 (CONDITIONAL_JUMP)  ; LAB_004e9704
    MOV ECX,0xffffffff                  ; 004e9714
        ;   Label: LAB_004e9714
    MOV EAX,ECX                         ; 004e9719
    POP EBX                             ; 004e971b
    RET                                 ; 004e971c
    MOV ECX,EDX                         ; 004e971d
        ;   Label: LAB_004e971d
    MOV EAX,ECX                         ; 004e971f
    POP EBX                             ; 004e9721
    RET                                 ; 004e9722


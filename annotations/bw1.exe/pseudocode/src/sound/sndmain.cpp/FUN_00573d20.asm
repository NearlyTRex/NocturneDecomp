; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_FUN_00573d20(void)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004cee2f
;
; Referenced Globals:
;   undefined4 DAT_02c74650
;   undefined4 DAT_02c7476c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00573d20
        ;   Label: sound_sndmain.cpp_FUN_00573d20
    XOR EAX,EAX                         ; 00573d21
    XOR EDX,EDX                         ; 00573d23
    XOR ECX,ECX                         ; 00573d25
    CMP ECX,dword ptr [EAX + 0x2c74654] ; 00573d27
        ;   Label: LAB_00573d27
    JZ 0x00573d39                       ; 00573d2d
        ;   XREF to: 00573d39 (CONDITIONAL_JUMP)  ; LAB_00573d39
    MOV ESI,dword ptr [EAX + 0x2c74650] ; 00573d2f | DAT_02c74650 | DAT_02c7476c
    CMP ECX,ESI                         ; 00573d35
    JNZ 0x00573d4a                      ; 00573d37
        ;   XREF to: 00573d4a (CONDITIONAL_JUMP)  ; LAB_00573d4a
    ADD EAX,0x11c                       ; 00573d39
        ;   Label: LAB_00573d39
    INC EDX                             ; 00573d3e
    CMP EAX,0x4700                      ; 00573d3f
    JL 0x00573d27                       ; 00573d44
        ;   XREF to: 00573d27 (CONDITIONAL_JUMP)  ; LAB_00573d27
    XOR EAX,EAX                         ; 00573d46
    POP ESI                             ; 00573d48
    RET                                 ; 00573d49
    MOV EAX,ESI                         ; 00573d4a
        ;   Label: LAB_00573d4a
    SHL EAX,0x6                         ; 00573d4c
    OR EAX,EDX                          ; 00573d4f
    POP ESI                             ; 00573d51
    RET                                 ; 00573d52


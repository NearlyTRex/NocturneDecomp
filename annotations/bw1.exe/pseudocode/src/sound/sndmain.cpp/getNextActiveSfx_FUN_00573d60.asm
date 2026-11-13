; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_00573d60(uint current_sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   current_sfx_handle
;
; XREF[1]:
;   core_game.cpp_FUN_004ce580 at 004cee72
;
; Referenced Globals:
;   undefined4 DAT_02c74650
;   undefined4 DAT_02c7476c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573d60
        ;   Label: sound_sndmain.cpp_getNextActiveSfx_FUN_00573d60
    MOV EDX,dword ptr [ESP + 0x8]       ; 00573d61
    AND EDX,0x3f                        ; 00573d65
    INC EDX                             ; 00573d68
    CMP EDX,0x40                        ; 00573d69
    JGE 0x00573d9f                      ; 00573d6c
        ;   XREF to: 00573d9f (CONDITIONAL_JUMP)  ; LAB_00573d9f
    LEA EAX,[EDX*0x8 + 0x0]             ; 00573d6e
    ADD EAX,EDX                         ; 00573d75
    SHL EAX,0x3                         ; 00573d77
    SUB EAX,EDX                         ; 00573d7a
    SHL EAX,0x2                         ; 00573d7c
    CMP dword ptr [EAX + 0x2c74654],0x0 ; 00573d7f
        ;   Label: LAB_00573d7f
    JZ 0x00573d92                       ; 00573d86
        ;   XREF to: 00573d92 (CONDITIONAL_JUMP)  ; LAB_00573d92
    MOV EBX,dword ptr [EAX + 0x2c74650] ; 00573d88 | DAT_02c74650 | DAT_02c7476c
    TEST EBX,EBX                        ; 00573d8e
    JNZ 0x00573da3                      ; 00573d90
        ;   XREF to: 00573da3 (CONDITIONAL_JUMP)  ; LAB_00573da3
    ADD EAX,0x11c                       ; 00573d92
        ;   Label: LAB_00573d92
    INC EDX                             ; 00573d97
    CMP EAX,0x4700                      ; 00573d98
    JL 0x00573d7f                       ; 00573d9d
        ;   XREF to: 00573d7f (CONDITIONAL_JUMP)  ; LAB_00573d7f
    XOR EAX,EAX                         ; 00573d9f
        ;   Label: LAB_00573d9f
    POP EBX                             ; 00573da1
    RET                                 ; 00573da2
    MOV EAX,EBX                         ; 00573da3
        ;   Label: LAB_00573da3
    SHL EAX,0x6                         ; 00573da5
    OR EAX,EDX                          ; 00573da8
    POP EBX                             ; 00573daa
    RET                                 ; 00573dab


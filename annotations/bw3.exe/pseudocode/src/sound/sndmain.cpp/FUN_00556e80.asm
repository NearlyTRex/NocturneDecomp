; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_FUN_00556e80(void)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b77df
;
; Referenced Globals:
;   undefined4 DAT_02ce7280
;   undefined4 DAT_02ce739c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00556e80
        ;   Label: sound_sndmain.cpp_FUN_00556e80
    XOR EAX,EAX                         ; 00556e81
    XOR EDX,EDX                         ; 00556e83
    XOR ECX,ECX                         ; 00556e85
    CMP ECX,dword ptr [EAX + 0x2ce7284] ; 00556e87
        ;   Label: LAB_00556e87
    JZ 0x00556e99                       ; 00556e8d
        ;   XREF to: 00556e99 (CONDITIONAL_JUMP)  ; LAB_00556e99
    MOV ESI,dword ptr [EAX + 0x2ce7280] ; 00556e8f | DAT_02ce7280 | DAT_02ce739c
    CMP ECX,ESI                         ; 00556e95
    JNZ 0x00556eaa                      ; 00556e97
        ;   XREF to: 00556eaa (CONDITIONAL_JUMP)  ; LAB_00556eaa
    ADD EAX,0x11c                       ; 00556e99
        ;   Label: LAB_00556e99
    INC EDX                             ; 00556e9e
    CMP EAX,0x4700                      ; 00556e9f
    JL 0x00556e87                       ; 00556ea4
        ;   XREF to: 00556e87 (CONDITIONAL_JUMP)  ; LAB_00556e87
    XOR EAX,EAX                         ; 00556ea6
    POP ESI                             ; 00556ea8
    RET                                 ; 00556ea9
    MOV EAX,ESI                         ; 00556eaa
        ;   Label: LAB_00556eaa
    SHL EAX,0x6                         ; 00556eac
    OR EAX,EDX                          ; 00556eaf
    POP ESI                             ; 00556eb1
    RET                                 ; 00556eb2


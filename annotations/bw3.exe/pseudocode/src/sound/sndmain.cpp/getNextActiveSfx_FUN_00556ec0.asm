; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl sound_sndmain_cpp_getNextActiveSfx_FUN_00556ec0(uint current_sfx_handle)
;
; Parameters:
; uint             Stack[0x4]:4   current_sfx_handle
;
; XREF[1]:
;   core_game.cpp_FUN_004b6f30 at 004b7822
;
; Referenced Globals:
;   undefined4 DAT_02ce7280
;   undefined4 DAT_02ce739c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556ec0
        ;   Label: sound_sndmain.cpp_getNextActiveSfx_FUN_00556ec0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00556ec1
    AND EDX,0x3f                        ; 00556ec5
    INC EDX                             ; 00556ec8
    CMP EDX,0x40                        ; 00556ec9
    JGE 0x00556eff                      ; 00556ecc
        ;   XREF to: 00556eff (CONDITIONAL_JUMP)  ; LAB_00556eff
    LEA EAX,[EDX*0x8 + 0x0]             ; 00556ece
    ADD EAX,EDX                         ; 00556ed5
    SHL EAX,0x3                         ; 00556ed7
    SUB EAX,EDX                         ; 00556eda
    SHL EAX,0x2                         ; 00556edc
    CMP dword ptr [EAX + 0x2ce7284],0x0 ; 00556edf
        ;   Label: LAB_00556edf
    JZ 0x00556ef2                       ; 00556ee6
        ;   XREF to: 00556ef2 (CONDITIONAL_JUMP)  ; LAB_00556ef2
    MOV EBX,dword ptr [EAX + 0x2ce7280] ; 00556ee8 | DAT_02ce7280 | DAT_02ce739c
    TEST EBX,EBX                        ; 00556eee
    JNZ 0x00556f03                      ; 00556ef0
        ;   XREF to: 00556f03 (CONDITIONAL_JUMP)  ; LAB_00556f03
    ADD EAX,0x11c                       ; 00556ef2
        ;   Label: LAB_00556ef2
    INC EDX                             ; 00556ef7
    CMP EAX,0x4700                      ; 00556ef8
    JL 0x00556edf                       ; 00556efd
        ;   XREF to: 00556edf (CONDITIONAL_JUMP)  ; LAB_00556edf
    XOR EAX,EAX                         ; 00556eff
        ;   Label: LAB_00556eff
    POP EBX                             ; 00556f01
    RET                                 ; 00556f02
    MOV EAX,EBX                         ; 00556f03
        ;   Label: LAB_00556f03
    SHL EAX,0x6                         ; 00556f05
    OR EAX,EDX                          ; 00556f08
    POP EBX                             ; 00556f0a
    RET                                 ; 00556f0b


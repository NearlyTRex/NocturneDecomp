; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_CSound_killSound_FUN_0052ebb0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[7]:
;   core_dynamite.cpp_CDynamite_process_FUN_0046edc0 at 0046ee49
;   core_flame.cpp_CFlame_process_FUN_0048d0c0 at 0048d46d
;   core_flamegun.cpp_FUN_0048eb30 at 0048eb67
;   core_ghoul.cpp_FUN_004a9270 at 004aaca7
;   core_platfrm.cpp_FUN_004f6170 at 004f6712
;   core_sound.cpp_CSound_playAmbientSound_FUN_0052e9d0 at 0052e9de
;   core_sound.cpp_FUN_0052dff0 at 0052e569
;
; Called Functions:
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0052ebb0
        ;   Label: core_sound.cpp_CSound_killSound_FUN_0052ebb0
    PUSH EDX                            ; 0052ebb4
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 0052ebb5
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 0052ebba
    RET                                 ; 0052ebbd


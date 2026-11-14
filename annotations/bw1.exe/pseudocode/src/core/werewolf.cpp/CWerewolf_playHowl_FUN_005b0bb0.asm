; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_playHowl_FUN_005b0bb0(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_werewolf.cpp_CWerewolf_processDamage_FUN_005b1470 at 005b15ae
;   core_werewolf.cpp_CWerewolf_process_FUN_005af4a0 at 005b021f
;
; Referenced Globals:
;   TerminatedCString s_were_wav_005f9b22
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0bb0
        ;   Label: core_werewolf.cpp_CWerewolf_playHowl_FUN_005b0bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b0bb1
    MOV EDX,dword ptr [EBX + 0xc284]    ; 005b0bb5
    PUSH EDX                            ; 005b0bbb
    MOV dword ptr [EBX + 0xc288],0x41200000 ; 005b0bbc
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 005b0bc6
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005b0bcb
    TEST EAX,EAX                        ; 005b0bce
    JZ 0x005b0bd4                       ; 005b0bd0
        ;   XREF to: 005b0bd4 (CONDITIONAL_JUMP)  ; LAB_005b0bd4
    POP EBX                             ; 005b0bd2
    RET                                 ; 005b0bd3
    PUSH 0x5f9b22                       ; 005b0bd4 | = "were?.wav"
        ;   Label: LAB_005b0bd4
    MOV EAX,dword ptr [EBX + 0x154]     ; 005b0bd9
    PUSH EBX                            ; 005b0bdf
    CALL dword ptr [EAX + 0x2c]         ; 005b0be0
    MOV dword ptr [EBX + 0xc288],0x41a00000 ; 005b0be3
    ADD ESP,0x8                         ; 005b0bed
    MOV dword ptr [EBX + 0xc284],EAX    ; 005b0bf0
    POP EBX                             ; 005b0bf6
    RET                                 ; 005b0bf7


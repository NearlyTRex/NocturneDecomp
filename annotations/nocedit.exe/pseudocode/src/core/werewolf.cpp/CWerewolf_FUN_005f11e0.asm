; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_FUN_005f11e0(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_werewolf.cpp_CWerewolf_processDamage_FUN_005f1ac0 at 005f1bdb
;   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 at 005f0943
;
; Referenced Globals:
;   TerminatedCString s_were_wav_00657da4
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f11e0
        ;   Label: core_werewolf.cpp_CWerewolf_FUN_005f11e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005f11e1
    MOV EDX,dword ptr [EBX + 0xbed8]    ; 005f11e5
    PUSH EDX                            ; 005f11eb
    MOV dword ptr [EBX + 0xbedc],0x41200000 ; 005f11ec
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005f11f6
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005f11fb
    TEST EAX,EAX                        ; 005f11fe
    JZ 0x005f1204                       ; 005f1200
        ;   XREF to: 005f1204 (CONDITIONAL_JUMP)  ; LAB_005f1204
    POP EBX                             ; 005f1202
    RET                                 ; 005f1203
    PUSH 0x657da4                       ; 005f1204 | = "were?.wav"
        ;   Label: LAB_005f1204
    MOV EAX,dword ptr [EBX + 0x154]     ; 005f1209
    PUSH EBX                            ; 005f120f
    CALL dword ptr [EAX + 0x24]         ; 005f1210
    MOV dword ptr [EBX + 0xbedc],0x41a00000 ; 005f1213
    ADD ESP,0x8                         ; 005f121d
    MOV dword ptr [EBX + 0xbed8],EAX    ; 005f1220
    POP EBX                             ; 005f1226
    RET                                 ; 005f1227


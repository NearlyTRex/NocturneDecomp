; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_FUN_0058d060(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_werewolf.cpp_FUN_0058b950 at 0058c6cf
;   core_werewolf.cpp_FUN_0058d920 at 0058da5e
;
; Referenced Globals:
;   TerminatedCString s_were_wav_005ee74a
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00550b70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d060
        ;   Label: core_werewolf.cpp_FUN_0058d060
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058d061
    MOV EDX,dword ptr [EBX + 0x10b14]   ; 0058d065
    PUSH EDX                            ; 0058d06b
    MOV dword ptr [EBX + 0x10b18],0x41200000 ; 0058d06c
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0058d076
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0058d07b
    TEST EAX,EAX                        ; 0058d07e
    JZ 0x0058d084                       ; 0058d080
        ;   XREF to: 0058d084 (CONDITIONAL_JUMP)  ; LAB_0058d084
    POP EBX                             ; 0058d082
    RET                                 ; 0058d083
    PUSH 0x5ee74a                       ; 0058d084 | = "were?.wav"
        ;   Label: LAB_0058d084
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0058d089
    PUSH EBX                            ; 0058d08f
    CALL dword ptr [EAX + 0x34]         ; 0058d090
    MOV dword ptr [EBX + 0x10b18],0x41a00000 ; 0058d093
    ADD ESP,0x8                         ; 0058d09d
    MOV dword ptr [EBX + 0x10b14],EAX   ; 0058d0a0
    POP EBX                             ; 0058d0a6
    RET                                 ; 0058d0a7


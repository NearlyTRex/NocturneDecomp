; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl sound_sndmain_cpp_killSoundThread_FUN_00528780(void)
;
;
; XREF[3]:
;   sound_snddx.cpp_CDirectSoundDevice_reset_FUN_0052a0d0 at 0052a168
;   sound_sndmain.cpp_startSoundThread_FUN_005286d0 at 005286d7
;   sound_sndwav.cpp_CWavOutDevice_reset_FUN_0052c3f0 at 0052c426
;
; Referenced Globals:
;   TerminatedCString s_killSoundThread_failed_005938ee
;   undefined4 DAT_02dc84b0
;   undefined4 DAT_02dc84b4
;
; Called Functions:
;   FUN_00529980
;   wincore_winrun.cpp_sleep_FUN_00559cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528780
        ;   Label: sound_sndmain.cpp_killSoundThread_FUN_00528780
    PUSH EBP                            ; 00528781
    MOV EBP,ESP                         ; 00528782
    AND ESP,0xfffffff8                  ; 00528784
    MOV EDX,0x1                         ; 00528787
    MOV ECX,dword ptr [0x02dc84b0]      ; 0052878c | DAT_02dc84b0
    XOR EBX,EBX                         ; 00528792
    MOV dword ptr [0x02dc84b4],EDX      ; 00528794 | DAT_02dc84b4
    TEST ECX,ECX                        ; 0052879a
    JZ 0x005287bf                       ; 0052879c
        ;   XREF to: 005287bf (CONDITIONAL_JUMP)  ; LAB_005287bf
    PUSH 0x3f847ae1                     ; 0052879e
        ;   Label: LAB_0052879e
    PUSH 0x47ae147b                     ; 005287a3
    INC EBX                             ; 005287a8
    CALL wincore_winrun.cpp_sleep_FUN_00559cc0 ; 005287a9
        ;   XREF to: 00559cc0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_sleep_FUN_00559cc0()
    ADD ESP,0x8                         ; 005287ae
    CMP EBX,0x64                        ; 005287b1
    JGE 0x005287bf                      ; 005287b4
        ;   XREF to: 005287bf (CONDITIONAL_JUMP)  ; LAB_005287bf
    CMP dword ptr [0x02dc84b0],0x0      ; 005287b6 | DAT_02dc84b0
    JNZ 0x0052879e                      ; 005287bd
        ;   XREF to: 0052879e (CONDITIONAL_JUMP)  ; LAB_0052879e
    CMP dword ptr [0x02dc84b0],0x0      ; 005287bf | DAT_02dc84b0
        ;   Label: LAB_005287bf
    JNZ 0x005287dc                      ; 005287c6
        ;   XREF to: 005287dc (CONDITIONAL_JUMP)  ; LAB_005287dc
    CMP dword ptr [0x02dc84b0],0x0      ; 005287c8 | DAT_02dc84b0
    SETZ AL                             ; 005287cf
    AND EAX,0xff                        ; 005287d2
    MOV ESP,EBP                         ; 005287d7
    POP EBP                             ; 005287d9
    POP EBX                             ; 005287da
    RET                                 ; 005287db
    PUSH 0x5938ee                       ; 005287dc | = "killSoundThread - failed!\n"
        ;   Label: LAB_005287dc
    CALL FUN_00529980                   ; 005287e1
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined FUN_00529980()
    ADD ESP,0x4                         ; 005287e6
    CMP dword ptr [0x02dc84b0],0x0      ; 005287e9 | DAT_02dc84b0
    SETZ AL                             ; 005287f0
    AND EAX,0xff                        ; 005287f3
    MOV ESP,EBP                         ; 005287f8
    POP EBP                             ; 005287fa
    POP EBX                             ; 005287fb
    RET                                 ; 005287fc


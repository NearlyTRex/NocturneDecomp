; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double sound_snddx_cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005940b7
;   TerminatedCString s_sound_snddx_cpp_005946ae
;   TerminatedCString s_DirectSoundDevice_getSfx_005946c1
;   TerminatedCString s_Get_playback_cursor_of_h_005946f7
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
;   sound_sndmain.cpp_FUN_00529980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052b880
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_getSfxPlaybackPos_FUN_0052b880
    PUSH ESI                            ; 0052b881
    PUSH EDI                            ; 0052b882
    PUSH EBP                            ; 0052b883
    MOV EBP,ESP                         ; 0052b884
    SUB ESP,0x1a8                       ; 0052b886
    AND ESP,0xfffffff8                  ; 0052b88c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0052b88f
    MOV EBX,dword ptr [EBX + 0x6c]      ; 0052b892
    TEST EBX,EBX                        ; 0052b895
    JLE 0x0052b8a2                      ; 0052b897
        ;   XREF to: 0052b8a2 (CONDITIONAL_JUMP)  ; LAB_0052b8a2
    CMP EBX,0x1f                        ; 0052b899
    JL 0x0052b92a                       ; 0052b89c
        ;   XREF to: 0052b92a (CONDITIONAL_JUMP)  ; LAB_0052b92a
    MOV ESI,0x5946ae                    ; 0052b8a2 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_0052b8a2
    MOV EDI,0x3a7                       ; 0052b8a7
    PUSH 0x5946c1                       ; 0052b8ac | = "DirectSoundDevice::getSfxPlaybackPos ..."
    MOV dword ptr [0x01cc4800],ESI      ; 0052b8b1 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 0052b8b7 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0052b8bd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0052b8c2
    LEA EDX,[ESP + 0x1a0]               ; 0052b8c5
        ;   Label: LAB_0052b8c5
    PUSH EDX                            ; 0052b8cc
    LEA EDX,[ESP + 0x1a8]               ; 0052b8cd
    MOV EAX,dword ptr [EBX*0x4 + 0x2dc92a8] ; 0052b8d4
    PUSH EDX                            ; 0052b8db
    MOV EBX,dword ptr [EAX]             ; 0052b8dc
    PUSH EAX                            ; 0052b8de
    CALL dword ptr [EBX + 0x10]         ; 0052b8df
    TEST EAX,EAX                        ; 0052b8e2
    JNZ 0x0052b950                      ; 0052b8e4
        ;   XREF to: 0052b950 (CONDITIONAL_JUMP)  ; LAB_0052b950
    MOV EAX,dword ptr [EBP + 0x18]      ; 0052b8e6
    MOV ECX,dword ptr [EAX + 0x74]      ; 0052b8e9
    PUSH ECX                            ; 0052b8ec
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40 ; 0052b8ed
        ;   XREF to: 00525c40 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_00525c40()
    MOV EBX,EAX                         ; 0052b8f2
    ADD ESP,0x4                         ; 0052b8f4
    XOR EDX,EDX                         ; 0052b8f7
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 0052b8f9
    DIV EBX                             ; 0052b900
    XOR EBX,EBX                         ; 0052b902
    MOV dword ptr [ESP + 0x198],EAX     ; 0052b904
    MOV dword ptr [ESP + 0x19c],EBX     ; 0052b90b
    FILD qword ptr [ESP + 0x198]        ; 0052b912
    FSTP double ptr [ESP]               ; 0052b919
    MOV EAX,dword ptr [ESP]             ; 0052b91c
    MOV EDX,dword ptr [ESP + 0x4]       ; 0052b91f
    MOV ESP,EBP                         ; 0052b923
    POP EBP                             ; 0052b925
    POP EDI                             ; 0052b926
    POP ESI                             ; 0052b927
    POP EBX                             ; 0052b928
    RET                                 ; 0052b929
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052b92a
        ;   Label: LAB_0052b92a
    CMP dword ptr [EAX + 0x2dc92a8],0x0 ; 0052b931
    JZ 0x0052b8a2                       ; 0052b938
        ;   XREF to: 0052b8a2 (CONDITIONAL_JUMP)  ; LAB_0052b8a2
    CMP dword ptr [EAX + 0x2dc9324],0x0 ; 0052b93e
    JZ 0x0052b8a2                       ; 0052b945
        ;   XREF to: 0052b8a2 (CONDITIONAL_JUMP)  ; LAB_0052b8a2
    JMP 0x0052b8c5                      ; 0052b94b
        ;   XREF to: 0052b8c5 (UNCONDITIONAL_JUMP)  ; LAB_0052b8c5
    PUSH EAX                            ; 0052b950
        ;   Label: LAB_0052b950
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90 ; 0052b951
        ;   XREF to: 00529a90 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_getDirectSoundErrorString_FUN_00529a90()
    ADD ESP,0x4                         ; 0052b956
    PUSH EAX                            ; 0052b959
    PUSH 0x5946f7                       ; 0052b95a | = "Get playback cursor of hardware sfx s..."
    PUSH 0x5940b7                       ; 0052b95f | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 0052b964
    PUSH EAX                            ; 0052b968
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0052b969
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 0052b96e
    LEA EAX,[ESP + 0x8]                 ; 0052b971
    PUSH EAX                            ; 0052b975
    CALL sound_sndmain.cpp_FUN_00529980 ; 0052b976
        ;   XREF to: 00529980 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00529980()
    ADD ESP,0x4                         ; 0052b97b
    XOR EAX,EAX                         ; 0052b97e
    MOV EDX,0xbff00000                  ; 0052b980
    MOV dword ptr [ESP],EAX             ; 0052b985
    MOV dword ptr [ESP + 0x4],EDX       ; 0052b988
    MOV EAX,dword ptr [ESP]             ; 0052b98c
    MOV EDX,dword ptr [ESP + 0x4]       ; 0052b98f
    MOV ESP,EBP                         ; 0052b993
    POP EBP                             ; 0052b995
    POP EDI                             ; 0052b996
    POP ESI                             ; 0052b997
    POP EBX                             ; 0052b998
    RET                                 ; 0052b999


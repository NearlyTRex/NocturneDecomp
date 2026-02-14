; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl sound_snddx_cpp_CDirectSoundDevice_setSfxPos_FUN_005af750(CDirectSoundDevice *this_ptr,CSfxSlot *slot,int update_flags)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; CSfxSlot *       Stack[0x8]:4   slot
; int              Stack[0xc]:4   update_flags
; Local Variables:
; undefined4       Stack[-0xcd0]:4  local_cd0
; undefined4       Stack[-0xccc]:4  local_ccc
; undefined4       Stack[-0xcc8]:4  local_cc8
; undefined4       Stack[-0xcb8]:4  local_cb8
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_sound_snddx_cpp_00651e80
;   TerminatedCString s_DirectSoundDevice_setSfx_00651e93
;   TerminatedCString s_Set_hardware_sfx_3d_buff_00651ec1
;   TerminatedCString s_Set_hardware_sfx_3d_buff_00651ee5
;   TerminatedCString s_Set_hardware_sfx_seconda_00651f09
;   TerminatedCString s_Set_hardware_sfx_seconda_00651f32
;   TerminatedCString s_Set_hardware_sfx_3d_buff_00651f5e
;   TerminatedCString s_Set_hardware_sfx_3d_buff_00651f7e
;   TerminatedCString s_Set_hardware_sfx_3d_buff_00651faa
;   TerminatedCString s_sound_snddx_cpp_00651fd6
;   TerminatedCString s_DirectSoundDevice_setSfx_00651fe9
;   TerminatedCString s_Commit_hardware_sfx_3d_b_00652023
;   TerminatedCString s_DirectSoundDevice_setSfx_0065204a
;   double DOUBLE_00652074 = 868.589000000000
;   ... and 5 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af750
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_setSfxPos_FUN_005af750
    PUSH ESI                            ; 005af751
    PUSH EDI                            ; 005af752
    PUSH EBP                            ; 005af753
    MOV EBP,ESP                         ; 005af754
    SUB ESP,0xcac                       ; 005af756
    AND ESP,0xfffffff8                  ; 005af75c
    MOV EBX,dword ptr [EBP + 0x18]      ; 005af75f
    MOV ESI,dword ptr [EBX + 0x70]      ; 005af762
    TEST ESI,ESI                        ; 005af765
    JLE 0x005af772                      ; 005af767
        ;   XREF to: 005af772 (CONDITIONAL_JUMP)  ; LAB_005af772
    CMP ESI,0x1f                        ; 005af769
    JL 0x005af9da                       ; 005af76c
        ;   XREF to: 005af9da (CONDITIONAL_JUMP)  ; LAB_005af9da
    MOV EDI,0x651e80                    ; 005af772 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_005af772
    MOV EAX,0x322                       ; 005af777
    PUSH 0x651e93                       ; 005af77c | = "DirectSoundDevice::setSfxPos - invali..."
    MOV dword ptr [0x02f0ca48],EDI      ; 005af781 | g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 005af787 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005af78c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005af791
    MOV EDI,0x1                         ; 005af794
        ;   Label: LAB_005af794
    XOR EDX,EDX                         ; 005af799
    MOV EAX,dword ptr [ESI*0x4 + 0x3f6aa44] ; 005af79b | g_DirectSoundHardwareSfxBuffers
    MOV dword ptr [ESP + 0xc9c],EDX     ; 005af7a2
    MOV dword ptr [ESP + 0xca0],EAX     ; 005af7a9
    MOV ESI,dword ptr [ESI*0x4 + 0x3f6aac0] ; 005af7b0 | g_DirectSound3DBufferInterfaces
    TEST EAX,EAX                        ; 005af7b7
    JZ 0x005afa00                       ; 005af7b9
        ;   XREF to: 005afa00 (CONDITIONAL_JUMP)  ; LAB_005afa00
    TEST ESI,ESI                        ; 005af7bf
    JZ 0x005afa00                       ; 005af7c1
        ;   XREF to: 005afa00 (CONDITIONAL_JUMP)  ; LAB_005afa00
    TEST byte ptr [EBP + 0x1c],0x88     ; 005af7c7
    JZ 0x005af810                       ; 005af7cb
        ;   XREF to: 005af810 (CONDITIONAL_JUMP)  ; LAB_005af810
    MOV EAX,dword ptr [EBX + 0x100]     ; 005af7cd
    MOV dword ptr [ESP + 0xc94],EAX     ; 005af7d3
    MOV EAX,dword ptr [EBX + 0x108]     ; 005af7da
    MOV dword ptr [ESP + 0xc98],EAX     ; 005af7e0
    MOV EAX,dword ptr [EBX]             ; 005af7e7
    PUSH EAX                            ; 005af7e9
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90 ; 005af7ea
        ;   XREF to: 005a9d90 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90(int channel_index)
    MOV dword ptr [ESP + 0xcac],EAX     ; 005af7ef
    FLD float ptr [ESP + 0xcac]         ; 005af7f6
    ADD ESP,0x4                         ; 005af7fd
    MOV DL,byte ptr [EBX + 0x5c]        ; 005af800
    FSTP float ptr [ESP + 0x8]          ; 005af803
    TEST DL,0x1                         ; 005af807
    JZ 0x005afa0b                       ; 005af80a
        ;   XREF to: 005afa0b (CONDITIONAL_JUMP)  ; LAB_005afa0b
    TEST byte ptr [EBP + 0x1c],0x2      ; 005af810
        ;   Label: LAB_005af810
    JZ 0x005af84c                       ; 005af814
        ;   XREF to: 005af84c (CONDITIONAL_JUMP)  ; LAB_005af84c
    PUSH 0x1                            ; 005af816
    FLD double ptr [EBX + 0x14]         ; 005af818
    SUB ESP,0x4                         ; 005af81b
    MOV EAX,dword ptr [ESI]             ; 005af81e
    FSTP float ptr [ESP]                ; 005af820
    SUB ESP,0x4                         ; 005af823
    FLD double ptr [EBX + 0xc]          ; 005af826
    FSTP float ptr [ESP]                ; 005af829
    SUB ESP,0x4                         ; 005af82c
    FLD double ptr [EBX + 0x4]          ; 005af82f
    FSTP float ptr [ESP]                ; 005af832
    PUSH ESI                            ; 005af835
    CALL dword ptr [EAX + 0x4c]         ; 005af836
    TEST EAX,EAX                        ; 005af839
    JNZ 0x005afa51                      ; 005af83b
        ;   XREF to: 005afa51 (CONDITIONAL_JUMP)  ; LAB_005afa51
    MOV dword ptr [ESP + 0xc9c],0x1     ; 005af841
        ;   Label: LAB_005af841
    TEST byte ptr [EBP + 0x1c],0x4      ; 005af84c
        ;   Label: LAB_005af84c
    JZ 0x005af888                       ; 005af850
        ;   XREF to: 005af888 (CONDITIONAL_JUMP)  ; LAB_005af888
    PUSH 0x1                            ; 005af852
    FLD double ptr [EBX + 0x34]         ; 005af854
    SUB ESP,0x4                         ; 005af857
    MOV EAX,dword ptr [ESI]             ; 005af85a
    FSTP float ptr [ESP]                ; 005af85c
    SUB ESP,0x4                         ; 005af85f
    FLD double ptr [EBX + 0x2c]         ; 005af862
    FSTP float ptr [ESP]                ; 005af865
    SUB ESP,0x4                         ; 005af868
    FLD double ptr [EBX + 0x24]         ; 005af86b
    FSTP float ptr [ESP]                ; 005af86e
    PUSH ESI                            ; 005af871
    CALL dword ptr [EAX + 0x50]         ; 005af872
    TEST EAX,EAX                        ; 005af875
    JNZ 0x005afa8c                      ; 005af877
        ;   XREF to: 005afa8c (CONDITIONAL_JUMP)  ; LAB_005afa8c
    MOV dword ptr [ESP + 0xc9c],0x1     ; 005af87d
        ;   Label: LAB_005af87d
    TEST byte ptr [EBP + 0x1c],0x8      ; 005af888
        ;   Label: LAB_005af888
    JZ 0x005af8d7                       ; 005af88c
        ;   XREF to: 005af8d7 (CONDITIONAL_JUMP)  ; LAB_005af8d7
    FLD float ptr [EBX + 0x44]          ; 005af88e
    FMUL float ptr [ESP + 0x8]          ; 005af891
    FLDZ                                ; 005af895
    FXCH                                ; 005af897
    FSTP double ptr [ESP]               ; 005af899
    FCOMP double ptr [ESP]              ; 005af89c
    FNSTSW AX                           ; 005af89f
    SAHF                                ; 005af8a1
    JC 0x005afac7                       ; 005af8a2
        ;   XREF to: 005afac7 (CONDITIONAL_JUMP)  ; LAB_005afac7
    MOV dword ptr [ESP + 0xca4],0xffffd8f0 ; 005af8a8
        ;   Label: LAB_005af8a8
    MOV EDX,dword ptr [ESP + 0xca4]     ; 005af8b3
        ;   Label: LAB_005af8b3
    MOV EAX,dword ptr [ESP + 0xca0]     ; 005af8ba
    PUSH EDX                            ; 005af8c1
    MOV ECX,dword ptr [ESP + 0xca4]     ; 005af8c2
    MOV EAX,dword ptr [EAX]             ; 005af8c9
    PUSH ECX                            ; 005af8cb
    CALL dword ptr [EAX + 0x3c]         ; 005af8cc
    TEST EAX,EAX                        ; 005af8cf
    JNZ 0x005afb46                      ; 005af8d1
        ;   XREF to: 005afb46 (CONDITIONAL_JUMP)  ; LAB_005afb46
    TEST byte ptr [EBP + 0x1c],0x10     ; 005af8d7
        ;   Label: LAB_005af8d7
    JZ 0x005af919                       ; 005af8db
        ;   XREF to: 005af919 (CONDITIONAL_JUMP)  ; LAB_005af919
    MOV EDX,dword ptr [EBX + 0x78]      ; 005af8dd
    FILD dword ptr [EDX + 0x10c]        ; 005af8e0
    FMUL float ptr [EBX + 0x48]         ; 005af8e6
    CALL crt_math.c_round_FUN_005fe6b0  ; 005af8e9
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP qword ptr [ESP + 0xc8c]       ; 005af8ee
    MOV EDX,dword ptr [ESP + 0xc8c]     ; 005af8f5
    MOV EAX,dword ptr [ESP + 0xca0]     ; 005af8fc
    PUSH EDX                            ; 005af903
    MOV EDX,dword ptr [ESP + 0xca4]     ; 005af904
    MOV EAX,dword ptr [EAX]             ; 005af90b
    PUSH EDX                            ; 005af90d
    CALL dword ptr [EAX + 0x44]         ; 005af90e
    TEST EAX,EAX                        ; 005af911
    JNZ 0x005afb81                      ; 005af913
        ;   XREF to: 005afb81 (CONDITIONAL_JUMP)  ; LAB_005afb81
    TEST byte ptr [EBP + 0x1c],0x40     ; 005af919
        ;   Label: LAB_005af919
    JZ 0x005af94a                       ; 005af91d
        ;   XREF to: 005af94a (CONDITIONAL_JUMP)  ; LAB_005af94a
    MOV DL,byte ptr [EBX + 0x5c]        ; 005af91f
    XOR EAX,EAX                         ; 005af922
    TEST DL,0x1                         ; 005af924
    JZ 0x005af92e                       ; 005af927
        ;   XREF to: 005af92e (CONDITIONAL_JUMP)  ; LAB_005af92e
    MOV EAX,0x2                         ; 005af929
    PUSH 0x1                            ; 005af92e
        ;   Label: LAB_005af92e
    PUSH EAX                            ; 005af930
    MOV EDX,dword ptr [ESI]             ; 005af931
    PUSH ESI                            ; 005af933
    CALL dword ptr [EDX + 0x48]         ; 005af934
    TEST EAX,EAX                        ; 005af937
    JNZ 0x005afbbc                      ; 005af939
        ;   XREF to: 005afbbc (CONDITIONAL_JUMP)  ; LAB_005afbbc
    MOV dword ptr [ESP + 0xc9c],0x1     ; 005af93f
        ;   Label: LAB_005af93f
    TEST byte ptr [EBP + 0x1c],0x80     ; 005af94a
        ;   Label: LAB_005af94a
    JZ 0x005afc67                       ; 005af94e
        ;   XREF to: 005afc67 (CONDITIONAL_JUMP)  ; LAB_005afc67
    PUSH 0x1                            ; 005af954
    MOV EAX,dword ptr [ESI]             ; 005af956
    PUSH dword ptr [ESP + 0xc98]        ; 005af958
    PUSH ESI                            ; 005af95f
    CALL dword ptr [EAX + 0x44]         ; 005af960
    TEST EAX,EAX                        ; 005af963
    JNZ 0x005afbf7                      ; 005af965
        ;   XREF to: 005afbf7 (CONDITIONAL_JUMP)  ; LAB_005afbf7
    PUSH 0x1                            ; 005af96b
        ;   Label: LAB_005af96b
    MOV EAX,dword ptr [ESI]             ; 005af96d
    PUSH dword ptr [ESP + 0xc9c]        ; 005af96f
    PUSH ESI                            ; 005af976
    CALL dword ptr [EAX + 0x40]         ; 005af977
    TEST EAX,EAX                        ; 005af97a
    JNZ 0x005afc32                      ; 005af97c
        ;   XREF to: 005afc32 (CONDITIONAL_JUMP)  ; LAB_005afc32
    CMP dword ptr [0x03f6a9bc],0x0      ; 005af982 | g_DirectSound3DListener
        ;   Label: LAB_005af982
    JNZ 0x005af9ad                      ; 005af989
        ;   XREF to: 005af9ad (CONDITIONAL_JUMP)  ; LAB_005af9ad
    MOV EAX,0x651fd6                    ; 005af98b | = "..\\sound\\snddx.cpp"
    MOV EDX,0x3ab                       ; 005af990
    PUSH 0x651fe9                       ; 005af995 | = "DirectSoundDevice::setSfxOpt - no 3d ..."
    MOV [0x02f0ca48],EAX                ; 005af99a | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005af99f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005af9a5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005af9aa
    MOV EAX,[0x03f6a9bc]                ; 005af9ad | g_DirectSound3DListener
        ;   Label: LAB_005af9ad
    PUSH EAX                            ; 005af9b2
    MOV EBX,dword ptr [EAX]             ; 005af9b3
    CALL dword ptr [EBX + 0x44]         ; 005af9b5
    TEST EAX,EAX                        ; 005af9b8
    JNZ 0x005afc7a                      ; 005af9ba
        ;   XREF to: 005afc7a (CONDITIONAL_JUMP)  ; LAB_005afc7a
    TEST EDI,EDI                        ; 005af9c0
        ;   Label: LAB_005af9c0
    JNZ 0x005af9d1                      ; 005af9c2
        ;   XREF to: 005af9d1 (CONDITIONAL_JUMP)  ; LAB_005af9d1
    PUSH 0x65204a                       ; 005af9c4 | = "DirectSoundDevice::setSfxOpt - failed\n"
        ;   Label: LAB_005af9c4
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005af9c9
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005af9ce
    MOV EAX,EDI                         ; 005af9d1
        ;   Label: LAB_005af9d1
    MOV ESP,EBP                         ; 005af9d3
    POP EBP                             ; 005af9d5
    POP EDI                             ; 005af9d6
    POP ESI                             ; 005af9d7
    POP EBX                             ; 005af9d8
    RET                                 ; 005af9d9
    LEA EAX,[ESI*0x4 + 0x0]             ; 005af9da
        ;   Label: LAB_005af9da
    CMP dword ptr [EAX + 0x3f6aa44],0x0 ; 005af9e1 | g_DirectSoundHardwareSfxBuffers
    JZ 0x005af772                       ; 005af9e8
        ;   XREF to: 005af772 (CONDITIONAL_JUMP)  ; LAB_005af772
    CMP dword ptr [EAX + 0x3f6aac0],0x0 ; 005af9ee | g_DirectSound3DBufferInterfaces
    JZ 0x005af772                       ; 005af9f5
        ;   XREF to: 005af772 (CONDITIONAL_JUMP)  ; LAB_005af772
    JMP 0x005af794                      ; 005af9fb
        ;   XREF to: 005af794 (UNCONDITIONAL_JUMP)  ; LAB_005af794
    XOR EDI,EDI                         ; 005afa00
        ;   Label: LAB_005afa00
    MOV EAX,EDI                         ; 005afa02
    MOV ESP,EBP                         ; 005afa04
    POP EBP                             ; 005afa06
    POP EDI                             ; 005afa07
    POP ESI                             ; 005afa08
    POP EBX                             ; 005afa09
    RET                                 ; 005afa0a
    FLD float ptr [ESP + 0x8]           ; 005afa0b
        ;   Label: LAB_005afa0b
    FLDZ                                ; 005afa0f
    FCOMPP                              ; 005afa11
    FNSTSW AX                           ; 005afa13
    SAHF                                ; 005afa15
    JNC 0x005af810                      ; 005afa16
        ;   XREF to: 005af810 (CONDITIONAL_JUMP)  ; LAB_005af810
    FLD float ptr [ESP + 0x8]           ; 005afa1c
    FDIV ST0,ST0                        ; 005afa20
    FLD float ptr [ESP + 0xc94]         ; 005afa22
    FMUL float ptr [ESP + 0x8]          ; 005afa29
    FLD float ptr [ESP + 0xc98]         ; 005afa2d
    FMUL float ptr [ESP + 0x8]          ; 005afa34
    FXCH                                ; 005afa38
    FSTP float ptr [ESP + 0xc94]        ; 005afa3a
    FSTP float ptr [ESP + 0xc98]        ; 005afa41
    FSTP float ptr [ESP + 0x8]          ; 005afa48
    JMP 0x005af810                      ; 005afa4c
        ;   XREF to: 005af810 (UNCONDITIONAL_JUMP)  ; LAB_005af810
    PUSH EAX                            ; 005afa51
        ;   Label: LAB_005afa51
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afa52
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afa57
    PUSH EAX                            ; 005afa5a
    PUSH 0x651ec1                       ; 005afa5b | = "Set hardware sfx 3d buffer position"
    PUSH 0x651a6c                       ; 005afa60 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4c8]               ; 005afa65
    PUSH EAX                            ; 005afa6c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005afa6d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afa72
    LEA EAX,[ESP + 0x4bc]               ; 005afa75
    PUSH EAX                            ; 005afa7c
    XOR EDI,EDI                         ; 005afa7d
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afa7f
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afa84
    JMP 0x005af841                      ; 005afa87
        ;   XREF to: 005af841 (UNCONDITIONAL_JUMP)  ; LAB_005af841
    PUSH EAX                            ; 005afa8c
        ;   Label: LAB_005afa8c
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afa8d
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afa92
    PUSH EAX                            ; 005afa95
    PUSH 0x651ee5                       ; 005afa96 | = "Set hardware sfx 3d buffer velocity"
    PUSH 0x651a6c                       ; 005afa9b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x338]               ; 005afaa0
    PUSH EAX                            ; 005afaa7
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005afaa8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afaad
    LEA EAX,[ESP + 0x32c]               ; 005afab0
    PUSH EAX                            ; 005afab7
    XOR EDI,EDI                         ; 005afab8
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afaba
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afabf
    JMP 0x005af87d                      ; 005afac2
        ;   XREF to: 005af87d (UNCONDITIONAL_JUMP)  ; LAB_005af87d
    FLD1                                ; 005afac7
        ;   Label: LAB_005afac7
    FCOMP double ptr [ESP]              ; 005afac9
    FNSTSW AX                           ; 005afacc
    SAHF                                ; 005aface
    JA 0x005afadf                       ; 005afacf
        ;   XREF to: 005afadf (CONDITIONAL_JUMP)  ; LAB_005afadf
    XOR EDX,EDX                         ; 005afad1
    MOV dword ptr [ESP + 0xca4],EDX     ; 005afad3
    JMP 0x005af8b3                      ; 005afada
        ;   XREF to: 005af8b3 (UNCONDITIONAL_JUMP)  ; LAB_005af8b3
    FLD double ptr [ESP]                ; 005afadf
        ;   Label: LAB_005afadf
    FLDLN2                              ; 005afae2
    FXCH                                ; 005afae4
    FYL2X                               ; 005afae6
    FMUL double ptr [0x00652074]        ; 005afae8 | DOUBLE_00652074
    SUB ESP,0x8                         ; 005afaee
    FSTP double ptr [ESP]               ; 005afaf1
    CALL crt_math.c_floor_FUN_005feb90  ; 005afaf4
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0xc94],EAX     ; 005afaf9
    MOV dword ptr [ESP + 0xc98],EDX     ; 005afb00
    FLD double ptr [ESP + 0xc94]        ; 005afb07
    ADD ESP,0x8                         ; 005afb0e
    CALL crt_math.c_round_FUN_005fe6b0  ; 005afb11
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0xca4]       ; 005afb16
    MOV EAX,dword ptr [ESP + 0xca4]     ; 005afb1d
    TEST EAX,EAX                        ; 005afb24
    JLE 0x005afb36                      ; 005afb26
        ;   XREF to: 005afb36 (CONDITIONAL_JUMP)  ; LAB_005afb36
    XOR EAX,EAX                         ; 005afb28
    MOV dword ptr [ESP + 0xca4],EAX     ; 005afb2a
    JMP 0x005af8b3                      ; 005afb31
        ;   XREF to: 005af8b3 (UNCONDITIONAL_JUMP)  ; LAB_005af8b3
    CMP EAX,0xffffd8f0                  ; 005afb36
        ;   Label: LAB_005afb36
    JGE 0x005af8b3                      ; 005afb3b
        ;   XREF to: 005af8b3 (CONDITIONAL_JUMP)  ; LAB_005af8b3
    JMP 0x005af8a8                      ; 005afb41
        ;   XREF to: 005af8a8 (UNCONDITIONAL_JUMP)  ; LAB_005af8a8
    PUSH EAX                            ; 005afb46
        ;   Label: LAB_005afb46
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afb47
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afb4c
    PUSH EAX                            ; 005afb4f
    PUSH 0x651f09                       ; 005afb50 | = "Set hardware sfx secondary buffer volume"
    PUSH 0x651a6c                       ; 005afb55 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x7e8]               ; 005afb5a
    PUSH EAX                            ; 005afb61
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005afb62
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afb67
    LEA EAX,[ESP + 0x7dc]               ; 005afb6a
    PUSH EAX                            ; 005afb71
    XOR EDI,EDI                         ; 005afb72
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afb74
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afb79
    JMP 0x005af8d7                      ; 005afb7c
        ;   XREF to: 005af8d7 (UNCONDITIONAL_JUMP)  ; LAB_005af8d7
    PUSH EAX                            ; 005afb81
        ;   Label: LAB_005afb81
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afb82
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afb87
    PUSH EAX                            ; 005afb8a
    PUSH 0x651f32                       ; 005afb8b | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x651a6c                       ; 005afb90 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1a8]               ; 005afb95
    PUSH EAX                            ; 005afb9c
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005afb9d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afba2
    LEA EAX,[ESP + 0x19c]               ; 005afba5
    PUSH EAX                            ; 005afbac
    XOR EDI,EDI                         ; 005afbad
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afbaf
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afbb4
    JMP 0x005af919                      ; 005afbb7
        ;   XREF to: 005af919 (UNCONDITIONAL_JUMP)  ; LAB_005af919
    PUSH EAX                            ; 005afbbc
        ;   Label: LAB_005afbbc
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afbbd
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afbc2
    PUSH EAX                            ; 005afbc5
    PUSH 0x651f5e                       ; 005afbc6 | = "Set hardware sfx 3d buffer mode"
    PUSH 0x651a6c                       ; 005afbcb | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x658]               ; 005afbd0
    PUSH EAX                            ; 005afbd7
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005afbd8
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afbdd
    LEA EAX,[ESP + 0x64c]               ; 005afbe0
    PUSH EAX                            ; 005afbe7
    XOR EDI,EDI                         ; 005afbe8
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afbea
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afbef
    JMP 0x005af93f                      ; 005afbf2
        ;   XREF to: 005af93f (UNCONDITIONAL_JUMP)  ; LAB_005af93f
    PUSH EAX                            ; 005afbf7
        ;   Label: LAB_005afbf7
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afbf8
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afbfd
    PUSH EAX                            ; 005afc00
    PUSH 0x651f7e                       ; 005afc01 | = "Set hardware sfx 3d buffer minimum di..."
    PUSH 0x651a6c                       ; 005afc06 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x978]               ; 005afc0b
    PUSH EAX                            ; 005afc12
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005afc13
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afc18
    LEA EAX,[ESP + 0x96c]               ; 005afc1b
    PUSH EAX                            ; 005afc22
    XOR EDI,EDI                         ; 005afc23
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afc25
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afc2a
    JMP 0x005af96b                      ; 005afc2d
        ;   XREF to: 005af96b (UNCONDITIONAL_JUMP)  ; LAB_005af96b
    PUSH EAX                            ; 005afc32
        ;   Label: LAB_005afc32
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afc33
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afc38
    PUSH EAX                            ; 005afc3b
    PUSH 0x651faa                       ; 005afc3c | = "Set hardware sfx 3d buffer maximum di..."
    PUSH 0x651a6c                       ; 005afc41 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x18]                ; 005afc46
    PUSH EAX                            ; 005afc4a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005afc4b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afc50
    LEA EAX,[ESP + 0xc]                 ; 005afc53
    PUSH EAX                            ; 005afc57
    XOR EDI,EDI                         ; 005afc58
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afc5a
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afc5f
    JMP 0x005af982                      ; 005afc62
        ;   XREF to: 005af982 (UNCONDITIONAL_JUMP)  ; LAB_005af982
    CMP dword ptr [ESP + 0xc9c],0x0     ; 005afc67
        ;   Label: LAB_005afc67
    JNZ 0x005af982                      ; 005afc6f
        ;   XREF to: 005af982 (CONDITIONAL_JUMP)  ; LAB_005af982
    JMP 0x005af9c0                      ; 005afc75
        ;   XREF to: 005af9c0 (UNCONDITIONAL_JUMP)  ; LAB_005af9c0
    PUSH EAX                            ; 005afc7a
        ;   Label: LAB_005afc7a
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005afc7b
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
    ADD ESP,0x4                         ; 005afc80
    PUSH EAX                            ; 005afc83
    PUSH 0x652023                       ; 005afc84 | = "Commit hardware sfx 3d buffer settings"
    PUSH 0x651a6c                       ; 005afc89 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xb08]               ; 005afc8e
    PUSH EAX                            ; 005afc95
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005afc96
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005afc9b
    LEA EAX,[ESP + 0xafc]               ; 005afc9e
    PUSH EAX                            ; 005afca5
    XOR EDI,EDI                         ; 005afca6
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005afca8
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x4                         ; 005afcad
    JMP 0x005af9c4                      ; 005afcb0
        ;   XREF to: 005af9c4 (UNCONDITIONAL_JUMP)  ; LAB_005af9c4


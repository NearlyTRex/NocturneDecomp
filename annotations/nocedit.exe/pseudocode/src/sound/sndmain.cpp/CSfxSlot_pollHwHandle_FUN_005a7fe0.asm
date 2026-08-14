; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_005acdb0 at 005ace03
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_006504ad
;   TerminatedCString s_SfxSlot_pollHwHandle_no__006504c2
;   TerminatedCString s_Killing_looped_sfx_s_whi_006504e5
;   TerminatedCString s_Error_setting_hw_sfx_d_o_0065050a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a7fe0
        ;   Label: sound_sndmain.cpp_CSfxSlot_pollHwHandle_FUN_005a7fe0
    PUSH EDI                            ; 005a7fe1
    PUSH EBP                            ; 005a7fe2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a7fe3
    CMP dword ptr [EBX + 0x70],0x0      ; 005a7fe7
    JZ 0x005a8040                       ; 005a7feb
        ;   XREF to: 005a8040 (CONDITIONAL_JUMP)  ; LAB_005a8040
    CMP dword ptr [0x03f69268],0x0      ; 005a7fed | g_CSoundDevicePtr
    JZ 0x005a8044                       ; 005a7ff4
        ;   XREF to: 005a8044 (CONDITIONAL_JUMP)  ; LAB_005a8044
    CMP dword ptr [EBX + 0x78],0x0      ; 005a7ff6
    JNZ 0x005a801f                      ; 005a7ffa
        ;   XREF to: 005a801f (CONDITIONAL_JUMP)  ; LAB_005a801f
    MOV EDI,0x6504ad                    ; 005a7ffc | = "..\\sound\\sndmain.cpp"
    MOV EBP,0xb71                       ; 005a8001
    PUSH 0x6504c2                       ; 005a8006 | = "SfxSlot::pollHwHandle - no sample?"
    MOV dword ptr [0x02f0ca48],EDI      ; 005a800b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005a8011 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a8017
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a801c
    PUSH EBX                            ; 005a801f
        ;   Label: LAB_005a801f
    MOV EAX,[0x03f69268]                ; 005a8020 | g_CSoundDevicePtr
    PUSH EAX                            ; 005a8025
    MOV EDX,dword ptr [EAX]             ; 005a8026
    CALL dword ptr [EDX + 0x50]         ; 005a8028
    ADD ESP,0x8                         ; 005a802b
    TEST EAX,EAX                        ; 005a802e
    JZ 0x005a8051                       ; 005a8030
        ;   XREF to: 005a8051 (CONDITIONAL_JUMP)  ; LAB_005a8051
    MOV DL,byte ptr [EBX + 0x5c]        ; 005a8032
    XOR EAX,EAX                         ; 005a8035
    TEST DL,0x1                         ; 005a8037
    JZ 0x005a807f                       ; 005a803a
        ;   XREF to: 005a807f (CONDITIONAL_JUMP)  ; LAB_005a807f
    TEST EAX,EAX                        ; 005a803c
        ;   Label: LAB_005a803c
    JNZ 0x005a809a                      ; 005a803e
        ;   XREF to: 005a809a (CONDITIONAL_JUMP)  ; LAB_005a809a
    POP EBP                             ; 005a8040
        ;   Label: LAB_005a8040
    POP EDI                             ; 005a8041
    POP EBX                             ; 005a8042
    RET                                 ; 005a8043
    PUSH EBX                            ; 005a8044
        ;   Label: LAB_005a8044
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a8045
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005a804a
    POP EBP                             ; 005a804d
    POP EDI                             ; 005a804e
    POP EBX                             ; 005a804f
    RET                                 ; 005a8050
    MOV EAX,dword ptr [EBX + 0x78]      ; 005a8051
        ;   Label: LAB_005a8051
    PUSH EAX                            ; 005a8054
    CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0 ; 005a8055
        ;   XREF to: 005a87d0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005a805a
    TEST EAX,EAX                        ; 005a805d
    JZ 0x005a8072                       ; 005a805f
        ;   XREF to: 005a8072 (CONDITIONAL_JUMP)  ; LAB_005a8072
    MOV EDX,dword ptr [EBX + 0x78]      ; 005a8061
    PUSH EDX                            ; 005a8064
    PUSH 0x6504e5                       ; 005a8065 | = "Killing looped sfx %s, which died??\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a806a
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0x8                         ; 005a806f
    PUSH EBX                            ; 005a8072
        ;   Label: LAB_005a8072
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a8073
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005a8078
    POP EBP                             ; 005a807b
    POP EDI                             ; 005a807c
    POP EBX                             ; 005a807d
    RET                                 ; 005a807e
    CMP dword ptr [EBX + 0x20],0x0      ; 005a807f
        ;   Label: LAB_005a807f
    JZ 0x005a808a                       ; 005a8083
        ;   XREF to: 005a808a (CONDITIONAL_JUMP)  ; LAB_005a808a
    MOV EAX,0x2                         ; 005a8085
    CMP dword ptr [EBX + 0x40],0x0      ; 005a808a
        ;   Label: LAB_005a808a
    JZ 0x005a803c                       ; 005a808e
        ;   XREF to: 005a803c (CONDITIONAL_JUMP)  ; LAB_005a803c
    OR AL,0x4                           ; 005a8090
    TEST EAX,EAX                        ; 005a8092
    JNZ 0x005a809a                      ; 005a8094
        ;   XREF to: 005a809a (CONDITIONAL_JUMP)  ; LAB_005a809a
    POP EBP                             ; 005a8096
    POP EDI                             ; 005a8097
    POP EBX                             ; 005a8098
    RET                                 ; 005a8099
    PUSH EAX                            ; 005a809a
        ;   Label: LAB_005a809a
    MOV EDX,dword ptr [0x03f69268]      ; 005a809b | g_CSoundDevicePtr
    PUSH EBX                            ; 005a80a1
    MOV ECX,dword ptr [EDX]             ; 005a80a2
    PUSH EDX                            ; 005a80a4
    CALL dword ptr [ECX + 0x40]         ; 005a80a5
    ADD ESP,0xc                         ; 005a80a8
    TEST EAX,EAX                        ; 005a80ab
    JNZ 0x005a8040                      ; 005a80ad
        ;   XREF to: 005a8040 (CONDITIONAL_JUMP)  ; LAB_005a8040
    MOV EDI,dword ptr [EBX + 0x78]      ; 005a80af
    PUSH EDI                            ; 005a80b2
    MOV EBP,dword ptr [EBX + 0x70]      ; 005a80b3
    PUSH EBP                            ; 005a80b6
    PUSH 0x65050a                       ; 005a80b7 | = "Error setting hw sfx %d options (samp..."
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005a80bc
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
    ADD ESP,0xc                         ; 005a80c1
    PUSH EBX                            ; 005a80c4
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60 ; 005a80c5
        ;   XREF to: 005a7e60 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_005a7e60(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 005a80ca
    POP EBP                             ; 005a80cd
    POP EDI                             ; 005a80ce
    POP EBX                             ; 005a80cf
    RET                                 ; 005a80d0


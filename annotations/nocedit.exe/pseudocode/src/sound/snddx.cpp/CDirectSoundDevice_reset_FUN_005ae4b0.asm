; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0(CDirectSoundDevice * this_ptr)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Stop_hardware_sfx_second_00651ab9
;   TerminatedCString s_Stop_secondary_sound_buf_00651b24
;   TerminatedCString s_Stop_primary_sound_buffe_00651b40
;   IDirectSoundBuffer* g_DirectSoundPrimaryBuffer
;   IDirectSoundBuffer* g_DirectSoundSecondaryBuffer
;   IDirectSoundBuffer*[31] g_DirectSoundHardwareSfxBuffers
;   undefined4 g_DirectSoundHardwareSfxBuffers[1]
;   IDirectSound3DBuffer*[31] g_DirectSound3DBufferInterfaces
;   undefined4 DAT_03f6aac4
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_killSoundThread_FUN_005abcb0
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae4b0
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_reset_FUN_005ae4b0
    PUSH ESI                            ; 005ae4b1
    PUSH EDI                            ; 005ae4b2
    PUSH EBP                            ; 005ae4b3
    SUB ESP,0x4b4                       ; 005ae4b4
    MOV EDX,0x1                         ; 005ae4ba
    MOV ECX,dword ptr [0x03f6a9b8]      ; 005ae4bf | IDirectSoundBuffer * g_DirectSoundSecondaryBuffer
    MOV dword ptr [ESP + 0x4b0],EDX     ; 005ae4c5
    TEST ECX,ECX                        ; 005ae4cc
    JNZ 0x005ae567                      ; 005ae4ce | LAB_005ae567
        ;   XREF to: 005ae567 (CONDITIONAL_JUMP)
    MOV ESI,dword ptr [0x03f6a9b4]      ; 005ae4d4 | IDirectSoundBuffer * g_DirectSoundPrimaryBuffer
        ;   Label: LAB_005ae4d4
    TEST ESI,ESI                        ; 005ae4da
    JNZ 0x005ae5b7                      ; 005ae4dc | LAB_005ae5b7
        ;   XREF to: 005ae5b7 (CONDITIONAL_JUMP)
    XOR ESI,ESI                         ; 005ae4e2
        ;   Label: LAB_005ae4e2
    XOR EBX,EBX                         ; 005ae4e4
    MOV EAX,dword ptr [ESI + 0x3f6aa44] ; 005ae4e6 | IDirectSoundBuffer *[31] g_DirectSoundHardwareSfxBuffers
        ;   Label: LAB_005ae4e6
    MOV EBP,EBX                         ; 005ae4ec
    TEST EAX,EAX                        ; 005ae4ee
    JZ 0x005ae500                       ; 005ae4f0 | LAB_005ae500
        ;   XREF to: 005ae500 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005ae4f2
    MOV EDX,dword ptr [EAX]             ; 005ae4f3
    CALL dword ptr [EDX + 0x48]         ; 005ae4f5
    TEST EAX,EAX                        ; 005ae4f8
    JNZ 0x005ae607                      ; 005ae4fa | LAB_005ae607
        ;   XREF to: 005ae607 (CONDITIONAL_JUMP)
    LEA EDI,[EBP*0x4 + 0x0]             ; 005ae500
        ;   Label: LAB_005ae500
    ADD EDI,0x3f6aac0                   ; 005ae507 | IDirectSound3DBuffer *[31] g_DirectSound3DBufferInterfaces
    MOV ECX,dword ptr [EDI]             ; 005ae50d | IDirectSound3DBuffer *[31] g_DirectSound3DBufferInterfaces
    TEST ECX,ECX                        ; 005ae50f
    JZ 0x005ae51f                       ; 005ae511 | LAB_005ae51f
        ;   XREF to: 005ae51f (CONDITIONAL_JUMP)
    PUSH ECX                            ; 005ae513
    MOV EDX,dword ptr [ECX]             ; 005ae514
    CALL dword ptr [EDX + 0x8]          ; 005ae516
    MOV dword ptr [EDI],0x0             ; 005ae519 | IDirectSound3DBuffer *[31] g_DirectSound3DBufferInterfaces
    LEA EDI,[EBP*0x4 + 0x0]             ; 005ae51f
        ;   Label: LAB_005ae51f
    ADD EDI,0x3f6aa44                   ; 005ae526 | IDirectSoundBuffer *[31] g_DirectSoundHardwareSfxBuffers
    MOV EBP,dword ptr [EDI]             ; 005ae52c | IDirectSoundBuffer *[31] g_DirectSoundHardwareSfxBuffers
    TEST EBP,EBP                        ; 005ae52e
    JZ 0x005ae53f                       ; 005ae530 | LAB_005ae53f
        ;   XREF to: 005ae53f (CONDITIONAL_JUMP)
    PUSH EBP                            ; 005ae532
    MOV EDX,dword ptr [EBP]             ; 005ae533
    CALL dword ptr [EDX + 0x8]          ; 005ae536
    MOV dword ptr [EDI],0x0             ; 005ae539 | IDirectSoundBuffer *[31] g_DirectSoundHardwareSfxBuffers
    INC EBX                             ; 005ae53f
        ;   Label: LAB_005ae53f
    ADD ESI,0x4                         ; 005ae540
    CMP EBX,0x1f                        ; 005ae543
    JL 0x005ae4e6                       ; 005ae546 | LAB_005ae4e6
        ;   XREF to: 005ae4e6 (CONDITIONAL_JUMP)
    CALL sound_sndmain.cpp_killSoundThread_FUN_005abcb0 ; 005ae548 | int sound_sndmain.cpp_killSoundThread_FUN_005abcb0()
        ;   XREF to: 005abcb0 (UNCONDITIONAL_CALL)
    TEST EAX,EAX                        ; 005ae54d
    JZ 0x005ae641                       ; 005ae54f | LAB_005ae641
        ;   XREF to: 005ae641 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x4b0]     ; 005ae555
    ADD ESP,0x4b4                       ; 005ae55c
    POP EBP                             ; 005ae562
    POP EDI                             ; 005ae563
    POP ESI                             ; 005ae564
    POP EBX                             ; 005ae565
    RET                                 ; 005ae566
    PUSH ECX                            ; 005ae567
        ;   Label: LAB_005ae567
    MOV EDX,dword ptr [ECX]             ; 005ae568
    CALL dword ptr [EDX + 0x48]         ; 005ae56a
    TEST EAX,EAX                        ; 005ae56d
    JZ 0x005ae4d4                       ; 005ae56f | LAB_005ae4d4
        ;   XREF to: 005ae4d4 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005ae575
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005ae576 | char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ae57b
    PUSH EAX                            ; 005ae57e
    PUSH 0x651b24                       ; 005ae57f | = "Stop secondary sound buffer" | s_Stop_secondary_sound_buf_00651b24 = Stop secondary sound buffer
    PUSH 0x651a6c                       ; 005ae584 | = "DirectSux: Unable to %s.  (%s)" | s_DirectSux_Unable_to_s_s_00651a6c = DirectSux: Unable to %s.  (%s)
    LEA EAX,[ESP + 0x32c]               ; 005ae589
    PUSH EAX                            ; 005ae590
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ae591 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005ae596
    LEA EAX,[ESP + 0x320]               ; 005ae599
    PUSH EAX                            ; 005ae5a0
    XOR EBX,EBX                         ; 005ae5a1
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005ae5a3 | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ae5a8
    MOV dword ptr [ESP + 0x4b0],EBX     ; 005ae5ab
    JMP 0x005ae4d4                      ; 005ae5b2 | LAB_005ae4d4
        ;   XREF to: 005ae4d4 (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 005ae5b7
        ;   Label: LAB_005ae5b7
    MOV EDX,dword ptr [ESI]             ; 005ae5b8
    CALL dword ptr [EDX + 0x48]         ; 005ae5ba
    TEST EAX,EAX                        ; 005ae5bd
    JZ 0x005ae4e2                       ; 005ae5bf | LAB_005ae4e2
        ;   XREF to: 005ae4e2 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005ae5c5
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005ae5c6 | char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ae5cb
    PUSH EAX                            ; 005ae5ce
    PUSH 0x651b40                       ; 005ae5cf | = "Stop primary sound buffer" | s_Stop_primary_sound_buffe_00651b40 = Stop primary sound buffer
    PUSH 0x651a6c                       ; 005ae5d4 | = "DirectSux: Unable to %s.  (%s)" | s_DirectSux_Unable_to_s_s_00651a6c = DirectSux: Unable to %s.  (%s)
    LEA EAX,[ESP + 0x19c]               ; 005ae5d9
    PUSH EAX                            ; 005ae5e0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ae5e1 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005ae5e6
    LEA EAX,[ESP + 0x190]               ; 005ae5e9
    PUSH EAX                            ; 005ae5f0
    XOR EDI,EDI                         ; 005ae5f1
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005ae5f3 | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ae5f8
    MOV dword ptr [ESP + 0x4b0],EDI     ; 005ae5fb
    JMP 0x005ae4e2                      ; 005ae602 | LAB_005ae4e2
        ;   XREF to: 005ae4e2 (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 005ae607
        ;   Label: LAB_005ae607
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005ae608 | char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ae60d
    PUSH EAX                            ; 005ae610
    PUSH 0x651ab9                       ; 005ae611 | = "Stop hardware sfx secondary buffer" | s_Stop_hardware_sfx_second_00651ab9 = Stop hardware sfx secondary buffer
    PUSH 0x651a6c                       ; 005ae616 | = "DirectSux: Unable to %s.  (%s)" | s_DirectSux_Unable_to_s_s_00651a6c = DirectSux: Unable to %s.  (%s)
    LEA EAX,[ESP + 0xc]                 ; 005ae61b
    PUSH EAX                            ; 005ae61f
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005ae620 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005ae625
    MOV EAX,ESP                         ; 005ae628
    PUSH EAX                            ; 005ae62a
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005ae62b | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ae630
    XOR EDX,EDX                         ; 005ae633
    MOV dword ptr [ESP + 0x4b0],EDX     ; 005ae635
    JMP 0x005ae53f                      ; 005ae63c | LAB_005ae53f
        ;   XREF to: 005ae53f (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x4b0],EAX     ; 005ae641
        ;   Label: LAB_005ae641
    MOV EAX,dword ptr [ESP + 0x4b0]     ; 005ae648
    ADD ESP,0x4b4                       ; 005ae64f
    POP EBP                             ; 005ae655
    POP EDI                             ; 005ae656
    POP ESI                             ; 005ae657
    POP EBX                             ; 005ae658
    RET                                 ; 005ae659


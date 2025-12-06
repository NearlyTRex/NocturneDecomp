; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410(CDirectSoundDevice * this_ptr, int sample_buffer_id)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   sample_buffer_id
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
;   TerminatedCString s_Stop_hardware_sfx_second_00651ab9
;   TerminatedCString s_sound_snddx_cpp_00651d63
;   TerminatedCString s_DirectSoundDevice_alloca_00651d76
;   TerminatedCString s_sound_snddx_cpp_00651db1
;   TerminatedCString s_DirectSoundDevice_alloca_00651dc4
;   TerminatedCString s_DirectSoundDevice_alloca_00651dfb
;   TerminatedCString s_Duplicate_sound_buffer_00651e2d
;   TerminatedCString s_get_DirectSound3DBuffer__00651e44
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectSound* g_DirectSound
;   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
;   ... and 7 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70
;   sound_sndmain.cpp_logSoundError_FUN_005adba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af410
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410
    PUSH ESI                            ; 005af411
    PUSH EDI                            ; 005af412
    PUSH EBP                            ; 005af413
    SUB ESP,0x640                       ; 005af414
    MOV EDI,dword ptr [ESP + 0x658]     ; 005af41a
    TEST EDI,EDI                        ; 005af421
    JLE 0x005af42e                      ; 005af423 | LAB_005af42e
        ;   XREF to: 005af42e (CONDITIONAL_JUMP)
    CMP EDI,0x19                        ; 005af425
    JL 0x005af5b3                       ; 005af428 | LAB_005af5b3
        ;   XREF to: 005af5b3 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 005af42e
        ;   Label: LAB_005af42e
    MOV EBX,0x651d63                    ; 005af42f | = "..\\sound\\snddx.cpp" | s_sound_snddx_cpp_00651d63 = ..\sound\snddx.cpp
    MOV ESI,0x2ed                       ; 005af434
    PUSH 0x651d76                       ; 005af439 | = "DirectSoundDevice::allocateSfx - Inva..." | s_DirectSoundDevice_alloca_00651d76 = DirectSoundDevice::allocateSfx - Invalid sample handle: %d
    MOV dword ptr [0x02f0ca48],EBX      ; 005af43e | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 005af444 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005af44a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005af44f
    CMP dword ptr [0x03f6a9b0],0x0      ; 005af452 | IDirectSound * g_DirectSound
        ;   Label: LAB_005af452
    JNZ 0x005af47d                      ; 005af459 | LAB_005af47d
        ;   XREF to: 005af47d (CONDITIONAL_JUMP)
    MOV EAX,0x651db1                    ; 005af45b | = "..\\sound\\snddx.cpp" | s_sound_snddx_cpp_00651db1 = ..\sound\snddx.cpp
    MOV EDX,0x2ee                       ; 005af460
    PUSH 0x651dc4                       ; 005af465 | = "DirectSoundDevice::allocateSfx - dSou..." | s_DirectSoundDevice_alloca_00651dc4 = DirectSoundDevice::allocateSfx - dSound not allocated?
    MOV [0x02f0ca48],EAX                ; 005af46a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005af46f | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005af475 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005af47a
    MOV EAX,0x4                         ; 005af47d
        ;   Label: LAB_005af47d
    MOV ECX,dword ptr [0x03f6aa48]      ; 005af482 | g_DirectSoundHardwareSfxBuffers[1]
    MOV EBX,0x1                         ; 005af488
    TEST ECX,ECX                        ; 005af48d
    JZ 0x005af4a3                       ; 005af48f | LAB_005af4a3
        ;   XREF to: 005af4a3 (CONDITIONAL_JUMP)
    ADD EAX,0x4                         ; 005af491
        ;   Label: LAB_005af491
    INC EBX                             ; 005af494
    CMP EAX,0x7c                        ; 005af495
    JGE 0x005af4a3                      ; 005af498 | LAB_005af4a3
        ;   XREF to: 005af4a3 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x3f6aa44],0x0 ; 005af49a | DAT_03f6aa4c
    JNZ 0x005af491                      ; 005af4a1 | LAB_005af491
        ;   XREF to: 005af491 (CONDITIONAL_JUMP)
    CMP EBX,0x1f                        ; 005af4a3
        ;   Label: LAB_005af4a3
    JGE 0x005af5dd                      ; 005af4a6 | LAB_005af5dd
        ;   XREF to: 005af5dd (CONDITIONAL_JUMP)
    MOV EBP,EBX                         ; 005af4ac
    LEA EAX,[EBX*0x4 + 0x0]             ; 005af4ae
    MOV EDX,dword ptr [EAX + 0x3f6aa44] ; 005af4b5 | DAT_03f6aa4c
    TEST EDX,EDX                        ; 005af4bb
    JZ 0x005af4cd                       ; 005af4bd | LAB_005af4cd
        ;   XREF to: 005af4cd (CONDITIONAL_JUMP)
    PUSH EDX                            ; 005af4bf
    MOV ESI,dword ptr [EDX]             ; 005af4c0
    CALL dword ptr [ESI + 0x48]         ; 005af4c2
    TEST EAX,EAX                        ; 005af4c5
    JNZ 0x005af5fe                      ; 005af4c7 | LAB_005af5fe
        ;   XREF to: 005af5fe (CONDITIONAL_JUMP)
    LEA ESI,[EBP*0x4 + 0x0]             ; 005af4cd
        ;   Label: LAB_005af4cd
    ADD ESI,0x3f6aac0                   ; 005af4d4 | IDirectSound3DBuffer *[31] g_DirectSound3DBufferInterfaces
    MOV ECX,dword ptr [ESI]             ; 005af4da | DAT_03f6aac8
    TEST ECX,ECX                        ; 005af4dc
    JZ 0x005af4ec                       ; 005af4de | LAB_005af4ec
        ;   XREF to: 005af4ec (CONDITIONAL_JUMP)
    PUSH ECX                            ; 005af4e0
    MOV EDX,dword ptr [ECX]             ; 005af4e1
    CALL dword ptr [EDX + 0x8]          ; 005af4e3
    MOV dword ptr [ESI],0x0             ; 005af4e6 | DAT_03f6aac8
    LEA ESI,[EBP*0x4 + 0x0]             ; 005af4ec
        ;   Label: LAB_005af4ec
    ADD ESI,0x3f6aa44                   ; 005af4f3 | IDirectSoundBuffer *[31] g_DirectSoundHardwareSfxBuffers
    MOV EBP,dword ptr [ESI]             ; 005af4f9 | DAT_03f6aa4c
    TEST EBP,EBP                        ; 005af4fb
    JZ 0x005af50e                       ; 005af4fd | LAB_005af50e
        ;   XREF to: 005af50e (CONDITIONAL_JUMP)
    MOV EAX,EBP                         ; 005af4ff
    PUSH EAX                            ; 005af501
    MOV EBP,dword ptr [EBP]             ; 005af502
    CALL dword ptr [EBP + 0x8]          ; 005af505
    MOV dword ptr [ESI],0x0             ; 005af508 | DAT_03f6aa4c
    MOV EDX,0x3f6aa44                   ; 005af50e | IDirectSoundBuffer *[31] g_DirectSoundHardwareSfxBuffers
        ;   Label: LAB_005af50e
    LEA ESI,[EBX*0x4 + 0x0]             ; 005af513
    ADD EDX,ESI                         ; 005af51a
    PUSH EDX                            ; 005af51c | DAT_03f6aa4c
    MOV EDX,dword ptr [EDI*0x4 + 0x3f6a9e0] ; 005af51d | IDirectSoundBuffer *[25] g_DirectSoundSampleBuffers
    MOV EAX,[0x03f6a9b0]                ; 005af524 | IDirectSound * g_DirectSound
    PUSH EDX                            ; 005af529
    MOV EBP,dword ptr [EAX]             ; 005af52a
    PUSH EAX                            ; 005af52c
    CALL dword ptr [EBP + 0x14]         ; 005af52d
    TEST EAX,EAX                        ; 005af530
    JNZ 0x005af637                      ; 005af532 | LAB_005af637
        ;   XREF to: 005af637 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESI + 0x3f6aa44] ; 005af538 | DAT_03f6aa4c
    TEST ECX,ECX                        ; 005af53e
    JNZ 0x005af6a9                      ; 005af540 | LAB_005af6a9
        ;   XREF to: 005af6a9 (CONDITIONAL_JUMP)
    MOV ESI,EBX                         ; 005af546
        ;   Label: LAB_005af546
    LEA EAX,[EBX*0x4 + 0x0]             ; 005af548
    MOV EBP,dword ptr [EAX + 0x3f6aa44] ; 005af54f | DAT_03f6aa4c
    TEST EBP,EBP                        ; 005af555
    JZ 0x005af568                       ; 005af557 | LAB_005af568
        ;   XREF to: 005af568 (CONDITIONAL_JUMP)
    PUSH EBP                            ; 005af559
    MOV EBX,dword ptr [EBP]             ; 005af55a
    CALL dword ptr [EBX + 0x48]         ; 005af55d
    TEST EAX,EAX                        ; 005af560
    JNZ 0x005af670                      ; 005af562 | LAB_005af670
        ;   XREF to: 005af670 (CONDITIONAL_JUMP)
    LEA EBX,[ESI*0x4 + 0x0]             ; 005af568
        ;   Label: LAB_005af568
    ADD EBX,0x3f6aac0                   ; 005af56f | IDirectSound3DBuffer *[31] g_DirectSound3DBufferInterfaces
    MOV EAX,dword ptr [EBX]             ; 005af575 | DAT_03f6aac8
    TEST EAX,EAX                        ; 005af577
    JZ 0x005af587                       ; 005af579 | LAB_005af587
        ;   XREF to: 005af587 (CONDITIONAL_JUMP)
    PUSH EAX                            ; 005af57b
    MOV EDI,dword ptr [EAX]             ; 005af57c
    CALL dword ptr [EDI + 0x8]          ; 005af57e
    MOV dword ptr [EBX],0x0             ; 005af581 | DAT_03f6aac8
    LEA EBX,[ESI*0x4 + 0x0]             ; 005af587
        ;   Label: LAB_005af587
    ADD EBX,0x3f6aa44                   ; 005af58e | IDirectSoundBuffer *[31] g_DirectSoundHardwareSfxBuffers
    MOV EDX,dword ptr [EBX]             ; 005af594 | DAT_03f6aa4c
    TEST EDX,EDX                        ; 005af596
    JZ 0x005af5a6                       ; 005af598 | LAB_005af5a6
        ;   XREF to: 005af5a6 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 005af59a
    MOV ESI,dword ptr [EDX]             ; 005af59b
    CALL dword ptr [ESI + 0x8]          ; 005af59d
    MOV dword ptr [EBX],0x0             ; 005af5a0 | DAT_03f6aa4c
    XOR EAX,EAX                         ; 005af5a6
        ;   Label: LAB_005af5a6
    ADD ESP,0x640                       ; 005af5a8
    POP EBP                             ; 005af5ae
    POP EDI                             ; 005af5af
    POP ESI                             ; 005af5b0
    POP EBX                             ; 005af5b1
    RET                                 ; 005af5b2
    CMP dword ptr [EDI*0x4 + 0x3f6a9e0],0x0 ; 005af5b3 | IDirectSoundBuffer *[25] g_DirectSoundSampleBuffers
        ;   Label: LAB_005af5b3
    JZ 0x005af42e                       ; 005af5bb | LAB_005af42e
        ;   XREF to: 005af42e (CONDITIONAL_JUMP)
    LEA EAX,[EDI*0x4 + 0x0]             ; 005af5c1
    ADD EAX,EDI                         ; 005af5c8
    CMP dword ptr [EAX*0x4 + 0x3f6ab3c],0x1 ; 005af5ca | IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata
    JL 0x005af42e                       ; 005af5d2 | LAB_005af42e
        ;   XREF to: 005af42e (CONDITIONAL_JUMP)
    JMP 0x005af452                      ; 005af5d8 | LAB_005af452
        ;   XREF to: 005af452 (UNCONDITIONAL_JUMP)
    PUSH 0x651dfb                       ; 005af5dd | = "DirectSoundDevice::allocateSfx - no f..." | s_DirectSoundDevice_alloca_00651dfb = DirectSoundDevice::allocateSfx - no free buffers

        ;   Label: LAB_005af5dd
    MOV ECX,dword ptr [0x0066e8e0]      ; 005af5e2 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH ECX                            ; 005af5e8 | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005af5e9 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005af5ee
    XOR EAX,EAX                         ; 005af5f1
    ADD ESP,0x640                       ; 005af5f3
    POP EBP                             ; 005af5f9
    POP EDI                             ; 005af5fa
    POP ESI                             ; 005af5fb
    POP EBX                             ; 005af5fc
    RET                                 ; 005af5fd
    PUSH EAX                            ; 005af5fe
        ;   Label: LAB_005af5fe
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005af5ff | char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005af604
    PUSH EAX                            ; 005af607
    PUSH 0x651ab9                       ; 005af608 | = "Stop hardware sfx secondary buffer" | s_Stop_hardware_sfx_second_00651ab9 = Stop hardware sfx secondary buffer
    PUSH 0x651a6c                       ; 005af60d | = "DirectSux: Unable to %s.  (%s)" | s_DirectSux_Unable_to_s_s_00651a6c = DirectSux: Unable to %s.  (%s)
    LEA EAX,[ESP + 0x19c]               ; 005af612
    PUSH EAX                            ; 005af619
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005af61a | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005af61f
    LEA EAX,[ESP + 0x190]               ; 005af622
    PUSH EAX                            ; 005af629
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005af62a | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005af62f
    JMP 0x005af50e                      ; 005af632 | LAB_005af50e
        ;   XREF to: 005af50e (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 005af637
        ;   Label: LAB_005af637
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005af638 | char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005af63d
    PUSH EAX                            ; 005af640
    PUSH 0x651e2d                       ; 005af641 | = "Duplicate sound buffer" | s_Duplicate_sound_buffer_00651e2d = Duplicate sound buffer
    PUSH 0x651a6c                       ; 005af646 | = "DirectSux: Unable to %s.  (%s)" | s_DirectSux_Unable_to_s_s_00651a6c = DirectSux: Unable to %s.  (%s)
    LEA EAX,[ESP + 0x4bc]               ; 005af64b
    PUSH EAX                            ; 005af652
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005af653 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005af658
    LEA EAX,[ESP + 0x4b0]               ; 005af65b
    PUSH EAX                            ; 005af662
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005af663 | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005af668
    JMP 0x005af546                      ; 005af66b | LAB_005af546
        ;   XREF to: 005af546 (UNCONDITIONAL_JUMP)
    PUSH EAX                            ; 005af670
        ;   Label: LAB_005af670
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005af671 | char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005af676
    PUSH EAX                            ; 005af679
    PUSH 0x651ab9                       ; 005af67a | = "Stop hardware sfx secondary buffer" | s_Stop_hardware_sfx_second_00651ab9 = Stop hardware sfx secondary buffer
    PUSH 0x651a6c                       ; 005af67f | = "DirectSux: Unable to %s.  (%s)" | s_DirectSux_Unable_to_s_s_00651a6c = DirectSux: Unable to %s.  (%s)
    LEA EAX,[ESP + 0xc]                 ; 005af684
    PUSH EAX                            ; 005af688
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005af689 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005af68e
    MOV EAX,ESP                         ; 005af691
    PUSH EAX                            ; 005af693
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005af694 | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005af699
    XOR EAX,EAX                         ; 005af69c
    ADD ESP,0x640                       ; 005af69e
    POP EBP                             ; 005af6a4
    POP EDI                             ; 005af6a5
    POP ESI                             ; 005af6a6
    POP EBX                             ; 005af6a7
    RET                                 ; 005af6a8
    MOV EDX,0x3f6aac0                   ; 005af6a9 | IDirectSound3DBuffer *[31] g_DirectSound3DBufferInterfaces
        ;   Label: LAB_005af6a9
    ADD EDX,ESI                         ; 005af6ae | DAT_03f6aac8
    PUSH EDX                            ; 005af6b0 | DAT_03f6aac8
    PUSH 0x686d68                       ; 005af6b1 | GUID g_IID_IDirectSound3DBuffer
    MOV EDI,dword ptr [ECX]             ; 005af6b6
    PUSH ECX                            ; 005af6b8
    CALL dword ptr [EDI]                ; 005af6b9
    TEST EAX,EAX                        ; 005af6bb
    JNZ 0x005af6d9                      ; 005af6bd | LAB_005af6d9
        ;   XREF to: 005af6d9 (CONDITIONAL_JUMP)
    CMP dword ptr [ESI + 0x3f6aac0],0x0 ; 005af6bf | DAT_03f6aac8
    JZ 0x005af546                       ; 005af6c6 | LAB_005af546
        ;   XREF to: 005af546 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 005af6cc
    ADD ESP,0x640                       ; 005af6ce
    POP EBP                             ; 005af6d4
    POP EDI                             ; 005af6d5
    POP ESI                             ; 005af6d6
    POP EBX                             ; 005af6d7
    RET                                 ; 005af6d8
    PUSH EAX                            ; 005af6d9
        ;   Label: LAB_005af6d9
    CALL sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70 ; 005af6da | char * sound_snddx.cpp_getDirectSoundErrorString_FUN_005ade70(uint error_code)
        ;   XREF to: 005ade70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005af6df
    PUSH EAX                            ; 005af6e2
    PUSH 0x651e44                       ; 005af6e3 | = "get DirectSound3DBuffer interface fro..." | s_get_DirectSound3DBuffer__00651e44 = get DirectSound3DBuffer interface from sfx secondary buffer
    PUSH 0x651a6c                       ; 005af6e8 | = "DirectSux: Unable to %s.  (%s)" | s_DirectSux_Unable_to_s_s_00651a6c = DirectSux: Unable to %s.  (%s)
    LEA EAX,[ESP + 0x32c]               ; 005af6ed
    PUSH EAX                            ; 005af6f4
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005af6f5 | int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 005af6fa
    LEA EAX,[ESP + 0x320]               ; 005af6fd
    PUSH EAX                            ; 005af704
    CALL sound_sndmain.cpp_logSoundError_FUN_005adba0 ; 005af705 | void sound_sndmain.cpp_logSoundError_FUN_005adba0(char * format)
        ;   XREF to: 005adba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005af70a
    JMP 0x005af546                      ; 005af70d | LAB_005af546
        ;   XREF to: 005af546 (UNCONDITIONAL_JUMP)


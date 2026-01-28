; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430(CSfxSample *this_ptr,int lock_offset,int lock_length)
;
; Parameters:
; CSfxSample *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   lock_offset
; int              Stack[0xc]:4   lock_length
;
; XREF[2]:
;   sound_sndmain.cpp_CSfxSample_pollStream_FUN_005a6730 at 005a69c2
;   sound_sndmain.cpp_getSfxSample_FUN_005a4c80 at 005a50ed
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fd57
;   TerminatedCString s_SfxSample_lock_already_l_0064fd6c
;   TerminatedCString s_sound_sndmain_cpp_0064fd8e
;   TerminatedCString s_SfxSample_lock_invalid_r_0064fda3
;   TerminatedCString s_sound_sndmain_cpp_0064fdc4
;   TerminatedCString s_SfxSample_lock_nothing_a_0064fdd9
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CSoundDevice* g_CSoundDevicePtr
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6430
        ;   Label: sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
    PUSH ESI                            ; 005a6431
    PUSH EDI                            ; 005a6432
    PUSH EBP                            ; 005a6433
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a6434
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a6438
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005a643c
    CMP dword ptr [EBX + 0x17c],0x0     ; 005a6440
    JNZ 0x005a64e2                      ; 005a6447
        ;   XREF to: 005a64e2 (CONDITIONAL_JUMP)  ; LAB_005a64e2
    TEST ESI,ESI                        ; 005a644d
        ;   Label: LAB_005a644d
    JL 0x005a645e                       ; 005a644f
        ;   XREF to: 005a645e (CONDITIONAL_JUMP)  ; LAB_005a645e
    MOV EDX,dword ptr [EBX + 0x160]     ; 005a6451
    LEA EAX,[ESI + EDI*0x1]             ; 005a6457
    CMP EAX,EDX                         ; 005a645a
    JLE 0x005a6481                      ; 005a645c
        ;   XREF to: 005a6481 (CONDITIONAL_JUMP)  ; LAB_005a6481
    MOV ECX,0x64fd8e                    ; 005a645e | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a645e
    MOV EBP,0x758                       ; 005a6463
    PUSH 0x64fda3                       ; 005a6468 | = "SfxSample::lock - invalid region"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a646d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005a6473 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a6479
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a647e
    CMP dword ptr [EBX + 0x158],0x0     ; 005a6481
        ;   Label: LAB_005a6481
    JNZ 0x005a650a                      ; 005a6488
        ;   XREF to: 005a650a (CONDITIONAL_JUMP)  ; LAB_005a650a
    CMP dword ptr [EBX + 0x120],0x0     ; 005a648e
    JNZ 0x005a64b9                      ; 005a6495
        ;   XREF to: 005a64b9 (CONDITIONAL_JUMP)  ; LAB_005a64b9
    MOV EAX,0x64fdc4                    ; 005a6497 | = "..\\sound\\sndmain.cpp"
    MOV EDX,0x75f                       ; 005a649c
    PUSH 0x64fdd9                       ; 005a64a1 | = "SfxSample::lock - nothing allocated!"
    MOV [0x02f0ca48],EAX                ; 005a64a6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a64ab | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a64b1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a64b6
    PUSH EBX                            ; 005a64b9
        ;   Label: LAB_005a64b9
    CALL sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550 ; 005a64ba
        ;   XREF to: 005a8550 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_getBytesPerFrame_FUN_005a8550(CSfxSample * this_ptr)
    IMUL EAX,ESI                        ; 005a64bf
    MOV EDX,dword ptr [EBX + 0x120]     ; 005a64c2
    ADD ESP,0x4                         ; 005a64c8
    ADD EAX,EDX                         ; 005a64cb
    TEST EAX,EAX                        ; 005a64cd
        ;   Label: LAB_005a64cd
    JZ 0x005a64dd                       ; 005a64cf
        ;   XREF to: 005a64dd (CONDITIONAL_JUMP)  ; LAB_005a64dd
    MOV dword ptr [EBX + 0x17c],EDI     ; 005a64d1
    MOV dword ptr [EBX + 0x178],ESI     ; 005a64d7
    POP EBP                             ; 005a64dd
        ;   Label: LAB_005a64dd
    POP EDI                             ; 005a64de
    POP ESI                             ; 005a64df
    POP EBX                             ; 005a64e0
    RET                                 ; 005a64e1
    MOV ECX,0x64fd57                    ; 005a64e2 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a64e2
    MOV EBP,0x753                       ; 005a64e7
    PUSH 0x64fd6c                       ; 005a64ec | = "SfxSample::lock - already locked!"
    MOV dword ptr [0x02f0ca48],ECX      ; 005a64f1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 005a64f7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a64fd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a6502
    JMP 0x005a644d                      ; 005a6505
        ;   XREF to: 005a644d (UNCONDITIONAL_JUMP)  ; LAB_005a644d
    MOV EDX,dword ptr [0x03f69268]      ; 005a650a | g_CSoundDevicePtr
        ;   Label: LAB_005a650a
    TEST EDX,EDX                        ; 005a6510
    JNZ 0x005a651b                      ; 005a6512
        ;   XREF to: 005a651b (CONDITIONAL_JUMP)  ; LAB_005a651b
    XOR EAX,EAX                         ; 005a6514
    POP EBP                             ; 005a6516
    POP EDI                             ; 005a6517
    POP ESI                             ; 005a6518
    POP EBX                             ; 005a6519
    RET                                 ; 005a651a
    PUSH EDI                            ; 005a651b
        ;   Label: LAB_005a651b
    PUSH ESI                            ; 005a651c
    MOV ECX,dword ptr [EBX + 0x158]     ; 005a651d
    PUSH ECX                            ; 005a6523
    MOV EAX,EDX                         ; 005a6524
    MOV EDX,dword ptr [EDX]             ; 005a6526
    PUSH EAX                            ; 005a6528
    CALL dword ptr [EDX + 0x34]         ; 005a6529
    ADD ESP,0x10                        ; 005a652c
    JMP 0x005a64cd                      ; 005a652f
        ;   XREF to: 005a64cd (UNCONDITIONAL_JUMP)  ; LAB_005a64cd


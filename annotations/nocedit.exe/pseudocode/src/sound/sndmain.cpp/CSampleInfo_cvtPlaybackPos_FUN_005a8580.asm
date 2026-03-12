; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580(CSampleInfo *this_ptr,double position,uint input_type,uint output_type)
;
; Parameters:
; CSampleInfo *    Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   position
; uint             Stack[0x10]:4   input_type
; uint             Stack[0x14]:4   output_type
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSample_normalizePlaybackPos_FUN_005a86f0 at 005a870d
;   sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390 at 005a83d6
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 at 005a9770
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00650688
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_0065069d
;   TerminatedCString s_sound_sndmain_cpp_006506fd
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_00650712
;   TerminatedCString s_sound_sndmain_cpp_0065074d
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_00650762
;   TerminatedCString s_sound_sndmain_cpp_006507c2
;   TerminatedCString s_SampleInfo_cvtPlaybackPo_006507d7
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8580
        ;   Label: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
    PUSH ESI                            ; 005a8581
    PUSH EDI                            ; 005a8582
    PUSH EBP                            ; 005a8583
    MOV EBP,ESP                         ; 005a8584
    SUB ESP,0x8                         ; 005a8586
    AND ESP,0xfffffff8                  ; 005a8589
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a858c
    MOV EAX,dword ptr [EBP + 0x20]      ; 005a858f
    MOV ESI,dword ptr [EBP + 0x24]      ; 005a8592
    CMP EAX,ESI                         ; 005a8595
    JZ 0x005a85d9                       ; 005a8597
        ;   XREF to: 005a85d9 (CONDITIONAL_JUMP)  ; LAB_005a85d9
    CMP EAX,0x1                         ; 005a8599
    JNC 0x005a864e                      ; 005a859c
        ;   XREF to: 005a864e (CONDITIONAL_JUMP)  ; LAB_005a864e
    TEST EAX,EAX                        ; 005a85a2
    JNZ 0x005a8655                      ; 005a85a4
        ;   XREF to: 005a8655 (CONDITIONAL_JUMP)  ; LAB_005a8655
    CMP ESI,0x1                         ; 005a85aa
        ;   Label: LAB_005a85aa
    JNC 0x005a86dc                      ; 005a85ad
        ;   XREF to: 005a86dc (CONDITIONAL_JUMP)  ; LAB_005a86dc
    TEST ESI,ESI                        ; 005a85b3
    JZ 0x005a85d9                       ; 005a85b5
        ;   XREF to: 005a85d9 (CONDITIONAL_JUMP)  ; LAB_005a85d9
    MOV EAX,0x6507c2                    ; 005a85b7 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a85b7
    MOV EDX,0xc5c                       ; 005a85bc
    PUSH 0x6507d7                       ; 005a85c1 | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x02f0ca48],EAX                ; 005a85c6 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a85cb | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a85d1
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a85d6
    MOV EAX,dword ptr [EBP + 0x18]      ; 005a85d9
        ;   Label: LAB_005a85d9
    MOV dword ptr [ESP],EAX             ; 005a85dc
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005a85df
    MOV dword ptr [ESP + 0x4],EAX       ; 005a85e2
    MOV EAX,dword ptr [ESP]             ; 005a85e6
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a85e9
    MOV ESP,EBP                         ; 005a85ed
    POP EBP                             ; 005a85ef
    POP EDI                             ; 005a85f0
    POP ESI                             ; 005a85f1
    POP EBX                             ; 005a85f2
    RET                                 ; 005a85f3
    FILD dword ptr [EBX + 0x10c]        ; 005a85f4
        ;   Label: LAB_005a85f4
    FMUL double ptr [EBP + 0x18]        ; 005a85fa
    FSTP double ptr [EBP + 0x18]        ; 005a85fd
    JMP 0x005a85aa                      ; 005a8600
        ;   XREF to: 005a85aa (UNCONDITIONAL_JUMP)  ; LAB_005a85aa
    CMP dword ptr [EBX + 0x110],0x0     ; 005a8602
        ;   Label: LAB_005a8602
    JLE 0x005a8619                      ; 005a8609
        ;   XREF to: 005a8619 (CONDITIONAL_JUMP)  ; LAB_005a8619
    FILD dword ptr [EBX + 0x110]        ; 005a860b
    FMUL double ptr [EBP + 0x18]        ; 005a8611
    FSTP double ptr [EBP + 0x18]        ; 005a8614
    JMP 0x005a85aa                      ; 005a8617
        ;   XREF to: 005a85aa (UNCONDITIONAL_JUMP)  ; LAB_005a85aa
    PUSH EBX                            ; 005a8619
        ;   Label: LAB_005a8619
    MOV ECX,0x650688                    ; 005a861a | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xc44                       ; 005a861f
    PUSH 0x65069d                       ; 005a8624 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005a8629 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a862f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a8635
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a863a
    FILD dword ptr [EBX + 0x110]        ; 005a863d
    FMUL double ptr [EBP + 0x18]        ; 005a8643
    FSTP double ptr [EBP + 0x18]        ; 005a8646
    JMP 0x005a85aa                      ; 005a8649
        ;   XREF to: 005a85aa (UNCONDITIONAL_JUMP)  ; LAB_005a85aa
    JBE 0x005a85f4                      ; 005a864e
        ;   XREF to: 005a85f4 (CONDITIONAL_JUMP)  ; LAB_005a85f4
        ;   Label: LAB_005a864e
    CMP EAX,0x2                         ; 005a8650
    JZ 0x005a8602                       ; 005a8653
        ;   XREF to: 005a8602 (CONDITIONAL_JUMP)  ; LAB_005a8602
    MOV EAX,0x6506fd                    ; 005a8655 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_005a8655
    MOV EDX,0xc49                       ; 005a865a
    PUSH 0x650712                       ; 005a865f | = "SampleInfo::cvtPlaybackPos - Invalid ..."
    MOV [0x02f0ca48],EAX                ; 005a8664 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005a8669 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a866f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005a8674
    JMP 0x005a85aa                      ; 005a8677
        ;   XREF to: 005a85aa (UNCONDITIONAL_JUMP)  ; LAB_005a85aa
    FILD dword ptr [EBX + 0x10c]        ; 005a867c
        ;   Label: LAB_005a867c
    FDIVR double ptr [EBP + 0x18]       ; 005a8682
    FSTP double ptr [EBP + 0x18]        ; 005a8685
    JMP 0x005a85d9                      ; 005a8688
        ;   XREF to: 005a85d9 (UNCONDITIONAL_JUMP)  ; LAB_005a85d9
    CMP dword ptr [EBX + 0x110],0x0     ; 005a868d
        ;   Label: LAB_005a868d
    JLE 0x005a86a7                      ; 005a8694
        ;   XREF to: 005a86a7 (CONDITIONAL_JUMP)  ; LAB_005a86a7
    FILD dword ptr [EBX + 0x110]        ; 005a8696
    FDIVR double ptr [EBP + 0x18]       ; 005a869c
    FSTP double ptr [EBP + 0x18]        ; 005a869f
    JMP 0x005a85d9                      ; 005a86a2
        ;   XREF to: 005a85d9 (UNCONDITIONAL_JUMP)  ; LAB_005a85d9
    PUSH EBX                            ; 005a86a7
        ;   Label: LAB_005a86a7
    MOV ESI,0x65074d                    ; 005a86a8 | = "..\\sound\\sndmain.cpp"
    MOV EDI,0xc57                       ; 005a86ad
    PUSH 0x650762                       ; 005a86b2 | = "SampleInfo::cvtPlaybackPos - can't us..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005a86b7 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005a86bd | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a86c3
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005a86c8
    FILD dword ptr [EBX + 0x110]        ; 005a86cb
    FDIVR double ptr [EBP + 0x18]       ; 005a86d1
    FSTP double ptr [EBP + 0x18]        ; 005a86d4
    JMP 0x005a85d9                      ; 005a86d7
        ;   XREF to: 005a85d9 (UNCONDITIONAL_JUMP)  ; LAB_005a85d9
    JBE 0x005a867c                      ; 005a86dc
        ;   XREF to: 005a867c (CONDITIONAL_JUMP)  ; LAB_005a867c
        ;   Label: LAB_005a86dc
    CMP ESI,0x2                         ; 005a86de
    JZ 0x005a868d                       ; 005a86e1
        ;   XREF to: 005a868d (CONDITIONAL_JUMP)  ; LAB_005a868d
    JMP 0x005a85b7                      ; 005a86e3
        ;   XREF to: 005a85b7 (UNCONDITIONAL_JUMP)  ; LAB_005a85b7


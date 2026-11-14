; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_005784b0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005f4c35
;   TerminatedCString s_Get_position_of_secondar_005f4db0
;   undefined4 DAT_02c81d9c
;   undefined4 DAT_02c81db8
;   undefined4 DAT_02c81dbc
;   undefined4 DAT_02c81dc0
;
; Called Functions:
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_snddx.cpp_fillStreamBuffer_FUN_005776b0
;   sound_snddx.cpp_FUN_00577500
;   sound_sndmain.cpp_hasHardware3DSound_FUN_00575560
;   sound_sndmain.cpp_logSoundError_FUN_005773f0
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00576f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005784b0
        ;   Label: sound_snddx.cpp_FUN_005784b0
    SUB ESP,0x198                       ; 005784b1
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_00575560 ; 005784b7
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_00575560()
    CMP EAX,0x1                         ; 005784bc
    JGE 0x005784d5                      ; 005784bf
        ;   XREF to: 005784d5 (CONDITIONAL_JUMP)  ; LAB_005784d5
    MOV EDX,dword ptr [0x02c81d9c]      ; 005784c1 | DAT_02c81d9c
    TEST EDX,EDX                        ; 005784c7
    JNZ 0x005784e1                      ; 005784c9
        ;   XREF to: 005784e1 (CONDITIONAL_JUMP)  ; LAB_005784e1
    XOR EAX,EAX                         ; 005784cb
    ADD ESP,0x198                       ; 005784cd
        ;   Label: LAB_005784cd
    POP EBX                             ; 005784d3
    RET                                 ; 005784d4
    CALL sound_sndmain.cpp_pollAllSfxSlots_FUN_00576f40 ; 005784d5
        ;   XREF to: 00576f40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pollAllSfxSlots_FUN_00576f40()
        ;   Label: LAB_005784d5
    MOV EAX,0x1                         ; 005784da
    JMP 0x005784cd                      ; 005784df
        ;   XREF to: 005784cd (UNCONDITIONAL_JUMP)  ; LAB_005784cd
    LEA EBX,[ESP + 0x190]               ; 005784e1
        ;   Label: LAB_005784e1
    PUSH EBX                            ; 005784e8
    LEA EBX,[ESP + 0x198]               ; 005784e9
    PUSH EBX                            ; 005784f0
    MOV EAX,EDX                         ; 005784f1
    MOV EDX,dword ptr [EDX]             ; 005784f3
    PUSH EAX                            ; 005784f5
    CALL dword ptr [EDX + 0x10]         ; 005784f6
    TEST EAX,EAX                        ; 005784f9
    JNZ 0x00578538                      ; 005784fb
        ;   XREF to: 00578538 (CONDITIONAL_JUMP)  ; LAB_00578538
    PUSH ESI                            ; 005784fd
    MOV EAX,dword ptr [ESP + 0x198]     ; 005784fe
    MOV ECX,dword ptr [0x02c81db8]      ; 00578505 | DAT_02c81db8
    XOR EDX,EDX                         ; 0057850b
    DIV ECX                             ; 0057850d
    MOV ESI,dword ptr [0x02c81dbc]      ; 0057850f | DAT_02c81dbc
    MOV EBX,EAX                         ; 00578515
    CMP EAX,ESI                         ; 00578517
    JL 0x0057851e                       ; 00578519
        ;   XREF to: 0057851e (CONDITIONAL_JUMP)  ; LAB_0057851e
    LEA EBX,[ESI + -0x1]                ; 0057851b
    TEST EBX,EBX                        ; 0057851e
        ;   Label: LAB_0057851e
    JL 0x0057856e                       ; 00578520
        ;   XREF to: 0057856e (CONDITIONAL_JUMP)  ; LAB_0057856e
    POP ESI                             ; 00578522
        ;   Label: LAB_00578522
    CMP EBX,dword ptr [0x02c81dc0]      ; 00578523 | DAT_02c81dc0
        ;   Label: LAB_00578523
    JNZ 0x00578572                      ; 00578529
        ;   XREF to: 00578572 (CONDITIONAL_JUMP)  ; LAB_00578572
    MOV EAX,0x1                         ; 0057852b
    ADD ESP,0x198                       ; 00578530
    POP EBX                             ; 00578536
    RET                                 ; 00578537
    PUSH EAX                            ; 00578538
        ;   Label: LAB_00578538
    CALL sound_snddx.cpp_FUN_00577500   ; 00578539
        ;   XREF to: 00577500 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00577500(uint error_code)
    ADD ESP,0x4                         ; 0057853e
    PUSH EAX                            ; 00578541
    PUSH 0x5f4db0                       ; 00578542 | = "Get position of secondary buffer"
    PUSH 0x5f4c35                       ; 00578547 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 0057854c
    PUSH EAX                            ; 00578550
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00578551
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 00578556
    MOV EAX,ESP                         ; 00578559
    PUSH EAX                            ; 0057855b
    CALL sound_sndmain.cpp_logSoundError_FUN_005773f0 ; 0057855c
        ;   XREF to: 005773f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_005773f0(char * format)
    ADD ESP,0x4                         ; 00578561
    XOR EAX,EAX                         ; 00578564
    ADD ESP,0x198                       ; 00578566
    POP EBX                             ; 0057856c
    RET                                 ; 0057856d
    XOR EBX,EBX                         ; 0057856e
        ;   Label: LAB_0057856e
    JMP 0x00578522                      ; 00578570
        ;   XREF to: 00578522 (UNCONDITIONAL_JUMP)  ; LAB_00578522
    CALL sound_snddx.cpp_fillStreamBuffer_FUN_005776b0 ; 00578572
        ;   XREF to: 005776b0 (UNCONDITIONAL_CALL)  ; int sound_snddx.cpp_fillStreamBuffer_FUN_005776b0()
        ;   Label: LAB_00578572
    TEST EAX,EAX                        ; 00578577
    JNZ 0x00578523                      ; 00578579
        ;   XREF to: 00578523 (CONDITIONAL_JUMP)  ; LAB_00578523
    ADD ESP,0x198                       ; 0057857b
    POP EBX                             ; 00578581
    RET                                 ; 00578582


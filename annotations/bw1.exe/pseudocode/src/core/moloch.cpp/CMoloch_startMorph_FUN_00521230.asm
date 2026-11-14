; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_moloch_cpp_CMoloch_startMorph_FUN_00521230(CMoloch *this_ptr)
;
; Parameters:
; CMoloch *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_moloch.cpp_CMoloch_process_FUN_005204e0 at 0052091b
;
; Referenced Globals:
;   TerminatedCString s_moloch_morph_todemon_wav_005ea2f8
;   TerminatedCString s_moloch_morph_tohuman_wav_005ea311
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00521230
        ;   Label: core_moloch.cpp_CMoloch_startMorph_FUN_00521230
    MOV dword ptr [EAX + 0x22358],0x0   ; 00521234
    MOV EDX,dword ptr [EAX + 0x22350]   ; 0052123e
    MOV dword ptr [EAX + 0x22354],0x1   ; 00521244
    TEST EDX,EDX                        ; 0052124e
    JZ 0x00521265                       ; 00521250
        ;   XREF to: 00521265 (CONDITIONAL_JUMP)  ; LAB_00521265
    PUSH 0x5ea2f8                       ; 00521252 | = "moloch-morph-todemon.wav"
    MOV EDX,dword ptr [EAX + 0x154]     ; 00521257
    PUSH EAX                            ; 0052125d
    CALL dword ptr [EDX + 0x2c]         ; 0052125e
    ADD ESP,0x8                         ; 00521261
    RET                                 ; 00521264
    PUSH 0x5ea311                       ; 00521265 | = "moloch-morph-tohuman.wav"
        ;   Label: LAB_00521265
    MOV EDX,dword ptr [EAX + 0x154]     ; 0052126a
    PUSH EAX                            ; 00521270
    CALL dword ptr [EDX + 0x2c]         ; 00521271
    ADD ESP,0x8                         ; 00521274
    RET                                 ; 00521277


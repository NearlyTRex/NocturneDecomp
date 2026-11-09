; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double sound_snddx_cpp_FUN_00556f80(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_sound_snddx_cpp_005ea0c8
;   TerminatedCString s_DirectSoundDevice_getSfx_005ea0db
;   TerminatedCString s_Get_playback_cursor_of_h_005ea111
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_sndmain.cpp_FUN_0054fd70
;   sound_sndmain.cpp_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00556f80
        ;   Label: sound_snddx.cpp_FUN_00556f80
    PUSH ESI                            ; 00556f81
    PUSH EDI                            ; 00556f82
    PUSH EBP                            ; 00556f83
    MOV EBP,ESP                         ; 00556f84
    SUB ESP,0x1a4                       ; 00556f86
    AND ESP,0xfffffff8                  ; 00556f8c
    MOV ESI,dword ptr [EBP + 0x18]      ; 00556f8f
    MOV EBX,dword ptr [ESI + 0x60]      ; 00556f92
    TEST EBX,EBX                        ; 00556f95
    JLE 0x00556f9e                      ; 00556f97
        ;   XREF to: 00556f9e (CONDITIONAL_JUMP)  ; LAB_00556f9e
    CMP EBX,0x1f                        ; 00556f99
    JL 0x00556fe2                       ; 00556f9c
        ;   XREF to: 00556fe2 (CONDITIONAL_JUMP)  ; LAB_00556fe2
    MOV ECX,0x5ea0c8                    ; 00556f9e | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_00556f9e
    MOV EDI,0x601                       ; 00556fa3
    PUSH 0x5ea0db                       ; 00556fa8 | = "DirectSoundDevice::getSfxPlaybackPos ..."
    MOV dword ptr [0x01d046a0],ECX      ; 00556fad | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00556fb3 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00556fb9
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00556fbe
    MOV EAX,dword ptr [ESI + 0x68]      ; 00556fc1
        ;   Label: LAB_00556fc1
    TEST EAX,EAX                        ; 00556fc4
    JNZ 0x00556ff7                      ; 00556fc6
        ;   XREF to: 00556ff7 (CONDITIONAL_JUMP)  ; LAB_00556ff7
    MOV EDX,0xbff00000                  ; 00556fc8
    MOV dword ptr [ESP],EAX             ; 00556fcd
    MOV dword ptr [ESP + 0x4],EDX       ; 00556fd0
    MOV EAX,dword ptr [ESP]             ; 00556fd4
    MOV EDX,dword ptr [ESP + 0x4]       ; 00556fd7
    MOV ESP,EBP                         ; 00556fdb
    POP EBP                             ; 00556fdd
    POP EDI                             ; 00556fde
    POP ESI                             ; 00556fdf
    POP EBX                             ; 00556fe0
    RET                                 ; 00556fe1
    LEA EAX,[EBX*0x8 + 0x0]             ; 00556fe2
        ;   Label: LAB_00556fe2
    ADD EAX,EBX                         ; 00556fe9
    CMP dword ptr [EAX*0x4 + 0x264ac10],0x0 ; 00556feb
    JZ 0x00556f9e                       ; 00556ff3
        ;   XREF to: 00556f9e (CONDITIONAL_JUMP)  ; LAB_00556f9e
    JMP 0x00556fc1                      ; 00556ff5
        ;   XREF to: 00556fc1 (UNCONDITIONAL_JUMP)  ; LAB_00556fc1
    LEA EAX,[EBX*0x8 + 0x0]             ; 00556ff7
        ;   Label: LAB_00556ff7
    ADD EAX,EBX                         ; 00556ffe
    LEA EBX,[ESP + 0x198]               ; 00557000
    PUSH EBX                            ; 00557007
    LEA EBX,[ESP + 0x1a0]               ; 00557008
    MOV EAX,dword ptr [EAX*0x4 + 0x264ac10] ; 0055700f
    PUSH EBX                            ; 00557016
    MOV EDX,dword ptr [EAX]             ; 00557017
    PUSH EAX                            ; 00557019
    CALL dword ptr [EDX + 0x10]         ; 0055701a
    TEST EAX,EAX                        ; 0055701d
    JNZ 0x00557054                      ; 0055701f
        ;   XREF to: 00557054 (CONDITIONAL_JUMP)  ; LAB_00557054
    MOV EBX,dword ptr [ESP + 0x19c]     ; 00557021
    PUSH EBX                            ; 00557028
    MOV EDI,dword ptr [ESI + 0x68]      ; 00557029
    PUSH EDI                            ; 0055702c
    CALL sound_sndmain.cpp_FUN_0054fd70 ; 0055702d
        ;   XREF to: 0054fd70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054fd70()
    ADD ESP,0x8                         ; 00557032
    MOV dword ptr [ESP + 0x1a0],EAX     ; 00557035
    FILD dword ptr [ESP + 0x1a0]        ; 0055703c
    FSTP double ptr [ESP]               ; 00557043
    MOV EAX,dword ptr [ESP]             ; 00557046
    MOV EDX,dword ptr [ESP + 0x4]       ; 00557049
    MOV ESP,EBP                         ; 0055704d
    POP EBP                             ; 0055704f
    POP EDI                             ; 00557050
    POP ESI                             ; 00557051
    POP EBX                             ; 00557052
    RET                                 ; 00557053
    PUSH EAX                            ; 00557054
        ;   Label: LAB_00557054
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557055
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 0055705a
    PUSH EAX                            ; 0055705d
    PUSH 0x5ea111                       ; 0055705e | = "Get playback cursor of hardware sfx s..."
    PUSH 0x5e9a3b                       ; 00557063 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 00557068
    PUSH EAX                            ; 0055706c
    CALL crt_unknown.c_FUN_005b7790     ; 0055706d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00557072
    LEA EAX,[ESP + 0x8]                 ; 00557075
    PUSH EAX                            ; 00557079
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0055707a
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 0055707f
    XOR EDX,EDX                         ; 00557082
    MOV ECX,0xbff00000                  ; 00557084
    MOV dword ptr [ESP],EDX             ; 00557089
    MOV dword ptr [ESP + 0x4],ECX       ; 0055708c
    MOV EAX,dword ptr [ESP]             ; 00557090
    MOV EDX,dword ptr [ESP + 0x4]       ; 00557093
    MOV ESP,EBP                         ; 00557097
    POP EBP                             ; 00557099
    POP EDI                             ; 0055709a
    POP ESI                             ; 0055709b
    POP EBX                             ; 0055709c
    RET                                 ; 0055709d


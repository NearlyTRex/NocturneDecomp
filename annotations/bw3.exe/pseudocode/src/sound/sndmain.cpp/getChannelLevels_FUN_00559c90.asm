; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_00559c90(int channel,float *out_peak,float *out_average)
;
; Parameters:
; int              Stack[0x4]:4   channel
; float *          Stack[0x8]:4   out_peak
; float *          Stack[0xc]:4   out_average
;
; Referenced Globals:
;   undefined4 DAT_02cf329c
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556fd0
;   sound_sndmain.cpp_lockSound_FUN_00558e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559c90
        ;   Label: sound_sndmain.cpp_getChannelLevels_FUN_00559c90
    PUSH ESI                            ; 00559c91
    PUSH EDI                            ; 00559c92
    PUSH EBP                            ; 00559c93
    MOV EBP,ESP                         ; 00559c94
    SUB ESP,0xc                         ; 00559c96
    AND ESP,0xfffffff8                  ; 00559c99
    MOV EBX,dword ptr [EBP + 0x14]      ; 00559c9c
    MOV EDI,dword ptr [EBP + 0x18]      ; 00559c9f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00559ca2
    CMP dword ptr [EBX*0x4 + 0x2cf32cc],0x0 ; 00559ca5
    JNZ 0x00559d72                      ; 00559cad
        ;   XREF to: 00559d72 (CONDITIONAL_JUMP)  ; LAB_00559d72
    TEST EDI,EDI                        ; 00559cb3
        ;   Label: LAB_00559cb3
    JZ 0x00559cbd                       ; 00559cb5
        ;   XREF to: 00559cbd (CONDITIONAL_JUMP)  ; LAB_00559cbd
    MOV dword ptr [EDI],0x0             ; 00559cb7
    TEST ESI,ESI                        ; 00559cbd
        ;   Label: LAB_00559cbd
    JZ 0x00559cc7                       ; 00559cbf
        ;   XREF to: 00559cc7 (CONDITIONAL_JUMP)  ; LAB_00559cc7
    MOV dword ptr [ESI],0x0             ; 00559cc1
    XOR EAX,EAX                         ; 00559cc7
        ;   Label: LAB_00559cc7
    MOV EBX,dword ptr [EBX*0x4 + 0x2cf32cc] ; 00559cc9
    MOV dword ptr [ESP],EAX             ; 00559cd0
    MOV dword ptr [ESP + 0x4],EAX       ; 00559cd3
    CALL sound_sndmain.cpp_lockSound_FUN_00558e90 ; 00559cd7
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00558e90()
    MOV ECX,dword ptr [0x02cf329c]      ; 00559cdc | DAT_02cf329c
    XOR EDX,EDX                         ; 00559ce2
    TEST ECX,ECX                        ; 00559ce4
    JLE 0x00559d20                      ; 00559ce6
        ;   XREF to: 00559d20 (CONDITIONAL_JUMP)  ; LAB_00559d20
    FLD float ptr [EBX]                 ; 00559ce8
        ;   Label: LAB_00559ce8
    FABS                                ; 00559cea
    FLD float ptr [ESP]                 ; 00559cec
    ADD EBX,0x4                         ; 00559cef
    FXCH                                ; 00559cf2
    FSTP float ptr [ESP + 0x8]          ; 00559cf4
    FADD float ptr [ESP + 0x8]          ; 00559cf8
    FLD float ptr [ESP + 0x8]           ; 00559cfc
    FXCH                                ; 00559d00
    FSTP float ptr [ESP]                ; 00559d02
    FCOMP float ptr [ESP + 0x4]         ; 00559d05
    FNSTSW AX                           ; 00559d09
    SAHF                                ; 00559d0b
    JBE 0x00559d16                      ; 00559d0c
        ;   XREF to: 00559d16 (CONDITIONAL_JUMP)  ; LAB_00559d16
    MOV EAX,dword ptr [ESP + 0x8]       ; 00559d0e
    MOV dword ptr [ESP + 0x4],EAX       ; 00559d12
    MOV EAX,[0x02cf329c]                ; 00559d16 | DAT_02cf329c
        ;   Label: LAB_00559d16
    INC EDX                             ; 00559d1b
    CMP EDX,EAX                         ; 00559d1c
    JL 0x00559ce8                       ; 00559d1e
        ;   XREF to: 00559ce8 (CONDITIONAL_JUMP)  ; LAB_00559ce8
    CALL sound_sndmain.cpp_FUN_00556fd0 ; 00559d20
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556fd0()
        ;   Label: LAB_00559d20
    FILD dword ptr [0x02cf329c]         ; 00559d25 | DAT_02cf329c
    FDIVR float ptr [ESP]               ; 00559d2b
    FLD float ptr [ESP + 0x4]           ; 00559d2e
    FLD1                                ; 00559d32
    FXCH ST2                            ; 00559d34
    FSTP float ptr [ESP]                ; 00559d36
    FXCH                                ; 00559d39
    FCOMPP                              ; 00559d3b
    FNSTSW AX                           ; 00559d3d
    SAHF                                ; 00559d3f
    JNC 0x00559d4a                      ; 00559d40
        ;   XREF to: 00559d4a (CONDITIONAL_JUMP)  ; LAB_00559d4a
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 00559d42
    FLD float ptr [ESP]                 ; 00559d4a
        ;   Label: LAB_00559d4a
    FLD1                                ; 00559d4d
    FCOMPP                              ; 00559d4f
    FNSTSW AX                           ; 00559d51
    SAHF                                ; 00559d53
    JNC 0x00559d5d                      ; 00559d54
        ;   XREF to: 00559d5d (CONDITIONAL_JUMP)  ; LAB_00559d5d
    MOV dword ptr [ESP],0x3f800000      ; 00559d56
    TEST EDI,EDI                        ; 00559d5d
        ;   Label: LAB_00559d5d
    JZ 0x00559d67                       ; 00559d5f
        ;   XREF to: 00559d67 (CONDITIONAL_JUMP)  ; LAB_00559d67
    MOV EDX,dword ptr [ESP + 0x4]       ; 00559d61
    MOV dword ptr [EDI],EDX             ; 00559d65
    TEST ESI,ESI                        ; 00559d67
        ;   Label: LAB_00559d67
    JNZ 0x00559d84                      ; 00559d69
        ;   XREF to: 00559d84 (CONDITIONAL_JUMP)  ; LAB_00559d84
    MOV ESP,EBP                         ; 00559d6b
    POP EBP                             ; 00559d6d
    POP EDI                             ; 00559d6e
    POP ESI                             ; 00559d6f
    POP EBX                             ; 00559d70
    RET                                 ; 00559d71
    CMP dword ptr [0x02cf329c],0x1      ; 00559d72 | DAT_02cf329c
        ;   Label: LAB_00559d72
    JL 0x00559cb3                       ; 00559d79
        ;   XREF to: 00559cb3 (CONDITIONAL_JUMP)  ; LAB_00559cb3
    JMP 0x00559cc7                      ; 00559d7f
        ;   XREF to: 00559cc7 (UNCONDITIONAL_JUMP)  ; LAB_00559cc7
    MOV EDX,dword ptr [ESP]             ; 00559d84
        ;   Label: LAB_00559d84
    MOV dword ptr [ESI],EDX             ; 00559d87
    MOV ESP,EBP                         ; 00559d89
    POP EBP                             ; 00559d8b
    POP EDI                             ; 00559d8c
    POP ESI                             ; 00559d8d
    POP EBX                             ; 00559d8e
    RET                                 ; 00559d8f


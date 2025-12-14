; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_getChannelLevels_FUN_005ac990(int channel, float * out_peak, float * out_average)
;
; Parameters:
; int              Stack[0x4]:4   channel
; float *          Stack[0x8]:4   out_peak
; float *          Stack[0xc]:4   out_average
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   int g_MixBufferSize
;   void*[8] g_ChannelPrimaryBuffers
;
; Called Functions:
;   sound_sndmain.cpp_lockSound_FUN_005abd30
;   sound_sndmain.cpp_unlockSound_FUN_005abdc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ac990
        ;   Label: sound_sndmain.cpp_getChannelLevels_FUN_005ac990
    PUSH ESI                            ; 005ac991
    PUSH EDI                            ; 005ac992
    PUSH EBP                            ; 005ac993
    MOV EBP,ESP                         ; 005ac994
    SUB ESP,0xc                         ; 005ac996
    AND ESP,0xfffffff8                  ; 005ac999
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ac99c
    MOV EDI,dword ptr [EBP + 0x18]      ; 005ac99f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005ac9a2
    CMP dword ptr [EBX*0x4 + 0x3f692b0],0x0 ; 005ac9a5 | g_ChannelPrimaryBuffers
    JNZ 0x005aca72                      ; 005ac9ad
        ;   XREF to: 005aca72 (CONDITIONAL_JUMP)  ; LAB_005aca72
    TEST EDI,EDI                        ; 005ac9b3
        ;   Label: LAB_005ac9b3
    JZ 0x005ac9bd                       ; 005ac9b5
        ;   XREF to: 005ac9bd (CONDITIONAL_JUMP)  ; LAB_005ac9bd
    MOV dword ptr [EDI],0x0             ; 005ac9b7
    TEST ESI,ESI                        ; 005ac9bd
        ;   Label: LAB_005ac9bd
    JZ 0x005ac9c7                       ; 005ac9bf
        ;   XREF to: 005ac9c7 (CONDITIONAL_JUMP)  ; LAB_005ac9c7
    MOV dword ptr [ESI],0x0             ; 005ac9c1
    XOR EAX,EAX                         ; 005ac9c7
        ;   Label: LAB_005ac9c7
    MOV EBX,dword ptr [EBX*0x4 + 0x3f692b0] ; 005ac9c9 | g_ChannelPrimaryBuffers
    MOV dword ptr [ESP],EAX             ; 005ac9d0
    MOV dword ptr [ESP + 0x4],EAX       ; 005ac9d3
    CALL sound_sndmain.cpp_lockSound_FUN_005abd30 ; 005ac9d7
        ;   XREF to: 005abd30 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005abd30()
    MOV ECX,dword ptr [0x03f69280]      ; 005ac9dc | g_MixBufferSize
    XOR EDX,EDX                         ; 005ac9e2
    TEST ECX,ECX                        ; 005ac9e4
    JLE 0x005aca20                      ; 005ac9e6
        ;   XREF to: 005aca20 (CONDITIONAL_JUMP)  ; LAB_005aca20
    FLD float ptr [EBX]                 ; 005ac9e8
        ;   Label: LAB_005ac9e8
    FABS                                ; 005ac9ea
    FLD float ptr [ESP]                 ; 005ac9ec
    ADD EBX,0x4                         ; 005ac9ef
    FXCH                                ; 005ac9f2
    FSTP float ptr [ESP + 0x8]          ; 005ac9f4
    FADD float ptr [ESP + 0x8]          ; 005ac9f8
    FLD float ptr [ESP + 0x8]           ; 005ac9fc
    FXCH                                ; 005aca00
    FSTP float ptr [ESP]                ; 005aca02
    FCOMP float ptr [ESP + 0x4]         ; 005aca05
    FNSTSW AX                           ; 005aca09
    SAHF                                ; 005aca0b
    JBE 0x005aca16                      ; 005aca0c
        ;   XREF to: 005aca16 (CONDITIONAL_JUMP)  ; LAB_005aca16
    MOV EAX,dword ptr [ESP + 0x8]       ; 005aca0e
    MOV dword ptr [ESP + 0x4],EAX       ; 005aca12
    MOV EAX,[0x03f69280]                ; 005aca16 | g_MixBufferSize
        ;   Label: LAB_005aca16
    INC EDX                             ; 005aca1b
    CMP EDX,EAX                         ; 005aca1c
    JL 0x005ac9e8                       ; 005aca1e
        ;   XREF to: 005ac9e8 (CONDITIONAL_JUMP)  ; LAB_005ac9e8
    CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0 ; 005aca20
        ;   XREF to: 005abdc0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_unlockSound_FUN_005abdc0()
        ;   Label: LAB_005aca20
    FILD dword ptr [0x03f69280]         ; 005aca25 | g_MixBufferSize
    FDIVR float ptr [ESP]               ; 005aca2b
    FLD float ptr [ESP + 0x4]           ; 005aca2e
    FLD1                                ; 005aca32
    FXCH ST2                            ; 005aca34
    FSTP float ptr [ESP]                ; 005aca36
    FXCH                                ; 005aca39
    FCOMPP                              ; 005aca3b
    FNSTSW AX                           ; 005aca3d
    SAHF                                ; 005aca3f
    JNC 0x005aca4a                      ; 005aca40
        ;   XREF to: 005aca4a (CONDITIONAL_JUMP)  ; LAB_005aca4a
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 005aca42
    FLD float ptr [ESP]                 ; 005aca4a
        ;   Label: LAB_005aca4a
    FLD1                                ; 005aca4d
    FCOMPP                              ; 005aca4f
    FNSTSW AX                           ; 005aca51
    SAHF                                ; 005aca53
    JNC 0x005aca5d                      ; 005aca54
        ;   XREF to: 005aca5d (CONDITIONAL_JUMP)  ; LAB_005aca5d
    MOV dword ptr [ESP],0x3f800000      ; 005aca56
    TEST EDI,EDI                        ; 005aca5d
        ;   Label: LAB_005aca5d
    JZ 0x005aca67                       ; 005aca5f
        ;   XREF to: 005aca67 (CONDITIONAL_JUMP)  ; LAB_005aca67
    MOV EDX,dword ptr [ESP + 0x4]       ; 005aca61
    MOV dword ptr [EDI],EDX             ; 005aca65
    TEST ESI,ESI                        ; 005aca67
        ;   Label: LAB_005aca67
    JNZ 0x005aca84                      ; 005aca69
        ;   XREF to: 005aca84 (CONDITIONAL_JUMP)  ; LAB_005aca84
    MOV ESP,EBP                         ; 005aca6b
    POP EBP                             ; 005aca6d
    POP EDI                             ; 005aca6e
    POP ESI                             ; 005aca6f
    POP EBX                             ; 005aca70
    RET                                 ; 005aca71
    CMP dword ptr [0x03f69280],0x1      ; 005aca72 | g_MixBufferSize
        ;   Label: LAB_005aca72
    JL 0x005ac9b3                       ; 005aca79
        ;   XREF to: 005ac9b3 (CONDITIONAL_JUMP)  ; LAB_005ac9b3
    JMP 0x005ac9c7                      ; 005aca7f
        ;   XREF to: 005ac9c7 (UNCONDITIONAL_JUMP)  ; LAB_005ac9c7
    MOV EDX,dword ptr [ESP]             ; 005aca84
        ;   Label: LAB_005aca84
    MOV dword ptr [ESI],EDX             ; 005aca87
    MOV ESP,EBP                         ; 005aca89
    POP EBP                             ; 005aca8b
    POP EDI                             ; 005aca8c
    POP ESI                             ; 005aca8d
    POP EBX                             ; 005aca8e
    RET                                 ; 005aca8f


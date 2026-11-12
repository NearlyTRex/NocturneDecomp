; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_getChannelLevels_FUN_005540f0(int channel,float *out_peak,float *out_average)
;
; Parameters:
; int              Stack[0x4]:4   channel
; float *          Stack[0x8]:4   out_peak
; float *          Stack[0xc]:4   out_average
;
; Referenced Globals:
;   undefined4 DAT_02648e98
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00551440
;   sound_sndmain.cpp_lockSound_FUN_005532f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005540f0
        ;   Label: sound_sndmain.cpp_getChannelLevels_FUN_005540f0
    PUSH ESI                            ; 005540f1
    PUSH EDI                            ; 005540f2
    PUSH EBP                            ; 005540f3
    MOV EBP,ESP                         ; 005540f4
    SUB ESP,0xc                         ; 005540f6
    AND ESP,0xfffffff8                  ; 005540f9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005540fc
    MOV EDI,dword ptr [EBP + 0x18]      ; 005540ff
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00554102
    CMP dword ptr [EBX*0x4 + 0x2648ec8],0x0 ; 00554105
    JNZ 0x005541d2                      ; 0055410d
        ;   XREF to: 005541d2 (CONDITIONAL_JUMP)  ; LAB_005541d2
    TEST EDI,EDI                        ; 00554113
        ;   Label: LAB_00554113
    JZ 0x0055411d                       ; 00554115
        ;   XREF to: 0055411d (CONDITIONAL_JUMP)  ; LAB_0055411d
    MOV dword ptr [EDI],0x0             ; 00554117
    TEST ESI,ESI                        ; 0055411d
        ;   Label: LAB_0055411d
    JZ 0x00554127                       ; 0055411f
        ;   XREF to: 00554127 (CONDITIONAL_JUMP)  ; LAB_00554127
    MOV dword ptr [ESI],0x0             ; 00554121
    XOR EAX,EAX                         ; 00554127
        ;   Label: LAB_00554127
    MOV EBX,dword ptr [EBX*0x4 + 0x2648ec8] ; 00554129
    MOV dword ptr [ESP],EAX             ; 00554130
    MOV dword ptr [ESP + 0x4],EAX       ; 00554133
    CALL sound_sndmain.cpp_lockSound_FUN_005532f0 ; 00554137
        ;   XREF to: 005532f0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_005532f0()
    MOV ECX,dword ptr [0x02648e98]      ; 0055413c | DAT_02648e98
    XOR EDX,EDX                         ; 00554142
    TEST ECX,ECX                        ; 00554144
    JLE 0x00554180                      ; 00554146
        ;   XREF to: 00554180 (CONDITIONAL_JUMP)  ; LAB_00554180
    FLD float ptr [EBX]                 ; 00554148
        ;   Label: LAB_00554148
    FABS                                ; 0055414a
    FLD float ptr [ESP]                 ; 0055414c
    ADD EBX,0x4                         ; 0055414f
    FXCH                                ; 00554152
    FSTP float ptr [ESP + 0x8]          ; 00554154
    FADD float ptr [ESP + 0x8]          ; 00554158
    FLD float ptr [ESP + 0x8]           ; 0055415c
    FXCH                                ; 00554160
    FSTP float ptr [ESP]                ; 00554162
    FCOMP float ptr [ESP + 0x4]         ; 00554165
    FNSTSW AX                           ; 00554169
    SAHF                                ; 0055416b
    JBE 0x00554176                      ; 0055416c
        ;   XREF to: 00554176 (CONDITIONAL_JUMP)  ; LAB_00554176
    MOV EAX,dword ptr [ESP + 0x8]       ; 0055416e
    MOV dword ptr [ESP + 0x4],EAX       ; 00554172
    MOV EAX,[0x02648e98]                ; 00554176 | DAT_02648e98
        ;   Label: LAB_00554176
    INC EDX                             ; 0055417b
    CMP EDX,EAX                         ; 0055417c
    JL 0x00554148                       ; 0055417e
        ;   XREF to: 00554148 (CONDITIONAL_JUMP)  ; LAB_00554148
    CALL sound_sndmain.cpp_FUN_00551440 ; 00554180
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00551440()
        ;   Label: LAB_00554180
    FILD dword ptr [0x02648e98]         ; 00554185 | DAT_02648e98
    FDIVR float ptr [ESP]               ; 0055418b
    FLD float ptr [ESP + 0x4]           ; 0055418e
    FLD1                                ; 00554192
    FXCH ST2                            ; 00554194
    FSTP float ptr [ESP]                ; 00554196
    FXCH                                ; 00554199
    FCOMPP                              ; 0055419b
    FNSTSW AX                           ; 0055419d
    SAHF                                ; 0055419f
    JNC 0x005541aa                      ; 005541a0
        ;   XREF to: 005541aa (CONDITIONAL_JUMP)  ; LAB_005541aa
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 005541a2
    FLD float ptr [ESP]                 ; 005541aa
        ;   Label: LAB_005541aa
    FLD1                                ; 005541ad
    FCOMPP                              ; 005541af
    FNSTSW AX                           ; 005541b1
    SAHF                                ; 005541b3
    JNC 0x005541bd                      ; 005541b4
        ;   XREF to: 005541bd (CONDITIONAL_JUMP)  ; LAB_005541bd
    MOV dword ptr [ESP],0x3f800000      ; 005541b6
    TEST EDI,EDI                        ; 005541bd
        ;   Label: LAB_005541bd
    JZ 0x005541c7                       ; 005541bf
        ;   XREF to: 005541c7 (CONDITIONAL_JUMP)  ; LAB_005541c7
    MOV EDX,dword ptr [ESP + 0x4]       ; 005541c1
    MOV dword ptr [EDI],EDX             ; 005541c5
    TEST ESI,ESI                        ; 005541c7
        ;   Label: LAB_005541c7
    JNZ 0x005541e4                      ; 005541c9
        ;   XREF to: 005541e4 (CONDITIONAL_JUMP)  ; LAB_005541e4
    MOV ESP,EBP                         ; 005541cb
    POP EBP                             ; 005541cd
    POP EDI                             ; 005541ce
    POP ESI                             ; 005541cf
    POP EBX                             ; 005541d0
    RET                                 ; 005541d1
    CMP dword ptr [0x02648e98],0x1      ; 005541d2 | DAT_02648e98
        ;   Label: LAB_005541d2
    JL 0x00554113                       ; 005541d9
        ;   XREF to: 00554113 (CONDITIONAL_JUMP)  ; LAB_00554113
    JMP 0x00554127                      ; 005541df
        ;   XREF to: 00554127 (UNCONDITIONAL_JUMP)  ; LAB_00554127
    MOV EDX,dword ptr [ESP]             ; 005541e4
        ;   Label: LAB_005541e4
    MOV dword ptr [ESI],EDX             ; 005541e7
    MOV ESP,EBP                         ; 005541e9
    POP EBP                             ; 005541eb
    POP EDI                             ; 005541ec
    POP ESI                             ; 005541ed
    POP EBX                             ; 005541ee
    RET                                 ; 005541ef


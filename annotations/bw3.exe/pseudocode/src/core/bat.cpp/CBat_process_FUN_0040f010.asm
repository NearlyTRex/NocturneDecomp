; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_process_FUN_0040f010(CBat *this_ptr,float delta_time)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005b62ae
;   undefined4 DAT_005b62b6
;   undefined4 DAT_005b62be
;   undefined4 DAT_005b62c6
;   undefined4 DAT_005b62ce
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_bat.cpp_CBat_updateCoursePosition_FUN_0040f2f0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00556700
;   sound_sndmain.cpp_isWithinListenerRadius_FUN_00557170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f010
        ;   Label: core_bat.cpp_CBat_process_FUN_0040f010
    PUSH ESI                            ; 0040f011
    PUSH EDI                            ; 0040f012
    PUSH EBP                            ; 0040f013
    MOV EBP,ESP                         ; 0040f014
    SUB ESP,0x34                        ; 0040f016
    AND ESP,0xfffffff8                  ; 0040f019
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040f01c
    LEA EDI,[ESP + 0x10]                ; 0040f01f
    LEA ESI,[EBX + 0x20]                ; 0040f023
    MOVSD ES:EDI,ESI                    ; 0040f026
    MOVSD ES:EDI,ESI                    ; 0040f027
    MOVSD ES:EDI,ESI                    ; 0040f028
    FLD float ptr [EBX + 0x308]         ; 0040f029
    FMUL float ptr [EBP + 0x18]         ; 0040f02f
    PUSH EBX                            ; 0040f032
    FADD float ptr [EBX + 0x304]        ; 0040f033
    LEA EDI,[ESP + 0x20]                ; 0040f039
    FSTP float ptr [EBX + 0x304]        ; 0040f03d
    CALL core_bat.cpp_CBat_updateCoursePosition_FUN_0040f2f0 ; 0040f043
        ;   XREF to: 0040f2f0 (UNCONDITIONAL_CALL)  ; void core_bat.cpp_CBat_updateCoursePosition_FUN_0040f2f0(CBat * this_ptr)
    LEA EAX,[EBX + 0x20]                ; 0040f048
    LEA ESI,[ESP + 0x8]                 ; 0040f04b
    ADD ESP,0x4                         ; 0040f04f
    FLD float ptr [EAX]                 ; 0040f052
    FLD float ptr [EAX + 0x4]           ; 0040f054
    FLD float ptr [EAX + 0x8]           ; 0040f057
    FXCH ST2                            ; 0040f05a
    FSUB float ptr [ESP + 0x10]         ; 0040f05c
    FXCH                                ; 0040f060
    FSUB float ptr [ESP + 0x14]         ; 0040f062
    FXCH ST2                            ; 0040f066
    FSUB float ptr [ESP + 0x18]         ; 0040f068
    FXCH                                ; 0040f06c
    FSTP float ptr [ESP + 0x4]          ; 0040f06e
    FXCH                                ; 0040f072
    FSTP float ptr [ESP + 0x8]          ; 0040f074
    FSTP float ptr [ESP + 0xc]          ; 0040f078
    MOVSD ES:EDI,ESI                    ; 0040f07c
    MOVSD ES:EDI,ESI                    ; 0040f07d
    MOVSD ES:EDI,ESI                    ; 0040f07e
    FLD float ptr [ESP + 0x20]          ; 0040f07f
    FMUL double ptr [0x005b62ae]        ; 0040f083 | DAT_005b62ae
    FDIV float ptr [EBP + 0x18]         ; 0040f089
    FADD double ptr [0x005b62b6]        ; 0040f08c | DAT_005b62b6
    FST float ptr [ESP]                 ; 0040f092
    FCOMP double ptr [0x005b62be]       ; 0040f095 | DAT_005b62be
    FNSTSW AX                           ; 0040f09b
    SAHF                                ; 0040f09d
    JC 0x0040f153                       ; 0040f09e
        ;   XREF to: 0040f153 (CONDITIONAL_JUMP)  ; LAB_0040f153
    FLD float ptr [ESP]                 ; 0040f0a4
        ;   Label: LAB_0040f0a4
    FCOMP double ptr [0x005b62c6]       ; 0040f0a7 | DAT_005b62c6
    FNSTSW AX                           ; 0040f0ad
    SAHF                                ; 0040f0af
    JBE 0x0040f0b9                      ; 0040f0b0
        ;   XREF to: 0040f0b9 (CONDITIONAL_JUMP)  ; LAB_0040f0b9
    MOV dword ptr [ESP],0x42700000      ; 0040f0b2
    FLD float ptr [ESP]                 ; 0040f0b9
        ;   Label: LAB_0040f0b9
    FSUB float ptr [EBX + 0x310]        ; 0040f0bc
    FMUL double ptr [0x005b62ce]        ; 0040f0c2 | DAT_005b62ce
    FLD float ptr [EBX + 0x310]         ; 0040f0c8
    FXCH                                ; 0040f0ce
    FADD ST0,ST1                        ; 0040f0d0
    FLD float ptr [EBP + 0x18]          ; 0040f0d2
    FXCH                                ; 0040f0d5
    FSTP ST2                            ; 0040f0d7
    FXCH                                ; 0040f0d9
    FSTP float ptr [EBX + 0x310]        ; 0040f0db
    FMUL float ptr [EBX + 0x310]        ; 0040f0e1
    FMUL float ptr [EBX + 0x30c]        ; 0040f0e7
    LEA EAX,[EBX + 0x188]               ; 0040f0ed
    FADD float ptr [EBX + 0x184]        ; 0040f0f3
    PUSH EAX                            ; 0040f0f9
    FSTP float ptr [EBX + 0x184]        ; 0040f0fa
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0040f100
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040f105
    MOV EDX,dword ptr [EAX + 0x100]     ; 0040f108
    MOV dword ptr [ESP + 0x30],EDX      ; 0040f10e
    FILD dword ptr [ESP + 0x30]         ; 0040f112
    FCOMP float ptr [EBX + 0x184]       ; 0040f116
    FNSTSW AX                           ; 0040f11c
    SAHF                                ; 0040f11e
    JA 0x0040f15f                       ; 0040f11f
        ;   XREF to: 0040f15f (CONDITIONAL_JUMP)  ; LAB_0040f15f
    MOV dword ptr [EBX + 0x184],0x0     ; 0040f121
    CMP byte ptr [EBX + 0x314],0x0      ; 0040f12b
        ;   Label: LAB_0040f12b
    JZ 0x0040f14c                       ; 0040f132
        ;   XREF to: 0040f14c (CONDITIONAL_JUMP)  ; LAB_0040f14c
    FLD float ptr [EBX + 0x384]         ; 0040f134
    FSUB float ptr [EBP + 0x18]         ; 0040f13a
    FST float ptr [EBX + 0x384]         ; 0040f13d
    FLDZ                                ; 0040f143
    FCOMPP                              ; 0040f145
    FNSTSW AX                           ; 0040f147
    SAHF                                ; 0040f149
    JNC 0x0040f17d                      ; 0040f14a
        ;   XREF to: 0040f17d (CONDITIONAL_JUMP)  ; LAB_0040f17d
    MOV ESP,EBP                         ; 0040f14c
        ;   Label: LAB_0040f14c
    POP EBP                             ; 0040f14e
    POP EDI                             ; 0040f14f
    POP ESI                             ; 0040f150
    POP EBX                             ; 0040f151
    RET                                 ; 0040f152
    MOV dword ptr [ESP],0x41200000      ; 0040f153
        ;   Label: LAB_0040f153
    JMP 0x0040f0a4                      ; 0040f15a
        ;   XREF to: 0040f0a4 (UNCONDITIONAL_JUMP)  ; LAB_0040f0a4
    FLDZ                                ; 0040f15f
        ;   Label: LAB_0040f15f
    FCOMP float ptr [EBX + 0x184]       ; 0040f161
    FNSTSW AX                           ; 0040f167
    SAHF                                ; 0040f169
    JBE 0x0040f12b                      ; 0040f16a
        ;   XREF to: 0040f12b (CONDITIONAL_JUMP)  ; LAB_0040f12b
    DEC EDX                             ; 0040f16c
    MOV dword ptr [ESP + 0x30],EDX      ; 0040f16d
    FILD dword ptr [ESP + 0x30]         ; 0040f171
    FSTP float ptr [EBX + 0x184]        ; 0040f175
    JMP 0x0040f12b                      ; 0040f17b
        ;   XREF to: 0040f12b (UNCONDITIONAL_JUMP)  ; LAB_0040f12b
    MOV ESI,dword ptr [EBX + 0x380]     ; 0040f17d
        ;   Label: LAB_0040f17d
    PUSH ESI                            ; 0040f183
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 0040f184
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0040f189
    TEST EAX,EAX                        ; 0040f18c
    JNZ 0x0040f1d6                      ; 0040f18e
        ;   XREF to: 0040f1d6 (CONDITIONAL_JUMP)  ; LAB_0040f1d6
    PUSH 0x42480000                     ; 0040f190
    SUB ESP,0x8                         ; 0040f195
    FLD float ptr [EBX + 0x28]          ; 0040f198
    FSTP double ptr [ESP]               ; 0040f19b
    SUB ESP,0x8                         ; 0040f19e
    FLD float ptr [EBX + 0x24]          ; 0040f1a1
    FSTP double ptr [ESP]               ; 0040f1a4
    SUB ESP,0x8                         ; 0040f1a7
    FLD float ptr [EBX + 0x20]          ; 0040f1aa
    FSTP double ptr [ESP]               ; 0040f1ad
    CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_00557170 ; 0040f1b0
        ;   XREF to: 00557170 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isWithinListenerRadius_FUN_00557170(double pos_x, double pos_y, double pos_z, float radius)
    ADD ESP,0x1c                        ; 0040f1b5
    TEST EAX,EAX                        ; 0040f1b8
    JZ 0x0040f1d6                       ; 0040f1ba
        ;   XREF to: 0040f1d6 (CONDITIONAL_JUMP)  ; LAB_0040f1d6
    LEA EAX,[EBX + 0x314]               ; 0040f1bc
    PUSH EAX                            ; 0040f1c2
    MOV EDX,dword ptr [EBX + 0x154]     ; 0040f1c3
    PUSH EBX                            ; 0040f1c9
    CALL dword ptr [EDX + 0x30]         ; 0040f1ca
    ADD ESP,0x8                         ; 0040f1cd
    MOV dword ptr [EBX + 0x380],EAX     ; 0040f1d0
    PUSH dword ptr [EBX + 0x37c]        ; 0040f1d6
        ;   Label: LAB_0040f1d6
    PUSH dword ptr [EBX + 0x378]        ; 0040f1dc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0040f1e2
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 0040f1e7
    MOV EAX,dword ptr [ESP + 0x38]      ; 0040f1eb
    MOV dword ptr [EBX + 0x384],EAX     ; 0040f1ef
    ADD ESP,0x8                         ; 0040f1f5
    MOV ESP,EBP                         ; 0040f1f8
    POP EBP                             ; 0040f1fa
    POP EDI                             ; 0040f1fb
    POP ESI                             ; 0040f1fc
    POP EBX                             ; 0040f1fd
    RET                                 ; 0040f1fe


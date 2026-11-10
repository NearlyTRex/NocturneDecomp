; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bat_cpp_CBat_process_FUN_00411200(CBat *this_ptr,float delta_time)
;
; Parameters:
; CBat *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005cb6e6
;   undefined4 DAT_005cb6ee
;   undefined4 DAT_005cb6f6
;   undefined4 DAT_005cb6fe
;   undefined4 DAT_005cb706
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_bat.cpp_CBat_updateCoursePosition_FUN_004114e0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_FUN_005515e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411200
        ;   Label: core_bat.cpp_CBat_process_FUN_00411200
    PUSH ESI                            ; 00411201
    PUSH EDI                            ; 00411202
    PUSH EBP                            ; 00411203
    MOV EBP,ESP                         ; 00411204
    SUB ESP,0x34                        ; 00411206
    AND ESP,0xfffffff8                  ; 00411209
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041120c
    LEA EDI,[ESP + 0x10]                ; 0041120f
    LEA ESI,[EBX + 0x20]                ; 00411213
    MOVSD ES:EDI,ESI                    ; 00411216
    MOVSD ES:EDI,ESI                    ; 00411217
    MOVSD ES:EDI,ESI                    ; 00411218
    FLD float ptr [EBX + 0x464]         ; 00411219
    FMUL float ptr [EBP + 0x18]         ; 0041121f
    PUSH EBX                            ; 00411222
    FADD float ptr [EBX + 0x460]        ; 00411223
    LEA EDI,[ESP + 0x20]                ; 00411229
    FSTP float ptr [EBX + 0x460]        ; 0041122d
    CALL core_bat.cpp_CBat_updateCoursePosition_FUN_004114e0 ; 00411233
        ;   XREF to: 004114e0 (UNCONDITIONAL_CALL)  ; void core_bat.cpp_CBat_updateCoursePosition_FUN_004114e0(CBat * this_ptr)
    LEA EAX,[EBX + 0x20]                ; 00411238
    LEA ESI,[ESP + 0x8]                 ; 0041123b
    ADD ESP,0x4                         ; 0041123f
    FLD float ptr [EAX]                 ; 00411242
    FLD float ptr [EAX + 0x4]           ; 00411244
    FLD float ptr [EAX + 0x8]           ; 00411247
    FXCH ST2                            ; 0041124a
    FSUB float ptr [ESP + 0x10]         ; 0041124c
    FXCH                                ; 00411250
    FSUB float ptr [ESP + 0x14]         ; 00411252
    FXCH ST2                            ; 00411256
    FSUB float ptr [ESP + 0x18]         ; 00411258
    FXCH                                ; 0041125c
    FSTP float ptr [ESP + 0x4]          ; 0041125e
    FXCH                                ; 00411262
    FSTP float ptr [ESP + 0x8]          ; 00411264
    FSTP float ptr [ESP + 0xc]          ; 00411268
    MOVSD ES:EDI,ESI                    ; 0041126c
    MOVSD ES:EDI,ESI                    ; 0041126d
    MOVSD ES:EDI,ESI                    ; 0041126e
    FLD float ptr [ESP + 0x20]          ; 0041126f
    FMUL double ptr [0x005cb6e6]        ; 00411273 | DAT_005cb6e6
    FDIV float ptr [EBP + 0x18]         ; 00411279
    FADD double ptr [0x005cb6ee]        ; 0041127c | DAT_005cb6ee
    FST float ptr [ESP]                 ; 00411282
    FCOMP double ptr [0x005cb6f6]       ; 00411285 | DAT_005cb6f6
    FNSTSW AX                           ; 0041128b
    SAHF                                ; 0041128d
    JC 0x00411343                       ; 0041128e
        ;   XREF to: 00411343 (CONDITIONAL_JUMP)  ; LAB_00411343
    FLD float ptr [ESP]                 ; 00411294
        ;   Label: LAB_00411294
    FCOMP double ptr [0x005cb6fe]       ; 00411297 | DAT_005cb6fe
    FNSTSW AX                           ; 0041129d
    SAHF                                ; 0041129f
    JBE 0x004112a9                      ; 004112a0
        ;   XREF to: 004112a9 (CONDITIONAL_JUMP)  ; LAB_004112a9
    MOV dword ptr [ESP],0x42700000      ; 004112a2
    FLD float ptr [ESP]                 ; 004112a9
        ;   Label: LAB_004112a9
    FSUB float ptr [EBX + 0x46c]        ; 004112ac
    FMUL double ptr [0x005cb706]        ; 004112b2 | DAT_005cb706
    FLD float ptr [EBX + 0x46c]         ; 004112b8
    FXCH                                ; 004112be
    FADD ST0,ST1                        ; 004112c0
    FLD float ptr [EBP + 0x18]          ; 004112c2
    FXCH                                ; 004112c5
    FSTP ST2                            ; 004112c7
    FXCH                                ; 004112c9
    FSTP float ptr [EBX + 0x46c]        ; 004112cb
    FMUL float ptr [EBX + 0x46c]        ; 004112d1
    FMUL float ptr [EBX + 0x468]        ; 004112d7
    LEA EAX,[EBX + 0x2e4]               ; 004112dd
    FADD float ptr [EBX + 0x2e0]        ; 004112e3
    PUSH EAX                            ; 004112e9
    FSTP float ptr [EBX + 0x2e0]        ; 004112ea
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 004112f0
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004112f5
    MOV EDX,dword ptr [EAX + 0x100]     ; 004112f8
    MOV dword ptr [ESP + 0x30],EDX      ; 004112fe
    FILD dword ptr [ESP + 0x30]         ; 00411302
    FCOMP float ptr [EBX + 0x2e0]       ; 00411306
    FNSTSW AX                           ; 0041130c
    SAHF                                ; 0041130e
    JA 0x0041134f                       ; 0041130f
        ;   XREF to: 0041134f (CONDITIONAL_JUMP)  ; LAB_0041134f
    MOV dword ptr [EBX + 0x2e0],0x0     ; 00411311
    CMP byte ptr [EBX + 0x470],0x0      ; 0041131b
        ;   Label: LAB_0041131b
    JZ 0x0041133c                       ; 00411322
        ;   XREF to: 0041133c (CONDITIONAL_JUMP)  ; LAB_0041133c
    FLD float ptr [EBX + 0x4e0]         ; 00411324
    FSUB float ptr [EBP + 0x18]         ; 0041132a
    FST float ptr [EBX + 0x4e0]         ; 0041132d
    FLDZ                                ; 00411333
    FCOMPP                              ; 00411335
    FNSTSW AX                           ; 00411337
    SAHF                                ; 00411339
    JNC 0x0041136d                      ; 0041133a
        ;   XREF to: 0041136d (CONDITIONAL_JUMP)  ; LAB_0041136d
    MOV ESP,EBP                         ; 0041133c
        ;   Label: LAB_0041133c
    POP EBP                             ; 0041133e
    POP EDI                             ; 0041133f
    POP ESI                             ; 00411340
    POP EBX                             ; 00411341
    RET                                 ; 00411342
    MOV dword ptr [ESP],0x41200000      ; 00411343
        ;   Label: LAB_00411343
    JMP 0x00411294                      ; 0041134a
        ;   XREF to: 00411294 (UNCONDITIONAL_JUMP)  ; LAB_00411294
    FLDZ                                ; 0041134f
        ;   Label: LAB_0041134f
    FCOMP float ptr [EBX + 0x2e0]       ; 00411351
    FNSTSW AX                           ; 00411357
    SAHF                                ; 00411359
    JBE 0x0041131b                      ; 0041135a
        ;   XREF to: 0041131b (CONDITIONAL_JUMP)  ; LAB_0041131b
    DEC EDX                             ; 0041135c
    MOV dword ptr [ESP + 0x30],EDX      ; 0041135d
    FILD dword ptr [ESP + 0x30]         ; 00411361
    FSTP float ptr [EBX + 0x2e0]        ; 00411365
    JMP 0x0041131b                      ; 0041136b
        ;   XREF to: 0041131b (UNCONDITIONAL_JUMP)  ; LAB_0041131b
    MOV ESI,dword ptr [EBX + 0x4dc]     ; 0041136d
        ;   Label: LAB_0041136d
    PUSH ESI                            ; 00411373
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00411374
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00411379
    TEST EAX,EAX                        ; 0041137c
    JNZ 0x004113c6                      ; 0041137e
        ;   XREF to: 004113c6 (CONDITIONAL_JUMP)  ; LAB_004113c6
    PUSH 0x42480000                     ; 00411380
    SUB ESP,0x8                         ; 00411385
    FLD float ptr [EBX + 0x28]          ; 00411388
    FSTP double ptr [ESP]               ; 0041138b
    SUB ESP,0x8                         ; 0041138e
    FLD float ptr [EBX + 0x24]          ; 00411391
    FSTP double ptr [ESP]               ; 00411394
    SUB ESP,0x8                         ; 00411397
    FLD float ptr [EBX + 0x20]          ; 0041139a
    FSTP double ptr [ESP]               ; 0041139d
    CALL sound_sndmain.cpp_FUN_005515e0 ; 004113a0
        ;   XREF to: 005515e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005515e0()
    ADD ESP,0x1c                        ; 004113a5
    TEST EAX,EAX                        ; 004113a8
    JZ 0x004113c6                       ; 004113aa
        ;   XREF to: 004113c6 (CONDITIONAL_JUMP)  ; LAB_004113c6
    LEA EAX,[EBX + 0x470]               ; 004113ac
    PUSH EAX                            ; 004113b2
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004113b3
    PUSH EBX                            ; 004113b9
    CALL dword ptr [EDX + 0x38]         ; 004113ba
    ADD ESP,0x8                         ; 004113bd
    MOV dword ptr [EBX + 0x4dc],EAX     ; 004113c0
    PUSH dword ptr [EBX + 0x4d8]        ; 004113c6
        ;   Label: LAB_004113c6
    PUSH dword ptr [EBX + 0x4d4]        ; 004113cc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004113d2
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 004113d7
    MOV EAX,dword ptr [ESP + 0x38]      ; 004113db
    MOV dword ptr [EBX + 0x4e0],EAX     ; 004113df
    ADD ESP,0x8                         ; 004113e5
    MOV ESP,EBP                         ; 004113e8
    POP EBP                             ; 004113ea
    POP EDI                             ; 004113eb
    POP ESI                             ; 004113ec
    POP EBX                             ; 004113ed
    RET                                 ; 004113ee


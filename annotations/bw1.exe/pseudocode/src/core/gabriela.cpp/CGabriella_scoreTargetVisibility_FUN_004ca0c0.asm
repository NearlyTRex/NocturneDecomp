; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target_actor
; int              Stack[0xc]:4   use_wider_fov
; Local Variables:
; undefined        Stack[-0x15c]:1  local_15c
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004ca450 at 004ca67e
;
; Referenced Globals:
;   undefined4 DAT_005e11bc
;   undefined4 DAT_005e11c4
;   undefined4 DAT_005e11cc
;   undefined4 DAT_005e11d4
;   undefined4 DAT_005e11dc
;   undefined4 DAT_005e11e0
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CEnemyClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00559250
;   core_setcolid.cpp_CDemonSet_init_FUN_00559220
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0
;   core_setcolid.cpp_FUN_00557300
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;   crt_memory.c___arrinit_FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca0c0
        ;   Label: core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004ca0c0
    PUSH ESI                            ; 004ca0c1
    PUSH EDI                            ; 004ca0c2
    PUSH EBP                            ; 004ca0c3
    MOV EBP,ESP                         ; 004ca0c4
    SUB ESP,0x154                       ; 004ca0c6
    AND ESP,0xfffffff8                  ; 004ca0cc
    MOV EDX,dword ptr [0x01c3f6a0]      ; 004ca0cf | g_CEnemyClassInfo.name_hash
    PUSH EDX                            ; 004ca0d5
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ca0d6
    PUSH ECX                            ; 004ca0d9
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ca0da
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004ca0df
    PUSH 0x5fb430                       ; 004ca0e2 | g_CVectorTypeInfo
    PUSH 0xa                            ; 004ca0e7
    MOV EBX,EAX                         ; 004ca0e9
    LEA EAX,[ESP + 0x14]                ; 004ca0eb
    PUSH EAX                            ; 004ca0ef
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 004ca0f0
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 004ca0f5
    LEA EAX,[ESP + 0xc]                 ; 004ca0f8
    PUSH EAX                            ; 004ca0fc
    MOV EDI,dword ptr [EBP + 0x18]      ; 004ca0fd
    MOV ESI,dword ptr [EBP + 0x18]      ; 004ca100
    PUSH EDI                            ; 004ca103
    MOV ESI,dword ptr [ESI + 0x154]     ; 004ca104
    CALL dword ptr [ESI + 0x54]         ; 004ca10a
    ADD ESP,0x8                         ; 004ca10d
    TEST EAX,EAX                        ; 004ca110
    JZ 0x004ca12c                       ; 004ca112
        ;   XREF to: 004ca12c (CONDITIONAL_JUMP)  ; LAB_004ca12c
    TEST EBX,EBX                        ; 004ca114
    JZ 0x004ca145                       ; 004ca116
        ;   XREF to: 004ca145 (CONDITIONAL_JUMP)  ; LAB_004ca145
    PUSH EBX                            ; 004ca118
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ca119
    CALL dword ptr [EAX + 0x10c]        ; 004ca11f
    ADD ESP,0x4                         ; 004ca125
    TEST EAX,EAX                        ; 004ca128
    JLE 0x004ca145                      ; 004ca12a
        ;   XREF to: 004ca145 (CONDITIONAL_JUMP)  ; LAB_004ca145
    MOV dword ptr [ESP + 0x14c],0xbf800000 ; 004ca12c
        ;   Label: LAB_004ca12c
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004ca137
    MOV ESP,EBP                         ; 004ca13e
    POP EBP                             ; 004ca140
    POP EDI                             ; 004ca141
    POP ESI                             ; 004ca142
    POP EBX                             ; 004ca143
    RET                                 ; 004ca144
    MOV EAX,dword ptr [EBP + 0x18]      ; 004ca145
        ;   Label: LAB_004ca145
    ADD EAX,0x20                        ; 004ca148
    PUSH EAX                            ; 004ca14b
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ca14c
    PUSH EAX                            ; 004ca14f
    LEA ESI,[ESP + 0x140]               ; 004ca150
    LEA EDI,[ESP + 0xc8]                ; 004ca157
    CALL core_actor.cpp_FUN_00408bb0    ; 004ca15e
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[ESP + 0x140]               ; 004ca163
    ADD ESP,0x8                         ; 004ca16a
    MOVSD ES:EDI,ESI                    ; 004ca16d
    MOVSD ES:EDI,ESI                    ; 004ca16e
    MOVSD ES:EDI,ESI                    ; 004ca16f
    FLD float ptr [ESP + 0xc8]          ; 004ca170
    FLDZ                                ; 004ca177
    FCOMPP                              ; 004ca179
    FNSTSW AX                           ; 004ca17b
    SAHF                                ; 004ca17d
    JNC 0x004ca12c                      ; 004ca17e
        ;   XREF to: 004ca12c (CONDITIONAL_JUMP)  ; LAB_004ca12c
    FLD float ptr [ESP + 0xc4]          ; 004ca180
    FMUL ST0                            ; 004ca187
    FLD float ptr [ESP + 0xc0]          ; 004ca189
    FMUL ST0                            ; 004ca190
    FADDP                               ; 004ca192
    FLD float ptr [ESP + 0xc8]          ; 004ca194
    FMUL ST0                            ; 004ca19b
    FADDP                               ; 004ca19d
    FSQRT                               ; 004ca19f
    FSTP float ptr [ESP + 0x8]          ; 004ca1a1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ca1a5
    MOV dword ptr [ESP + 0x148],EAX     ; 004ca1a9
    LEA EAX,[ESP + 0xc0]                ; 004ca1b0
    PUSH EAX                            ; 004ca1b7
    LEA ESI,[ESP + 0x100]               ; 004ca1b8
    LEA EDI,[ESP + 0x10c]               ; 004ca1bf
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004ca1c6
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    ADD ESP,0x4                         ; 004ca1cb
    LEA ESI,[ESP + 0xfc]                ; 004ca1ce
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004ca1d5
    MOVSD ES:EDI,ESI                    ; 004ca1d8
    MOVSD ES:EDI,ESI                    ; 004ca1d9
    MOVSD ES:EDI,ESI                    ; 004ca1da
    TEST EDX,EDX                        ; 004ca1db
    JZ 0x004ca21a                       ; 004ca1dd
        ;   XREF to: 004ca21a (CONDITIONAL_JUMP)  ; LAB_004ca21a
    FLD float ptr [ESP + 0x8]           ; 004ca1df
    FCOMP double ptr [0x005e11d4]       ; 004ca1e3 | DAT_005e11d4
    FNSTSW AX                           ; 004ca1e9
    SAHF                                ; 004ca1eb
    JA 0x004ca12c                       ; 004ca1ec
        ;   XREF to: 004ca12c (CONDITIONAL_JUMP)  ; LAB_004ca12c
    FLD float ptr [ESP + 0x10c]         ; 004ca1f2
    FCOMP float ptr [0x005e11dc]        ; 004ca1f9 | DAT_005e11dc
    FNSTSW AX                           ; 004ca1ff
    SAHF                                ; 004ca201
    JC 0x004ca12c                       ; 004ca202
        ;   XREF to: 004ca12c (CONDITIONAL_JUMP)  ; LAB_004ca12c
    CMP dword ptr [ESP + 0x10c],0x3fc90fdb ; 004ca208
    JLE 0x004ca258                      ; 004ca213
        ;   XREF to: 004ca258 (CONDITIONAL_JUMP)  ; LAB_004ca258
    JMP 0x004ca12c                      ; 004ca215
        ;   XREF to: 004ca12c (UNCONDITIONAL_JUMP)  ; LAB_004ca12c
    FLD float ptr [ESP + 0x8]           ; 004ca21a
        ;   Label: LAB_004ca21a
    FCOMP double ptr [0x005e11bc]       ; 004ca21e | DAT_005e11bc
    FNSTSW AX                           ; 004ca224
    SAHF                                ; 004ca226
    JA 0x004ca12c                       ; 004ca227
        ;   XREF to: 004ca12c (CONDITIONAL_JUMP)  ; LAB_004ca12c
    FLD float ptr [ESP + 0x10c]         ; 004ca22d
    FST double ptr [ESP]                ; 004ca234
    FCOMP double ptr [0x005e11c4]       ; 004ca237 | DAT_005e11c4
    FNSTSW AX                           ; 004ca23d
    SAHF                                ; 004ca23f
    JC 0x004ca12c                       ; 004ca240
        ;   XREF to: 004ca12c (CONDITIONAL_JUMP)  ; LAB_004ca12c
    FLD double ptr [ESP]                ; 004ca246
    FCOMP double ptr [0x005e11cc]       ; 004ca249 | DAT_005e11cc
    FNSTSW AX                           ; 004ca24f
    SAHF                                ; 004ca251
    JA 0x004ca12c                       ; 004ca252
        ;   XREF to: 004ca12c (CONDITIONAL_JUMP)  ; LAB_004ca12c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004ca258
        ;   Label: LAB_004ca258
    MOV EAX,dword ptr [EBP + 0x14]      ; 004ca25b
    PUSH EDX                            ; 004ca25e
    MOV EAX,dword ptr [EAX + 0x154]     ; 004ca25f
    LEA ESI,[ESP + 0xa0]                ; 004ca265
    LEA EDI,[ESP + 0x88]                ; 004ca26c
    CALL dword ptr [EAX + 0x1c]         ; 004ca273
    MOV ECX,0x6                         ; 004ca276
    LEA ESI,[ESP + 0xa0]                ; 004ca27b
    ADD ESP,0x4                         ; 004ca282
    MOVSD.REP ES:EDI,ESI                ; 004ca285
    LEA EBX,[ESP + 0x84]                ; 004ca287
    FLD float ptr [ESP + 0x84]          ; 004ca28e
    FLD float ptr [ESP + 0x88]          ; 004ca295
    FLD float ptr [ESP + 0x8c]          ; 004ca29c
    LEA EDI,[ESP + 0xd8]                ; 004ca2a3
    LEA ESI,[ESP + 0xe4]                ; 004ca2aa
    FXCH ST2                            ; 004ca2b1
    FADD float ptr [EBX + 0xc]          ; 004ca2b3
    FXCH                                ; 004ca2b6
    FADD float ptr [EBX + 0x10]         ; 004ca2b8
    FXCH ST2                            ; 004ca2bb
    FADD float ptr [EBX + 0x14]         ; 004ca2bd
    FXCH                                ; 004ca2c0
    FSTP float ptr [ESP + 0xe4]         ; 004ca2c2
    FXCH                                ; 004ca2c9
    FSTP float ptr [ESP + 0xe8]         ; 004ca2cb
    FSTP float ptr [ESP + 0xec]         ; 004ca2d2
    MOVSD ES:EDI,ESI                    ; 004ca2d9
    MOVSD ES:EDI,ESI                    ; 004ca2da
    MOVSD ES:EDI,ESI                    ; 004ca2db
    FLD float ptr [0x005e11e0]          ; 004ca2dc | DAT_005e11e0
    FLD float ptr [ESP + 0xd8]          ; 004ca2e2
    FMUL ST1                            ; 004ca2e9
    FLD float ptr [ESP + 0xdc]          ; 004ca2eb
    FMUL ST2                            ; 004ca2f2
    LEA EAX,[ESP + 0xc]                 ; 004ca2f4
    FLD float ptr [ESP + 0xe0]          ; 004ca2f8
    FMULP ST3                           ; 004ca2ff
    PUSH EAX                            ; 004ca301
    MOV EBX,dword ptr [EBP + 0x14]      ; 004ca302
    LEA EDI,[ESP + 0x118]               ; 004ca305
    LEA ESI,[ESP + 0x130]               ; 004ca30c
    FXCH                                ; 004ca313
    FSTP float ptr [ESP + 0x130]        ; 004ca315
    FSTP float ptr [ESP + 0x134]        ; 004ca31c
    FSTP float ptr [ESP + 0x138]        ; 004ca323
    MOVSD ES:EDI,ESI                    ; 004ca32a
    MOVSD ES:EDI,ESI                    ; 004ca32b
    MOVSD ES:EDI,ESI                    ; 004ca32c
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ca32d
    FLD float ptr [EBX + 0x20]          ; 004ca330
    FLD float ptr [EBX + 0x24]          ; 004ca333
    FLD float ptr [EBX + 0x28]          ; 004ca336
    LEA EDI,[ESP + 0xb8]                ; 004ca339
    LEA ESI,[ESP + 0xd0]                ; 004ca340
    FXCH ST2                            ; 004ca347
    FADD float ptr [ESP + 0x118]        ; 004ca349
    FXCH                                ; 004ca350
    FADD float ptr [ESP + 0x11c]        ; 004ca352
    FXCH ST2                            ; 004ca359
    FADD float ptr [ESP + 0x120]        ; 004ca35b
    FXCH                                ; 004ca362
    FSTP float ptr [ESP + 0xd0]         ; 004ca364
    FXCH                                ; 004ca36b
    FSTP float ptr [ESP + 0xd4]         ; 004ca36d
    FSTP float ptr [ESP + 0xd8]         ; 004ca374
    MOVSD ES:EDI,ESI                    ; 004ca37b
    MOVSD ES:EDI,ESI                    ; 004ca37c
    MOVSD ES:EDI,ESI                    ; 004ca37d
    PUSH ECX                            ; 004ca37e
    LEA ESI,[ESP + 0x128]               ; 004ca37f
    CALL core_actor.cpp_FUN_00408b40    ; 004ca386
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 004ca38b
    LEA EDI,[ESP + 0xf0]                ; 004ca38e
    PUSH 0x1                            ; 004ca395
    MOV EBX,dword ptr [0x00622c18]      ; 004ca397 | g_CDemonSetPtr
    LEA ESI,[ESP + 0x124]               ; 004ca39d
    PUSH EBX                            ; 004ca3a4 | g_CDemonSetInstance
    MOVSD ES:EDI,ESI                    ; 004ca3a5
    MOVSD ES:EDI,ESI                    ; 004ca3a6
    MOVSD ES:EDI,ESI                    ; 004ca3a7
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0 ; 004ca3a8
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_005592d0(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004ca3ad
    MOV ESI,dword ptr [EBP + 0x14]      ; 004ca3b0
    PUSH ESI                            ; 004ca3b3
    MOV EDI,dword ptr [0x00622c18]      ; 004ca3b4 | g_CDemonSetPtr
    PUSH EDI                            ; 004ca3ba | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 004ca3bb
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004ca3c0
    LEA EAX,[ESP + 0xf0]                ; 004ca3c3
    PUSH EAX                            ; 004ca3ca
    LEA EAX,[ESP + 0xb8]                ; 004ca3cb
    PUSH EAX                            ; 004ca3d2
    MOV EAX,[0x00622c18]                ; 004ca3d3 | g_CDemonSetPtr
    PUSH EAX                            ; 004ca3d8 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00557300 ; 004ca3d9
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00557300()
    MOV dword ptr [ESP + 0x15c],EAX     ; 004ca3de
    FLD float ptr [ESP + 0x15c]         ; 004ca3e5
    ADD ESP,0xc                         ; 004ca3ec
    MOV EDX,dword ptr [0x00622c18]      ; 004ca3ef | g_CDemonSetPtr
    PUSH EDX                            ; 004ca3f5 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0x148]        ; 004ca3f6
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 004ca3fd
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004ca402
    FLD float ptr [ESP + 0x144]         ; 004ca405
    FLD1                                ; 004ca40c
    FCOMPP                              ; 004ca40e
    FNSTSW AX                           ; 004ca410
    SAHF                                ; 004ca412
    JC 0x004ca12c                       ; 004ca413
        ;   XREF to: 004ca12c (CONDITIONAL_JUMP)  ; LAB_004ca12c
    MOV EAX,[0x00622c18]                ; 004ca419 | g_CDemonSetPtr
    MOV ECX,dword ptr [EBP + 0x18]      ; 004ca41e
    CMP ECX,dword ptr [EAX + 0x14d144]  ; 004ca421 | g_CDemonSetInstance.collision_actor
    JNZ 0x004ca12c                      ; 004ca427
        ;   XREF to: 004ca12c (CONDITIONAL_JUMP)  ; LAB_004ca12c
    MOV EAX,dword ptr [ESP + 0x148]     ; 004ca42d
    MOV dword ptr [ESP + 0x14c],EAX     ; 004ca434
    MOV EAX,dword ptr [ESP + 0x14c]     ; 004ca43b
    MOV ESP,EBP                         ; 004ca442
    POP EBP                             ; 004ca444
    POP EDI                             ; 004ca445
    POP ESI                             ; 004ca446
    POP EBX                             ; 004ca447
    RET                                 ; 004ca448


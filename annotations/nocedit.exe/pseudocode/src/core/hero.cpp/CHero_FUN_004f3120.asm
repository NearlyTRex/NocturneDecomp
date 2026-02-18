; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hero_cpp_CHero_FUN_004f3120(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x80]:1  local_80
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d4027
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5d83
;
; Referenced Globals:
;   float FLOAT_0062ec56 = 0.5
;   double DOUBLE_0062ec5e = 1.20000000000000
;   double DOUBLE_0062ec66 = 5
;   double DOUBLE_0062ec6e = 0.610865238180555
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CBoxActorClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_isCarryingAnything_FUN_0042d360
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3120
        ;   Label: core_hero.cpp_CHero_FUN_004f3120
    PUSH ESI                            ; 004f3121
    PUSH EDI                            ; 004f3122
    PUSH EBP                            ; 004f3123
    MOV EBP,ESP                         ; 004f3124
    SUB ESP,0x78                        ; 004f3126
    AND ESP,0xfffffff8                  ; 004f3129
    MOV EDX,dword ptr [EBP + 0x14]      ; 004f312c
    PUSH EDX                            ; 004f312f
    CALL core_charactr.cpp_CCharacter_isCarryingAnything_FUN_0042d360 ; 004f3130
        ;   XREF to: 0042d360 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isCarryingAnything_FUN_0042d360(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f3135
    TEST EAX,EAX                        ; 004f3138
    JNZ 0x004f31b0                      ; 004f313a
        ;   XREF to: 004f31b0 (CONDITIONAL_JUMP)  ; LAB_004f31b0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f3140
    CMP dword ptr [EAX + 0x1fba4],0x0   ; 004f3143
    JNZ 0x004f31a4                      ; 004f314a
        ;   XREF to: 004f31a4 (CONDITIONAL_JUMP)  ; LAB_004f31a4
    XOR EDI,EDI                         ; 004f314c
    XOR ESI,ESI                         ; 004f314e
    MOV EBX,dword ptr [0x006810c8]      ; 004f3150 | g_CDemonSetInstance | g_CDemonSetPtr
        ;   Label: LAB_004f3150
    CMP EDI,dword ptr [EBX + 0x14d154]  ; 004f3156 | g_CDemonSetInstance.actor_count
    JL 0x004f31ba                       ; 004f315c
        ;   XREF to: 004f31ba (CONDITIONAL_JUMP)  ; LAB_004f31ba
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f315e
        ;   Label: LAB_004f315e
    MOV EDX,dword ptr [EAX + 0x1fba4]   ; 004f3161
    TEST EDX,EDX                        ; 004f3167
    JZ 0x004f31b0                       ; 004f3169
        ;   XREF to: 004f31b0 (CONDITIONAL_JUMP)  ; LAB_004f31b0
    MOV ECX,dword ptr [0x008229e8]      ; 004f316b | g_CBoxActorClassInfo.name_hash
    PUSH ECX                            ; 004f3171
    PUSH EDX                            ; 004f3172
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f3173
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004f3178
    ADD ESP,0x8                         ; 004f317a
    TEST EAX,EAX                        ; 004f317d
    JZ 0x004f31a4                       ; 004f317f
        ;   XREF to: 004f31a4 (CONDITIONAL_JUMP)  ; LAB_004f31a4
    LEA EDX,[EBX + 0x32c]               ; 004f3181
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f3187
    PUSH EDX                            ; 004f318a
    MOV dword ptr [EBX + 0x320],EAX     ; 004f318b
    PUSH EBX                            ; 004f3191
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f3192
    CALL dword ptr [EAX + 0x28]         ; 004f3198
    ADD ESP,0x8                         ; 004f319b
    MOV dword ptr [EBX + 0x328],EAX     ; 004f319e
    MOV EAX,0x1                         ; 004f31a4
        ;   Label: LAB_004f31a4
    MOV ESP,EBP                         ; 004f31a9
        ;   Label: LAB_004f31a9
    POP EBP                             ; 004f31ab
    POP EDI                             ; 004f31ac
    POP ESI                             ; 004f31ad
    POP EBX                             ; 004f31ae
    RET                                 ; 004f31af
    XOR EAX,EAX                         ; 004f31b0
        ;   Label: LAB_004f31b0
    JMP 0x004f31a9                      ; 004f31b2
        ;   XREF to: 004f31a9 (UNCONDITIONAL_JUMP)  ; LAB_004f31a9
    INC EDI                             ; 004f31b4
        ;   Label: LAB_004f31b4
    ADD ESI,0x4                         ; 004f31b5
    JMP 0x004f3150                      ; 004f31b8
        ;   XREF to: 004f3150 (UNCONDITIONAL_JUMP)  ; LAB_004f3150
    MOV EDX,dword ptr [0x008229e8]      ; 004f31ba | g_CBoxActorClassInfo.name_hash
        ;   Label: LAB_004f31ba
    PUSH EDX                            ; 004f31c0
    MOV ECX,dword ptr [ESI + EBX*0x1 + 0x14d158] ; 004f31c1 | g_CDemonSetInstance.actors[0]
    PUSH ECX                            ; 004f31c8
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004f31c9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EBX,EAX                         ; 004f31ce
    ADD ESP,0x8                         ; 004f31d0
    TEST EAX,EAX                        ; 004f31d3
    JZ 0x004f31b4                       ; 004f31d5
        ;   XREF to: 004f31b4 (CONDITIONAL_JUMP)  ; LAB_004f31b4
    CMP dword ptr [EAX + 0x31c],0x0     ; 004f31d7
    JZ 0x004f31b4                       ; 004f31de
        ;   XREF to: 004f31b4 (CONDITIONAL_JUMP)  ; LAB_004f31b4
    CMP dword ptr [EBX + 0x320],0x0     ; 004f31e0
    JNZ 0x004f31b4                      ; 004f31e7
        ;   XREF to: 004f31b4 (CONDITIONAL_JUMP)  ; LAB_004f31b4
    LEA EAX,[ESP + 0x8]                 ; 004f31e9
    PUSH EAX                            ; 004f31ed
    MOV EDX,dword ptr [EBX + 0x154]     ; 004f31ee
    PUSH EBX                            ; 004f31f4
    CALL dword ptr [EDX + 0x14]         ; 004f31f5
    ADD ESP,0x8                         ; 004f31f8
    FLD float ptr [ESP + 0xc]           ; 004f31fb
    FLD float ptr [ESP + 0x8]           ; 004f31ff
    FADD float ptr [ESP + 0x14]         ; 004f3203
    FXCH                                ; 004f3207
    FADD float ptr [ESP + 0x18]         ; 004f3209
    FXCH                                ; 004f320d
    FST float ptr [ESP + 0x20]          ; 004f320f
    FMUL float ptr [0x0062ec56]         ; 004f3213 | FLOAT_0062ec56
    FXCH                                ; 004f3219
    FST float ptr [ESP + 0x24]          ; 004f321b
    FMUL float ptr [0x0062ec56]         ; 004f321f | FLOAT_0062ec56
    LEA EAX,[ESP + 0x38]                ; 004f3225
    FLD float ptr [ESP + 0x10]          ; 004f3229
    PUSH EAX                            ; 004f322d
    FADD float ptr [ESP + 0x20]         ; 004f322e
    LEA EAX,[ESP + 0x30]                ; 004f3232
    FST float ptr [ESP + 0x2c]          ; 004f3236
    PUSH EAX                            ; 004f323a
    FMUL float ptr [0x0062ec56]         ; 004f323b | FLOAT_0062ec56
    PUSH EBX                            ; 004f3241
    FXCH ST2                            ; 004f3242
    FSTP float ptr [ESP + 0x44]         ; 004f3244
    FSTP float ptr [ESP + 0x48]         ; 004f3248
    FSTP float ptr [ESP + 0x4c]         ; 004f324c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f3250
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004f3255
    LEA EAX,[ESP + 0x2c]                ; 004f3258
    PUSH EAX                            ; 004f325c
    LEA EAX,[ESP + 0x54]                ; 004f325d
    PUSH EAX                            ; 004f3261
    MOV ECX,dword ptr [EBP + 0x14]      ; 004f3262
    PUSH ECX                            ; 004f3265
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f3266
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004f326b
    FLD float ptr [ESP + 0x1c]          ; 004f326e
    FLD float ptr [ESP + 0x14]          ; 004f3272
    FSUB float ptr [ESP + 0x8]          ; 004f3276
    FXCH                                ; 004f327a
    FSUB float ptr [ESP + 0x10]         ; 004f327c
    FXCH                                ; 004f3280
    FST float ptr [ESP + 0x68]          ; 004f3282
    FMUL float ptr [0x0062ec56]         ; 004f3286 | FLOAT_0062ec56
    FXCH                                ; 004f328c
    FST float ptr [ESP + 0x70]          ; 004f328e
    FMUL float ptr [0x0062ec56]         ; 004f3292 | FLOAT_0062ec56
    FXCH                                ; 004f3298
    FST float ptr [ESP + 0x44]          ; 004f329a
    FMUL float ptr [ESP + 0x44]         ; 004f329e
    FXCH                                ; 004f32a2
    FST float ptr [ESP + 0x4c]          ; 004f32a4
    FMUL float ptr [ESP + 0x4c]         ; 004f32a8
    XOR EAX,EAX                         ; 004f32ac
    FADDP                               ; 004f32ae
    MOV dword ptr [ESP + 0x48],EAX      ; 004f32b0
    FSQRT                               ; 004f32b4
    FLD float ptr [ESP + 0x18]          ; 004f32b6
    FSUB float ptr [ESP + 0xc]          ; 004f32ba
    FXCH                                ; 004f32be
    FSUBR float ptr [ESP + 0x58]        ; 004f32c0
    FXCH                                ; 004f32c4
    FSTP float ptr [ESP + 0x6c]         ; 004f32c6
    FCOMP double ptr [0x0062ec5e]       ; 004f32ca | DOUBLE_0062ec5e
    FNSTSW AX                           ; 004f32d0
    SAHF                                ; 004f32d2
    JA 0x004f31b4                       ; 004f32d3
        ;   XREF to: 004f31b4 (CONDITIONAL_JUMP)  ; LAB_004f31b4
    FLD float ptr [ESP + 0x54]          ; 004f32d9
    FLD1                                ; 004f32dd
    FXCH                                ; 004f32df
    FSTP double ptr [ESP]               ; 004f32e1
    FCOMP double ptr [ESP]              ; 004f32e4
    FNSTSW AX                           ; 004f32e7
    SAHF                                ; 004f32e9
    JA 0x004f31b4                       ; 004f32ea
        ;   XREF to: 004f31b4 (CONDITIONAL_JUMP)  ; LAB_004f31b4
    FLD double ptr [ESP]                ; 004f32f0
    FCOMP double ptr [0x0062ec66]       ; 004f32f3 | DOUBLE_0062ec66
    FNSTSW AX                           ; 004f32f9
    SAHF                                ; 004f32fb
    JA 0x004f31b4                       ; 004f32fc
        ;   XREF to: 004f31b4 (CONDITIONAL_JUMP)  ; LAB_004f31b4
    LEA EAX,[ESP + 0x50]                ; 004f3302
    PUSH EAX                            ; 004f3306
    LEA EAX,[ESP + 0x60]                ; 004f3307
    PUSH EAX                            ; 004f330b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f330c
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004f3311
    PUSH dword ptr [EAX + 0x4]          ; 004f3314
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f3317
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x78],EAX      ; 004f331c
    FLD float ptr [ESP + 0x78]          ; 004f3320
    FABS                                ; 004f3324
    ADD ESP,0x4                         ; 004f3326
    FCOMP double ptr [0x0062ec6e]       ; 004f3329 | DOUBLE_0062ec6e
    FNSTSW AX                           ; 004f332f
    SAHF                                ; 004f3331
    JA 0x004f31b4                       ; 004f3332
        ;   XREF to: 004f31b4 (CONDITIONAL_JUMP)  ; LAB_004f31b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f3338
    MOV dword ptr [EAX + 0x1fba4],EBX   ; 004f333b
    JMP 0x004f315e                      ; 004f3341
        ;   XREF to: 004f315e (UNCONDITIONAL_JUMP)  ; LAB_004f315e


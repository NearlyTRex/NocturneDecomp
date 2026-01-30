; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_turret_cpp_FUN_005e3280(void)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[2]:
;   core_turret.cpp_FUN_005e2d50 at 005e321d
;   core_turret.cpp_FUN_005e3560 at 005e35c4
;
; Referenced Globals:
;   double DOUBLE_00656788 = 0.0174532925194444
;   double DOUBLE_00656790 = 0.00100000000000000
;   float FLOAT_00664b6c = -0.5235988
;   float FLOAT_00664b70 = 1.221730
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3280
        ;   Label: core_turret.cpp_FUN_005e3280
    PUSH EBP                            ; 005e3281
    MOV EBP,ESP                         ; 005e3282
    SUB ESP,0x30                        ; 005e3284
    AND ESP,0xfffffff8                  ; 005e3287
    MOV EBX,dword ptr [EBP + 0xc]       ; 005e328a
    MOV EDX,dword ptr [EBP + 0x10]      ; 005e328d
    LEA EAX,[EBX + 0x20]                ; 005e3290
    FLD float ptr [EDX]                 ; 005e3293
    FSUB float ptr [EAX]                ; 005e3295
    FSTP float ptr [ESP + 0x14]         ; 005e3297
    FLD float ptr [EDX + 0x4]           ; 005e329b
    FSUB float ptr [EAX + 0x4]          ; 005e329e
    FSTP float ptr [ESP + 0x18]         ; 005e32a1
    FLD float ptr [EDX + 0x8]           ; 005e32a5
    FSUB float ptr [EAX + 0x8]          ; 005e32a8
    LEA EAX,[ESP + 0x14]                ; 005e32ab
    PUSH EAX                            ; 005e32af
    LEA EAX,[ESP + 0xc]                 ; 005e32b0
    PUSH EAX                            ; 005e32b4
    FSTP float ptr [ESP + 0x24]         ; 005e32b5
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005e32b9
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 005e32be
    FLD float ptr [ESP + 0x8]           ; 005e32c1
    FCOMP float ptr [0x00664b6c]        ; 005e32c5 | FLOAT_00664b6c
    FNSTSW AX                           ; 005e32cb
    SAHF                                ; 005e32cd
    JC 0x005e3422                       ; 005e32ce
        ;   XREF to: 005e3422 (CONDITIONAL_JUMP)  ; LAB_005e3422
    FLD float ptr [ESP + 0x8]           ; 005e32d4
        ;   Label: LAB_005e32d4
    FCOMP float ptr [0x00664b70]        ; 005e32d8 | FLOAT_00664b70
    FNSTSW AX                           ; 005e32de
    SAHF                                ; 005e32e0
    JBE 0x005e32ec                      ; 005e32e1
        ;   XREF to: 005e32ec (CONDITIONAL_JUMP)  ; LAB_005e32ec
    MOV EAX,[0x00664b70]                ; 005e32e3 | FLOAT_00664b70
    MOV dword ptr [ESP + 0x8],EAX       ; 005e32e8
    FLD float ptr [ESP + 0xc]           ; 005e32ec
        ;   Label: LAB_005e32ec
    FSUB float ptr [EBX + 0x34]         ; 005e32f0
    SUB ESP,0x4                         ; 005e32f3
    FSTP float ptr [ESP]                ; 005e32f6
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e32f9
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x30],EAX      ; 005e32fe
    FLD float ptr [ESP + 0x30]          ; 005e3302
    ADD ESP,0x4                         ; 005e3306
    FLD float ptr [ESP + 0x8]           ; 005e3309
    FXCH                                ; 005e330d
    FSTP float ptr [ESP + 0x4]          ; 005e330f
    FSUB float ptr [EBX + 0x30]         ; 005e3313
    SUB ESP,0x4                         ; 005e3316
    FSTP float ptr [ESP]                ; 005e3319
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005e331c
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    FLD float ptr [EBX + 0x778]         ; 005e3321
    MOV dword ptr [ESP + 0x30],EAX      ; 005e3327
    FMUL double ptr [0x00656788]        ; 005e332b | DOUBLE_00656788
    FLD float ptr [ESP + 0x30]          ; 005e3331
    ADD ESP,0x4                         ; 005e3335
    FLD float ptr [EBP + 0x14]          ; 005e3338
    FMULP ST2                           ; 005e333b
    FLD float ptr [ESP + 0x4]           ; 005e333d
    FXCH                                ; 005e3341
    FSTP float ptr [ESP]                ; 005e3343
    FXCH                                ; 005e3346
    FST float ptr [ESP + 0x28]          ; 005e3348
    FCHS                                ; 005e334c
    FSTP float ptr [ESP + 0x20]         ; 005e334e
    FCOMP float ptr [ESP + 0x20]        ; 005e3352
    FNSTSW AX                           ; 005e3356
    SAHF                                ; 005e3358
    JNC 0x005e3363                      ; 005e3359
        ;   XREF to: 005e3363 (CONDITIONAL_JUMP)  ; LAB_005e3363
    MOV EAX,dword ptr [ESP + 0x20]      ; 005e335b
    MOV dword ptr [ESP + 0x4],EAX       ; 005e335f
    FLD float ptr [ESP + 0x4]           ; 005e3363
        ;   Label: LAB_005e3363
    FCOMP float ptr [ESP + 0x28]        ; 005e3367
    FNSTSW AX                           ; 005e336b
    SAHF                                ; 005e336d
    JBE 0x005e3378                      ; 005e336e
        ;   XREF to: 005e3378 (CONDITIONAL_JUMP)  ; LAB_005e3378
    MOV EAX,dword ptr [ESP + 0x28]      ; 005e3370
    MOV dword ptr [ESP + 0x4],EAX       ; 005e3374
    FLD float ptr [ESP]                 ; 005e3378
        ;   Label: LAB_005e3378
    FLD float ptr [ESP + 0x28]          ; 005e337b
    FCHS                                ; 005e337f
    FSTP float ptr [ESP + 0x24]         ; 005e3381
    FCOMP float ptr [ESP + 0x24]        ; 005e3385
    FNSTSW AX                           ; 005e3389
    SAHF                                ; 005e338b
    JNC 0x005e3395                      ; 005e338c
        ;   XREF to: 005e3395 (CONDITIONAL_JUMP)  ; LAB_005e3395
    MOV EAX,dword ptr [ESP + 0x24]      ; 005e338e
    MOV dword ptr [ESP],EAX             ; 005e3392
    FLD float ptr [ESP]                 ; 005e3395
        ;   Label: LAB_005e3395
    FCOMP float ptr [ESP + 0x28]        ; 005e3398
    FNSTSW AX                           ; 005e339c
    SAHF                                ; 005e339e
    JBE 0x005e33a8                      ; 005e339f
        ;   XREF to: 005e33a8 (CONDITIONAL_JUMP)  ; LAB_005e33a8
    MOV EAX,dword ptr [ESP + 0x28]      ; 005e33a1
    MOV dword ptr [ESP],EAX             ; 005e33a5
    FLD float ptr [EBX + 0x34]          ; 005e33a8
        ;   Label: LAB_005e33a8
    FLD float ptr [EBX + 0x30]          ; 005e33ab
    PUSH EBX                            ; 005e33ae
    FXCH                                ; 005e33af
    FADD float ptr [ESP + 0x8]          ; 005e33b1
    FXCH                                ; 005e33b5
    FADD float ptr [ESP + 0x4]          ; 005e33b7
    FXCH                                ; 005e33bb
    FSTP float ptr [EBX + 0x34]         ; 005e33bd
    FSTP float ptr [EBX + 0x30]         ; 005e33c0
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 005e33c3
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e33c8
    FLD float ptr [ESP + 0x4]           ; 005e33cb
    FCOMP double ptr [0x00656790]       ; 005e33cf | DOUBLE_00656790
    FNSTSW AX                           ; 005e33d5
    SAHF                                ; 005e33d7
    JNC 0x005e3430                      ; 005e33d8
        ;   XREF to: 005e3430 (CONDITIONAL_JUMP)  ; LAB_005e3430
    MOV EAX,0x1                         ; 005e33da
    MOV dword ptr [ESP + 0x2c],EAX      ; 005e33df
        ;   Label: LAB_005e33df
    FILD dword ptr [ESP + 0x2c]         ; 005e33e3
    FABS                                ; 005e33e7
    FLDZ                                ; 005e33e9
    FCOMPP                              ; 005e33eb
    FNSTSW AX                           ; 005e33ed
    SAHF                                ; 005e33ef
    JZ 0x005e3438                       ; 005e33f0
        ;   XREF to: 005e3438 (CONDITIONAL_JUMP)  ; LAB_005e3438
    FLD float ptr [ESP]                 ; 005e33f2
    FCOMP double ptr [0x00656790]       ; 005e33f5 | DOUBLE_00656790
    FNSTSW AX                           ; 005e33fb
    SAHF                                ; 005e33fd
    JNC 0x005e3434                      ; 005e33fe
        ;   XREF to: 005e3434 (CONDITIONAL_JUMP)  ; LAB_005e3434
    MOV EAX,0x1                         ; 005e3400
    MOV dword ptr [ESP + 0x2c],EAX      ; 005e3405
        ;   Label: LAB_005e3405
    FILD dword ptr [ESP + 0x2c]         ; 005e3409
    FABS                                ; 005e340d
    FLDZ                                ; 005e340f
    FCOMPP                              ; 005e3411
    FNSTSW AX                           ; 005e3413
    SAHF                                ; 005e3415
    JZ 0x005e3438                       ; 005e3416
        ;   XREF to: 005e3438 (CONDITIONAL_JUMP)  ; LAB_005e3438
    MOV EAX,0x1                         ; 005e3418
    MOV ESP,EBP                         ; 005e341d
    POP EBP                             ; 005e341f
    POP EBX                             ; 005e3420
    RET                                 ; 005e3421
    MOV EAX,[0x00664b6c]                ; 005e3422 | FLOAT_00664b6c
        ;   Label: LAB_005e3422
    MOV dword ptr [ESP + 0x8],EAX       ; 005e3427
    JMP 0x005e32d4                      ; 005e342b
        ;   XREF to: 005e32d4 (UNCONDITIONAL_JUMP)  ; LAB_005e32d4
    XOR EAX,EAX                         ; 005e3430
        ;   Label: LAB_005e3430
    JMP 0x005e33df                      ; 005e3432
        ;   XREF to: 005e33df (UNCONDITIONAL_JUMP)  ; LAB_005e33df
    XOR EAX,EAX                         ; 005e3434
        ;   Label: LAB_005e3434
    JMP 0x005e3405                      ; 005e3436
        ;   XREF to: 005e3405 (UNCONDITIONAL_JUMP)  ; LAB_005e3405
    XOR EAX,EAX                         ; 005e3438
        ;   Label: LAB_005e3438
    MOV ESP,EBP                         ; 005e343a
    POP EBP                             ; 005e343c
    POP EBX                             ; 005e343d
    RET                                 ; 005e343e


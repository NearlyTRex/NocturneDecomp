; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_turret_cpp_FUN_005a3350(CTurret *this_ptr,CVector3f *target_pos,float delta_time)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   target_pos
; float            Stack[0xc]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_turret.cpp_CTurret_updatePatrol_FUN_005a3650 at 005a36ba
;   core_turret.cpp_FUN_005a2d00 at 005a32f4
;
; Referenced Globals:
;   undefined4 DAT_005f8b6c
;   undefined4 DAT_005f8b70
;   undefined4 DAT_006074cc
;   undefined4 DAT_006074d0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_FUN_0040cd60
;   core_vecdir.cpp_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3350
        ;   Label: core_turret.cpp_FUN_005a3350
    PUSH ESI                            ; 005a3351
    PUSH EDI                            ; 005a3352
    PUSH EBP                            ; 005a3353
    MOV EBP,ESP                         ; 005a3354
    SUB ESP,0x48                        ; 005a3356
    AND ESP,0xfffffff8                  ; 005a3359
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a335c
    MOV ESI,dword ptr [EBP + 0x18]      ; 005a335f
    FLD float ptr [ESI + 0x4]           ; 005a3362
    FLD float ptr [ESI + 0x8]           ; 005a3365
    FLD float ptr [ESI]                 ; 005a3368
    LEA EAX,[EBX + 0x20]                ; 005a336a
    LEA EDI,[ESP + 0x8]                 ; 005a336d
    LEA ESI,[ESP + 0x14]                ; 005a3371
    FSUB float ptr [EAX]                ; 005a3375
    FXCH ST2                            ; 005a3377
    FSUB float ptr [EAX + 0x4]          ; 005a3379
    FXCH                                ; 005a337c
    FSUB float ptr [EAX + 0x8]          ; 005a337e
    FXCH ST2                            ; 005a3381
    FSTP float ptr [ESP + 0x14]         ; 005a3383
    FSTP float ptr [ESP + 0x18]         ; 005a3387
    FSTP float ptr [ESP + 0x1c]         ; 005a338b
    LEA EAX,[ESP + 0x8]                 ; 005a338f
    MOVSD ES:EDI,ESI                    ; 005a3393
    MOVSD ES:EDI,ESI                    ; 005a3394
    MOVSD ES:EDI,ESI                    ; 005a3395
    PUSH EAX                            ; 005a3396
    LEA ESI,[ESP + 0x30]                ; 005a3397
    LEA EDI,[ESP + 0x24]                ; 005a339b
    CALL core_vecdir.cpp_FUN_005a7520   ; 005a339f
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005a7520()
    LEA ESI,[ESP + 0x30]                ; 005a33a4
    ADD ESP,0x4                         ; 005a33a8
    MOVSD ES:EDI,ESI                    ; 005a33ab
    MOVSD ES:EDI,ESI                    ; 005a33ac
    MOVSD ES:EDI,ESI                    ; 005a33ad
    FLD float ptr [ESP + 0x20]          ; 005a33ae
    FCOMP float ptr [0x006074cc]        ; 005a33b2 | DAT_006074cc
    FNSTSW AX                           ; 005a33b8
    SAHF                                ; 005a33ba
    JC 0x005a350f                       ; 005a33bb
        ;   XREF to: 005a350f (CONDITIONAL_JUMP)  ; LAB_005a350f
    FLD float ptr [ESP + 0x20]          ; 005a33c1
        ;   Label: LAB_005a33c1
    FCOMP float ptr [0x006074d0]        ; 005a33c5 | DAT_006074d0
    FNSTSW AX                           ; 005a33cb
    SAHF                                ; 005a33cd
    JBE 0x005a33d9                      ; 005a33ce
        ;   XREF to: 005a33d9 (CONDITIONAL_JUMP)  ; LAB_005a33d9
    MOV EAX,[0x006074d0]                ; 005a33d0 | DAT_006074d0
    MOV dword ptr [ESP + 0x20],EAX      ; 005a33d5
    FLD float ptr [ESP + 0x24]          ; 005a33d9
        ;   Label: LAB_005a33d9
    FSUB float ptr [EBX + 0x34]         ; 005a33dd
    SUB ESP,0x4                         ; 005a33e0
    FSTP float ptr [ESP]                ; 005a33e3
    CALL core_actor.cpp_FUN_0040cd60    ; 005a33e6
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    MOV dword ptr [ESP + 0x48],EAX      ; 005a33eb
    FLD float ptr [ESP + 0x48]          ; 005a33ef
    ADD ESP,0x4                         ; 005a33f3
    FLD float ptr [ESP + 0x20]          ; 005a33f6
    FXCH                                ; 005a33fa
    FSTP float ptr [ESP + 0x4]          ; 005a33fc
    FSUB float ptr [EBX + 0x30]         ; 005a3400
    SUB ESP,0x4                         ; 005a3403
    FSTP float ptr [ESP]                ; 005a3406
    CALL core_actor.cpp_FUN_0040cd60    ; 005a3409
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cd60()
    FLD float ptr [EBX + 0x778]         ; 005a340e
    MOV dword ptr [ESP + 0x48],EAX      ; 005a3414
    FMUL float ptr [0x005f8b6c]         ; 005a3418 | DAT_005f8b6c
    FLD float ptr [ESP + 0x48]          ; 005a341e
    ADD ESP,0x4                         ; 005a3422
    FXCH                                ; 005a3425
    FMUL float ptr [EBP + 0x1c]         ; 005a3427
    FLD float ptr [ESP + 0x4]           ; 005a342a
    FXCH ST2                            ; 005a342e
    FSTP float ptr [ESP]                ; 005a3430
    FST float ptr [ESP + 0x40]          ; 005a3433
    FCHS                                ; 005a3437
    FSTP float ptr [ESP + 0x3c]         ; 005a3439
    FCOMP float ptr [ESP + 0x3c]        ; 005a343d
    FNSTSW AX                           ; 005a3441
    SAHF                                ; 005a3443
    JNC 0x005a344e                      ; 005a3444
        ;   XREF to: 005a344e (CONDITIONAL_JUMP)  ; LAB_005a344e
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005a3446
    MOV dword ptr [ESP + 0x4],EAX       ; 005a344a
    FLD float ptr [ESP + 0x4]           ; 005a344e
        ;   Label: LAB_005a344e
    FCOMP float ptr [ESP + 0x40]        ; 005a3452
    FNSTSW AX                           ; 005a3456
    SAHF                                ; 005a3458
    JBE 0x005a3463                      ; 005a3459
        ;   XREF to: 005a3463 (CONDITIONAL_JUMP)  ; LAB_005a3463
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a345b
    MOV dword ptr [ESP + 0x4],EAX       ; 005a345f
    FLD float ptr [ESP]                 ; 005a3463
        ;   Label: LAB_005a3463
    FLD float ptr [ESP + 0x40]          ; 005a3466
    FCHS                                ; 005a346a
    FSTP float ptr [ESP + 0x38]         ; 005a346c
    FCOMP float ptr [ESP + 0x38]        ; 005a3470
    FNSTSW AX                           ; 005a3474
    SAHF                                ; 005a3476
    JNC 0x005a3480                      ; 005a3477
        ;   XREF to: 005a3480 (CONDITIONAL_JUMP)  ; LAB_005a3480
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a3479
    MOV dword ptr [ESP],EAX             ; 005a347d
    FLD float ptr [ESP]                 ; 005a3480
        ;   Label: LAB_005a3480
    FCOMP float ptr [ESP + 0x40]        ; 005a3483
    FNSTSW AX                           ; 005a3487
    SAHF                                ; 005a3489
    JBE 0x005a3493                      ; 005a348a
        ;   XREF to: 005a3493 (CONDITIONAL_JUMP)  ; LAB_005a3493
    MOV EAX,dword ptr [ESP + 0x40]      ; 005a348c
    MOV dword ptr [ESP],EAX             ; 005a3490
    FLD float ptr [EBX + 0x34]          ; 005a3493
        ;   Label: LAB_005a3493
    FLD float ptr [EBX + 0x30]          ; 005a3496
    PUSH EBX                            ; 005a3499
    FXCH                                ; 005a349a
    FADD float ptr [ESP + 0x8]          ; 005a349c
    FXCH                                ; 005a34a0
    FADD float ptr [ESP + 0x4]          ; 005a34a2
    FXCH                                ; 005a34a6
    FSTP float ptr [EBX + 0x34]         ; 005a34a8
    FSTP float ptr [EBX + 0x30]         ; 005a34ab
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 005a34ae
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a34b3
    FLD float ptr [ESP + 0x4]           ; 005a34b6
    FCOMP double ptr [0x005f8b70]       ; 005a34ba | DAT_005f8b70
    FNSTSW AX                           ; 005a34c0
    SAHF                                ; 005a34c2
    JNC 0x005a351d                      ; 005a34c3
        ;   XREF to: 005a351d (CONDITIONAL_JUMP)  ; LAB_005a351d
    MOV EAX,0x1                         ; 005a34c5
    MOV dword ptr [ESP + 0x44],EAX      ; 005a34ca
        ;   Label: LAB_005a34ca
    FILD dword ptr [ESP + 0x44]         ; 005a34ce
    FABS                                ; 005a34d2
    FLDZ                                ; 005a34d4
    FCOMPP                              ; 005a34d6
    FNSTSW AX                           ; 005a34d8
    SAHF                                ; 005a34da
    JZ 0x005a3525                       ; 005a34db
        ;   XREF to: 005a3525 (CONDITIONAL_JUMP)  ; LAB_005a3525
    FLD float ptr [ESP]                 ; 005a34dd
    FCOMP double ptr [0x005f8b70]       ; 005a34e0 | DAT_005f8b70
    FNSTSW AX                           ; 005a34e6
    SAHF                                ; 005a34e8
    JNC 0x005a3521                      ; 005a34e9
        ;   XREF to: 005a3521 (CONDITIONAL_JUMP)  ; LAB_005a3521
    MOV EAX,0x1                         ; 005a34eb
    MOV dword ptr [ESP + 0x44],EAX      ; 005a34f0
        ;   Label: LAB_005a34f0
    FILD dword ptr [ESP + 0x44]         ; 005a34f4
    FABS                                ; 005a34f8
    FLDZ                                ; 005a34fa
    FCOMPP                              ; 005a34fc
    FNSTSW AX                           ; 005a34fe
    SAHF                                ; 005a3500
    JZ 0x005a3525                       ; 005a3501
        ;   XREF to: 005a3525 (CONDITIONAL_JUMP)  ; LAB_005a3525
    MOV EAX,0x1                         ; 005a3503
    MOV ESP,EBP                         ; 005a3508
    POP EBP                             ; 005a350a
    POP EDI                             ; 005a350b
    POP ESI                             ; 005a350c
    POP EBX                             ; 005a350d
    RET                                 ; 005a350e
    MOV EAX,[0x006074cc]                ; 005a350f | DAT_006074cc
        ;   Label: LAB_005a350f
    MOV dword ptr [ESP + 0x20],EAX      ; 005a3514
    JMP 0x005a33c1                      ; 005a3518
        ;   XREF to: 005a33c1 (UNCONDITIONAL_JUMP)  ; LAB_005a33c1
    XOR EAX,EAX                         ; 005a351d
        ;   Label: LAB_005a351d
    JMP 0x005a34ca                      ; 005a351f
        ;   XREF to: 005a34ca (UNCONDITIONAL_JUMP)  ; LAB_005a34ca
    XOR EAX,EAX                         ; 005a3521
        ;   Label: LAB_005a3521
    JMP 0x005a34f0                      ; 005a3523
        ;   XREF to: 005a34f0 (UNCONDITIONAL_JUMP)  ; LAB_005a34f0
    XOR EAX,EAX                         ; 005a3525
        ;   Label: LAB_005a3525
    MOV ESP,EBP                         ; 005a3527
    POP EBP                             ; 005a3529
    POP EDI                             ; 005a352a
    POP ESI                             ; 005a352b
    POP EBX                             ; 005a352c
    RET                                 ; 005a352d


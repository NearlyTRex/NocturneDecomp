; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hero.cpp_FUN_004f33b0()
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5e3d
;
; Referenced Globals:
;   double DOUBLE_0062ec76 = 10
;   double DOUBLE_0062ec7e = 1.04719755116667
;   double DOUBLE_0062ec86 = 5
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;   undefined4 DAT_032613d4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_FUN_0042d360
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f33b0
        ;   Label: core_hero.cpp_FUN_004f33b0
    PUSH ESI                            ; 004f33b1
    PUSH EDI                            ; 004f33b2
    PUSH EBP                            ; 004f33b3
    MOV EBP,ESP                         ; 004f33b4
    SUB ESP,0x70                        ; 004f33b6
    AND ESP,0xfffffff8                  ; 004f33b9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004f33bc
    PUSH EDI                            ; 004f33bf
    CALL core_charactr.cpp_CCharacter_FUN_0042d360 ; 004f33c0 | int core_charactr.cpp_CCharacter_FUN_0042d360(CCharacter * this_ptr)
        ;   XREF to: 0042d360 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f33c5
    TEST EAX,EAX                        ; 004f33c8
    JNZ 0x004f3449                      ; 004f33ca | LAB_004f3449
        ;   XREF to: 004f3449 (CONDITIONAL_JUMP)
    CMP dword ptr [EDI + 0x1fbb0],0x0   ; 004f33d0
    JNZ 0x004f3452                      ; 004f33d7 | LAB_004f3452
        ;   XREF to: 004f3452 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP + 0x60],EAX      ; 004f33dd
    LEA ESI,[EDI + 0x20]                ; 004f33e1
    MOV dword ptr [ESP + 0x64],EAX      ; 004f33e4
    MOV EAX,[0x006810c8]                ; 004f33e8 | CDemonSet * g_CDemonSetPtr
        ;   Label: LAB_004f33e8
    MOV EDX,dword ptr [ESP + 0x60]      ; 004f33ed
    CMP EDX,dword ptr [EAX + 0x14d154]  ; 004f33f1 | g_CDemonSetInstance.actor_list_ptr
    JGE 0x004f3449                      ; 004f33f7 | LAB_004f3449
        ;   XREF to: 004f3449 (CONDITIONAL_JUMP)
    ADD EAX,dword ptr [ESP + 0x64]      ; 004f33f9
    MOV EBX,dword ptr [EAX + 0x14d158]  ; 004f33fd | g_CDemonSetInstance.actor_list_data[0]
    LEA EAX,[EBX + 0x20]                ; 004f3403
    FLD float ptr [EAX]                 ; 004f3406
    FSUB float ptr [ESI]                ; 004f3408
    FSTP float ptr [ESP + 0x20]         ; 004f340a
    FLD float ptr [EAX + 0x4]           ; 004f340e
    FSUB float ptr [ESI + 0x4]          ; 004f3411
    FST float ptr [ESP + 0x24]          ; 004f3414
    FLD float ptr [EAX + 0x8]           ; 004f3418
    FXCH                                ; 004f341b
    FABS                                ; 004f341d
    FXCH                                ; 004f341f
    FSUB float ptr [ESI + 0x8]          ; 004f3421
    FSTP float ptr [ESP + 0x28]         ; 004f3424
    FCOMP double ptr [0x0062ec76]       ; 004f3428 | double DOUBLE_0062ec76
    FNSTSW AX                           ; 004f342e
    SAHF                                ; 004f3430
    JBE 0x004f3459                      ; 004f3431 | LAB_004f3459
        ;   XREF to: 004f3459 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x60]      ; 004f3433
        ;   Label: LAB_004f3433
    MOV ECX,dword ptr [ESP + 0x64]      ; 004f3437
    INC EBX                             ; 004f343b
    ADD ECX,0x4                         ; 004f343c
    MOV dword ptr [ESP + 0x60],EBX      ; 004f343f
    MOV dword ptr [ESP + 0x64],ECX      ; 004f3443
    JMP 0x004f33e8                      ; 004f3447 | LAB_004f33e8
        ;   XREF to: 004f33e8 (UNCONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004f3449
        ;   Label: LAB_004f3449
    MOV ESP,EBP                         ; 004f344b
        ;   Label: LAB_004f344b
    POP EBP                             ; 004f344d
    POP EDI                             ; 004f344e
    POP ESI                             ; 004f344f
    POP EBX                             ; 004f3450
    RET                                 ; 004f3451
    MOV EAX,0x1                         ; 004f3452
        ;   Label: LAB_004f3452
    JMP 0x004f344b                      ; 004f3457 | LAB_004f344b
        ;   XREF to: 004f344b (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x20]          ; 004f3459
        ;   Label: LAB_004f3459
    FMUL ST0                            ; 004f345d
    FLD float ptr [ESP + 0x28]          ; 004f345f
    FMUL ST0                            ; 004f3463
    XOR EAX,EAX                         ; 004f3465
    FADDP                               ; 004f3467
    MOV dword ptr [ESP + 0x24],EAX      ; 004f3469
    FSQRT                               ; 004f346d
    FCOMP double ptr [0x0062ec76]       ; 004f346f | double DOUBLE_0062ec76
    FNSTSW AX                           ; 004f3475
    SAHF                                ; 004f3477
    JA 0x004f3433                       ; 004f3478 | LAB_004f3433
        ;   XREF to: 004f3433 (CONDITIONAL_JUMP)
    CMP EBX,EDI                         ; 004f347a
    JZ 0x004f3433                       ; 004f347c | LAB_004f3433
        ;   XREF to: 004f3433 (CONDITIONAL_JUMP)
    LEA EAX,[ESP + 0x20]                ; 004f347e
    PUSH EAX                            ; 004f3482
    LEA EAX,[ESP + 0x54]                ; 004f3483
    PUSH EAX                            ; 004f3487
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f3488 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    FLD float ptr [EAX + 0x4]           ; 004f348d
    ADD ESP,0x8                         ; 004f3490
    FSUB float ptr [EDI + 0x34]         ; 004f3493
    SUB ESP,0x4                         ; 004f3496
    FSTP float ptr [ESP]                ; 004f3499
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f349c | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x70],EAX      ; 004f34a1
    FLD float ptr [ESP + 0x70]          ; 004f34a5
    FABS                                ; 004f34a9
    ADD ESP,0x4                         ; 004f34ab
    FCOMP double ptr [0x0062ec7e]       ; 004f34ae | double DOUBLE_0062ec7e
    FNSTSW AX                           ; 004f34b4
    SAHF                                ; 004f34b6
    JA 0x004f3433                       ; 004f34b7 | LAB_004f3433
        ;   XREF to: 004f3433 (CONDITIONAL_JUMP)
    PUSH ESI                            ; 004f34bd
    LEA EAX,[ESP + 0x48]                ; 004f34be
    PUSH EAX                            ; 004f34c2
    PUSH EBX                            ; 004f34c3
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004f34c4 | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    FLD float ptr [EAX + 0x8]           ; 004f34c9
    FLDZ                                ; 004f34cc
    ADD ESP,0xc                         ; 004f34ce
    FCOMPP                              ; 004f34d1
    FNSTSW AX                           ; 004f34d3
    SAHF                                ; 004f34d5
    JC 0x004f3433                       ; 004f34d6 | LAB_004f3433
        ;   XREF to: 004f3433 (CONDITIONAL_JUMP)
    MOV EDX,ESP                         ; 004f34dc
    PUSH EDX                            ; 004f34de
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f34df
    PUSH EBX                            ; 004f34e5
    CALL dword ptr [EAX + 0x90]         ; 004f34e6
    ADD ESP,0x8                         ; 004f34ec
    CMP dword ptr [ESP],0x0             ; 004f34ef
    JZ 0x004f3433                       ; 004f34f3 | LAB_004f3433
        ;   XREF to: 004f3433 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [ESP + 0x4]       ; 004f34f9
    TEST ECX,ECX                        ; 004f34fd
    JNZ 0x004f3433                      ; 004f34ff | LAB_004f3433
        ;   XREF to: 004f3433 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3505
    MOV dword ptr [ESP + 0x40],EAX      ; 004f3509
    LEA EAX,[ESP + 0x38]                ; 004f350d
    PUSH EAX                            ; 004f3511
    LEA EAX,[ESP + 0x30]                ; 004f3512
    PUSH EAX                            ; 004f3516
    PUSH EBX                            ; 004f3517
    MOV dword ptr [ESP + 0x44],ECX      ; 004f3518
    MOV dword ptr [ESP + 0x48],ECX      ; 004f351c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004f3520 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f3525
    FLD float ptr [ESP + 0x2c]          ; 004f3528
    FSUB float ptr [ESI]                ; 004f352c
    FMUL ST0                            ; 004f352e
    FLD float ptr [ESP + 0x34]          ; 004f3530
    FSUB float ptr [ESI + 0x8]          ; 004f3534
    FMUL ST0                            ; 004f3537
    FADDP                               ; 004f3539
    FSQRT                               ; 004f353b
    FCOMP double ptr [0x0062ec86]       ; 004f353d | double DOUBLE_0062ec86
    FNSTSW AX                           ; 004f3543
    SAHF                                ; 004f3545
    JA 0x004f3433                       ; 004f3546 | LAB_004f3433
        ;   XREF to: 004f3433 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004f354c
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f354d
    PUSH EBX                            ; 004f3553
    CALL dword ptr [EAX + 0x94]         ; 004f3554
    ADD ESP,0x8                         ; 004f355a
    TEST EAX,EAX                        ; 004f355d
    JZ 0x004f3433                       ; 004f355f | LAB_004f3433
        ;   XREF to: 004f3433 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004f3565
    MOV dword ptr [EDI + 0x1fbb0],EBX   ; 004f356a
    MOV ESP,EBP                         ; 004f3570
    POP EBP                             ; 004f3572
    POP EDI                             ; 004f3573
    POP ESI                             ; 004f3574
    POP EBX                             ; 004f3575
    RET                                 ; 004f3576


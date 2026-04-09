; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_005e3560(CTurret *this_ptr,float delta_time)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CBoundingBox3D   Stack[-0x54]:24  CStack_54
; float            Stack[-0x3c]:4  fStack_3c
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x34]:4  fStack_34
; CVector3f        Stack[-0x30]:12  CStack_30
; float            Stack[-0x24]:4  fStack_24
; float            Stack[-0x14]:4  fStack_14
;
; XREF[2]:
;   core_turret.cpp_CTurret_process_FUN_005e2430 at 005e26e3
;   core_turret.cpp_CTurret_updateTargeting_FUN_005e2d50 at 005e3261
;
; Referenced Globals:
;   double DOUBLE_00656798 = 0.333333333333333
;   float FLOAT_006567a0 = 25
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_turret.cpp_CTurret_aimAtTarget_FUN_005e3280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e3560
        ;   Label: core_turret.cpp_CTurret_updatePatrol_FUN_005e3560
    PUSH ESI                            ; 005e3561
    PUSH EDI                            ; 005e3562
    PUSH EBP                            ; 005e3563
    SUB ESP,0x44                        ; 005e3564
    MOV ESI,dword ptr [ESP + 0x58]      ; 005e3567
    FLD float ptr [ESI + 0x86c]         ; 005e356b
    FLDZ                                ; 005e3571
    FCOMPP                              ; 005e3573
    FNSTSW AX                           ; 005e3575
    SAHF                                ; 005e3577
    JNC 0x005e35a3                      ; 005e3578
        ;   XREF to: 005e35a3 (CONDITIONAL_JUMP)  ; LAB_005e35a3
    FLD float ptr [ESI + 0x300]         ; 005e357a
    FLDZ                                ; 005e3580
    FCOMPP                              ; 005e3582
    FNSTSW AX                           ; 005e3584
    SAHF                                ; 005e3586
    JNC 0x005e3591                      ; 005e3587
        ;   XREF to: 005e3591 (CONDITIONAL_JUMP)  ; LAB_005e3591
    ADD ESP,0x44                        ; 005e3589
        ;   Label: LAB_005e3589
    POP EBP                             ; 005e358c
    POP EDI                             ; 005e358d
    POP ESI                             ; 005e358e
    POP EBX                             ; 005e358f
    RET                                 ; 005e3590
    PUSH ESI                            ; 005e3591
        ;   Label: LAB_005e3591
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e3592
    CALL dword ptr [EAX + 0xf8]         ; 005e3598
    ADD ESP,0x4                         ; 005e359e
    JMP 0x005e3589                      ; 005e35a1
        ;   XREF to: 005e3589 (UNCONDITIONAL_JUMP)  ; LAB_005e3589
    CMP dword ptr [ESI + 0x780],0x0     ; 005e35a3
        ;   Label: LAB_005e35a3
    JZ 0x005e3589                       ; 005e35aa
        ;   XREF to: 005e3589 (CONDITIONAL_JUMP)  ; LAB_005e3589
    FLD float ptr [ESP + 0x5c]          ; 005e35ac
    FMUL double ptr [0x00656798]        ; 005e35b0 | DOUBLE_00656798
    SUB ESP,0x4                         ; 005e35b6
    LEA EBX,[ESI + 0x84c]               ; 005e35b9
    FSTP float ptr [ESP]                ; 005e35bf
    PUSH EBX                            ; 005e35c2
    PUSH ESI                            ; 005e35c3
    CALL core_turret.cpp_CTurret_aimAtTarget_FUN_005e3280 ; 005e35c4
        ;   XREF to: 005e3280 (UNCONDITIONAL_CALL)  ; int core_turret.cpp_CTurret_aimAtTarget_FUN_005e3280(CTurret * this_ptr, CVector3f * target_pos, float delta_time)
    ADD ESP,0xc                         ; 005e35c9
    TEST EAX,EAX                        ; 005e35cc
    JZ 0x005e3589                       ; 005e35ce
        ;   XREF to: 005e3589 (CONDITIONAL_JUMP)  ; LAB_005e3589
    MOV EBP,ESP                         ; 005e35d0
    MOV EAX,dword ptr [ESI + 0x780]     ; 005e35d2
    PUSH EBP                            ; 005e35d8
    MOV EDI,dword ptr [EAX + 0x154]     ; 005e35d9
    PUSH EAX                            ; 005e35df
    CALL dword ptr [EDI + 0x14]         ; 005e35e0
    ADD ESP,0x8                         ; 005e35e3
    MOV EAX,dword ptr [EBX]             ; 005e35e6
    MOV dword ptr [ESP + 0x18],EAX      ; 005e35e8
    LEA EAX,[EBX + 0x4]                 ; 005e35ec
    MOV EAX,dword ptr [EAX]             ; 005e35ef
    MOV dword ptr [ESP + 0x1c],EAX      ; 005e35f1
    LEA EAX,[EBX + 0x8]                 ; 005e35f5
    XOR EBP,EBP                         ; 005e35f8
    MOV EAX,dword ptr [EAX]             ; 005e35fa
    MOV EDI,EBX                         ; 005e35fc
    MOV dword ptr [ESP + 0x20],EAX      ; 005e35fe
    PUSH 0x3f666666                     ; 005e3602
        ;   Label: LAB_005e3602
    PUSH 0x3dcccccd                     ; 005e3607
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005e360c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x48],EAX      ; 005e3611
    FLD float ptr [ESP + 0x48]          ; 005e3615
    ADD ESP,0x8                         ; 005e3619
    FLD1                                ; 005e361c
    FXCH                                ; 005e361e
    FSTP float ptr [ESP + 0x30]         ; 005e3620
    FSUB float ptr [ESP + 0x30]         ; 005e3624
    FMUL float ptr [ESP + 0xc]          ; 005e3628
    FLD float ptr [ESP]                 ; 005e362c
    FMUL float ptr [ESP + 0x30]         ; 005e362f
    PUSH 0x3f666666                     ; 005e3633
    FADDP                               ; 005e3638
    PUSH 0x3dcccccd                     ; 005e363a
    FSTP float ptr [ESI + 0x84c]        ; 005e363f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005e3645
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x48],EAX      ; 005e364a
    FLD float ptr [ESP + 0x48]          ; 005e364e
    ADD ESP,0x8                         ; 005e3652
    FLD1                                ; 005e3655
    FXCH                                ; 005e3657
    FSTP float ptr [ESP + 0x30]         ; 005e3659
    FSUB float ptr [ESP + 0x30]         ; 005e365d
    FMUL float ptr [ESP + 0x14]         ; 005e3661
    FLD float ptr [ESP + 0x8]           ; 005e3665
    FMUL float ptr [ESP + 0x30]         ; 005e3669
    FADDP                               ; 005e366d
    FSTP float ptr [ESI + 0x854]        ; 005e366f
    MOV EAX,dword ptr [ESP + 0x4]       ; 005e3675
    PUSH EBX                            ; 005e3679
    MOV dword ptr [ESI + 0x850],EAX     ; 005e367a
    LEA EAX,[ESP + 0x28]                ; 005e3680
    PUSH EAX                            ; 005e3684
    MOV ECX,dword ptr [ESI + 0x780]     ; 005e3685
    PUSH ECX                            ; 005e368b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005e368c
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005e3691
    CMP EBX,EAX                         ; 005e3694
    JNZ 0x005e36d9                      ; 005e3696
        ;   XREF to: 005e36d9 (CONDITIONAL_JUMP)  ; LAB_005e36d9
    FLD float ptr [EDI]                 ; 005e3698
        ;   Label: LAB_005e3698
    FSUB float ptr [ESP + 0x18]         ; 005e369a
    FMUL ST0                            ; 005e369e
    FLD float ptr [EDI + 0x4]           ; 005e36a0
    FSUB float ptr [ESP + 0x1c]         ; 005e36a3
    FMUL ST0                            ; 005e36a7
    FLD float ptr [EDI + 0x8]           ; 005e36a9
    FXCH                                ; 005e36ac
    FADDP ST2,ST0                       ; 005e36ae
    FSUB float ptr [ESP + 0x20]         ; 005e36b0
    FMUL ST0                            ; 005e36b4
    FADDP                               ; 005e36b6
    FCOMP float ptr [0x006567a0]        ; 005e36b8 | FLOAT_006567a0
    FNSTSW AX                           ; 005e36be
    SAHF                                ; 005e36c0
    JA 0x005e3589                       ; 005e36c1
        ;   XREF to: 005e3589 (CONDITIONAL_JUMP)  ; LAB_005e3589
    INC EBP                             ; 005e36c7
    CMP EBP,0x5                         ; 005e36c8
    JL 0x005e3602                       ; 005e36cb
        ;   XREF to: 005e3602 (CONDITIONAL_JUMP)  ; LAB_005e3602
    ADD ESP,0x44                        ; 005e36d1
    POP EBP                             ; 005e36d4
    POP EDI                             ; 005e36d5
    POP ESI                             ; 005e36d6
    POP EBX                             ; 005e36d7
    RET                                 ; 005e36d8
    MOV EDX,dword ptr [EAX]             ; 005e36d9
        ;   Label: LAB_005e36d9
    MOV dword ptr [EBX],EDX             ; 005e36db
    MOV EDX,dword ptr [EAX + 0x4]       ; 005e36dd
    MOV dword ptr [EBX + 0x4],EDX       ; 005e36e0
    MOV EDX,dword ptr [EAX + 0x8]       ; 005e36e3
    MOV dword ptr [EBX + 0x8],EDX       ; 005e36e6
    JMP 0x005e3698                      ; 005e36e9
        ;   XREF to: 005e3698 (UNCONDITIONAL_JUMP)  ; LAB_005e3698


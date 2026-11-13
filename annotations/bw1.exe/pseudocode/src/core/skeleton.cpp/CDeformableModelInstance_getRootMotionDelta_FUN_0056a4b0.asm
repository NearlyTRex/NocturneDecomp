; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack3_esi core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0056a4b0(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,CVector3f *output_buffer)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_frame
; float            Stack[0xc]:4   end_frame
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0056a410 at 0056a42a
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   crt_math.c_ceil_FUN_005c31f7
;   crt_math.c_floor_FUN_005c0880
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a4b0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0056a4b0
    PUSH EDI                            ; 0056a4b1
    PUSH EBP                            ; 0056a4b2
    SUB ESP,0x68                        ; 0056a4b3
    MOV EBP,dword ptr [ESP + 0x78]      ; 0056a4b6
    MOV EBX,ESI                         ; 0056a4ba
    FLD float ptr [ESP + 0x7c]          ; 0056a4bc
    FCOMP float ptr [ESP + 0x80]        ; 0056a4c0
    FNSTSW AX                           ; 0056a4c7
    SAHF                                ; 0056a4c9
    JC 0x0056a4ea                       ; 0056a4ca
        ;   XREF to: 0056a4ea (CONDITIONAL_JUMP)  ; LAB_0056a4ea
    LEA EDI,[ESP + 0xc]                 ; 0056a4cc
    MOV ESI,0x2c8af28                   ; 0056a4d0
    MOVSD ES:EDI,ESI                    ; 0056a4d5
        ;   Label: LAB_0056a4d5
    MOVSD ES:EDI,ESI                    ; 0056a4d6
    MOVSD ES:EDI,ESI                    ; 0056a4d7
    LEA ESI,[ESP + 0xc]                 ; 0056a4d8
    MOV EDI,EBX                         ; 0056a4dc
    MOVSD ES:EDI,ESI                    ; 0056a4de
    MOVSD ES:EDI,ESI                    ; 0056a4df
    MOVSD ES:EDI,ESI                    ; 0056a4e0
    MOV EAX,EBX                         ; 0056a4e1
    ADD ESP,0x68                        ; 0056a4e3
    POP EBP                             ; 0056a4e6
    POP EDI                             ; 0056a4e7
    POP EBX                             ; 0056a4e8
    RET                                 ; 0056a4e9
    PUSH EBP                            ; 0056a4ea
        ;   Label: LAB_0056a4ea
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0056a4eb
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056a4f0
    FLD float ptr [ESP + 0x7c]          ; 0056a4f3
    MOV dword ptr [ESP + 0x58],EAX      ; 0056a4f7
    SUB ESP,0x8                         ; 0056a4fb
    FSTP double ptr [ESP]               ; 0056a4fe
    MOV ESI,EAX                         ; 0056a501
    CALL crt_math.c_floor_FUN_005c0880  ; 0056a503
        ;   XREF to: 005c0880 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005c0880(double input_value)
    MOV dword ptr [ESP + 0x50],EAX      ; 0056a508
    MOV dword ptr [ESP + 0x54],EDX      ; 0056a50c
    FLD double ptr [ESP + 0x50]         ; 0056a510
    ADD ESP,0x8                         ; 0056a514
    CALL crt_math.c_round_FUN_005c03a0  ; 0056a517
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FLD float ptr [ESP + 0x80]          ; 0056a51c
    FXCH                                ; 0056a523
    FISTP dword ptr [ESP + 0x5c]        ; 0056a525
    SUB ESP,0x8                         ; 0056a529
    FSTP double ptr [ESP]               ; 0056a52c
    CALL crt_math.c_ceil_FUN_005c31f7   ; 0056a52f
        ;   XREF to: 005c31f7 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_005c31f7(double value)
    MOV dword ptr [ESP + 0x50],EAX      ; 0056a534
    MOV dword ptr [ESP + 0x54],EDX      ; 0056a538
    FLD double ptr [ESP + 0x50]         ; 0056a53c
    CALL crt_math.c_round_FUN_005c03a0  ; 0056a540
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    ADD ESP,0x8                         ; 0056a545
    XOR EDX,EDX                         ; 0056a548
    FISTP dword ptr [ESP + 0x60]        ; 0056a54a
    MOV EDI,dword ptr [ESP + 0x5c]      ; 0056a54e
    MOV dword ptr [ESP + 0x3c],EDX      ; 0056a552
    MOV dword ptr [ESP + 0x40],EDX      ; 0056a556
    MOV dword ptr [ESP + 0x44],EDX      ; 0056a55a
    CMP EDI,dword ptr [ESP + 0x60]      ; 0056a55e
    JGE 0x0056a5c0                      ; 0056a562
        ;   XREF to: 0056a5c0 (CONDITIONAL_JUMP)  ; LAB_0056a5c0
    LEA EAX,[EDI*0x4 + 0x0]             ; 0056a564
    SUB EAX,EDI                         ; 0056a56b
    MOV EDX,dword ptr [ESI + 0x1ec98]   ; 0056a56d
    LEA ESI,[EAX*0x4 + 0x0]             ; 0056a573
    MOV ECX,dword ptr [ESP + 0x60]      ; 0056a57a
    ADD ESI,EDX                         ; 0056a57e
    FLD float ptr [ESP + 0x3c]          ; 0056a580
        ;   Label: LAB_0056a580
    FLD float ptr [ESP + 0x40]          ; 0056a584
    ADD ESI,0xc                         ; 0056a588
    FLD float ptr [ESP + 0x44]          ; 0056a58b
    INC EDI                             ; 0056a58f
    FXCH ST2                            ; 0056a590
    FADD float ptr [ESI + -0xc]         ; 0056a592
    FXCH                                ; 0056a595
    FADD float ptr [ESI + -0x8]         ; 0056a597
    FXCH ST2                            ; 0056a59a
    FADD float ptr [ESI + -0x4]         ; 0056a59c
    FXCH                                ; 0056a59f
    FSTP float ptr [ESP + 0x3c]         ; 0056a5a1
    FXCH                                ; 0056a5a5
    FSTP float ptr [ESP + 0x40]         ; 0056a5a7
    FSTP float ptr [ESP + 0x44]         ; 0056a5ab
    CMP EDI,ECX                         ; 0056a5af
    JL 0x0056a580                       ; 0056a5b1
        ;   XREF to: 0056a580 (CONDITIONAL_JUMP)  ; LAB_0056a580
    LEA EAX,[EAX]                       ; 0056a5b3
    LEA EDX,[EDX]                       ; 0056a5b9
    NOP                                 ; 0056a5bf
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0056a5c0
        ;   Label: LAB_0056a5c0
    MOV EDX,dword ptr [ESP + 0x58]      ; 0056a5c4
    MOV dword ptr [ESP + 0x64],EAX      ; 0056a5c8
    MOV ESI,EAX                         ; 0056a5cc
    MOV EDX,dword ptr [EDX + 0x1ec98]   ; 0056a5ce
    FILD dword ptr [ESP + 0x64]         ; 0056a5d4
    SHL EAX,0x2                         ; 0056a5d8
    FSUBR float ptr [ESP + 0x7c]        ; 0056a5db
    SUB EAX,ESI                         ; 0056a5df
    FSTP float ptr [ESP + 0x54]         ; 0056a5e1
    FLD float ptr [EDX + EAX*0x4]       ; 0056a5e5
    FMUL float ptr [ESP + 0x54]         ; 0056a5e8
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0056a5ec
    FMUL float ptr [ESP + 0x54]         ; 0056a5f0
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 0056a5f4
    FMUL float ptr [ESP + 0x54]         ; 0056a5f8
    MOV EDI,ESP                         ; 0056a5fc
    LEA ESI,[ESP + 0x18]                ; 0056a5fe
    MOV EAX,dword ptr [ESP + 0x60]      ; 0056a602
    FXCH ST2                            ; 0056a606
    FSTP float ptr [ESP + 0x18]         ; 0056a608
    FSTP float ptr [ESP + 0x1c]         ; 0056a60c
    FSTP float ptr [ESP + 0x20]         ; 0056a610
    MOVSD ES:EDI,ESI                    ; 0056a614
    MOVSD ES:EDI,ESI                    ; 0056a615
    MOVSD ES:EDI,ESI                    ; 0056a616
    MOV dword ptr [ESP + 0x64],EAX      ; 0056a617
    LEA ESI,[EAX + -0x1]                ; 0056a61b
    FILD dword ptr [ESP + 0x64]         ; 0056a61e
    LEA EAX,[ESI*0x4 + 0x0]             ; 0056a622
    FSUB float ptr [ESP + 0x80]         ; 0056a629
    SUB EAX,ESI                         ; 0056a630
    FSTP float ptr [ESP + 0x50]         ; 0056a632
    FLD float ptr [EDX + EAX*0x4]       ; 0056a636
    FMUL float ptr [ESP + 0x50]         ; 0056a639
    FLD float ptr [EDX + EAX*0x4 + 0x4] ; 0056a63d
    FMUL float ptr [ESP + 0x50]         ; 0056a641
    FLD float ptr [EDX + EAX*0x4 + 0x8] ; 0056a645
    FMUL float ptr [ESP + 0x50]         ; 0056a649
    FLD float ptr [ESP + 0x3c]          ; 0056a64d
    FSUB float ptr [ESP]                ; 0056a651
    LEA EDI,[ESP + 0x24]                ; 0056a654
    FSTP float ptr [ESP + 0x3c]         ; 0056a658
    LEA ESI,[ESP + 0x30]                ; 0056a65c
    FXCH ST2                            ; 0056a660
    FSTP float ptr [ESP + 0x30]         ; 0056a662
    FSTP float ptr [ESP + 0x34]         ; 0056a666
    FSTP float ptr [ESP + 0x38]         ; 0056a66a
    MOVSD ES:EDI,ESI                    ; 0056a66e
    MOVSD ES:EDI,ESI                    ; 0056a66f
    MOVSD ES:EDI,ESI                    ; 0056a670
    FLD float ptr [ESP + 0x3c]          ; 0056a671
    FSUB float ptr [ESP + 0x24]         ; 0056a675
    FMUL float ptr [EBP + 0x508]        ; 0056a679
    FLD float ptr [ESP + 0x44]          ; 0056a67f
    FLD float ptr [ESP + 0x40]          ; 0056a683
    FSUB float ptr [ESP + 0x4]          ; 0056a687
    FXCH                                ; 0056a68b
    FSUB float ptr [ESP + 0x8]          ; 0056a68d
    FXCH                                ; 0056a691
    FSUB float ptr [ESP + 0x28]         ; 0056a693
    FXCH                                ; 0056a697
    FSUB float ptr [ESP + 0x2c]         ; 0056a699
    FXCH                                ; 0056a69d
    FMUL float ptr [EBP + 0x50c]        ; 0056a69f
    FXCH                                ; 0056a6a5
    FMUL float ptr [EBP + 0x510]        ; 0056a6a7
    LEA EDI,[ESP + 0xc]                 ; 0056a6ad
    LEA ESI,[ESP + 0x3c]                ; 0056a6b1
    FXCH ST2                            ; 0056a6b5
    FSTP float ptr [ESP + 0x3c]         ; 0056a6b7
    FSTP float ptr [ESP + 0x40]         ; 0056a6bb
    FSTP float ptr [ESP + 0x44]         ; 0056a6bf
    JMP 0x0056a4d5                      ; 0056a6c3
        ;   XREF to: 0056a4d5 (UNCONDITIONAL_JUMP)  ; LAB_0056a4d5


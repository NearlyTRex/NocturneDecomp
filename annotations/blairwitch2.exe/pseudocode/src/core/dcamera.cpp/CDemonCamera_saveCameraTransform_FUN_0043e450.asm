; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveCameraTransform_FUN_0043e450(CDemonCamera *this_ptr,CVector3f *new_position,CMatrix3x3f *rotation_matrix,CMatrix3x3f *transform_matrix)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   new_position
; CMatrix3x3f *    Stack[0xc]:4   rotation_matrix
; CMatrix3x3f *    Stack[0x10]:4   transform_matrix
;
; Referenced Globals:
;   float g_FLOAT_005f4dcc = 256
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0043e450
        ;   Label: core_dcamera.cpp_CDemonCamera_saveCameraTransform_FUN_0043e450
    SUB ESP,0x30                        ; 0043e451
    MOV EBP,dword ptr [ESP + 0x38]      ; 0043e454
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0043e458
    PUSH EDI                            ; 0043e45c
    PUSH ESI                            ; 0043e45d
    PUSH EBX                            ; 0043e45e
    LEA EBX,[EBP + 0x1498]              ; 0043e45f
    LEA EDI,[EBP + 0x148c]              ; 0043e465
    LEA ESI,[EBP + 0x16c]               ; 0043e46b
    LEA EAX,[EBP + 0x4]                 ; 0043e471
    MOVSD ES:EDI,ESI                    ; 0043e474
    MOVSD ES:EDI,ESI                    ; 0043e475
    MOVSD ES:EDI,ESI                    ; 0043e476
    CMP EBX,EAX                         ; 0043e477
    JZ 0x0043e48b                       ; 0043e479
        ;   XREF to: 0043e48b (CONDITIONAL_JUMP)  ; LAB_0043e48b
    MOV ECX,dword ptr [EAX]             ; 0043e47b
    MOV dword ptr [EBX],ECX             ; 0043e47d
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043e47f
    MOV dword ptr [EBX + 0x4],ECX       ; 0043e482
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043e485
    MOV dword ptr [EBX + 0x8],ECX       ; 0043e488
    MOV EAX,dword ptr [EBP + 0x178]     ; 0043e48b
        ;   Label: LAB_0043e48b
    MOV dword ptr [EBP + 0x14a4],EAX    ; 0043e491
    MOV EAX,dword ptr [EBP + 0x17c]     ; 0043e497
    MOV dword ptr [EBP + 0x14a8],EAX    ; 0043e49d
    MOV EAX,dword ptr [EBP + 0x180]     ; 0043e4a3
    MOV dword ptr [EBP + 0x14ac],EAX    ; 0043e4a9
    MOV EAX,dword ptr [EBP + 0x184]     ; 0043e4af
    MOV dword ptr [EBP + 0x14b0],EAX    ; 0043e4b5
    MOV EAX,dword ptr [EBP + 0x188]     ; 0043e4bb
    MOV dword ptr [EBP + 0x14b4],EAX    ; 0043e4c1
    MOV EAX,dword ptr [EBP + 0x18c]     ; 0043e4c7
    MOV dword ptr [EBP + 0x14b8],EAX    ; 0043e4cd
    MOV EAX,dword ptr [EBP + 0x190]     ; 0043e4d3
    MOV dword ptr [EBP + 0x14bc],EAX    ; 0043e4d9
    MOV EAX,dword ptr [EBP + 0x194]     ; 0043e4df
    MOV dword ptr [EBP + 0x14c0],EAX    ; 0043e4e5
    LEA EDI,[ESP + 0xc]                 ; 0043e4eb
    MOV EAX,dword ptr [EBP + 0x198]     ; 0043e4ef
    LEA ESI,[ESP + 0x24]                ; 0043e4f5
    MOV dword ptr [EBP + 0x14c4],EAX    ; 0043e4f9
    LEA EBX,[EBP + 0x4]                 ; 0043e4ff
    FLD float ptr [EDX + 0x4]           ; 0043e502
    FLD float ptr [EDX + 0x8]           ; 0043e505
    FLD float ptr [EDX]                 ; 0043e508
    LEA EAX,[ESP + 0xc]                 ; 0043e50a
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0043e50e
    PUSH EAX                            ; 0043e512
    FSUB float ptr [EBX]                ; 0043e513
    FXCH ST2                            ; 0043e515
    FSUB float ptr [EBX + 0x4]          ; 0043e517
    FXCH                                ; 0043e51a
    FSUB float ptr [EBX + 0x8]          ; 0043e51c
    FXCH ST2                            ; 0043e51f
    FSTP float ptr [ESP + 0x28]         ; 0043e521
    FSTP float ptr [ESP + 0x2c]         ; 0043e525
    FSTP float ptr [ESP + 0x30]         ; 0043e529
    MOVSD ES:EDI,ESI                    ; 0043e52d
    MOVSD ES:EDI,ESI                    ; 0043e52e
    MOVSD ES:EDI,ESI                    ; 0043e52f
    PUSH EDX                            ; 0043e530
    LEA ESI,[ESP + 0x38]                ; 0043e531
    LEA EDI,[ESP + 0x20]                ; 0043e535
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0 ; 0043e539
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0(CMatrix3x3f * this_ptr, CVector3f * input, CVector3f * output)
    LEA ESI,[ESP + 0x38]                ; 0043e53e
    ADD ESP,0x8                         ; 0043e542
    LEA EAX,[ESP + 0x18]                ; 0043e545
    MOVSD ES:EDI,ESI                    ; 0043e549
    MOVSD ES:EDI,ESI                    ; 0043e54a
    MOVSD ES:EDI,ESI                    ; 0043e54b
    CMP EBX,EAX                         ; 0043e54c
    JZ 0x0043e564                       ; 0043e54e
        ;   XREF to: 0043e564 (CONDITIONAL_JUMP)  ; LAB_0043e564
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043e550
    MOV dword ptr [EBX],EAX             ; 0043e554
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0043e556
    MOV dword ptr [EBX + 0x4],EAX       ; 0043e55a
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043e55d
    MOV dword ptr [EBX + 0x8],EAX       ; 0043e561
    LEA EAX,[EBP + 0x4]                 ; 0043e564
        ;   Label: LAB_0043e564
    LEA EBX,[EBP + 0x16c]               ; 0043e567
    FLD float ptr [EAX]                 ; 0043e56d
    FMUL float ptr [0x005f4dcc]         ; 0043e56f | g_FLOAT_005f4dcc
    FISTP dword ptr [EBX]               ; 0043e575
    FLD float ptr [EAX + 0x4]           ; 0043e577
    FMUL float ptr [0x005f4dcc]         ; 0043e57a | g_FLOAT_005f4dcc
    FISTP dword ptr [EBX + 0x4]         ; 0043e580
    FLD float ptr [EAX + 0x8]           ; 0043e583
    FMUL float ptr [0x005f4dcc]         ; 0043e586 | g_FLOAT_005f4dcc
    FISTP dword ptr [EBX + 0x8]         ; 0043e58c
    POP EBX                             ; 0043e58f
    POP ESI                             ; 0043e590
    POP EDI                             ; 0043e591
    MOV EAX,dword ptr [ESP + 0x40]      ; 0043e592
    FILD dword ptr [EBP + 0x14a8]       ; 0043e596
    FMUL float ptr [EAX + 0xc]          ; 0043e59c
    FILD dword ptr [EBP + 0x14a4]       ; 0043e59f
    FMUL float ptr [EAX]                ; 0043e5a5
    FADDP                               ; 0043e5a7
    FILD dword ptr [EBP + 0x14ac]       ; 0043e5a9
    FMUL float ptr [EAX + 0x18]         ; 0043e5af
    FADDP                               ; 0043e5b2
    FILD dword ptr [EBP + 0x14a4]       ; 0043e5b4
    FXCH                                ; 0043e5ba
    CALL crt_math.c_round_FUN_005b7ff0  ; 0043e5bc
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [EBP + 0x178]       ; 0043e5c1
    FMUL float ptr [EAX + 0x4]          ; 0043e5c7
    FILD dword ptr [EBP + 0x14a8]       ; 0043e5ca
    FMUL float ptr [EAX + 0x10]         ; 0043e5d0
    FADDP                               ; 0043e5d3
    FILD dword ptr [EBP + 0x14ac]       ; 0043e5d5
    FMUL float ptr [EAX + 0x1c]         ; 0043e5db
    FADDP                               ; 0043e5de
    FILD dword ptr [EBP + 0x14a4]       ; 0043e5e0
    FXCH                                ; 0043e5e6
    CALL crt_math.c_round_FUN_005b7ff0  ; 0043e5e8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [EBP + 0x17c]       ; 0043e5ed
    FMUL float ptr [EAX + 0x8]          ; 0043e5f3
    FILD dword ptr [EBP + 0x14a8]       ; 0043e5f6
    FMUL float ptr [EAX + 0x14]         ; 0043e5fc
    FADDP                               ; 0043e5ff
    FILD dword ptr [EBP + 0x14ac]       ; 0043e601
    FMUL float ptr [EAX + 0x20]         ; 0043e607
    FADDP                               ; 0043e60a
    FILD dword ptr [EBP + 0x14b4]       ; 0043e60c
    FXCH                                ; 0043e612
    CALL crt_math.c_round_FUN_005b7ff0  ; 0043e614
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [EBP + 0x180]       ; 0043e619
    FMUL float ptr [EAX + 0xc]          ; 0043e61f
    FILD dword ptr [EBP + 0x14b0]       ; 0043e622
    FMUL float ptr [EAX]                ; 0043e628
    FADDP                               ; 0043e62a
    FILD dword ptr [EBP + 0x14b8]       ; 0043e62c
    FMUL float ptr [EAX + 0x18]         ; 0043e632
    FADDP                               ; 0043e635
    FILD dword ptr [EBP + 0x14b0]       ; 0043e637
    FXCH                                ; 0043e63d
    CALL crt_math.c_round_FUN_005b7ff0  ; 0043e63f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [EBP + 0x184]       ; 0043e644
    FMUL float ptr [EAX + 0x4]          ; 0043e64a
    FILD dword ptr [EBP + 0x14b4]       ; 0043e64d
    FMUL float ptr [EAX + 0x10]         ; 0043e653
    FADDP                               ; 0043e656
    FILD dword ptr [EBP + 0x14b8]       ; 0043e658
    FMUL float ptr [EAX + 0x1c]         ; 0043e65e
    FADDP                               ; 0043e661
    FILD dword ptr [EBP + 0x14b0]       ; 0043e663
    FXCH                                ; 0043e669
    CALL crt_math.c_round_FUN_005b7ff0  ; 0043e66b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [EBP + 0x188]       ; 0043e670
    FMUL float ptr [EAX + 0x8]          ; 0043e676
    FILD dword ptr [EBP + 0x14b4]       ; 0043e679
    FMUL float ptr [EAX + 0x14]         ; 0043e67f
    FADDP                               ; 0043e682
    FILD dword ptr [EBP + 0x14b8]       ; 0043e684
    FMUL float ptr [EAX + 0x20]         ; 0043e68a
    FADDP                               ; 0043e68d
    FILD dword ptr [EBP + 0x14c0]       ; 0043e68f
    FXCH                                ; 0043e695
    CALL crt_math.c_round_FUN_005b7ff0  ; 0043e697
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [EBP + 0x18c]       ; 0043e69c
    FMUL float ptr [EAX + 0xc]          ; 0043e6a2
    FILD dword ptr [EBP + 0x14bc]       ; 0043e6a5
    FMUL float ptr [EAX]                ; 0043e6ab
    FADDP                               ; 0043e6ad
    FILD dword ptr [EBP + 0x14c4]       ; 0043e6af
    FMUL float ptr [EAX + 0x18]         ; 0043e6b5
    FADDP                               ; 0043e6b8
    FILD dword ptr [EBP + 0x14bc]       ; 0043e6ba
    FXCH                                ; 0043e6c0
    CALL crt_math.c_round_FUN_005b7ff0  ; 0043e6c2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [EBP + 0x190]       ; 0043e6c7
    FMUL float ptr [EAX + 0x4]          ; 0043e6cd
    FILD dword ptr [EBP + 0x14c0]       ; 0043e6d0
    FMUL float ptr [EAX + 0x10]         ; 0043e6d6
    FADDP                               ; 0043e6d9
    FILD dword ptr [EBP + 0x14c4]       ; 0043e6db
    FMUL float ptr [EAX + 0x1c]         ; 0043e6e1
    FADDP                               ; 0043e6e4
    FILD dword ptr [EBP + 0x14bc]       ; 0043e6e6
    FXCH                                ; 0043e6ec
    CALL crt_math.c_round_FUN_005b7ff0  ; 0043e6ee
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [EBP + 0x194]       ; 0043e6f3
    FMUL float ptr [EAX + 0x8]          ; 0043e6f9
    FILD dword ptr [EBP + 0x14c0]       ; 0043e6fc
    FMUL float ptr [EAX + 0x14]         ; 0043e702
    FADDP                               ; 0043e705
    FILD dword ptr [EBP + 0x14c4]       ; 0043e707
    FMUL float ptr [EAX + 0x20]         ; 0043e70d
    FADDP                               ; 0043e710
    CALL crt_math.c_round_FUN_005b7ff0  ; 0043e712
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [EBP + 0x198]       ; 0043e717
    ADD ESP,0x30                        ; 0043e71d
    POP EBP                             ; 0043e720
    RET                                 ; 0043e721


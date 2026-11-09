; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_004b3570(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0xe8]:1  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_FUN_004b5100 at 004b5407
;
; Referenced Globals:
;   undefined4 DAT_005df56c
;   undefined4 DAT_005df574
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061caac
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_00629064
;   undefined4 DAT_00629068
;   undefined4 DAT_0062906c
;   ... and 11 more
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   crt_stdlib.c_rand_FUN_005c084c
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_matrix.c_FUN_00483b70
;   engine_matrix.c_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004b3570
        ;   Label: core_fire.cpp_FUN_004b3570
    SUB ESP,0xe4                        ; 004b3571
    MOV EBP,dword ptr [ESP + 0xec]      ; 004b3577
    FLD float ptr [EBP + 0x14]          ; 004b357e
    FLDZ                                ; 004b3581
    FCOMPP                              ; 004b3583
    FNSTSW AX                           ; 004b3585
    SAHF                                ; 004b3587
    JC 0x004b3592                       ; 004b3588
        ;   XREF to: 004b3592 (CONDITIONAL_JUMP)  ; LAB_004b3592
    ADD ESP,0xe4                        ; 004b358a
    POP EBP                             ; 004b3590
    RET                                 ; 004b3591
    PUSH EDI                            ; 004b3592
        ;   Label: LAB_004b3592
    PUSH ESI                            ; 004b3593
    PUSH EBX                            ; 004b3594
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004b3595
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    MOV EDX,EAX                         ; 004b359a
    MOV EBX,0x6                         ; 004b359c
    SAR EDX,0x1f                        ; 004b35a1
    IDIV EBX                            ; 004b35a4
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b35a6
    SUB EAX,EDX                         ; 004b35ad
    SHL EAX,0x3                         ; 004b35af
    ADD EAX,0x61caac                    ; 004b35b2 | DAT_0061caac
    PUSH EAX                            ; 004b35b7
    MOV EDX,dword ptr [0x00612560]      ; 004b35b8 | DAT_00612560
    PUSH EDX                            ; 004b35be | DAT_01bc120c
    MOV ESI,0x3                         ; 004b35bf
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b35c4
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    MOV ECX,0x4                         ; 004b35c9
    ADD ESP,0x8                         ; 004b35ce
    XOR EBX,EBX                         ; 004b35d1
    MOV dword ptr [ESP + 0x10],ECX      ; 004b35d3
    MOV dword ptr [ESP + 0x20],EBX      ; 004b35d7
    MOV dword ptr [ESP + 0x1c],EBX      ; 004b35db
    MOV dword ptr [ESP + 0x18],EBX      ; 004b35df
    MOV dword ptr [ESP + 0x14],EBX      ; 004b35e3
    MOV dword ptr [ESP + 0x24],EBX      ; 004b35e7
    MOV dword ptr [ESP + 0x30],ESI      ; 004b35eb
    MOV ECX,0x1                         ; 004b35ef
    MOV EBX,0x2                         ; 004b35f4
    MOV dword ptr [ESP + 0x28],ECX      ; 004b35f9
    MOV dword ptr [ESP + 0x2c],EBX      ; 004b35fd
    CALL crt_stdlib.c_rand_FUN_005c084c ; 004b3601
        ;   XREF to: 005c084c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005c084c()
    TEST AL,0x1                         ; 004b3606
    JZ 0x004b38ec                       ; 004b3608
        ;   XREF to: 004b38ec (CONDITIONAL_JUMP)  ; LAB_004b38ec
    MOV EDX,0x80000                     ; 004b360e
    MOV EBX,0xf80000                    ; 004b3613
    MOV dword ptr [0x00629030],EDX      ; 004b3618 | DAT_00629030
    MOV dword ptr [0x0062905c],EBX      ; 004b361e | DAT_0062905c
    MOV dword ptr [0x00629060],EDX      ; 004b3624 | DAT_00629060
    MOV dword ptr [0x0062908c],EBX      ; 004b362a | DAT_0062908c
    MOV dword ptr [0x00629090],EBX      ; 004b3630 | DAT_00629090
    MOV dword ptr [0x006290bc],EDX      ; 004b3636 | DAT_006290bc
    MOV dword ptr [0x006290c0],EBX      ; 004b363c | DAT_006290c0
    MOV dword ptr [0x0062902c],EDX      ; 004b3642 | DAT_0062902c
    MOV EBX,0xffff                      ; 004b3648
        ;   Label: LAB_004b3648
    MOV dword ptr [0x00629034],EBX      ; 004b364d | DAT_00629034
    MOV dword ptr [0x00629038],EBX      ; 004b3653 | DAT_00629038
    MOV dword ptr [0x0062903c],EBX      ; 004b3659 | DAT_0062903c
    MOV dword ptr [0x00629064],EBX      ; 004b365f | DAT_00629064
    MOV dword ptr [0x00629068],EBX      ; 004b3665 | DAT_00629068
    MOV dword ptr [0x0062906c],EBX      ; 004b366b | DAT_0062906c
    MOV dword ptr [0x00629094],EBX      ; 004b3671 | DAT_00629094
    MOV dword ptr [0x00629098],EBX      ; 004b3677 | DAT_00629098
    MOV dword ptr [0x0062909c],EBX      ; 004b367d | DAT_0062909c
    MOV dword ptr [0x006290c4],EBX      ; 004b3683 | DAT_006290c4
    MOV dword ptr [0x006290c8],EBX      ; 004b3689 | DAT_006290c8
    PUSH EBX                            ; 004b368f
    MOV dword ptr [0x006290cc],EBX      ; 004b3690 | DAT_006290cc
    MOV EBX,dword ptr [0x00612560]      ; 004b3696 | DAT_00612560
    PUSH EBX                            ; 004b369c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004b369d
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004b36a2
    PUSH 0x1                            ; 004b36a5
    MOV ESI,dword ptr [0x00612560]      ; 004b36a7 | DAT_00612560
    PUSH ESI                            ; 004b36ad | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b36ae
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b36b3
    MOV EDI,dword ptr [EBP]             ; 004b36b6
    LEA ESI,[EBP + 0x4]                 ; 004b36b9
    TEST EDI,EDI                        ; 004b36bc
    JNZ 0x004b3936                      ; 004b36be
        ;   XREF to: 004b3936 (CONDITIONAL_JUMP)  ; LAB_004b3936
    PUSH ESI                            ; 004b36c4
    MOV EBX,dword ptr [0x00612560]      ; 004b36c5 | DAT_00612560
    PUSH EBX                            ; 004b36cb | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b36cc
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b36d1
    MOV ESI,dword ptr [0x00612560]      ; 004b36d4 | DAT_00612560
    PUSH ESI                            ; 004b36da | DAT_01bc120c
    LEA ESI,[ESP + 0xa4]                ; 004b36db
    LEA EDI,[ESP + 0xd4]                ; 004b36e2
    CALL engine_matrix.c_FUN_00483b70   ; 004b36e9
        ;   XREF to: 00483b70 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483b70()
    LEA ESI,[ESP + 0xa4]                ; 004b36ee
    ADD ESP,0x4                         ; 004b36f5
    MOVSD ES:EDI,ESI                    ; 004b36f8
    MOVSD ES:EDI,ESI                    ; 004b36f9
    MOVSD ES:EDI,ESI                    ; 004b36fa
    XOR EDI,EDI                         ; 004b36fb
    PUSH EDI                            ; 004b36fd
    LEA EAX,[ESP + 0xd4]                ; 004b36fe
    PUSH EAX                            ; 004b3705
    MOV EAX,[0x00612560]                ; 004b3706 | DAT_00612560
    PUSH EAX                            ; 004b370b | DAT_01bc120c
    MOV dword ptr [ESP + 0xdc],EDI      ; 004b370c
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 004b3713
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 004b3718
    MOV dword ptr [ESP + 0xc4],EDI      ; 004b371b
    MOV dword ptr [ESP + 0xc8],EDI      ; 004b3722
    MOV dword ptr [ESP + 0xcc],EDI      ; 004b3729
    FLD float ptr [EBP + 0x18]          ; 004b3730
    FLDZ                                ; 004b3733
    FCOMPP                              ; 004b3735
    FNSTSW AX                           ; 004b3737
    SAHF                                ; 004b3739
    JC 0x004b3927                       ; 004b373a
        ;   XREF to: 004b3927 (CONDITIONAL_JUMP)  ; LAB_004b3927
    FLD float ptr [EBP + 0x10]          ; 004b3740
    FMUL double ptr [0x005df574]        ; 004b3743 | DAT_005df574
    FSTP float ptr [ESP + 0xc4]         ; 004b3749
    MOV EAX,dword ptr [EBP + 0x10]      ; 004b3750
        ;   Label: LAB_004b3750
    LEA EBX,[ESP + 0x94]                ; 004b3753
    MOV dword ptr [ESP + 0xc8],EAX      ; 004b375a
    LEA EAX,[ESP + 0xc4]                ; 004b3761
    MOV EDX,dword ptr [0x00612560]      ; 004b3768 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b376e
    FMUL float ptr [0x005fff94]         ; 004b3770 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3776
    FLD float ptr [EAX + 0x4]           ; 004b3778
    FMUL float ptr [0x005fff94]         ; 004b377b | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3781
    FLD float ptr [EAX + 0x8]           ; 004b3784
    FMUL float ptr [0x005fff94]         ; 004b3787 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b378d
    LEA EAX,[ESP + 0x94]                ; 004b3790
    PUSH EAX                            ; 004b3797
    MOV EAX,dword ptr [EDX]             ; 004b3798 | DAT_01bc120c
    PUSH EAX                            ; 004b379a
    CALL engine_special.cpp_FUN_00580173 ; 004b379b
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b37a0
    MOV AH,byte ptr [ESP + 0xc7]        ; 004b37a3
    XOR AH,0x80                         ; 004b37aa
    LEA EBX,[ESP + 0x40]                ; 004b37ad
    MOV byte ptr [ESP + 0xc7],AH        ; 004b37b1
    LEA EAX,[ESP + 0xc4]                ; 004b37b8
    MOV EDX,dword ptr [0x00612560]      ; 004b37bf | DAT_00612560
    FLD float ptr [EAX]                 ; 004b37c5
    FMUL float ptr [0x005fff94]         ; 004b37c7 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b37cd
    FLD float ptr [EAX + 0x4]           ; 004b37cf
    FMUL float ptr [0x005fff94]         ; 004b37d2 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b37d8
    FLD float ptr [EAX + 0x8]           ; 004b37db
    FMUL float ptr [0x005fff94]         ; 004b37de | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b37e4
    LEA EAX,[ESP + 0x40]                ; 004b37e7
    PUSH EAX                            ; 004b37eb
    MOV EAX,dword ptr [EDX]             ; 004b37ec | DAT_01bc120c
    ADD EAX,0x30                        ; 004b37ee
    PUSH EAX                            ; 004b37f1
    XOR ESI,ESI                         ; 004b37f2
    CALL engine_special.cpp_FUN_00580173 ; 004b37f4
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xb4]                ; 004b37f9
    LEA EAX,[ESP + 0xcc]                ; 004b3800
    ADD ESP,0x8                         ; 004b3807
    MOV EDX,dword ptr [0x00612560]      ; 004b380a | DAT_00612560
    MOV dword ptr [ESP + 0xc8],ESI      ; 004b3810
    FLD float ptr [EAX]                 ; 004b3817
    FMUL float ptr [0x005fff94]         ; 004b3819 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b381f
    FLD float ptr [EAX + 0x4]           ; 004b3821
    FMUL float ptr [0x005fff94]         ; 004b3824 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b382a
    FLD float ptr [EAX + 0x8]           ; 004b382d
    FMUL float ptr [0x005fff94]         ; 004b3830 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3836
    LEA EAX,[ESP + 0xac]                ; 004b3839
    PUSH EAX                            ; 004b3840
    MOV EAX,dword ptr [EDX]             ; 004b3841 | DAT_01bc120c
    ADD EAX,0x60                        ; 004b3843
    PUSH EAX                            ; 004b3846
    CALL engine_special.cpp_FUN_00580173 ; 004b3847
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b384c
    MOV DL,byte ptr [ESP + 0xc7]        ; 004b384f
    LEA EBX,[ESP + 0xdc]                ; 004b3856
    XOR DL,0x80                         ; 004b385d
    LEA EAX,[ESP + 0xc4]                ; 004b3860
    MOV byte ptr [ESP + 0xc7],DL        ; 004b3867
    MOV EDX,dword ptr [0x00612560]      ; 004b386e | DAT_00612560
    FLD float ptr [EAX]                 ; 004b3874
    FMUL float ptr [0x005fff94]         ; 004b3876 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b387c
    FLD float ptr [EAX + 0x4]           ; 004b387e
    FMUL float ptr [0x005fff94]         ; 004b3881 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3887
    FLD float ptr [EAX + 0x8]           ; 004b388a
    FMUL float ptr [0x005fff94]         ; 004b388d | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3893
    LEA EAX,[ESP + 0xdc]                ; 004b3896
    PUSH EAX                            ; 004b389d
    MOV EAX,dword ptr [EDX]             ; 004b389e | DAT_01bc120c
    ADD EAX,0x90                        ; 004b38a0
    PUSH EAX                            ; 004b38a5
    CALL engine_special.cpp_FUN_00580173 ; 004b38a6
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b38ab
    LEA EAX,[ESP + 0xc]                 ; 004b38ae
    PUSH EAX                            ; 004b38b2
    MOV EDI,dword ptr [0x00612560]      ; 004b38b3 | DAT_00612560
    PUSH EDI                            ; 004b38b9 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004b38ba
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b38bf
    MOV EBP,dword ptr [0x00612560]      ; 004b38c2 | DAT_00612560
    PUSH EBP                            ; 004b38c8 | DAT_01bc120c
    CALL engine_matrix.c_pop_FUN_004839a0 ; 004b38c9
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b38ce
    PUSH 0x0                            ; 004b38d1
        ;   Label: LAB_004b38d1
    MOV EAX,[0x00612560]                ; 004b38d3 | DAT_00612560
    PUSH EAX                            ; 004b38d8 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b38d9
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b38de
    POP EBX                             ; 004b38e1
    POP ESI                             ; 004b38e2
    POP EDI                             ; 004b38e3
    ADD ESP,0xe4                        ; 004b38e4
    POP EBP                             ; 004b38ea
    RET                                 ; 004b38eb
    MOV EAX,0x80000                     ; 004b38ec
        ;   Label: LAB_004b38ec
    MOV EDI,0xf80000                    ; 004b38f1
    MOV [0x00629030],EAX                ; 004b38f6 | DAT_00629030
    MOV [0x0062905c],EAX                ; 004b38fb | DAT_0062905c
    MOV [0x00629060],EAX                ; 004b3900 | DAT_00629060
    MOV [0x0062908c],EAX                ; 004b3905 | DAT_0062908c
    MOV dword ptr [0x00629090],EDI      ; 004b390a | DAT_00629090
    MOV dword ptr [0x006290bc],EDI      ; 004b3910 | DAT_006290bc
    MOV dword ptr [0x006290c0],EDI      ; 004b3916 | DAT_006290c0
    MOV dword ptr [0x0062902c],EDI      ; 004b391c | DAT_0062902c
    JMP 0x004b3648                      ; 004b3922
        ;   XREF to: 004b3648 (UNCONDITIONAL_JUMP)  ; LAB_004b3648
    MOV EAX,dword ptr [EBP + 0x18]      ; 004b3927
        ;   Label: LAB_004b3927
    MOV dword ptr [ESP + 0xc4],EAX      ; 004b392a
    JMP 0x004b3750                      ; 004b3931
        ;   XREF to: 004b3750 (UNCONDITIONAL_JUMP)  ; LAB_004b3750
    MOV EAX,[0x00612560]                ; 004b3936 | DAT_00612560
        ;   Label: LAB_004b3936
    LEA EBX,[ESP + 0x58]                ; 004b393b
    MOV EDX,dword ptr [EAX]             ; 004b393f | DAT_01bc120c
    MOV EAX,ESI                         ; 004b3941
    FLD float ptr [EAX]                 ; 004b3943
    FMUL float ptr [0x005fff94]         ; 004b3945 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b394b
    FLD float ptr [EAX + 0x4]           ; 004b394d
    FMUL float ptr [0x005fff94]         ; 004b3950 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3956
    FLD float ptr [EAX + 0x8]           ; 004b3959
    FMUL float ptr [0x005fff94]         ; 004b395c | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3962
    LEA EAX,[ESP + 0x58]                ; 004b3965
    PUSH EAX                            ; 004b3969
    PUSH EDX                            ; 004b396a
    CALL engine_special.cpp_FUN_0058043c ; 004b396b
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004b3970 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 004b3975 | DAT_01bc120c
    ADD ESP,0x8                         ; 004b3977
    LEA EDX,[EAX + 0x30]                ; 004b397a
    LEA EBX,[ESP + 0x88]                ; 004b397d
    MOV EAX,ESI                         ; 004b3984
    FLD float ptr [EAX]                 ; 004b3986
    FMUL float ptr [0x005fff94]         ; 004b3988 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b398e
    FLD float ptr [EAX + 0x4]           ; 004b3990
    FMUL float ptr [0x005fff94]         ; 004b3993 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3999
    FLD float ptr [EAX + 0x8]           ; 004b399c
    FMUL float ptr [0x005fff94]         ; 004b399f | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b39a5
    LEA EAX,[ESP + 0x88]                ; 004b39a8
    PUSH EAX                            ; 004b39af
    PUSH EDX                            ; 004b39b0
    CALL engine_special.cpp_FUN_0058043c ; 004b39b1
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004b39b6 | DAT_00612560
    LEA EDI,[EBP + 0x1c]                ; 004b39bb
    MOV EAX,dword ptr [EAX]             ; 004b39be | DAT_01bc120c
    ADD ESP,0x8                         ; 004b39c0
    LEA EDX,[EAX + 0x60]                ; 004b39c3
    LEA EBX,[ESP + 0xb8]                ; 004b39c6
    MOV EAX,EDI                         ; 004b39cd
    FLD float ptr [EAX]                 ; 004b39cf
    FMUL float ptr [0x005fff94]         ; 004b39d1 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b39d7
    FLD float ptr [EAX + 0x4]           ; 004b39d9
    FMUL float ptr [0x005fff94]         ; 004b39dc | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b39e2
    FLD float ptr [EAX + 0x8]           ; 004b39e5
    FMUL float ptr [0x005fff94]         ; 004b39e8 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b39ee
    LEA EAX,[ESP + 0xb8]                ; 004b39f1
    PUSH EAX                            ; 004b39f8
    PUSH EDX                            ; 004b39f9
    CALL engine_special.cpp_FUN_0058043c ; 004b39fa
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004b39ff | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 004b3a04 | DAT_01bc120c
    ADD ESP,0x8                         ; 004b3a06
    LEA EDX,[EAX + 0x90]                ; 004b3a09
    LEA EBX,[ESP + 0x64]                ; 004b3a0f
    MOV EAX,EDI                         ; 004b3a13
    FLD float ptr [EAX]                 ; 004b3a15
    FMUL float ptr [0x005fff94]         ; 004b3a17 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3a1d
    FLD float ptr [EAX + 0x4]           ; 004b3a1f
    FMUL float ptr [0x005fff94]         ; 004b3a22 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3a28
    FLD float ptr [EAX + 0x8]           ; 004b3a2b
    FMUL float ptr [0x005fff94]         ; 004b3a2e | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3a34
    LEA EAX,[ESP + 0x64]                ; 004b3a37
    PUSH EAX                            ; 004b3a3b
    PUSH EDX                            ; 004b3a3c
    CALL engine_special.cpp_FUN_0058043c ; 004b3a3d
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    FLD float ptr [EBP + 0x18]          ; 004b3a42
    MOV EDX,dword ptr [0x00612560]      ; 004b3a45 | DAT_00612560
    FLD double ptr [0x005df56c]         ; 004b3a4b | DAT_005df56c
    FXCH                                ; 004b3a51
    FMUL ST1                            ; 004b3a53
    MOV EAX,dword ptr [EDX]             ; 004b3a55 | DAT_01bc120c
    FLD float ptr [EBP + 0x28]          ; 004b3a57
    ADD ESP,0x8                         ; 004b3a5a
    MOV dword ptr [EAX + 0x10],0x80000000 ; 004b3a5d
    FXCH                                ; 004b3a64
    CALL crt_math.c_round_FUN_005c03a0  ; 004b3a66
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EBX,dword ptr [EDX]             ; 004b3a6b
    FISTP dword ptr [ESP + 0xec]        ; 004b3a6d
    MOV EAX,dword ptr [ESP + 0xec]      ; 004b3a74
    SUB dword ptr [EBX + 0x4],EAX       ; 004b3a7b
    MOV EAX,dword ptr [EDX]             ; 004b3a7e
    MOV dword ptr [EAX + 0x40],0x80000000 ; 004b3a80
    MOV EBX,dword ptr [EDX]             ; 004b3a87
    MOV EAX,dword ptr [ESP + 0xec]      ; 004b3a89
    ADD dword ptr [EBX + 0x34],EAX      ; 004b3a90
    MOV EAX,dword ptr [EDX]             ; 004b3a93
    FMULP                               ; 004b3a95
    MOV dword ptr [EAX + 0x70],0x80000000 ; 004b3a97
    CALL crt_math.c_round_FUN_005c03a0  ; 004b3a9e
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    MOV EBX,dword ptr [EDX]             ; 004b3aa3
    FISTP dword ptr [ESP + 0xe8]        ; 004b3aa5
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b3aac
    ADD dword ptr [EBX + 0x64],EAX      ; 004b3ab3
    MOV EAX,dword ptr [EDX]             ; 004b3ab6
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 004b3ab8
    MOV EBX,dword ptr [EDX]             ; 004b3ac2
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b3ac4
    MOV ECX,dword ptr [EBX + 0x94]      ; 004b3acb
    SUB ECX,EAX                         ; 004b3ad1
    LEA EAX,[ESP + 0xc]                 ; 004b3ad3
    PUSH EAX                            ; 004b3ad7
    PUSH EDX                            ; 004b3ad8
    MOV dword ptr [EBX + 0x94],ECX      ; 004b3ad9
    LEA EBX,[ESP + 0x54]                ; 004b3adf
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004b3ae3
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    MOV EDX,dword ptr [0x00612560]      ; 004b3ae8 | DAT_00612560
    ADD ESP,0x8                         ; 004b3aee
    MOV EAX,ESI                         ; 004b3af1
    MOV EDX,dword ptr [EDX]             ; 004b3af3 | DAT_01bc120c
    FLD float ptr [EAX]                 ; 004b3af5
    FMUL float ptr [0x005fff94]         ; 004b3af7 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3afd
    FLD float ptr [EAX + 0x4]           ; 004b3aff
    FMUL float ptr [0x005fff94]         ; 004b3b02 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3b08
    FLD float ptr [EAX + 0x8]           ; 004b3b0b
    FMUL float ptr [0x005fff94]         ; 004b3b0e | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3b14
    LEA EAX,[ESP + 0x4c]                ; 004b3b17
    PUSH EAX                            ; 004b3b1b
    PUSH EDX                            ; 004b3b1c
    CALL engine_special.cpp_FUN_0058043c ; 004b3b1d
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004b3b22 | DAT_00612560
    LEA EBX,[ESP + 0x84]                ; 004b3b27
    ADD ESP,0x8                         ; 004b3b2e
    MOV EDX,dword ptr [EAX]             ; 004b3b31 | DAT_01bc120c
    MOV EAX,ESI                         ; 004b3b33
    FLD float ptr [EAX]                 ; 004b3b35
    FMUL float ptr [0x005fff94]         ; 004b3b37 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3b3d
    FLD float ptr [EAX + 0x4]           ; 004b3b3f
    FMUL float ptr [0x005fff94]         ; 004b3b42 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3b48
    FLD float ptr [EAX + 0x8]           ; 004b3b4b
    FMUL float ptr [0x005fff94]         ; 004b3b4e | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3b54
    LEA EAX,[ESP + 0x7c]                ; 004b3b57
    PUSH EAX                            ; 004b3b5b
    ADD EDX,0x30                        ; 004b3b5c
    PUSH EDX                            ; 004b3b5f
    CALL engine_special.cpp_FUN_0058043c ; 004b3b60
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004b3b65 | DAT_00612560
    LEA EBX,[ESP + 0x3c]                ; 004b3b6a
    ADD ESP,0x8                         ; 004b3b6e
    MOV EDX,dword ptr [EAX]             ; 004b3b71 | DAT_01bc120c
    MOV EAX,EDI                         ; 004b3b73
    FLD float ptr [EAX]                 ; 004b3b75
    FMUL float ptr [0x005fff94]         ; 004b3b77 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3b7d
    FLD float ptr [EAX + 0x4]           ; 004b3b7f
    FMUL float ptr [0x005fff94]         ; 004b3b82 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3b88
    FLD float ptr [EAX + 0x8]           ; 004b3b8b
    FMUL float ptr [0x005fff94]         ; 004b3b8e | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3b94
    LEA EAX,[ESP + 0x34]                ; 004b3b97
    PUSH EAX                            ; 004b3b9b
    ADD EDX,0x60                        ; 004b3b9c
    PUSH EDX                            ; 004b3b9f
    CALL engine_special.cpp_FUN_0058043c ; 004b3ba0
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    MOV EAX,[0x00612560]                ; 004b3ba5 | DAT_00612560
    MOV EAX,dword ptr [EAX]             ; 004b3baa | DAT_01bc120c
    ADD ESP,0x8                         ; 004b3bac
    LEA EDX,[EAX + 0x90]                ; 004b3baf
    LEA EBX,[ESP + 0x70]                ; 004b3bb5
    MOV EAX,EDI                         ; 004b3bb9
    FLD float ptr [EAX]                 ; 004b3bbb
    FMUL float ptr [0x005fff94]         ; 004b3bbd | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b3bc3
    FLD float ptr [EAX + 0x4]           ; 004b3bc5
    FMUL float ptr [0x005fff94]         ; 004b3bc8 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b3bce
    FLD float ptr [EAX + 0x8]           ; 004b3bd1
    FMUL float ptr [0x005fff94]         ; 004b3bd4 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b3bda
    LEA EAX,[ESP + 0x70]                ; 004b3bdd
    PUSH EAX                            ; 004b3be1
    PUSH EDX                            ; 004b3be2
    CALL engine_special.cpp_FUN_0058043c ; 004b3be3
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b3be8
    MOV ESI,dword ptr [0x00612560]      ; 004b3beb | DAT_00612560
    MOV EAX,dword ptr [ESI]             ; 004b3bf1 | DAT_01bc120c
    MOV dword ptr [EAX + 0x10],0x80000000 ; 004b3bf3
    MOV EDX,dword ptr [ESI]             ; 004b3bfa | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0xec]      ; 004b3bfc
    SUB dword ptr [EDX],EAX             ; 004b3c03
    MOV EAX,dword ptr [ESI]             ; 004b3c05 | DAT_01bc120c
    MOV dword ptr [EAX + 0x40],0x80000000 ; 004b3c07
    MOV EDX,dword ptr [ESI]             ; 004b3c0e | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0xec]      ; 004b3c10
    ADD dword ptr [EDX + 0x30],EAX      ; 004b3c17
    MOV EAX,dword ptr [ESI]             ; 004b3c1a | DAT_01bc120c
    MOV dword ptr [EAX + 0x70],0x80000000 ; 004b3c1c
    MOV EDX,dword ptr [ESI]             ; 004b3c23 | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b3c25
    ADD dword ptr [EDX + 0x60],EAX      ; 004b3c2c
    MOV EAX,dword ptr [ESI]             ; 004b3c2f | DAT_01bc120c
    MOV dword ptr [EAX + 0xa0],0x80000000 ; 004b3c31
    MOV EDX,dword ptr [ESI]             ; 004b3c3b | DAT_01bc120c
    MOV EAX,dword ptr [ESP + 0xe8]      ; 004b3c3d
    MOV ECX,dword ptr [EDX + 0x90]      ; 004b3c44
    SUB ECX,EAX                         ; 004b3c4a
    LEA EAX,[ESP + 0xc]                 ; 004b3c4c
    PUSH EAX                            ; 004b3c50
    PUSH ESI                            ; 004b3c51 | DAT_01bc120c
    MOV dword ptr [EDX + 0x90],ECX      ; 004b3c52
    CALL engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050 ; 004b3c58
        ;   XREF to: 00483050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderBlendedDirect_FUN_00483050(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b3c5d
    JMP 0x004b38d1                      ; 004b3c60
        ;   XREF to: 004b38d1 (UNCONDITIONAL_JUMP)  ; LAB_004b38d1


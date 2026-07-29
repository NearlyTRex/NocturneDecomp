; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CBulletTrail_render_FUN_004856c0(CBulletTrail *this_ptr)
;
; Parameters:
; CBulletTrail *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
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
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_render_FUN_0048a650 at 0048a863
;
; Referenced Globals:
;   double DOUBLE_0058115c = 5.16407569540752E-315
;   double DOUBLE_00581164 = 0.0100000000000000
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004856c0
        ;   Label: core_fire.cpp_CBulletTrail_render_FUN_004856c0
    PUSH ESI                            ; 004856c1
    PUSH EDI                            ; 004856c2
    PUSH EBP                            ; 004856c3
    MOV EBP,ESP                         ; 004856c4
    SUB ESP,0x70                        ; 004856c6
    AND ESP,0xfffffff8                  ; 004856c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004856cc
    LEA EAX,[EBX + 0xc]                 ; 004856cf
    FLD float ptr [EAX]                 ; 004856d2
    FSUB float ptr [EBX]                ; 004856d4
    FSTP float ptr [ESP + 0x20]         ; 004856d6
    FLD float ptr [EAX + 0x4]           ; 004856da
    FSUB float ptr [EBX + 0x4]          ; 004856dd
    FST float ptr [ESP + 0x24]          ; 004856e0
    FMUL float ptr [ESP + 0x24]         ; 004856e4
    FLD float ptr [ESP + 0x20]          ; 004856e8
    FMUL ST0                            ; 004856ec
    FLD float ptr [EAX + 0x8]           ; 004856ee
    FSUB float ptr [EBX + 0x8]          ; 004856f1
    FXCH                                ; 004856f4
    FADDP ST2,ST0                       ; 004856f6
    FST float ptr [ESP + 0x28]          ; 004856f8
    FMUL float ptr [ESP + 0x28]         ; 004856fc
    FADDP                               ; 00485700
    FSQRT                               ; 00485702
    MOV EAX,dword ptr [EBX + 0x18]      ; 00485704
    LEA ESI,[EAX + 0x338]               ; 00485707
    FLD float ptr [EAX + 0x344]         ; 0048570d
    FSUB float ptr [ESI]                ; 00485713
    FSTP float ptr [ESP + 0x14]         ; 00485715
    FLD float ptr [EAX + 0x348]         ; 00485719
    FSUB float ptr [ESI + 0x4]          ; 0048571f
    FSTP float ptr [ESP + 0x18]         ; 00485722
    FLD float ptr [EAX + 0x34c]         ; 00485726
    FSUB float ptr [ESI + 0x8]          ; 0048572c
    FSTP float ptr [ESP + 0x1c]         ; 0048572f
    FSUB float ptr [ESP + 0x1c]         ; 00485733
    FST float ptr [ESP + 0x4]           ; 00485737
    FLDZ                                ; 0048573b
    FCOMPP                              ; 0048573d
    FNSTSW AX                           ; 0048573f
    SAHF                                ; 00485741
    JNC 0x00485809                      ; 00485742
        ;   XREF to: 00485809 (CONDITIONAL_JUMP)  ; LAB_00485809
    FLD float ptr [EBX + 0x1c]          ; 00485748
    MOV EDX,0x2                         ; 0048574b
    FLDZ                                ; 00485750
    MOV dword ptr [ESP + 0x60],EDX      ; 00485752
    FCOMPP                              ; 00485756
    FNSTSW AX                           ; 00485758
    SAHF                                ; 0048575a
    JNC 0x0048577d                      ; 0048575b
        ;   XREF to: 0048577d (CONDITIONAL_JUMP)  ; LAB_0048577d
    FLD float ptr [ESP + 0x4]           ; 0048575d
    FDIV float ptr [EBX + 0x1c]         ; 00485761
    CALL crt_math.c_round_FUN_00563a30  ; 00485764
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x60]        ; 00485769
    MOV ECX,dword ptr [ESP + 0x60]      ; 0048576d
    CMP ECX,EDX                         ; 00485771
    JGE 0x00485810                      ; 00485773
        ;   XREF to: 00485810 (CONDITIONAL_JUMP)  ; LAB_00485810
    MOV dword ptr [ESP + 0x60],EDX      ; 00485779
    MOV EAX,dword ptr [ESP + 0x60]      ; 0048577d
        ;   Label: LAB_0048577d
    FLD1                                ; 00485781
    MOV dword ptr [ESP + 0x6c],EAX      ; 00485783
    FLD float ptr [ESP + 0x20]          ; 00485787
    FILD dword ptr [ESP + 0x6c]         ; 0048578b
    FSTP float ptr [ESP + 0x5c]         ; 0048578f
    FXCH                                ; 00485793
    FDIV float ptr [ESP + 0x5c]         ; 00485795
    FXCH                                ; 00485799
    FMUL ST1                            ; 0048579b
    FLD float ptr [ESP + 0x24]          ; 0048579d
    FMUL ST2                            ; 004857a1
    LEA EAX,[ESP + 0x20]                ; 004857a3
    FLD float ptr [ESP + 0x28]          ; 004857a7
    PUSH EAX                            ; 004857ab
    LEA EAX,[ESP + 0xc]                 ; 004857ac
    FMULP ST3                           ; 004857b0
    PUSH EAX                            ; 004857b2
    FXCH                                ; 004857b3
    FSTP float ptr [ESP + 0x34]         ; 004857b5
    FSTP float ptr [ESP + 0x38]         ; 004857b9
    FSTP float ptr [ESP + 0x3c]         ; 004857bd
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004857c1
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004857c6
    MOV EDX,dword ptr [ESP + 0x60]      ; 004857c9
    XOR ESI,ESI                         ; 004857cd
    TEST EDX,EDX                        ; 004857cf
    JLE 0x00485809                      ; 004857d1
        ;   XREF to: 00485809 (CONDITIONAL_JUMP)  ; LAB_00485809
    LEA EDI,[EDX + -0x1]                ; 004857d3
    MOV dword ptr [ESP + 0x6c],ESI      ; 004857d6
        ;   Label: LAB_004857d6
    FILD dword ptr [ESP + 0x6c]         ; 004857da
    FST float ptr [ESP + 0x68]          ; 004857de
    FMUL float ptr [0x0058115c]         ; 004857e2 | DOUBLE_0058115c
    MOV dword ptr [ESP + 0x6c],EDI      ; 004857e8
    FILD dword ptr [ESP + 0x6c]         ; 004857ec
    FDIVP                               ; 004857f0
    FST float ptr [ESP]                 ; 004857f2
    FCOMP double ptr [0x00581164]       ; 004857f5 | DOUBLE_00581164
    FNSTSW AX                           ; 004857fb
    SAHF                                ; 004857fd
    JA 0x00485826                       ; 004857fe
        ;   XREF to: 00485826 (CONDITIONAL_JUMP)  ; LAB_00485826
    MOV ECX,dword ptr [ESP + 0x60]      ; 00485800
    INC ESI                             ; 00485804
    CMP ESI,ECX                         ; 00485805
    JL 0x004857d6                       ; 00485807
        ;   XREF to: 004857d6 (CONDITIONAL_JUMP)  ; LAB_004857d6
    MOV ESP,EBP                         ; 00485809
        ;   Label: LAB_00485809
    POP EBP                             ; 0048580b
    POP EDI                             ; 0048580c
    POP ESI                             ; 0048580d
    POP EBX                             ; 0048580e
    RET                                 ; 0048580f
    CMP ECX,0x64                        ; 00485810
        ;   Label: LAB_00485810
    JLE 0x0048577d                      ; 00485813
        ;   XREF to: 0048577d (CONDITIONAL_JUMP)  ; LAB_0048577d
    MOV dword ptr [ESP + 0x60],0x64     ; 00485819
    JMP 0x0048577d                      ; 00485821
        ;   XREF to: 0048577d (UNCONDITIONAL_JUMP)  ; LAB_0048577d
    FLD float ptr [ESP + 0x68]          ; 00485826
        ;   Label: LAB_00485826
    FLD float ptr [ESP + 0x2c]          ; 0048582a
    FMUL ST1                            ; 0048582e
    FLD float ptr [ESP + 0x30]          ; 00485830
    FMUL ST2                            ; 00485834
    FLD float ptr [ESP + 0x34]          ; 00485836
    FMULP ST3                           ; 0048583a
    LEA EAX,[ESP + 0x44]                ; 0048583c
    FXCH                                ; 00485840
    FSTP float ptr [ESP + 0x50]         ; 00485842
    FSTP float ptr [ESP + 0x54]         ; 00485846
    FSTP float ptr [ESP + 0x58]         ; 0048584a
    FLD float ptr [EBX]                 ; 0048584e
    FADD float ptr [ESP + 0x50]         ; 00485850
    PUSH EAX                            ; 00485854
    FSTP float ptr [ESP + 0x48]         ; 00485855
    FLD float ptr [EBX + 0x4]           ; 00485859
    FADD float ptr [ESP + 0x58]         ; 0048585c
    MOV EAX,[0x005ae704]                ; 00485860 | DAT_005ae704
    FSTP float ptr [ESP + 0x4c]         ; 00485865
    FLD float ptr [EBX + 0x8]           ; 00485869
    FADD float ptr [ESP + 0x5c]         ; 0048586c
    PUSH EAX                            ; 00485870 | DAT_01b4d738
    FSTP float ptr [ESP + 0x54]         ; 00485871
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00485875
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0048587a
    XOR EDX,EDX                         ; 0048587d
    LEA EAX,[ESP + 0x38]                ; 0048587f
    MOV dword ptr [ESP + 0x38],EDX      ; 00485883
    PUSH EAX                            ; 00485887
    LEA EAX,[ESP + 0xc]                 ; 00485888
    MOV dword ptr [ESP + 0x40],EDX      ; 0048588c
    PUSH EAX                            ; 00485890
    MOV dword ptr [ESP + 0x48],EDX      ; 00485891
    MOV EDX,dword ptr [0x005ae704]      ; 00485895 | DAT_005ae704
    PUSH EDX                            ; 0048589b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0048589c
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 004858a1
    FLD float ptr [ESP]                 ; 004858a4
    CALL crt_math.c_round_FUN_00563a30  ; 004858a7
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x6c]        ; 004858ac
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004858b0
    PUSH ECX                            ; 004858b4
    PUSH 0x0                            ; 004858b5
    PUSH 0x0                            ; 004858b7
    MOV EAX,dword ptr [EBX + 0x18]      ; 004858b9
    PUSH EAX                            ; 004858bc
    CALL core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040 ; 004858bd
        ;   XREF to: 00453040 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00453040(CKeyFramedModel * this_ptr, int frame_index, CKeyFramedModelInstance * instance, int render_flags)
    ADD ESP,0x10                        ; 004858c2
    MOV EDX,dword ptr [0x005ae704]      ; 004858c5 | DAT_005ae704
    PUSH EDX                            ; 004858cb | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 004858cc
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 004858d1
    MOV ECX,dword ptr [ESP + 0x60]      ; 004858d4
    INC ESI                             ; 004858d8
    CMP ESI,ECX                         ; 004858d9
    JL 0x004857d6                       ; 004858db
        ;   XREF to: 004857d6 (CONDITIONAL_JUMP)  ; LAB_004857d6
    MOV ESP,EBP                         ; 004858e1
    POP EBP                             ; 004858e3
    POP EDI                             ; 004858e4
    POP ESI                             ; 004858e5
    POP EBX                             ; 004858e6
    RET                                 ; 004858e7


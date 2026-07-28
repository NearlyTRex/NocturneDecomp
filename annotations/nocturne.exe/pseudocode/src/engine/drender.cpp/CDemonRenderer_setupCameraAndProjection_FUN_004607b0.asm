; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CMatrix3x3f *    Stack[0x8]:4   transform_matrix
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[4]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00440290 at 004404c2
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470 at 0044e536
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004d6610 at 004d6645
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_00460780 at 0046079d
;
; Referenced Globals:
;   double DOUBLE_0057dc0d = 0.318309886192889
;   double DOUBLE_0057dc15 = 32768
;   double DOUBLE_0057dc1d = 65536
;   undefined4 DAT_005b7648
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c039d0
;   undefined4 DAT_01c039d4
;   undefined4 DAT_01c039d8
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   ... and 5 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0
;   crt_math.c_round_FUN_00563a30
;   engine_matrix.c_invertTransformMatrix_FUN_004ccae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004607b0
        ;   Label: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
    PUSH ESI                            ; 004607b1
    PUSH EDI                            ; 004607b2
    PUSH EBP                            ; 004607b3
    MOV EBP,ESP                         ; 004607b4
    SUB ESP,0xc                         ; 004607b6
    AND ESP,0xfffffff8                  ; 004607b9
    MOV ESI,dword ptr [EBP + 0x14]      ; 004607bc
    MOV EBX,dword ptr [EBP + 0x18]      ; 004607bf
    MOV EAX,ESP                         ; 004607c2
    PUSH EAX                            ; 004607c4
    PUSH EBX                            ; 004607c5
    CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0 ; 004607c6
        ;   XREF to: 0044dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    FLD float ptr [EBX]                 ; 004607cb
    FMUL double ptr [0x0057dc1d]        ; 004607cd | DOUBLE_0057dc1d
    FLD float ptr [EBX + 0x4]           ; 004607d3
    FMUL double ptr [0x0057dc1d]        ; 004607d6 | DOUBLE_0057dc1d
    FLD float ptr [EBX + 0x8]           ; 004607dc
    FMUL double ptr [0x0057dc1d]        ; 004607df | DOUBLE_0057dc1d
    FLD float ptr [EBX + 0xc]           ; 004607e5
    ADD ESP,0x8                         ; 004607e8
    FMUL double ptr [0x0057dc1d]        ; 004607eb | DOUBLE_0057dc1d
    FLD float ptr [ESP]                 ; 004607f1
    FMUL double ptr [0x0057dc0d]        ; 004607f4 | DOUBLE_0057dc0d
    FLD float ptr [ESP + 0x8]           ; 004607fa
    FMUL double ptr [0x0057dc0d]        ; 004607fe | DOUBLE_0057dc0d
    FLD float ptr [ESP + 0x4]           ; 00460804
    FMUL double ptr [0x0057dc0d]        ; 00460808 | DOUBLE_0057dc0d
    FXCH ST2                            ; 0046080e
    FMUL double ptr [0x0057dc15]        ; 00460810 | DOUBLE_0057dc15
    FXCH                                ; 00460816
    FMUL double ptr [0x0057dc15]        ; 00460818 | DOUBLE_0057dc15
    FXCH ST2                            ; 0046081e
    FMUL double ptr [0x0057dc15]        ; 00460820 | DOUBLE_0057dc15
    FXCH ST6                            ; 00460826
    CALL crt_math.c_round_FUN_00563a30  ; 00460828
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [0x01c039e8]        ; 0046082d | DAT_01c039e8
    FLD float ptr [EBX + 0x10]          ; 00460833
    FMUL double ptr [0x0057dc1d]        ; 00460836 | DOUBLE_0057dc1d
    FXCH ST5                            ; 0046083c
    CALL crt_math.c_round_FUN_00563a30  ; 0046083e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [0x01c039ec]        ; 00460843 | DAT_01c039ec
    FLD float ptr [EBX + 0x14]          ; 00460849
    FMUL double ptr [0x0057dc1d]        ; 0046084c | DOUBLE_0057dc1d
    FXCH ST4                            ; 00460852
    CALL crt_math.c_round_FUN_00563a30  ; 00460854
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [0x01c039f0]        ; 00460859 | DAT_01c039f0
    FLD float ptr [EBX + 0x18]          ; 0046085f
    FMUL double ptr [0x0057dc1d]        ; 00460862 | DOUBLE_0057dc1d
    FXCH ST3                            ; 00460868
    CALL crt_math.c_round_FUN_00563a30  ; 0046086a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [0x01c039f4]        ; 0046086f | DAT_01c039f4
    FLD float ptr [EBX + 0x1c]          ; 00460875
    FMUL double ptr [0x0057dc1d]        ; 00460878 | DOUBLE_0057dc1d
    FXCH ST5                            ; 0046087e
    CALL crt_math.c_round_FUN_00563a30  ; 00460880
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [0x01c039f8]        ; 00460885 | DAT_01c039f8
    FLD float ptr [EBX + 0x20]          ; 0046088b
    FMUL double ptr [0x0057dc1d]        ; 0046088e | DOUBLE_0057dc1d
    MOV EDX,0x10000                     ; 00460894
    MOV EBX,dword ptr [0x005b7648]      ; 00460899 | DAT_005b7648
    MOV EAX,EDX                         ; 0046089f
    FXCH ST4                            ; 004608a1
    CALL crt_math.c_round_FUN_00563a30  ; 004608a3
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST3                            ; 004608a8
    CALL crt_math.c_round_FUN_00563a30  ; 004608aa
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST5                            ; 004608af
    CALL crt_math.c_round_FUN_00563a30  ; 004608b1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST4                            ; 004608b6
    CALL crt_math.c_round_FUN_00563a30  ; 004608b8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST3                            ; 004608bd
    FISTP dword ptr [0x01c039fc]        ; 004608bf | DAT_01c039fc
    FXCH ST4                            ; 004608c5
    FISTP dword ptr [0x01c03a00]        ; 004608c7 | DAT_01c03a00
    FXCH ST2                            ; 004608cd
    FISTP dword ptr [0x01c03a04]        ; 004608cf | DAT_01c03a04
    FISTP dword ptr [0x01c03a08]        ; 004608d5 | DAT_01c03a08
    FXCH                                ; 004608db
    CALL crt_math.c_round_FUN_00563a30  ; 004608dd
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004608e2
    CALL crt_math.c_round_FUN_00563a30  ; 004608e4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH ST2                            ; 004608e9
    CALL crt_math.c_round_FUN_00563a30  ; 004608eb
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FXCH                                ; 004608f0
    FISTP dword ptr [0x01c039d0]        ; 004608f2 | DAT_01c039d0
    FXCH                                ; 004608f8
    FISTP dword ptr [0x01c039d4]        ; 004608fa | DAT_01c039d4
    FISTP dword ptr [0x01c039d8]        ; 00460900 | DAT_01c039d8
    IMUL EDX                            ; 00460906
    IDIV EBX                            ; 00460908
    MOV EDX,dword ptr [0x01c00c60]      ; 0046090a | DAT_01c00c60
    MOV ECX,dword ptr [0x01c00c58]      ; 00460910 | DAT_01c00c58
    MOV EBX,dword ptr [0x01c00c64]      ; 00460916 | DAT_01c00c64
    MOV EDI,dword ptr [0x01c00c5c]      ; 0046091c | DAT_01c00c5c
    SUB EDX,ECX                         ; 00460922
    MOV dword ptr [ESI + 0x24],EAX      ; 00460924
    INC EDX                             ; 00460927
    SUB EBX,EDI                         ; 00460928
    SHL EDX,0x10                        ; 0046092a
    INC EBX                             ; 0046092d
    MOV EAX,EDX                         ; 0046092e
    SAR EDX,0x1f                        ; 00460930
    IDIV EBX                            ; 00460933
    MOV EDX,0x10000                     ; 00460935
    MOV EBX,dword ptr [0x005b7648]      ; 0046093a | DAT_005b7648
    MOV dword ptr [ESI + 0x28],EAX      ; 00460940
    IMUL EDX                            ; 00460943
    IDIV EBX                            ; 00460945
    MOV dword ptr [ESI + 0x28],EAX      ; 00460947
    MOV EDX,dword ptr [0x01c039e8]      ; 0046094a | DAT_01c039e8
    MOV EAX,dword ptr [ESI + 0x24]      ; 00460950
    IMUL EDX                            ; 00460953
    SHRD EAX,EDX,0x10                   ; 00460955
    MOV [0x01c039e8],EAX                ; 00460959 | DAT_01c039e8
    MOV EDX,dword ptr [0x01c039f4]      ; 0046095e | DAT_01c039f4
    MOV EAX,dword ptr [ESI + 0x24]      ; 00460964
    IMUL EDX                            ; 00460967
    SHRD EAX,EDX,0x10                   ; 00460969
    MOV EDX,dword ptr [0x01c03a00]      ; 0046096d | DAT_01c03a00
    MOV [0x01c039f4],EAX                ; 00460973 | DAT_01c039f4
    MOV EAX,dword ptr [ESI + 0x24]      ; 00460978
    IMUL EDX                            ; 0046097b
    SHRD EAX,EDX,0x10                   ; 0046097d
    MOV EDX,dword ptr [0x01c039ec]      ; 00460981 | DAT_01c039ec
    MOV [0x01c03a00],EAX                ; 00460987 | DAT_01c03a00
    MOV EAX,dword ptr [ESI + 0x28]      ; 0046098c
    IMUL EDX                            ; 0046098f
    SHRD EAX,EDX,0x10                   ; 00460991
    MOV EDX,dword ptr [0x01c039f8]      ; 00460995 | DAT_01c039f8
    MOV [0x01c039ec],EAX                ; 0046099b | DAT_01c039ec
    MOV EAX,dword ptr [ESI + 0x28]      ; 004609a0
    IMUL EDX                            ; 004609a3
    SHRD EAX,EDX,0x10                   ; 004609a5
    MOV EDX,dword ptr [0x01c03a04]      ; 004609a9 | DAT_01c03a04
    MOV [0x01c039f8],EAX                ; 004609af | DAT_01c039f8
    MOV EAX,dword ptr [ESI + 0x28]      ; 004609b4
    IMUL EDX                            ; 004609b7
    SHRD EAX,EDX,0x10                   ; 004609b9
    MOV [0x01c03a04],EAX                ; 004609bd | DAT_01c03a04
    CALL engine_matrix.c_invertTransformMatrix_FUN_004ccae0 ; 004609c2
        ;   XREF to: 004ccae0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_004ccae0()
    MOV ESP,EBP                         ; 004609c7
    POP EBP                             ; 004609c9
    POP EDI                             ; 004609ca
    POP ESI                             ; 004609cb
    POP EBX                             ; 004609cc
    RET                                 ; 004609cd


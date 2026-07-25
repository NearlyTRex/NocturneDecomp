; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_xform_cpp_slerpQuaternion_FUN_0055d2d0(float *param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[15]:
;   FUN_00418a00 at 00418bb6
;   FUN_00497900 at 00497bba
;   FUN_004fd1d0 at 004fd349
;   FUN_0051f3f0 at 0051f4f6
;   FUN_0053a260 at 0053a431
;   core_charactr.cpp_FUN_00429e60 at 00429f09
;   core_course.cpp_CCourse_interpolate_FUN_0043b890 at 0043b9d5
;   core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0 at 004f60d4
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0 at 0051d082
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 at 0051c4fa
;   ... and 5 more
;
; Referenced Globals:
;   double DOUBLE_0059836e = 0.999990000000000
;
; Called Functions:
;   crt_math.c_atan2_FUN_00566c81
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d2d0
        ;   Label: core_xform.cpp_slerpQuaternion_FUN_0055d2d0
    PUSH EDI                            ; 0055d2d1
    PUSH EBP                            ; 0055d2d2
    MOV EBP,ESP                         ; 0055d2d3
    SUB ESP,0x70                        ; 0055d2d5
    AND ESP,0xfffffff8                  ; 0055d2d8
    MOV EDX,dword ptr [EBP + 0x10]      ; 0055d2db
    MOV ECX,ESI                         ; 0055d2de
    MOV ESI,dword ptr [EBP + 0x14]      ; 0055d2e0
    FLD float ptr [EBP + 0x18]          ; 0055d2e3
    FLDZ                                ; 0055d2e6
    FXCH                                ; 0055d2e8
    FSTP double ptr [ESP + 0x18]        ; 0055d2ea
    FCOMP double ptr [ESP + 0x18]       ; 0055d2ee
    FNSTSW AX                           ; 0055d2f2
    SAHF                                ; 0055d2f4
    JNC 0x0055d402                      ; 0055d2f5
        ;   XREF to: 0055d402 (CONDITIONAL_JUMP)  ; LAB_0055d402
    FLD1                                ; 0055d2fb
    FCOMP double ptr [ESP + 0x18]       ; 0055d2fd
    FNSTSW AX                           ; 0055d301
    SAHF                                ; 0055d303
    JBE 0x0055d40a                      ; 0055d304
        ;   XREF to: 0055d40a (CONDITIONAL_JUMP)  ; LAB_0055d40a
    FLD float ptr [EDX + 0x4]           ; 0055d30a
    FMUL float ptr [ESI + 0x4]          ; 0055d30d
    FLD float ptr [EDX + 0x8]           ; 0055d310
    FMUL float ptr [ESI + 0x8]          ; 0055d313
    FADDP                               ; 0055d316
    MOV EAX,dword ptr [ESI]             ; 0055d318
    FLD float ptr [EDX + 0xc]           ; 0055d31a
    FMUL float ptr [ESI + 0xc]          ; 0055d31d
    MOV dword ptr [ESP + 0x24],EAX      ; 0055d320
    FADDP                               ; 0055d324
    MOV EAX,dword ptr [ESI + 0x4]       ; 0055d326
    FLD float ptr [EDX]                 ; 0055d329
    FMUL float ptr [ESI]                ; 0055d32b
    MOV dword ptr [ESP + 0x28],EAX      ; 0055d32d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0055d331
    FLDZ                                ; 0055d334
    MOV dword ptr [ESP + 0x20],EAX      ; 0055d336
    MOV EAX,dword ptr [ESI + 0xc]       ; 0055d33a
    FXCH                                ; 0055d33d
    FADDP ST2,ST0                       ; 0055d33f
    MOV dword ptr [ESP + 0x2c],EAX      ; 0055d341
    FXCH                                ; 0055d345
    FSTP double ptr [ESP]               ; 0055d347
    FCOMP double ptr [ESP]              ; 0055d34a
    FNSTSW AX                           ; 0055d34d
    SAHF                                ; 0055d34f
    JA 0x0055d410                       ; 0055d350
        ;   XREF to: 0055d410 (CONDITIONAL_JUMP)  ; LAB_0055d410
    FLD double ptr [ESP]                ; 0055d356
        ;   Label: LAB_0055d356
    FCOMP double ptr [0x0059836e]       ; 0055d359 | DOUBLE_0059836e
    FNSTSW AX                           ; 0055d35f
    SAHF                                ; 0055d361
    JBE 0x0055d44b                      ; 0055d362
        ;   XREF to: 0055d44b (CONDITIONAL_JUMP)  ; LAB_0055d44b
    FLD float ptr [EBP + 0x18]          ; 0055d368
    FLD1                                ; 0055d36b
    FXCH                                ; 0055d36d
    FSTP double ptr [ESP + 0x68]        ; 0055d36f
    MOV EAX,dword ptr [ESP + 0x68]      ; 0055d373
    FSUB double ptr [ESP + 0x68]        ; 0055d377
    MOV dword ptr [ESP + 0x8],EAX       ; 0055d37b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0055d37f
    FSTP double ptr [ESP + 0x10]        ; 0055d383
    MOV dword ptr [ESP + 0xc],EAX       ; 0055d387
    FLD double ptr [ESP + 0x10]         ; 0055d38b
        ;   Label: LAB_0055d38b
    FLD float ptr [EDX + 0x4]           ; 0055d38f
    FMUL ST1                            ; 0055d392
    FLD float ptr [EDX + 0x8]           ; 0055d394
    FMUL ST2                            ; 0055d397
    FLD float ptr [EDX + 0xc]           ; 0055d399
    FMUL ST3                            ; 0055d39c
    FLD float ptr [EDX]                 ; 0055d39e
    FMULP ST4                           ; 0055d3a0
    FLD float ptr [ESP + 0x28]          ; 0055d3a2
    FMUL double ptr [ESP + 0x8]         ; 0055d3a6
    FLD float ptr [ESP + 0x20]          ; 0055d3aa
    FMUL double ptr [ESP + 0x8]         ; 0055d3ae
    FLD float ptr [ESP + 0x2c]          ; 0055d3b2
    FMUL double ptr [ESP + 0x8]         ; 0055d3b6
    FXCH ST2                            ; 0055d3ba
    FADDP ST5,ST0                       ; 0055d3bc
    FLD float ptr [ESP + 0x24]          ; 0055d3be
    FMUL double ptr [ESP + 0x8]         ; 0055d3c2
    LEA EDI,[ESP + 0x30]                ; 0055d3c6
    LEA ESI,[ESP + 0x40]                ; 0055d3ca
    FXCH                                ; 0055d3ce
    FADDP ST4,ST0                       ; 0055d3d0
    FXCH                                ; 0055d3d2
    FADDP ST2,ST0                       ; 0055d3d4
    FADDP ST4,ST0                       ; 0055d3d6
    FXCH                                ; 0055d3d8
    FSTP float ptr [ESP + 0x48]         ; 0055d3da
    FSTP float ptr [ESP + 0x4c]         ; 0055d3de
    FXCH                                ; 0055d3e2
    FSTP float ptr [ESP + 0x40]         ; 0055d3e4
    FSTP float ptr [ESP + 0x44]         ; 0055d3e8
    MOVSD ES:EDI,ESI                    ; 0055d3ec
        ;   Label: LAB_0055d3ec
    MOVSD ES:EDI,ESI                    ; 0055d3ed
    MOVSD ES:EDI,ESI                    ; 0055d3ee
    MOVSD ES:EDI,ESI                    ; 0055d3ef
    LEA ESI,[ESP + 0x30]                ; 0055d3f0
    MOV EDI,ECX                         ; 0055d3f4
    MOVSD ES:EDI,ESI                    ; 0055d3f6
    MOVSD ES:EDI,ESI                    ; 0055d3f7
    MOVSD ES:EDI,ESI                    ; 0055d3f8
    MOVSD ES:EDI,ESI                    ; 0055d3f9
    MOV EAX,ECX                         ; 0055d3fa
    MOV ESP,EBP                         ; 0055d3fc
    POP EBP                             ; 0055d3fe
    POP EDI                             ; 0055d3ff
    POP EBX                             ; 0055d400
    RET                                 ; 0055d401
    LEA EDI,[ESP + 0x30]                ; 0055d402
        ;   Label: LAB_0055d402
    MOV ESI,EDX                         ; 0055d406
    JMP 0x0055d3ec                      ; 0055d408
        ;   XREF to: 0055d3ec (UNCONDITIONAL_JUMP)  ; LAB_0055d3ec
    LEA EDI,[ESP + 0x30]                ; 0055d40a
        ;   Label: LAB_0055d40a
    JMP 0x0055d3ec                      ; 0055d40e
        ;   XREF to: 0055d3ec (UNCONDITIONAL_JUMP)  ; LAB_0055d3ec
    MOV AH,byte ptr [ESP + 0x27]        ; 0055d410
        ;   Label: LAB_0055d410
    MOV BL,byte ptr [ESP + 0x2b]        ; 0055d414
    XOR AH,0x80                         ; 0055d418
    XOR BL,0x80                         ; 0055d41b
    MOV byte ptr [ESP + 0x27],AH        ; 0055d41e
    MOV AL,byte ptr [ESP + 0x2f]        ; 0055d422
    MOV byte ptr [ESP + 0x2b],BL        ; 0055d426
    XOR AL,0x80                         ; 0055d42a
    MOV BH,byte ptr [ESP + 0x23]        ; 0055d42c
    MOV byte ptr [ESP + 0x2f],AL        ; 0055d430
    MOV AH,byte ptr [ESP + 0x7]         ; 0055d434
    XOR BH,0x80                         ; 0055d438
    XOR AH,0x80                         ; 0055d43b
    MOV byte ptr [ESP + 0x23],BH        ; 0055d43e
    MOV byte ptr [ESP + 0x7],AH         ; 0055d442
    JMP 0x0055d356                      ; 0055d446
        ;   XREF to: 0055d356 (UNCONDITIONAL_JUMP)  ; LAB_0055d356
    FLD double ptr [ESP]                ; 0055d44b
        ;   Label: LAB_0055d44b
    FLD ST0                             ; 0055d44e
    FMUL ST1                            ; 0055d450
    FLD1                                ; 0055d452
    FSUBRP                              ; 0055d454
    FSQRT                               ; 0055d456
    FLD ST0                             ; 0055d458
    FLD ST2                             ; 0055d45a
    FXCH                                ; 0055d45c
    CALL crt_math.c_atan2_FUN_00566c81  ; 0055d45e
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_00566c81()
    FSTP ST2                            ; 0055d463
    FLD float ptr [EBP + 0x18]          ; 0055d465
    FLD1                                ; 0055d468
    FSUB ST0,ST1                        ; 0055d46a
    FMUL ST3                            ; 0055d46c
    FSIN                                ; 0055d46e
    FXCH                                ; 0055d470
    FMULP ST3                           ; 0055d472
    FXCH ST2                            ; 0055d474
    FSIN                                ; 0055d476
    FLD1                                ; 0055d478
    FDIVRP ST2,ST0                      ; 0055d47a
    FXCH ST2                            ; 0055d47c
    FMUL ST1                            ; 0055d47e
    FXCH ST2                            ; 0055d480
    FMULP                               ; 0055d482
    FXCH                                ; 0055d484
    FSTP double ptr [ESP + 0x10]        ; 0055d486
    FSTP double ptr [ESP + 0x8]         ; 0055d48a
    JMP 0x0055d38b                      ; 0055d48e
        ;   XREF to: 0055d38b (UNCONDITIONAL_JUMP)  ; LAB_0055d38b


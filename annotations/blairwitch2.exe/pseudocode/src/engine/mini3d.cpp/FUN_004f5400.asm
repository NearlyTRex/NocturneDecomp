; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f5400(undefined4 *param_1,CVector3f *param_2,float param_3,float param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)
;
;
; Referenced Globals:
;   undefined4 DAT_005dde44
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d0c3a0
;   undefined4 DAT_0264bcd4
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   engine_mini3d.cpp_FUN_004f2950
;   engine_mini3d.cpp_FUN_004f3740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5400
        ;   Label: engine_mini3d.cpp_FUN_004f5400
    PUSH ESI                            ; 004f5401
    PUSH EDI                            ; 004f5402
    SUB ESP,0x1c                        ; 004f5403
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004f5406
    MOV EDX,dword ptr [0x01d0c3a0]      ; 004f540a | DAT_01d0c3a0
    CMP EDX,0x32                        ; 004f5410
    JGE 0x004f54e7                      ; 004f5413
        ;   XREF to: 004f54e7 (CONDITIONAL_JUMP)  ; LAB_004f54e7
    LEA EAX,[EDX*0x4 + 0x0]             ; 004f5419
    ADD EAX,EDX                         ; 004f5420
    SHL EAX,0x2                         ; 004f5422
    SUB EAX,EDX                         ; 004f5425
    MOV EBX,0x1d0c3a4                   ; 004f5427
    SHL EAX,0x2                         ; 004f542c
    ADD EBX,EAX                         ; 004f542f
    MOV EAX,EDX                         ; 004f5431
    INC EAX                             ; 004f5433
    MOV DL,0x1                          ; 004f5434
    MOV [0x01d0c3a0],EAX                ; 004f5436 | DAT_01d0c3a0
    MOV byte ptr [EAX + 0x1d0d27f],DL   ; 004f543b
    CMP EBX,ESI                         ; 004f5441
    JZ 0x004f5455                       ; 004f5443
        ;   XREF to: 004f5455 (CONDITIONAL_JUMP)  ; LAB_004f5455
    MOV EAX,dword ptr [ESI]             ; 004f5445
    MOV dword ptr [EBX],EAX             ; 004f5447
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f5449
    MOV dword ptr [EBX + 0x4],EAX       ; 004f544c
    MOV EAX,dword ptr [ESI + 0x8]       ; 004f544f
    MOV dword ptr [EBX + 0x8],EAX       ; 004f5452
    MOV ECX,dword ptr [ESP + 0x30]      ; 004f5455
        ;   Label: LAB_004f5455
    PUSH ECX                            ; 004f5459
    LEA EAX,[EBX + 0xc]                 ; 004f545a
    PUSH EAX                            ; 004f545d
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 004f545e
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004f5463
    FLD1                                ; 004f5466
    FDIV float ptr [ESP + 0x34]         ; 004f5468
    FLD float ptr [EBX + 0xc]           ; 004f546c
    FMUL float ptr [ESP + 0x38]         ; 004f546f
    FLD float ptr [EBX + 0x18]          ; 004f5473
    FMUL float ptr [ESP + 0x38]         ; 004f5476
    FLD float ptr [EBX + 0x24]          ; 004f547a
    FMUL float ptr [ESP + 0x38]         ; 004f547d
    FLD float ptr [EBX + 0x10]          ; 004f5481
    FMUL float ptr [ESP + 0x38]         ; 004f5484
    FLD float ptr [EBX + 0x1c]          ; 004f5488
    FMUL float ptr [ESP + 0x38]         ; 004f548b
    FLD float ptr [EBX + 0x28]          ; 004f548f
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f5492
    FMUL float ptr [ESP + 0x38]         ; 004f5496
    MOV dword ptr [EBX + 0x34],EAX      ; 004f549a
    MOV EAX,dword ptr [ESP + 0x38]      ; 004f549d
    MOV dword ptr [EBX + 0x3c],EAX      ; 004f54a1
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f54a4
    MOV dword ptr [EBX + 0x40],EAX      ; 004f54a8
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f54ab
    MOV dword ptr [EBX + 0x44],EAX      ; 004f54af
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f54b2
    MOV dword ptr [EBX + 0x48],EAX      ; 004f54b6
    MOV EDI,dword ptr [0x0264bcd4]      ; 004f54b9 | DAT_0264bcd4
    FXCH ST5                            ; 004f54bf
    FSTP float ptr [EBX + 0xc]          ; 004f54c1
    FXCH ST3                            ; 004f54c4
    FSTP float ptr [EBX + 0x18]         ; 004f54c6
    FXCH                                ; 004f54c9
    FSTP float ptr [EBX + 0x24]         ; 004f54cb
    FSTP float ptr [EBX + 0x10]         ; 004f54ce
    FSTP float ptr [EBX + 0x1c]         ; 004f54d1
    FSTP float ptr [EBX + 0x28]         ; 004f54d4
    FSTP float ptr [EBX + 0x38]         ; 004f54d7
    TEST EDI,EDI                        ; 004f54da
    JZ 0x004f54e7                       ; 004f54dc
        ;   XREF to: 004f54e7 (CONDITIONAL_JUMP)  ; LAB_004f54e7
    CMP dword ptr [0x01c37788],0x0      ; 004f54de | DAT_01c37788
    JNZ 0x004f54ee                      ; 004f54e5
        ;   XREF to: 004f54ee (CONDITIONAL_JUMP)  ; LAB_004f54ee
    ADD ESP,0x1c                        ; 004f54e7
        ;   Label: LAB_004f54e7
    POP EDI                             ; 004f54ea
    POP ESI                             ; 004f54eb
    POP EBX                             ; 004f54ec
    RET                                 ; 004f54ed
    PUSH 0x265370c                      ; 004f54ee
        ;   Label: LAB_004f54ee
    CALL engine_mini3d.cpp_FUN_004f2950 ; 004f54f3
        ;   XREF to: 004f2950 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f2950()
    ADD ESP,0x4                         ; 004f54f8
    CALL engine_mini3d.cpp_FUN_004f3740 ; 004f54fb
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3740()
    FLD1                                ; 004f5500
    FDIV float ptr [ESP + 0x38]         ; 004f5502
    MOV EAX,dword ptr [EBX + 0x14]      ; 004f5506
    MOV dword ptr [ESP],EAX             ; 004f5509
    MOV EAX,dword ptr [EBX + 0x20]      ; 004f550c
    MOV dword ptr [ESP + 0x4],EAX       ; 004f550f
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004f5513
    MOV dword ptr [ESP + 0x8],EAX       ; 004f5516
    MOV EAX,dword ptr [ESI]             ; 004f551a
    MOV dword ptr [ESP + 0xc],EAX       ; 004f551c
    MOV EAX,dword ptr [ESI + 0x4]       ; 004f5520
    MOV dword ptr [ESP + 0x10],EAX      ; 004f5523
    MOV EAX,dword ptr [ESI + 0x8]       ; 004f5527
    MOV dword ptr [ESP + 0x14],EAX      ; 004f552a
    FLD1                                ; 004f552e
    FPATAN                              ; 004f5530
    FMUL double ptr [0x005dde44]        ; 004f5532 | DAT_005dde44
    PUSH dword ptr [EBX + 0x48]         ; 004f5538
    PUSH dword ptr [EBX + 0x44]         ; 004f553b
    PUSH dword ptr [EBX + 0x40]         ; 004f553e
    FSTP float ptr [ESP + 0x24]         ; 004f5541
    PUSH dword ptr [ESP + 0x24]         ; 004f5545
    LEA EAX,[ESP + 0x10]                ; 004f5549
    PUSH dword ptr [ESP + 0x44]         ; 004f554d
    PUSH EAX                            ; 004f5551
    LEA EAX,[ESP + 0x24]                ; 004f5552
    PUSH EAX                            ; 004f5556
    CALL dword ptr [0x0264bcd4]         ; 004f5557 | DAT_0264bcd4
    ADD ESP,0x1c                        ; 004f555d
    ADD ESP,0x1c                        ; 004f5560
    POP EDI                             ; 004f5563
    POP ESI                             ; 004f5564
    POP EBX                             ; 004f5565
    RET                                 ; 004f5566


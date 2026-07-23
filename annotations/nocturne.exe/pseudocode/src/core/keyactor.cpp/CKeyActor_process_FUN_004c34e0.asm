; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_keyactor_cpp_CKeyActor_process_FUN_004c34e0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   double DOUBLE_0058758c = 3.14159265350000
;   double DOUBLE_00587594 = 8192
;   double DOUBLE_0058759c = 16384
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c34e0
        ;   Label: core_keyactor.cpp_CKeyActor_process_FUN_004c34e0
    PUSH ESI                            ; 004c34e1
    SUB ESP,0xc                         ; 004c34e2
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c34e5
    FLD float ptr [ESP + 0x1c]          ; 004c34e9
    LEA EAX,[ESI + 0x20]                ; 004c34ed
    FMUL double ptr [0x0058758c]        ; 004c34f0 | DOUBLE_0058758c
    PUSH EAX                            ; 004c34f6
    LEA EBX,[ESI + 0x2d4]               ; 004c34f7
    FLD float ptr [ESI + 0x2d0]         ; 004c34fd
    FXCH                                ; 004c3503
    FADD ST0,ST1                        ; 004c3505
    PUSH EBX                            ; 004c3507
    FSTP ST1                            ; 004c3508
    FSTP float ptr [ESI + 0x2d0]        ; 004c350a
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90 ; 004c3510
        ;   XREF to: 0044cd90 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90()
    FLD float ptr [ESI + 0x2d0]         ; 004c3515
    FSIN                                ; 004c351b
    FMUL double ptr [0x00587594]        ; 004c351d | DOUBLE_00587594
    FADD double ptr [0x0058759c]        ; 004c3523 | DOUBLE_0058759c
    ADD ESP,0x8                         ; 004c3529
    CALL crt_math.c_round_FUN_00563a30  ; 004c352c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 004c3531
    MOV EAX,dword ptr [ESP + 0x8]       ; 004c3535
    MOV EDX,EAX                         ; 004c3539
    SAR EDX,0x1f                        ; 004c353b
    MOV dword ptr [EBX + 0x3c],EAX      ; 004c353e
    SHL EDX,0x8                         ; 004c3541
    SBB EAX,EDX                         ; 004c3544
    SAR EAX,0x8                         ; 004c3546
    MOV EDX,EAX                         ; 004c3549
    SAR EDX,0x1f                        ; 004c354b
    SHL EDX,0x2                         ; 004c354e
    SBB EAX,EDX                         ; 004c3551
    SAR EAX,0x2                         ; 004c3553
    PUSH 0x3f800000                     ; 004c3556
    PUSH EBX                            ; 004c355b
    MOV byte ptr [EBX + 0x1c],AL        ; 004c355c
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0 ; 004c355f
        ;   XREF to: 0044cde0 (UNCONDITIONAL_CALL)  ; undefined core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0()
    ADD ESP,0x8                         ; 004c3564
    PUSH EBX                            ; 004c3567
    MOV EDX,dword ptr [0x005be368]      ; 004c3568 | DAT_005be368
    PUSH EDX                            ; 004c356e | DAT_01e57284
    MOV dword ptr [EBX + 0x20],0x0      ; 004c356f
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0 ; 004c3576
        ;   XREF to: 0050a9f0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0()
    ADD ESP,0x8                         ; 004c357b
    ADD ESP,0xc                         ; 004c357e
    POP ESI                             ; 004c3581
    POP EBX                             ; 004c3582
    RET                                 ; 004c3583


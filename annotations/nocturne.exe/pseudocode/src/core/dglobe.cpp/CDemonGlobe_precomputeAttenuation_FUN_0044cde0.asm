; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[7]:
;   FUN_0041f3d0 at 0041f4dd
;   FUN_00478790 at 00478902
;   core_fire.cpp_CFireball_process_FUN_00484050 at 004840ea
;   core_fire.cpp_CMuzzleFlash_init_FUN_00484e10 at 00484e3c
;   core_flame.cpp_CFlame_updateGlobe_FUN_0048e230 at 0048e2fa
;   core_keyactor.cpp_CKeyActor_process_FUN_004c34e0 at 004c355f
;   core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0 at 00554525
;
; Referenced Globals:
;   double DOUBLE_0057c379 = 5.59510608945921E-315
;   double DOUBLE_0057c381 = 65536
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0044cde0
        ;   Label: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044cde3
    FLD float ptr [ESP + 0x10]          ; 0044cde7
    FMUL ST0                            ; 0044cdeb
    FLD float ptr [ESP + 0x10]          ; 0044cded
    FMUL float ptr [0x0057c379]         ; 0044cdf1 | DOUBLE_0057c379
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044cdf7
    FXCH                                ; 0044cdfb
    FMUL double ptr [0x0057c381]        ; 0044cdfd | DOUBLE_0057c381
    MOV dword ptr [EDX + 0x30],EAX      ; 0044ce03
    FXCH                                ; 0044ce06
    CALL crt_math.c_round_FUN_00563a30  ; 0044ce08
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 0044ce0d
    CALL crt_math.c_round_FUN_00563a30  ; 0044ce0f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EDX + 0x10]        ; 0044ce14
    MOV ECX,dword ptr [EDX + 0x10]      ; 0044ce17
    FISTP dword ptr [EDX + 0xc]         ; 0044ce1a
    CMP ECX,0x10000                     ; 0044ce1d
    JL 0x0044ce71                       ; 0044ce23
        ;   XREF to: 0044ce71 (CONDITIONAL_JUMP)  ; LAB_0044ce71
    FLD float ptr [ESP + 0x10]          ; 0044ce25
        ;   Label: LAB_0044ce25
    FLD ST0                             ; 0044ce29
    FLD1                                ; 0044ce2b
    FDIVRP                              ; 0044ce2d
    FLD ST1                             ; 0044ce2f
    FMULP ST2                           ; 0044ce31
    FXCH                                ; 0044ce33
    FST float ptr [EDX + 0x18]          ; 0044ce35
    FLD1                                ; 0044ce38
    FDIVRP                              ; 0044ce3a
    XOR EAX,EAX                         ; 0044ce3c
    MOV AL,byte ptr [EDX + 0x1c]        ; 0044ce3e
    MOV dword ptr [ESP + 0x4],EAX       ; 0044ce41
    MOV EAX,dword ptr [EDX + 0x10]      ; 0044ce45
    FILD word ptr [ESP + 0x4]           ; 0044ce48
    SAR EAX,0x10                        ; 0044ce4c
    FMUL double ptr [0x0057c381]        ; 0044ce4f | DOUBLE_0057c381
    MOV dword ptr [ESP],EAX             ; 0044ce55
    FILD dword ptr [ESP]                ; 0044ce58
    FDIVP                               ; 0044ce5b
    FXCH ST2                            ; 0044ce5d
    FSTP float ptr [EDX + 0x34]         ; 0044ce5f
    FSTP float ptr [EDX + 0x38]         ; 0044ce62
    CALL crt_math.c_round_FUN_00563a30  ; 0044ce65
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [EDX + 0x14]        ; 0044ce6a
    ADD ESP,0x8                         ; 0044ce6d
    RET                                 ; 0044ce70
    MOV dword ptr [EDX + 0x10],0x10000  ; 0044ce71
        ;   Label: LAB_0044ce71
    JMP 0x0044ce25                      ; 0044ce78
        ;   XREF to: 0044ce25 (UNCONDITIONAL_JUMP)  ; LAB_0044ce25


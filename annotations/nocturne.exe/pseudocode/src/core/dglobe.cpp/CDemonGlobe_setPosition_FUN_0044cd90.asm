; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(int *param_1,float *param_2)
;
;
; XREF[7]:
;   core_boxactor.cpp_FUN_0041f3d0 at 0041f4a2
;   core_emitter.cpp_FUN_00478790 at 004788c5
;   core_fire.cpp_CFireball_process_FUN_00484050 at 004840b9
;   core_fire.cpp_CMuzzleFlash_init_FUN_00484e10 at 00484e23
;   core_flame.cpp_CFlame_updateGlobe_FUN_0048e230 at 0048e27c
;   core_keyactor.cpp_CKeyActor_process_FUN_004c34e0 at 004c3510
;   core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0 at 00554500
;
; Referenced Globals:
;   double DOUBLE_0057c371 = 256
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0044cd90
        ;   Label: core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0044cd90
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044cd94
    LEA EDX,[ECX + 0x24]                ; 0044cd98
    CMP EDX,EAX                         ; 0044cd9b
    JNZ 0x0044cdc9                      ; 0044cd9d
        ;   XREF to: 0044cdc9 (CONDITIONAL_JUMP)  ; LAB_0044cdc9
    FLD double ptr [0x0057c371]         ; 0044cd9f | DOUBLE_0057c371
        ;   Label: LAB_0044cd9f
    FLD float ptr [EAX]                 ; 0044cda5
    FMUL ST1                            ; 0044cda7
    CALL crt_math.c_round_FUN_00563a30  ; 0044cda9
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ECX]               ; 0044cdae
    FLD float ptr [EAX + 0x4]           ; 0044cdb0
    FMUL ST1                            ; 0044cdb3
    CALL crt_math.c_round_FUN_00563a30  ; 0044cdb5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ECX + 0x4]         ; 0044cdba
    FMUL float ptr [EAX + 0x8]          ; 0044cdbd
    CALL crt_math.c_round_FUN_00563a30  ; 0044cdc0
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ECX + 0x8]         ; 0044cdc5
    RET                                 ; 0044cdc8
    PUSH EBX                            ; 0044cdc9
        ;   Label: LAB_0044cdc9
    MOV EBX,dword ptr [EAX]             ; 0044cdca
    MOV dword ptr [EDX],EBX             ; 0044cdcc
    MOV EBX,dword ptr [EAX + 0x4]       ; 0044cdce
    MOV dword ptr [EDX + 0x4],EBX       ; 0044cdd1
    MOV EBX,dword ptr [EAX + 0x8]       ; 0044cdd4
    MOV dword ptr [EDX + 0x8],EBX       ; 0044cdd7
    POP EBX                             ; 0044cdda
    JMP 0x0044cd9f                      ; 0044cddb
        ;   XREF to: 0044cd9f (UNCONDITIONAL_JUMP)  ; LAB_0044cd9f


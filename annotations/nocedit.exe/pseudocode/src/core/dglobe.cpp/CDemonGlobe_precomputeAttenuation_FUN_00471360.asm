; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(CDemonGlobe *this_ptr,float radius)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   radius
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[6]:
;   core_boxactor.cpp_CLightActor_process_FUN_00422a50 at 00422b5d
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a81e2
;   core_fire.cpp_CFireball_process_FUN_004c0b30 at 004c0bca
;   core_fire.cpp_FUN_004c1940 at 004c196c
;   core_keyactor.cpp_CKeyActor_process_FUN_00501710 at 0050178f
;   core_weapon.cpp_CWeapon_updateLighting_FUN_005ee4a0 at 005ee605
;
; Referenced Globals:
;   float FLOAT_0061ec3a = 256
;   double DOUBLE_0061ec42 = 65536
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00471360
        ;   Label: core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
    MOV EDX,dword ptr [ESP + 0xc]       ; 00471363
    FLD float ptr [ESP + 0x10]          ; 00471367
    FMUL ST0                            ; 0047136b
    FLD float ptr [ESP + 0x10]          ; 0047136d
    FMUL float ptr [0x0061ec3a]         ; 00471371 | FLOAT_0061ec3a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00471377
    FXCH                                ; 0047137b
    FMUL double ptr [0x0061ec42]        ; 0047137d | DOUBLE_0061ec42
    MOV dword ptr [EDX + 0x30],EAX      ; 00471383
    FXCH                                ; 00471386
    CALL crt_math.c_round_FUN_005fe6b0  ; 00471388
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FXCH                                ; 0047138d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047138f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EDX + 0x10]        ; 00471394
    MOV ECX,dword ptr [EDX + 0x10]      ; 00471397
    FISTP dword ptr [EDX + 0xc]         ; 0047139a
    CMP ECX,0x10000                     ; 0047139d
    JL 0x004713f1                       ; 004713a3
        ;   XREF to: 004713f1 (CONDITIONAL_JUMP)  ; LAB_004713f1
    FLD float ptr [ESP + 0x10]          ; 004713a5
        ;   Label: LAB_004713a5
    FLD ST0                             ; 004713a9
    FLD1                                ; 004713ab
    FDIVRP                              ; 004713ad
    FLD ST1                             ; 004713af
    FMULP ST2                           ; 004713b1
    FXCH                                ; 004713b3
    FST float ptr [EDX + 0x18]          ; 004713b5
    FLD1                                ; 004713b8
    FDIVRP                              ; 004713ba
    XOR EAX,EAX                         ; 004713bc
    MOV AL,byte ptr [EDX + 0x1c]        ; 004713be
    MOV dword ptr [ESP + 0x4],EAX       ; 004713c1
    MOV EAX,dword ptr [EDX + 0x10]      ; 004713c5
    FILD word ptr [ESP + 0x4]           ; 004713c8
    SAR EAX,0x10                        ; 004713cc
    FMUL double ptr [0x0061ec42]        ; 004713cf | DOUBLE_0061ec42
    MOV dword ptr [ESP],EAX             ; 004713d5
    FILD dword ptr [ESP]                ; 004713d8
    FDIVP                               ; 004713db
    FXCH ST2                            ; 004713dd
    FSTP float ptr [EDX + 0x34]         ; 004713df
    FSTP float ptr [EDX + 0x38]         ; 004713e2
    CALL crt_math.c_round_FUN_005fe6b0  ; 004713e5
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EDX + 0x14]        ; 004713ea
    ADD ESP,0x8                         ; 004713ed
    RET                                 ; 004713f0
    MOV dword ptr [EDX + 0x10],0x10000  ; 004713f1
        ;   Label: LAB_004713f1
    JMP 0x004713a5                      ; 004713f8
        ;   XREF to: 004713a5 (UNCONDITIONAL_JUMP)  ; LAB_004713a5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310(CDemonGlobe * this_ptr, CColor3f * color)
;
; Parameters:
; CDemonGlobe *    Stack[0x4]:4   this_ptr
; CColor3f *       Stack[0x8]:4   color
;
; XREF[7]:
;   core_boxactor.cpp_FUN_00422a50 at 00422b22
;   core_emitter.cpp_FUN_004a8070 at 004a81a5
;   core_fire.cpp_CFireball_process_FUN_004c0b30 at 004c0b99
;   core_fire.cpp_FUN_004c1940 at 004c1953
;   core_flamecan.cpp_FUN_004cad90 at 004caddc
;   core_keyactor.cpp_FUN_00501710 at 00501740
;   core_weapon.cpp_CWeapon_FUN_005ee4a0 at 005ee5e0
;
; Referenced Globals:
;   double DOUBLE_0061ec32 = 256
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00471310
        ;   Label: core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
    MOV EAX,dword ptr [ESP + 0x8]       ; 00471314
    LEA EDX,[ECX + 0x24]                ; 00471318
    CMP EDX,EAX                         ; 0047131b
    JNZ 0x00471349                      ; 0047131d | LAB_00471349
        ;   XREF to: 00471349 (CONDITIONAL_JUMP)
    FLD double ptr [0x0061ec32]         ; 0047131f | double DOUBLE_0061ec32
        ;   Label: LAB_0047131f
    FLD float ptr [EAX]                 ; 00471325
    FMUL ST1                            ; 00471327
    CALL crt_math.c_round_FUN_005fe6b0  ; 00471329 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ECX]               ; 0047132e
    FLD float ptr [EAX + 0x4]           ; 00471330
    FMUL ST1                            ; 00471333
    CALL crt_math.c_round_FUN_005fe6b0  ; 00471335 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ECX + 0x4]         ; 0047133a
    FMUL float ptr [EAX + 0x8]          ; 0047133d
    CALL crt_math.c_round_FUN_005fe6b0  ; 00471340 | double crt_math.c_round_FUN_005fe6b0(double value)
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
    FISTP dword ptr [ECX + 0x8]         ; 00471345
    RET                                 ; 00471348
    PUSH EBX                            ; 00471349
        ;   Label: LAB_00471349
    MOV EBX,dword ptr [EAX]             ; 0047134a
    MOV dword ptr [EDX],EBX             ; 0047134c
    MOV EBX,dword ptr [EAX + 0x4]       ; 0047134e
    MOV dword ptr [EDX + 0x4],EBX       ; 00471351
    MOV EBX,dword ptr [EAX + 0x8]       ; 00471354
    MOV dword ptr [EDX + 0x8],EBX       ; 00471357
    POP EBX                             ; 0047135a
    JMP 0x0047131f                      ; 0047135b | LAB_0047131f
        ;   XREF to: 0047131f (UNCONDITIONAL_JUMP)


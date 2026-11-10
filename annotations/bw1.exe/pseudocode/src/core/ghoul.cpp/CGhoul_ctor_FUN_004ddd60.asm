; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGhoul * core_ghoul_cpp_CGhoul_ctor_FUN_004ddd60(CGhoul *this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ghoul.cpp_factoryFuncGhoul_FUN_004ddd30 at 004ddd43
;
; Referenced Globals:
;   undefined4 DAT_005e3a51
;   undefined4 DAT_006012d0
;   undefined4 DAT_006012d4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;   crt_math.c_round_FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ddd60
        ;   Label: core_ghoul.cpp_CGhoul_ctor_FUN_004ddd60
    SUB ESP,0x4                         ; 004ddd61
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ddd64
    PUSH EDX                            ; 004ddd68
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 004ddd69
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004ddd6e
    PUSH 0x5e3a48                       ; 004ddd71
    MOV EBX,EAX                         ; 004ddd76
    ADD EAX,0x158                       ; 004ddd78
    PUSH EAX                            ; 004ddd7d
    MOV dword ptr [EAX + -0x4],0x6012e4 ; 004ddd7e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 004ddd85
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004ddd8a
    PUSH 0x420c0000                     ; 004ddd8d
    PUSH 0x41a00000                     ; 004ddd92
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004ddd97
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 004ddd9c
    FLD float ptr [ESP + 0x8]           ; 004ddda0
    ADD ESP,0x8                         ; 004ddda4
    FMUL double ptr [0x005e3a51]        ; 004ddda7 | DAT_005e3a51
    PUSH 0x41200000                     ; 004dddad
    PUSH 0x40800000                     ; 004dddb2
    CALL crt_math.c_round_FUN_005c03a0  ; 004dddb7
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBX + 0xc26c]      ; 004dddbc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004dddc2
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBX + 0xc274],0xa0000 ; 004dddc7
    MOV dword ptr [ESP + 0x8],EAX       ; 004dddd1
    MOV dword ptr [EBX + 0xc278],0xffffffff ; 004dddd5
    FLD float ptr [ESP + 0x8]           ; 004ddddf
    FMUL double ptr [0x005e3a51]        ; 004ddde3 | DAT_005e3a51
    MOV dword ptr [EBX + 0xc27c],0x0    ; 004ddde9
    ADD ESP,0x8                         ; 004dddf3
    MOV dword ptr [EBX + 0xc288],0x2    ; 004dddf6
    PUSH 0x3                            ; 004dde00
    CALL crt_math.c_round_FUN_005c03a0  ; 004dde02
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH 0x1                            ; 004dde07
    FISTP dword ptr [EBX + 0xc270]      ; 004dde09
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004dde0f
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    MOV dword ptr [EBX + 0x2fec],0x3f400000 ; 004dde14
    MOV dword ptr [EBX + 0x2ff0],0x3fc00000 ; 004dde1e
    MOV dword ptr [EBX + 0xc2c4],0x0    ; 004dde28
    MOV dword ptr [EBX + 0xc2c8],0x0    ; 004dde32
    MOV dword ptr [EBX + 0xc2cc],0x0    ; 004dde3c
    MOV dword ptr [EBX + 0xc2d0],0x0    ; 004dde46
    MOV dword ptr [EBX + 0xc2d4],0x0    ; 004dde50
    FLD float ptr [0x006012d0]          ; 004dde5a | DAT_006012d0
    MOV dword ptr [EBX + 0x252c],0x3fc90fdb ; 004dde60
    FLD float ptr [0x006012d4]          ; 004dde6a | DAT_006012d4
    MOV dword ptr [EBX + 0xc284],EAX    ; 004dde70
    ADD ESP,0x8                         ; 004dde76
    FXCH                                ; 004dde79
    FSTP float ptr [EBX + 0x2ff4]       ; 004dde7b
    FSTP float ptr [EBX + 0x2ff8]       ; 004dde81
    MOV EAX,EBX                         ; 004dde87
    ADD ESP,0x4                         ; 004dde89
    POP EBX                             ; 004dde8c
    RET                                 ; 004dde8d


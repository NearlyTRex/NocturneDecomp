; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CGhoul * __cdecl core_ghoul_cpp_CGhoul_ctor_FUN_004e6030(CGhoul *this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_ghoul.cpp_factoryFunc_FUN_004e5ff0 at 004e600d
;
; Referenced Globals:
;   TerminatedCString s_guul_dfm_0062dafb
;   double DOUBLE_0062db0a = 65536
;   float FLOAT_0065ed30 = 50
;   float FLOAT_0065ed34 = 100
;   CEnemy_full_vtable g_CGhoulVTable
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6030
        ;   Label: core_ghoul.cpp_CGhoul_ctor_FUN_004e6030
    SUB ESP,0x4                         ; 004e6031
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e6034
    PUSH EDX                            ; 004e6038
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 004e6039
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004e603e
    PUSH 0x62dafb                       ; 004e6041 | = "guul.dfm"
    MOV EBX,EAX                         ; 004e6046
    ADD EAX,0x158                       ; 004e6048
    PUSH EAX                            ; 004e604d
    MOV dword ptr [EAX + -0x4],0x65ed44 ; 004e604e | g_CGhoulVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004e6055
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    ADD ESP,0x8                         ; 004e605a
    PUSH 0x420c0000                     ; 004e605d
    PUSH 0x41a00000                     ; 004e6062
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004e6067
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x8],EAX       ; 004e606c
    FLD float ptr [ESP + 0x8]           ; 004e6070
    ADD ESP,0x8                         ; 004e6074
    FMUL double ptr [0x0062db0a]        ; 004e6077 | DOUBLE_0062db0a
    PUSH 0x41200000                     ; 004e607d
    PUSH 0x40800000                     ; 004e6082
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e6087
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBX + 0xbec0]      ; 004e608c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004e6092
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBX + 0xbec8],0xa0000 ; 004e6097
    MOV dword ptr [ESP + 0x8],EAX       ; 004e60a1
    MOV dword ptr [EBX + 0xbecc],0xffffffff ; 004e60a5
    FLD float ptr [ESP + 0x8]           ; 004e60af
    FMUL double ptr [0x0062db0a]        ; 004e60b3 | DOUBLE_0062db0a
    MOV dword ptr [EBX + 0xbed0],0x0    ; 004e60b9
    ADD ESP,0x8                         ; 004e60c3
    MOV dword ptr [EBX + 0xbedc],0x2    ; 004e60c6
    PUSH 0x3                            ; 004e60d0
    CALL crt_math.c_round_FUN_005fe6b0  ; 004e60d2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH 0x1                            ; 004e60d7
    FISTP dword ptr [EBX + 0xbec4]      ; 004e60d9
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004e60df
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    MOV dword ptr [EBX + 0x2ddc],0x3f400000 ; 004e60e4
    MOV dword ptr [EBX + 0x2de0],0x3fc00000 ; 004e60ee
    MOV dword ptr [EBX + 0xbf18],0x0    ; 004e60f8
    MOV dword ptr [EBX + 0xbf1c],0x0    ; 004e6102
    MOV dword ptr [EBX + 0xbf20],0x0    ; 004e610c
    MOV dword ptr [EBX + 0xbf24],0x0    ; 004e6116
    FLD float ptr [0x0065ed30]          ; 004e6120 | FLOAT_0065ed30
    MOV dword ptr [EBX + 0xbf28],0x0    ; 004e6126
    FLD float ptr [0x0065ed34]          ; 004e6130 | FLOAT_0065ed34
    MOV dword ptr [EBX + 0xbed8],EAX    ; 004e6136
    ADD ESP,0x8                         ; 004e613c
    FXCH                                ; 004e613f
    FSTP float ptr [EBX + 0x2de4]       ; 004e6141
    FSTP float ptr [EBX + 0x2de8]       ; 004e6147
    MOV EAX,EBX                         ; 004e614d
    ADD ESP,0x4                         ; 004e614f
    POP EBX                             ; 004e6152
    RET                                 ; 004e6153


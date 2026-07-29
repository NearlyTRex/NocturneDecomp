; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005a2430(CSmiley *this_ptr)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_smiley.cpp_factorFunc_FUN_005a23f0 at 005a240a
;
; Referenced Globals:
;   TerminatedCString s_smiley_dfm_0064f165
;   float FLOAT_00662f6c = 50
;   float FLOAT_00662f70 = 100
;   CSmiley_full_vtable g_CSmileyVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a2430
        ;   Label: core_smiley.cpp_CSmiley_ctor_FUN_005a2430
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a2431
    PUSH EDX                            ; 005a2435
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 005a2436
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a243b
    PUSH 0x64f165                       ; 005a243e | = "smiley.dfm"
    MOV EBX,EAX                         ; 005a2443
    ADD EAX,0x158                       ; 005a2445
    PUSH EAX                            ; 005a244a
    MOV dword ptr [EAX + -0x4],0x662f84 ; 005a244b | g_CSmileyVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 005a2452
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0xbebc],0x0    ; 005a2457
    MOV dword ptr [EBX + 0xbec0],0x42c80000 ; 005a2461
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 005a246b
    MOV dword ptr [EBX + 0x2de0],0x3f666666 ; 005a2475
    MOV dword ptr [EBX + 0xbef0],0x0    ; 005a247f
    FLD float ptr [0x00662f6c]          ; 005a2489 | FLOAT_00662f6c
    MOV dword ptr [EBX + 0xbef4],0x0    ; 005a248f
    FLD float ptr [0x00662f70]          ; 005a2499 | FLOAT_00662f70
    MOV dword ptr [EBX + 0xbef8],0x0    ; 005a249f
    ADD ESP,0x8                         ; 005a24a9
    MOV dword ptr [EBX + 0xbefc],0x1    ; 005a24ac
    MOV EAX,EBX                         ; 005a24b6
    FXCH                                ; 005a24b8
    FSTP float ptr [EBX + 0x2de4]       ; 005a24ba
    FSTP float ptr [EBX + 0x2de8]       ; 005a24c0
    POP EBX                             ; 005a24c6
    RET                                 ; 005a24c7


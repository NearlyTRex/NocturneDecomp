; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004d37f0(CHotDemon *this_ptr)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_hotdemon.cpp_factoryFuncHotDemon_FUN_004d37c0 at 004d37d3
;   core_succubus.cpp_FUN_0056f6d0 at 0056f9c9
;
; Referenced Globals:
;   TerminatedCString s_hotdemon_dfm_005da4f3
;   undefined4 DAT_005f8860
;   undefined4 DAT_005f8864
;   undefined4 g_CHotDemonVTable
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d37f0
        ;   Label: core_hotdemon.cpp_CHotDemon_ctor_FUN_004d37f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004d37f1
    PUSH EDX                            ; 004d37f5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 004d37f6
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 004d37fb
    PUSH 0x5da4f3                       ; 004d37fe | = "hotdemon.dfm"
    MOV EBX,EAX                         ; 004d3803
    ADD EAX,0x2b4                       ; 004d3805
    PUSH EAX                            ; 004d380a
    MOV dword ptr [EAX + -0x4],0x5f8874 ; 004d380b | g_CHotDemonVTable
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 004d3812
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    FLD float ptr [0x005f8860]          ; 004d3817 | DAT_005f8860
    FLD float ptr [0x005f8864]          ; 004d381d | DAT_005f8864
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 004d3823
    ADD ESP,0x8                         ; 004d382d
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 004d3830
    MOV EAX,EBX                         ; 004d383a
    FXCH                                ; 004d383c
    FSTP float ptr [EBX + 0x3438]       ; 004d383e
    FSTP float ptr [EBX + 0x343c]       ; 004d3844
    POP EBX                             ; 004d384a
    RET                                 ; 004d384b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_0056be50(CSmiley *this_ptr)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_smiley.cpp_factoryFuncSmiley_FUN_0056be20 at 0056be33
;
; Referenced Globals:
;   undefined4 DAT_0060594c
;   undefined4 DAT_00605950
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a0410
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056be50
        ;   Label: core_smiley.cpp_CSmiley_ctor_FUN_0056be50
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056be51
    PUSH EDX                            ; 0056be55
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a0410 ; 0056be56
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a0410(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 0056be5b
    PUSH 0x5f2857                       ; 0056be5e
    MOV EBX,EAX                         ; 0056be63
    ADD EAX,0x158                       ; 0056be65
    PUSH EAX                            ; 0056be6a
    MOV dword ptr [EAX + -0x4],0x605964 ; 0056be6b
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 ; 0056be72
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0xc268],0x0    ; 0056be77
    MOV dword ptr [EBX + 0xc26c],0x42c80000 ; 0056be81
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 0056be8b
    MOV dword ptr [EBX + 0x2ff0],0x3f666666 ; 0056be95
    MOV dword ptr [EBX + 0xc29c],0x0    ; 0056be9f
    FLD float ptr [0x0060594c]          ; 0056bea9 | DAT_0060594c
    MOV dword ptr [EBX + 0xc2a0],0x0    ; 0056beaf
    FLD float ptr [0x00605950]          ; 0056beb9 | DAT_00605950
    MOV dword ptr [EBX + 0xc2a4],0x0    ; 0056bebf
    ADD ESP,0x8                         ; 0056bec9
    MOV dword ptr [EBX + 0xc2a8],0x1    ; 0056becc
    MOV EAX,EBX                         ; 0056bed6
    FXCH                                ; 0056bed8
    FSTP float ptr [EBX + 0x2ff4]       ; 0056beda
    FSTP float ptr [EBX + 0x2ff8]       ; 0056bee0
    POP EBX                             ; 0056bee6
    RET                                 ; 0056bee7


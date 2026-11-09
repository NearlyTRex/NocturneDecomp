; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005497d0(CSmiley *this_ptr)
;
; Parameters:
; CSmiley *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_smiley.cpp_factoryFuncSmiley_FUN_005497a0 at 005497b3
;
; Referenced Globals:
;   undefined4 DAT_005fba5c
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_00487db0
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005497d0
        ;   Label: core_smiley.cpp_CSmiley_ctor_FUN_005497d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005497d1
    PUSH EDX                            ; 005497d5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_00487db0 ; 005497d6
        ;   XREF to: 00487db0 (UNCONDITIONAL_CALL)  ; CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_00487db0(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 005497db
    PUSH 0x5e765d                       ; 005497de
    MOV EBX,EAX                         ; 005497e3
    ADD EAX,0x2b4                       ; 005497e5
    PUSH EAX                            ; 005497ea
    MOV dword ptr [EAX + -0x4],0x5fba74 ; 005497eb
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005497f2
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x10af8],0x0   ; 005497f7
    MOV dword ptr [EBX + 0x10afc],0x42c80000 ; 00549801
    MOV dword ptr [EBX + 0x3430],0x3f19999a ; 0054980b
    MOV dword ptr [EBX + 0x3434],0x3f666666 ; 00549815
    MOV dword ptr [EBX + 0x10b2c],0x0   ; 0054981f
    FLD float ptr [0x005fba5c]          ; 00549829 | DAT_005fba5c
    MOV dword ptr [EBX + 0x10b30],0x0   ; 0054982f
    FLD float ptr [0x005fba60]          ; 00549839 | DAT_005fba60
    MOV dword ptr [EBX + 0x10b34],0x0   ; 0054983f
    ADD ESP,0x8                         ; 00549849
    MOV dword ptr [EBX + 0x10b38],0x1   ; 0054984c
    MOV EAX,EBX                         ; 00549856
    FXCH                                ; 00549858
    FSTP float ptr [EBX + 0x3438]       ; 0054985a
    FSTP float ptr [EBX + 0x343c]       ; 00549860
    POP EBX                             ; 00549866
    RET                                 ; 00549867


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CImp * core_imp.cpp_FUN_004f98a0(CImp * this_ptr)
;
; Parameters:
; CImp *           Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_imp.cpp_FUN_004f9860 at 004f987a
;
; Referenced Globals:
;   TerminatedCString s_imp_dfm_0062f833
;   undefined4 DAT_006601e0
;   undefined4 PTR_FUN_006601e1+3
;   CDemonActor_vtable PTR_core_imp.cpp_FUN_006601f4
;
; Called Functions:
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f98a0
        ;   Label: core_imp.cpp_FUN_004f98a0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f98a1
    PUSH EDX                            ; 004f98a5
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 004f98a6 | CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004f98ab
    PUSH 0x62f833                       ; 004f98ae | = "imp.dfm" | s_imp_dfm_0062f833 = imp.dfm
    MOV EBX,EAX                         ; 004f98b3
    ADD EAX,0x158                       ; 004f98b5
    PUSH EAX                            ; 004f98ba
    MOV dword ptr [EAX + -0x4],0x6601f4 ; 004f98bb | CDemonActor_vtable PTR_core_imp.cpp_FUN_006601f4
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004f98c2 | void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)
    FLD float ptr [0x006601e0]          ; 004f98c7 | DAT_006601e0
    MOV dword ptr [EBX + 0x2ddc],0x3f19999a ; 004f98cd
    FLD float ptr [0x006601e4]          ; 004f98d7 | PTR_FUN_006601e1+3
    MOV dword ptr [EBX + 0x2de0],0x3f000000 ; 004f98dd
    ADD ESP,0x8                         ; 004f98e7
    MOV dword ptr [EBX + 0x2624],0x0    ; 004f98ea
    MOV EAX,EBX                         ; 004f98f4
    FXCH                                ; 004f98f6
    FSTP float ptr [EBX + 0x2de4]       ; 004f98f8
    FSTP float ptr [EBX + 0x2de8]       ; 004f98fe
    POP EBX                             ; 004f9904
    RET                                 ; 004f9905


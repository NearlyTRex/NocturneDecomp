; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CGhoul * core_ghoul.cpp_FUN_004e6030(CGhoul * this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_ghoul.cpp_FUN_004e5ff0 at 004e600d
;
; Referenced Globals:
;   TerminatedCString s_guul_dfm_0062dafb
;   CDemonActor_vtable PTR_core_ghoul.cpp_FUN_0065ed44
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_enemy.cpp_CEnemy_ctor_FUN_004a9500
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6030
        ;   Label: core_ghoul.cpp_FUN_004e6030
    SUB ESP,0x4                         ; 004e6031
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e6034
    PUSH EDX                            ; 004e6038
    CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500 ; 004e6039 | CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
        ;   XREF to: 004a9500 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004e603e
    PUSH 0x62dafb                       ; 004e6041 | = "guul.dfm" | s_guul_dfm_0062dafb = guul.dfm
    MOV EBX,EAX                         ; 004e6046
    ADD EAX,0x158                       ; 004e6048
    PUSH EAX                            ; 004e604d
    MOV dword ptr [EAX + -0x4],0x65ed44 ; 004e604e | CDemonActor_vtable PTR_core_ghoul.cpp_FUN_0065ed44
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 ; 004e6055 | void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840(CDeformableModelInstance * this_ptr, char * model_name)
        ;   XREF to: 005a0840 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004e605a
    PUSH 0x420c0000                     ; 004e605d
    PUSH 0x41a00000                     ; 004e6062
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004e6067 | float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)


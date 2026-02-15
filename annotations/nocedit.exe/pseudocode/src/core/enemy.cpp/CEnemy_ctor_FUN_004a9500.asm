; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[27]:
;   core_armour.cpp_CArmour_ctor_FUN_004121a0 at 004121a8
;   core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0 at 004150f6
;   core_batman.cpp_CBatman_ctor_FUN_00416450 at 00416458
;   core_beast.cpp_CBeast_ctor_FUN_00418220 at 00418226
;   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 at 004185c8
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 at 0041bbcb
;   core_bride.cpp_CBride_ctor_FUN_004237a0 at 004237a6
;   core_bugs.cpp_CBugs_ctor_FUN_00424cb0 at 00424cb8
;   core_cow.cpp_CZombieCow_ctor_FUN_00444140 at 00444146
;   core_dog.cpp_CZombieDog_ctor_FUN_0047f050 at 0047f056
;   ... and 17 more
;
; Referenced Globals:
;   CDemonActor_vtable g_CEnemyVTable
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_ctor_FUN_00427e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9500
        ;   Label: core_enemy.cpp_CEnemy_ctor_FUN_004a9500
    PUSH ESI                            ; 004a9501
    PUSH EDI                            ; 004a9502
    SUB ESP,0x4                         ; 004a9503
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a9506
    PUSH EDX                            ; 004a950a
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00427e20 ; 004a950b
        ;   XREF to: 00427e20 (UNCONDITIONAL_CALL)  ; CCharacter * core_charactr.cpp_CCharacter_ctor_FUN_00427e20(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004a9510
    PUSH 0x3f8ccccd                     ; 004a9513
    MOV EBX,EAX                         ; 004a9518
    PUSH 0x3f666666                     ; 004a951a
    MOV dword ptr [EAX + 0x154],0x65d7d4 ; 004a951f | g_CEnemyVTable
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 004a9529
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_batcreat_cpp_CBatCreature_getActorType_FUN_004120f0(CBatCreature *this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatCreatureActorType_007645cc
;
; *****************************************************************************

section .text

    MOV EAX,0x7645cc                    ; 004120f0 | g_CBatCreatureActorType_007645cc
        ;   Label: core_batcreat.cpp_CBatCreature_getActorType_FUN_004120f0
    RET                                 ; 004120f5


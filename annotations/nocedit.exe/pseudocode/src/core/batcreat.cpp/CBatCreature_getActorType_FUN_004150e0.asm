; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_batcreat.cpp_CBatCreature_getActorType_FUN_004150e0(CBatCreature * this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatCreatureClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x82277c                    ; 004150e0 | g_CBatCreatureClassInfo
        ;   Label: core_batcreat.cpp_CBatCreature_getActorType_FUN_004150e0
    RET                                 ; 004150e5


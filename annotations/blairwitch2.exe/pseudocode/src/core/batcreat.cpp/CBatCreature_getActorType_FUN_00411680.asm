; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_batcreat_cpp_CBatCreature_getActorType_FUN_00411680(CBatCreature *this_ptr)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBatCreatureClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc77c                    ; 00411680 | g_CBatCreatureClassInfo
        ;   Label: core_batcreat.cpp_CBatCreature_getActorType_FUN_00411680
    RET                                 ; 00411685


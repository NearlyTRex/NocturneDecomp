; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_crossbow_cpp_CCrossbow_getActorType_FUN_00449760(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCrossbowClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7dc6dc                    ; 00449760 | g_CCrossbowClassInfo
        ;   Label: core_crossbow.cpp_CCrossbow_getActorType_FUN_00449760
    RET                                 ; 00449765


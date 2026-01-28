; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_crossbow_cpp_CCrossbow_getActorType_FUN_00448c60(CCrossbow *this_ptr)
;
; Parameters:
; CCrossbow *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CCrossbowClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x887980                    ; 00448c60 | g_CCrossbowClassInfo
        ;   Label: core_crossbow.cpp_CCrossbow_getActorType_FUN_00448c60
    RET                                 ; 00448c65


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_bodypart_cpp_CBodyPart_getActorType_FUN_00414740(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBodyPartClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7e15e4                    ; 00414740 | g_CBodyPartClassInfo
        ;   Label: core_bodypart.cpp_CBodyPart_getActorType_FUN_00414740
    RET                                 ; 00414745


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * core_bodypart_cpp_CBodyPart_getActorType_FUN_004156d0(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBodyPartClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7bc908                    ; 004156d0 | g_CBodyPartClassInfo
        ;   Label: core_bodypart.cpp_CBodyPart_getActorType_FUN_004156d0
    RET                                 ; 004156d5


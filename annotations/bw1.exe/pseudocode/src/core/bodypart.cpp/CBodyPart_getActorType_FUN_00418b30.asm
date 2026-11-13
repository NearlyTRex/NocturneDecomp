; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActorType * __cdecl core_bodypart_cpp_CBodyPart_getActorType_FUN_00418b30(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBodyPartClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x7c4fb4                    ; 00418b30 | g_CBodyPartClassInfo
        ;   Label: core_bodypart.cpp_CBodyPart_getActorType_FUN_00418b30
    RET                                 ; 00418b35


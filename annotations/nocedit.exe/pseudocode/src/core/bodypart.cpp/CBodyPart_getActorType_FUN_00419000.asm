; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_bodypart.cpp_CBodyPart_getActorType_FUN_00419000(CBodyPart * this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CBodyPartClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x822908                    ; 00419000 | g_CBodyPartClassInfo
        ;   Label: core_bodypart.cpp_CBodyPart_getActorType_FUN_00419000
    RET                                 ; 00419005


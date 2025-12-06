; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_trash.cpp_CTrash_getActorType_FUN_005deb60(CTrash * this_ptr)
;
; Parameters:
; CTrash *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CTrashClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x3f8741c                   ; 005deb60 | CDemonActorType g_CTrashClassInfo
        ;   Label: core_trash.cpp_CTrash_getActorType_FUN_005deb60
    RET                                 ; 005deb65


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_dest_cpp_CActorDestination_getActorType_FUN_0046f8f0(CActorDestination *this_ptr)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CActorDestinationClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x20a483c                   ; 0046f8f0 | g_CActorDestinationClassInfo
        ;   Label: core_dest.cpp_CActorDestination_getActorType_FUN_0046f8f0
    RET                                 ; 0046f8f5


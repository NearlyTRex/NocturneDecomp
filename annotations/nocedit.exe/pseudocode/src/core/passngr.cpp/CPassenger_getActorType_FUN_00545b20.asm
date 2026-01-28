; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * __cdecl core_passngr_cpp_CPassenger_getActorType_FUN_00545b20(CPassenger *this_ptr)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CPassengerClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2fd9020                   ; 00545b20 | g_CPassengerClassInfo
        ;   Label: core_passngr.cpp_CPassenger_getActorType_FUN_00545b20
    RET                                 ; 00545b25


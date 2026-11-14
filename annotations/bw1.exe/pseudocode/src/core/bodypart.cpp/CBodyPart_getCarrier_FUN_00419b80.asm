; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_00419b80(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00419b80
        ;   Label: core_bodypart.cpp_CBodyPart_getCarrier_FUN_00419b80
    MOV EAX,dword ptr [EAX + 0xf2c]     ; 00419b84
    RET                                 ; 00419b8a


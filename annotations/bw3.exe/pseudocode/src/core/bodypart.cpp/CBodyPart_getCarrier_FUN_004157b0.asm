; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_004157b0(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004157b0
        ;   Label: core_bodypart.cpp_CBodyPart_getCarrier_FUN_004157b0
    MOV EAX,dword ptr [EAX + 0xf2c]     ; 004157b4
    RET                                 ; 004157ba


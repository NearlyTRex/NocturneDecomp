; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_00416d30(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00416d30
        ;   Label: core_bodypart.cpp_CBodyPart_getCarrier_FUN_00416d30
    MOV EAX,dword ptr [EAX + 0xf10]     ; 00416d34
    RET                                 ; 00416d3a


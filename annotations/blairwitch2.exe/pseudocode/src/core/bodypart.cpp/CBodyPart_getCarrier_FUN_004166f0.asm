; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_bodypart_cpp_CBodyPart_getCarrier_FUN_004166f0(CBodyPart *this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004166f0
        ;   Label: core_bodypart.cpp_CBodyPart_getCarrier_FUN_004166f0
    MOV EAX,dword ptr [EAX + 0x133c]    ; 004166f4
    RET                                 ; 004166fa


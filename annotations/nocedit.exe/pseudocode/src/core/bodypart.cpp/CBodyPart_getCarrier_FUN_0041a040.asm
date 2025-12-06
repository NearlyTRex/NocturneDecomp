; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * core_bodypart.cpp_CBodyPart_getCarrier_FUN_0041a040(CBodyPart * this_ptr)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0041a040
        ;   Label: core_bodypart.cpp_CBodyPart_getCarrier_FUN_0041a040
    MOV EAX,dword ptr [EAX + 0xf28]     ; 0041a044
    RET                                 ; 0041a04a


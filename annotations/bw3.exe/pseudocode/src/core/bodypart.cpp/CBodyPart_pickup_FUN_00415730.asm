; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00415730(CBodyPart *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00415730
        ;   Label: core_bodypart.cpp_CBodyPart_pickup_FUN_00415730
    MOV EAX,dword ptr [ESP + 0x8]       ; 00415734
    MOV dword ptr [EDX + 0xf2c],EAX     ; 00415738
    RET                                 ; 0041573e


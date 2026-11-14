; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00416670(CBodyPart *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00416670
        ;   Label: core_bodypart.cpp_CBodyPart_pickup_FUN_00416670
    MOV EAX,dword ptr [ESP + 0x8]       ; 00416674
    MOV dword ptr [EDX + 0x133c],EAX    ; 00416678
    RET                                 ; 0041667e


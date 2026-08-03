; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bodypart_cpp_CBodyPart_pickup_FUN_00416cb0(CBodyPart *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBodyPart *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00416cb0
        ;   Label: core_bodypart.cpp_CBodyPart_pickup_FUN_00416cb0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00416cb4
    MOV dword ptr [EDX + 0xf10],EAX     ; 00416cb8
    RET                                 ; 00416cbe


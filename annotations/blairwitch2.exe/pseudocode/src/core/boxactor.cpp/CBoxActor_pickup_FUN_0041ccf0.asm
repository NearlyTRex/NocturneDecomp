; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_pickup_FUN_0041ccf0(CBoxActor *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041ccf0
        ;   Label: core_boxactor.cpp_CBoxActor_pickup_FUN_0041ccf0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0041ccf4
    MOV dword ptr [EDX + 0x474],EAX     ; 0041ccf8
    RET                                 ; 0041ccfe


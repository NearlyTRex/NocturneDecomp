; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_pickup_FUN_00449170(CCrate *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00449170
        ;   Label: core_crate.cpp_CCrate_pickup_FUN_00449170
    MOV EAX,dword ptr [ESP + 0x8]       ; 00449174
    MOV dword ptr [EDX + 0x2d4],EAX     ; 00449178
    RET                                 ; 0044917e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_pickup_FUN_0043c960(CCrate *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043c960
        ;   Label: core_crate.cpp_CCrate_pickup_FUN_0043c960
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043c964
    MOV dword ptr [EDX + 0x2cc],EAX     ; 0043c968
    RET                                 ; 0043c96e


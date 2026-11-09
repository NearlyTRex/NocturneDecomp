; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_pickup_FUN_00445d30(CCrate *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00445d30
        ;   Label: core_crate.cpp_CCrate_pickup_FUN_00445d30
    MOV EAX,dword ptr [ESP + 0x8]       ; 00445d34
    MOV dword ptr [EDX + 0x2d4],EAX     ; 00445d38
    RET                                 ; 00445d3e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_CCrate_pickup_FUN_00439ec0(CCrate *this_ptr,CDemonActor *carrier)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00439ec0
        ;   Label: core_crate.cpp_CCrate_pickup_FUN_00439ec0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00439ec4
    MOV dword ptr [EDX + 0x430],EAX     ; 00439ec8
    RET                                 ; 00439ece


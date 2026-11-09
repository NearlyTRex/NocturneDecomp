; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZThumb * __cdecl core_setdir_cpp_CZThumb_ctor_FUN_00538430(CZThumb *this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00538430
        ;   Label: core_setdir.cpp_CZThumb_ctor_FUN_00538430
    MOV dword ptr [EAX + 0x4],0x0       ; 00538434
    MOV dword ptr [EAX + 0x24],0x0      ; 0053843b
    MOV EDX,dword ptr [EAX + 0x4]       ; 00538442
    MOV dword ptr [EAX],EDX             ; 00538445
    RET                                 ; 00538447


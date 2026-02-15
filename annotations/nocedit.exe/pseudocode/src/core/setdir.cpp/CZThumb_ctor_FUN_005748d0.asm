; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZThumb * __cdecl core_setdir_cpp_CZThumb_ctor_FUN_005748d0(CZThumb *this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005748d0
        ;   Label: core_setdir.cpp_CZThumb_ctor_FUN_005748d0
    MOV dword ptr [EAX + 0x4],0x0       ; 005748d4
    MOV dword ptr [EAX + 0x24],0x0      ; 005748db
    MOV EDX,dword ptr [EAX + 0x4]       ; 005748e2
    MOV dword ptr [EAX],EDX             ; 005748e5
    RET                                 ; 005748e7


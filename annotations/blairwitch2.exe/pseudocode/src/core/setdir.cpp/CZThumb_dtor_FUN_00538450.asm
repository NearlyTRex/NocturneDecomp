; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CZThumb * __cdecl core_setdir_cpp_CZThumb_dtor_FUN_00538450(CZThumb *this_ptr,uint flags)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_setdir.cpp_CZThumb_free_FUN_005386a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538450
        ;   Label: core_setdir.cpp_CZThumb_dtor_FUN_00538450
    MOV EBX,dword ptr [ESP + 0x8]       ; 00538451
    PUSH EBX                            ; 00538455
    CALL core_setdir.cpp_CZThumb_free_FUN_005386a0 ; 00538456
        ;   XREF to: 005386a0 (UNCONDITIONAL_CALL)  ; void core_setdir.cpp_CZThumb_free_FUN_005386a0(CZThumb * this_ptr)
    ADD ESP,0x4                         ; 0053845b
    MOV EAX,EBX                         ; 0053845e
    POP EBX                             ; 00538460
    RET                                 ; 00538461


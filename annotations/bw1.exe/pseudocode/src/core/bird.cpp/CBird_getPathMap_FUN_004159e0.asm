; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_bird_cpp_CBird_getPathMap_FUN_004159e0(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004159e0
        ;   Label: core_bird.cpp_CBird_getPathMap_FUN_004159e0
    ADD EAX,0xc1d0                      ; 004159e4
    RET                                 ; 004159e9


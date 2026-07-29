; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dynamite_cpp_FUN_0046eda0(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processWeaponTick_FUN_00540660 at 005406a3
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046eda0
        ;   Label: core_dynamite.cpp_FUN_0046eda0
    TEST dword ptr [EAX + 0x570],0x7fffffff ; 0046eda4
    SETZ AL                             ; 0046edae
    AND EAX,0xff                        ; 0046edb1
    RET                                 ; 0046edb6


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dynamite_cpp_FUN_0047a1c0(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_FUN_0056eed0 at 0056ef13
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a1c0
        ;   Label: core_dynamite.cpp_FUN_0047a1c0
    TEST dword ptr [EAX + 0x6d4],0x7fffffff ; 0047a1c4
    SETZ AL                             ; 0047a1ce
    AND EAX,0xff                        ; 0047a1d1
    RET                                 ; 0047a1d6


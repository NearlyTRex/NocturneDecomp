; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dynamite_cpp_CDynamite_isFuseBurnedOut_FUN_004926b0(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_FUN_00476150 at 00476193
;   core_stranger.cpp_CStranger_processWeaponTick_FUN_00591b20 at 00591b63
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004926b0
        ;   Label: core_dynamite.cpp_CDynamite_isFuseBurnedOut_FUN_004926b0
    TEST dword ptr [EAX + 0x578],0x7fffffff ; 004926b4
    SETZ AL                             ; 004926be
    AND EAX,0xff                        ; 004926c1
    RET                                 ; 004926c6


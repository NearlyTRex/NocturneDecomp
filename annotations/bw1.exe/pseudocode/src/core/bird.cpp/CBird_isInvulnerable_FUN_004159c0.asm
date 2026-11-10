; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bird_cpp_CBird_isInvulnerable_FUN_004159c0(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004159c0
        ;   Label: core_bird.cpp_CBird_isInvulnerable_FUN_004159c0
    CMP dword ptr [EAX + 0x1faac],0x0   ; 004159c4
    SETZ AL                             ; 004159cb
    AND EAX,0xff                        ; 004159ce
    RET                                 ; 004159d3


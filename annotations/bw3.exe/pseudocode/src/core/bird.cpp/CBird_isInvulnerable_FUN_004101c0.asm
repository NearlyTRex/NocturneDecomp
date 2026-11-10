; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bird_cpp_CBird_isInvulnerable_FUN_004101c0(CBird *this_ptr)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004101c0
        ;   Label: core_bird.cpp_CBird_isInvulnerable_FUN_004101c0
    CMP dword ptr [EAX + 0x206a8],0x0   ; 004101c4
    SETZ AL                             ; 004101cb
    AND EAX,0xff                        ; 004101ce
    RET                                 ; 004101d3


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_00590790(int param_1)
;
;
; XREF[1]:
;   unkafter_winrun.cpp_FUN_00590680 at 0059069e
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [ESP + 0x4],0xac ; 00590790
        ;   Label: unkafter_winrun.cpp_FUN_00590790
    PUSH 0xac                           ; 00590798
    PUSH 0x0                            ; 0059079d
    ADD EAX,0x26656c4                   ; 0059079f
    PUSH EAX                            ; 005907a4
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005907a5
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005907aa
    RET                                 ; 005907ad


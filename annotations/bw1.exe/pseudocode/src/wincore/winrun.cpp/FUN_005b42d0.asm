; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_winrun_cpp_FUN_005b42d0(int param_1)
;
;
; XREF[1]:
;   wincore_winrun.cpp_FUN_005b41c0 at 005b41de
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [ESP + 0x4],0xac ; 005b42d0
        ;   Label: wincore_winrun.cpp_FUN_005b42d0
    PUSH 0xac                           ; 005b42d8
    PUSH 0x0                            ; 005b42dd
    ADD EAX,0x2c9cf14                   ; 005b42df
    PUSH EAX                            ; 005b42e4
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005b42e5
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b42ea
    RET                                 ; 005b42ed


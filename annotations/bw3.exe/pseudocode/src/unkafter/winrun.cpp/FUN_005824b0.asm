; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_005824b0(int param_1)
;
;
; XREF[1]:
;   unkafter_winrun.cpp_FUN_005823a0 at 005823be
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    IMUL EAX,dword ptr [ESP + 0x4],0xac ; 005824b0
        ;   Label: unkafter_winrun.cpp_FUN_005824b0
    PUSH 0xac                           ; 005824b8
    PUSH 0x0                            ; 005824bd
    ADD EAX,0x2d22c24                   ; 005824bf
    PUSH EAX                            ; 005824c4
    CALL crt_memory.c_memset_FUN_005a28f0 ; 005824c5
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005824ca
    RET                                 ; 005824cd


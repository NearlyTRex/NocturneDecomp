; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c274c(int param_1)
;
;
; XREF[2]:
;   unkafter_morph.cpp_FUN_005c2854 at 005c2864
;   unkafter_morph.cpp_FUN_005c2ab4 at 005c2b13
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c274c
        ;   Label: unkafter_morph.cpp_FUN_005c274c
    MOV dword ptr [EAX + 0x8],0x0       ; 005c2750
    MOV dword ptr [EAX + 0xc],0x0       ; 005c2757
    RET                                 ; 005c275e


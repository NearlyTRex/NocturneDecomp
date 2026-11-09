; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005ce000(undefined4 param_1)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cce60 at 005cce84
;
; Referenced Globals:
;   undefined1* PTR_unkafter_2d.cpp_FUN_005cdfd0_00626b78 = 005cdfd0
;
; Called Functions:
;   unkafter_2d.cpp_FUN_005cdfd0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ce000
        ;   Label: unkafter_2d.cpp_FUN_005ce000
    PUSH EDX                            ; 005ce004
    CALL dword ptr [0x00626b78]         ; 005ce005 | PTR_unkafter_2d.cpp_FUN_005cdfd0_00626b78
    ADD ESP,0x4                         ; 005ce00b
    RET                                 ; 005ce00e


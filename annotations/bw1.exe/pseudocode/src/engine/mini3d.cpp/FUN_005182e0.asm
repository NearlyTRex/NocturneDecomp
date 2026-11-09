; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_005182e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[8]:
;   engine_mini3d.cpp_FUN_00518290 at 005182a7
;   shape_edittool.cpp_FUN_00492dde at 00492df8
;   shape_edittool.cpp_FUN_004962b0 at 0049654d
;   shape_edittool.cpp_FUN_00496ee0 at 004970fc
;   shape_edittool.cpp_FUN_00497660 at 0049773d
;   shape_edittool.cpp_FUN_0049c500 at 0049c582
;   shape_edittool.cpp_FUN_0049c750 at 0049c89c
;   shape_edittool.cpp_FUN_0049d580 at 0049d853
;
; Called Functions:
;   engine_mini3d.cpp_FUN_00518010
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005182e0
        ;   Label: engine_mini3d.cpp_FUN_005182e0
    PUSH EAX                            ; 005182e4
    MOV EDX,dword ptr [ESP + 0x10]      ; 005182e5
    PUSH EDX                            ; 005182e9
    PUSH EAX                            ; 005182ea
    MOV ECX,dword ptr [ESP + 0x10]      ; 005182eb
    PUSH ECX                            ; 005182ef
    CALL engine_mini3d.cpp_FUN_00518010 ; 005182f0
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00518010()
    ADD ESP,0x10                        ; 005182f5
    RET                                 ; 005182f8


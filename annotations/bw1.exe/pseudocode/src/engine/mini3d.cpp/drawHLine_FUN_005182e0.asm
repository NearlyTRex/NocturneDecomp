; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawHLine_FUN_005182e0(int x1,int y,int x2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   x2
;
; XREF[8]:
;   engine_mini3d.cpp_drawRect_FUN_00518290 at 005182a7
;   shape_edittool.cpp_FUN_00492de0 at 00492df8
;   shape_edittool.cpp_FUN_004962b0 at 0049654d
;   shape_edittool.cpp_FUN_00496ee0 at 004970fc
;   shape_edittool.cpp_FUN_00497660 at 0049773d
;   shape_edittool.cpp_FUN_0049c500 at 0049c582
;   shape_edittool.cpp_FUN_0049c750 at 0049c89c
;   shape_edittool.cpp_FUN_0049d580 at 0049d853
;
; Called Functions:
;   engine_mini3d.cpp_fillRect_FUN_00518010
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 005182e0
        ;   Label: engine_mini3d.cpp_drawHLine_FUN_005182e0
    PUSH EAX                            ; 005182e4
    MOV EDX,dword ptr [ESP + 0x10]      ; 005182e5
    PUSH EDX                            ; 005182e9
    PUSH EAX                            ; 005182ea
    MOV ECX,dword ptr [ESP + 0x10]      ; 005182eb
    PUSH ECX                            ; 005182ef
    CALL engine_mini3d.cpp_fillRect_FUN_00518010 ; 005182f0
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_00518010(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 005182f5
    RET                                 ; 005182f8


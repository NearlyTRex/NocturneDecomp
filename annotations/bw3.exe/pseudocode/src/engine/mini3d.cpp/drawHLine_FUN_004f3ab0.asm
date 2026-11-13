; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawHLine_FUN_004f3ab0(int x1,int y,int x2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   x2
;
; XREF[8]:
;   engine_mini3d.cpp_drawRect_FUN_004f3a60 at 004f3a77
;   shape_edittool.cpp_FUN_0047b980 at 0047b998
;   shape_edittool.cpp_FUN_0047ee50 at 0047f0ed
;   shape_edittool.cpp_FUN_0047fa80 at 0047fc9c
;   shape_edittool.cpp_FUN_00480200 at 004802dd
;   shape_edittool.cpp_FUN_004850a0 at 00485122
;   shape_edittool.cpp_FUN_004852f0 at 0048543c
;   shape_edittool.cpp_FUN_00486120 at 004863f3
;
; Called Functions:
;   engine_mini3d.cpp_fillRect_FUN_004f37e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004f3ab0
        ;   Label: engine_mini3d.cpp_drawHLine_FUN_004f3ab0
    PUSH EAX                            ; 004f3ab4
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f3ab5
    PUSH EDX                            ; 004f3ab9
    PUSH EAX                            ; 004f3aba
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f3abb
    PUSH ECX                            ; 004f3abf
    CALL engine_mini3d.cpp_fillRect_FUN_004f37e0 ; 004f3ac0
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_004f37e0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004f3ac5
    RET                                 ; 004f3ac8


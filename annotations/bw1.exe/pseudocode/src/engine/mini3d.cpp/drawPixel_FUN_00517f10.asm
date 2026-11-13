; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawPixel_FUN_00517f10(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; XREF[5]:
;   shape_edittool.cpp_FUN_00492940 at 00492953
;   shape_edittool.cpp_FUN_00492970 at 004929c2
;   shape_edittool.cpp_FUN_00492a40 at 00492aa7
;   shape_edittool.cpp_FUN_00497870 at 004979df
;   shape_edittool.cpp_FUN_00498f10 at 00499007
;
; Called Functions:
;   engine_mini3d.cpp_fillRect_FUN_00518010
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00517f10
        ;   Label: engine_mini3d.cpp_drawPixel_FUN_00517f10
    MOV EDX,dword ptr [ESP + 0x8]       ; 00517f14
    PUSH EDX                            ; 00517f18
    PUSH EAX                            ; 00517f19
    PUSH EDX                            ; 00517f1a
    PUSH EAX                            ; 00517f1b
    CALL engine_mini3d.cpp_fillRect_FUN_00518010 ; 00517f1c
        ;   XREF to: 00518010 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_00518010(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00517f21
    RET                                 ; 00517f24


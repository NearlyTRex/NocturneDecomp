; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawPixel_FUN_004f36e0(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; XREF[5]:
;   shape_edittool.cpp_FUN_0047b4e0 at 0047b4f3
;   shape_edittool.cpp_FUN_0047b510 at 0047b562
;   shape_edittool.cpp_FUN_0047b5e0 at 0047b647
;   shape_edittool.cpp_FUN_00480410 at 0048057f
;   shape_edittool.cpp_FUN_00481ab0 at 00481ba7
;
; Called Functions:
;   engine_mini3d.cpp_fillRect_FUN_004f37e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f36e0
        ;   Label: engine_mini3d.cpp_drawPixel_FUN_004f36e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f36e4
    PUSH EDX                            ; 004f36e8
    PUSH EAX                            ; 004f36e9
    PUSH EDX                            ; 004f36ea
    PUSH EAX                            ; 004f36eb
    CALL engine_mini3d.cpp_fillRect_FUN_004f37e0 ; 004f36ec
        ;   XREF to: 004f37e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_004f37e0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004f36f1
    RET                                 ; 004f36f4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawHLine_FUN_004f9390(int x1,int y,int x2)
;
; Parameters:
; int              Stack[0x4]:4   x1
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   x2
;
; XREF[8]:
;   engine_mini3d.cpp_drawRect_FUN_004f9340 at 004f9357
;   shape_edittool.cpp_FUN_0047a930 at 0047a948
;   shape_edittool.cpp_FUN_0047dc40 at 0047dedd
;   shape_edittool.cpp_FUN_0047e870 at 0047ea8c
;   shape_edittool.cpp_FUN_0047eff0 at 0047f0cd
;   shape_edittool.cpp_FUN_00483ea0 at 00483f22
;   shape_edittool.cpp_FUN_004840f0 at 0048423c
;   shape_edittool.cpp_FUN_00484f20 at 004851f3
;
; Called Functions:
;   engine_mini3d.cpp_fillRect_FUN_004f90d0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004f9390
        ;   Label: engine_mini3d.cpp_drawHLine_FUN_004f9390
    PUSH EAX                            ; 004f9394
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f9395
    PUSH EDX                            ; 004f9399
    PUSH EAX                            ; 004f939a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f939b
    PUSH ECX                            ; 004f939f
    CALL engine_mini3d.cpp_fillRect_FUN_004f90d0 ; 004f93a0
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_004f90d0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004f93a5
    RET                                 ; 004f93a8


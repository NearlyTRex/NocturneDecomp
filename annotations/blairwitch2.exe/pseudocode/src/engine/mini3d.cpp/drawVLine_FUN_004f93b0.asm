; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawVLine_FUN_004f93b0(int x,int y1,int y2)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y1
; int              Stack[0xc]:4   y2
;
; XREF[6]:
;   engine_mini3d.cpp_drawRect_FUN_004f9340 at 004f936d
;   shape_edittool.cpp_FUN_0047a960 at 0047a978
;   shape_edittool.cpp_FUN_0047dc40 at 0047df00
;   shape_edittool.cpp_FUN_0047e870 at 0047eaa2
;   shape_edittool.cpp_FUN_00483ea0 at 00483f3e
;   shape_edittool.cpp_FUN_004840f0 at 004842a6
;
; Called Functions:
;   engine_mini3d.cpp_fillRect_FUN_004f90d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f93b0
        ;   Label: engine_mini3d.cpp_drawVLine_FUN_004f93b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f93b1
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f93b5
    PUSH ECX                            ; 004f93b9
    LEA EAX,[EDX + 0x1]                 ; 004f93ba
    PUSH EAX                            ; 004f93bd
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f93be
    PUSH EBX                            ; 004f93c2
    PUSH EDX                            ; 004f93c3
    CALL engine_mini3d.cpp_fillRect_FUN_004f90d0 ; 004f93c4
        ;   XREF to: 004f90d0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_fillRect_FUN_004f90d0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 004f93c9
    POP EBX                             ; 004f93cc
    RET                                 ; 004f93cd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_setCameraOrigin_FUN_004ce710(int x,int y,int z)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   z
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 at 0046074a
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0 at 004606f0
;
; Referenced Globals:
;   undefined4 DAT_01c039c4
;   undefined4 DAT_01c039c8
;   undefined4 DAT_01c039cc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ce710
        ;   Label: engine_matrix.c_setCameraOrigin_FUN_004ce710
    MOV [0x01c039c4],EAX                ; 004ce714 | DAT_01c039c4
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ce719
    MOV [0x01c039c8],EAX                ; 004ce71d | DAT_01c039c8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ce722
    MOV [0x01c039cc],EAX                ; 004ce726 | DAT_01c039cc
    RET                                 ; 004ce72b


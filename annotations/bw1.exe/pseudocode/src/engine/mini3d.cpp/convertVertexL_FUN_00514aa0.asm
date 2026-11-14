; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_convertVertexL_FUN_00514aa0(float *out,float *in)
;
; Parameters:
; float *          Stack[0x4]:4   out
; float *          Stack[0x8]:4   in
;
; XREF[1]:
;   engine_mini3d.cpp_polyList_FUN_005126d0 at 0051278c
;
; Called Functions:
;   engine_mini3d.cpp_lightVertex_FUN_00513ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514aa0
        ;   Label: engine_mini3d.cpp_convertVertexL_FUN_00514aa0
    PUSH ESI                            ; 00514aa1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00514aa2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00514aa6
    FLD float ptr [ESI]                 ; 00514aaa
    LEA EAX,[EBX + 0xc]                 ; 00514aac
    FSTP float ptr [EBX]                ; 00514aaf
    FLD float ptr [ESI + 0x4]           ; 00514ab1
    PUSH EAX                            ; 00514ab4
    FSTP float ptr [EBX + 0x4]          ; 00514ab5
    FLD float ptr [ESI + 0x8]           ; 00514ab8
    PUSH ESI                            ; 00514abb
    FSTP float ptr [EBX + 0x8]          ; 00514abc
    CALL engine_mini3d.cpp_lightVertex_FUN_00513ca0 ; 00514abf
        ;   XREF to: 00513ca0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_lightVertex_FUN_00513ca0(float * vertex, float * out_color)
    FLD float ptr [ESI + 0x18]          ; 00514ac4
    ADD ESP,0x8                         ; 00514ac7
    FSTP float ptr [EBX + 0x1c]         ; 00514aca
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00514acd
    MOV dword ptr [EBX + 0x20],EAX      ; 00514ad0
    POP ESI                             ; 00514ad3
    POP EBX                             ; 00514ad4
    RET                                 ; 00514ad5


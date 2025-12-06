; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_prim.c_prepareDepthBuffer_FUN_00551fb0(SRenderVertex * vertices, int vertex_count)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
;
; XREF[7]:
;   engine_3d.c_clipAndDrawLine3D_FUN_00408070 at 004082d1
;   engine_3d.c_rasterizePolygon_FUN_005fd4e0 at 005fd76b
;   engine_3d.c_rasterizeTriangle_FUN_005fcfc0 at 005fd2d0
;   engine_drender.cpp_renderTriangleSimple_FUN_004839f0 at 00483b0a
;   engine_prim.c_renderIndexedPolygonAdvanced_FUN_00553b10 at 00553c82
;   engine_prim.c_renderPolygonSoftware_FUN_00552510 at 00552718
;   engine_prim.c_renderScanlinePolygon_FUN_00553470 at 00553773
;
; Referenced Globals:
;   int g_ProcessorType
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551fb0
        ;   Label: engine_prim.c_prepareDepthBuffer_FUN_00551fb0
    PUSH ESI                            ; 00551fb1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00551fb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00551fb6
    MOV EDX,dword ptr [0x02d0529c]      ; 00551fba | int g_ProcessorType
    TEST EDX,EDX                        ; 00551fc0
    JZ 0x00551fef                       ; 00551fc2 | LAB_00551fef
        ;   XREF to: 00551fef (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00551fc4
    TEST EBX,EBX                        ; 00551fc6
    JLE 0x00551fe0                      ; 00551fc8 | LAB_00551fe0
        ;   XREF to: 00551fe0 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x8]       ; 00551fca
        ;   Label: LAB_00551fca
    TEST ECX,ECX                        ; 00551fcd
    JNZ 0x00551fe3                      ; 00551fcf | LAB_00551fe3
        ;   XREF to: 00551fe3 (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 00551fd1
    INC EDX                             ; 00551fd8
        ;   Label: LAB_00551fd8
    ADD EAX,0x30                        ; 00551fd9
    CMP EDX,EBX                         ; 00551fdc
    JL 0x00551fca                       ; 00551fde | LAB_00551fca
        ;   XREF to: 00551fca (CONDITIONAL_JUMP)
    POP ESI                             ; 00551fe0
        ;   Label: LAB_00551fe0
    POP EBX                             ; 00551fe1
    RET                                 ; 00551fe2
    MOV ESI,0x7fffffff                  ; 00551fe3
        ;   Label: LAB_00551fe3
    SUB ESI,ECX                         ; 00551fe8
    MOV dword ptr [EAX + 0x8],ESI       ; 00551fea
    JMP 0x00551fd8                      ; 00551fed | LAB_00551fd8
        ;   XREF to: 00551fd8 (UNCONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 00551fef
        ;   Label: LAB_00551fef
    JLE 0x00551fe0                      ; 00551ff1 | LAB_00551fe0
        ;   XREF to: 00551fe0 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0x8]       ; 00551ff3
        ;   Label: LAB_00551ff3
    SAR ECX,0x4                         ; 00551ff6
    TEST ECX,ECX                        ; 00551ff9
    JNZ 0x0055200e                      ; 00551ffb | LAB_0055200e
        ;   XREF to: 0055200e (CONDITIONAL_JUMP)
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 00551ffd
    INC EDX                             ; 00552004
    ADD EAX,0x30                        ; 00552005
    CMP EDX,EBX                         ; 00552008
    JGE 0x00551fe0                      ; 0055200a | LAB_00551fe0
        ;   XREF to: 00551fe0 (CONDITIONAL_JUMP)
    JMP 0x00551ff3                      ; 0055200c | LAB_00551ff3
        ;   XREF to: 00551ff3 (UNCONDITIONAL_JUMP)
    MOV ECX,dword ptr [EAX + 0xc]       ; 0055200e
        ;   Label: LAB_0055200e
    MOV dword ptr [EAX + 0x8],ECX       ; 00552011
    INC EDX                             ; 00552014
    ADD EAX,0x30                        ; 00552015
    CMP EDX,EBX                         ; 00552018
    JGE 0x00551fe0                      ; 0055201a | LAB_00551fe0
        ;   XREF to: 00551fe0 (CONDITIONAL_JUMP)
    JMP 0x00551ff3                      ; 0055201c | LAB_00551ff3
        ;   XREF to: 00551ff3 (UNCONDITIONAL_JUMP)


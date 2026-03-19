; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSoftwareEdge * __cdecl core_dpart_cpp_findEdgeByYStart_FUN_00483330(int scanline_y,SSoftwareEdge *exclude_edge)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   exclude_edge
;
; Referenced Globals:
;   int g_RenderTriangleEdgeCount
;   SSoftwareEdge[16] g_EdgeInterpolationArray
;   undefined4 g_EdgeInterpolationArray[1].base.y_min
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483330
        ;   Label: core_dpart.cpp_findEdgeByYStart_FUN_00483330
    PUSH ESI                            ; 00483331
    MOV EBX,dword ptr [0x02c6cb70]      ; 00483332 | g_RenderTriangleEdgeCount
    MOV ECX,dword ptr [ESP + 0xc]       ; 00483338
    MOV ESI,dword ptr [ESP + 0x10]      ; 0048333c
    MOV EAX,0x2c6cb74                   ; 00483340 | g_EdgeInterpolationArray
    XOR EDX,EDX                         ; 00483345
    TEST EBX,EBX                        ; 00483347
    JLE 0x0048335b                      ; 00483349
        ;   XREF to: 0048335b (CONDITIONAL_JUMP)  ; LAB_0048335b
    CMP ECX,dword ptr [EAX]             ; 0048334b | g_EdgeInterpolationArray | g_EdgeInterpolationArray[1].base.y_min
        ;   Label: LAB_0048334b
    JNZ 0x00483353                      ; 0048334d
        ;   XREF to: 00483353 (CONDITIONAL_JUMP)  ; LAB_00483353
    CMP EAX,ESI                         ; 0048334f
    JNZ 0x0048335d                      ; 00483351
        ;   XREF to: 0048335d (CONDITIONAL_JUMP)  ; LAB_0048335d
    INC EDX                             ; 00483353
        ;   Label: LAB_00483353
    ADD EAX,0x48                        ; 00483354 | g_EdgeInterpolationArray[1].base.y_min
    CMP EDX,EBX                         ; 00483357
    JL 0x0048334b                       ; 00483359
        ;   XREF to: 0048334b (CONDITIONAL_JUMP)  ; LAB_0048334b
    XOR EAX,EAX                         ; 0048335b
        ;   Label: LAB_0048335b
    MOV dword ptr [0x02c6cb70],EBX      ; 0048335d | g_RenderTriangleEdgeCount
        ;   Label: LAB_0048335d
    POP ESI                             ; 00483363
    POP EBX                             ; 00483364
    RET                                 ; 00483365


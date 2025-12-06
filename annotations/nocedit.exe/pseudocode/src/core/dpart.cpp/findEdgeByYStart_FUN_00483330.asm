; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SEdgeData * core_dpart.cpp_findEdgeByYStart_FUN_00483330(int scanline_y, SEdgeData * exclude_edge)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SEdgeData *      Stack[0x8]:4   exclude_edge
;
; Referenced Globals:
;   int g_RenderTriangleEdgeCount
;   SEdgeData[16] g_EdgeInterpolationArray
;   undefined4 DAT_02c6cbbc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483330
        ;   Label: core_dpart.cpp_findEdgeByYStart_FUN_00483330
    PUSH ESI                            ; 00483331
    MOV EBX,dword ptr [0x02c6cb70]      ; 00483332 | int g_RenderTriangleEdgeCount
    MOV ECX,dword ptr [ESP + 0xc]       ; 00483338
    MOV ESI,dword ptr [ESP + 0x10]      ; 0048333c
    MOV EAX,0x2c6cb74                   ; 00483340 | SEdgeData[16] g_EdgeInterpolationArray
    XOR EDX,EDX                         ; 00483345
    TEST EBX,EBX                        ; 00483347
    JLE 0x0048335b                      ; 00483349 | LAB_0048335b
        ;   XREF to: 0048335b (CONDITIONAL_JUMP)
    CMP ECX,dword ptr [EAX]             ; 0048334b | SEdgeData[16] g_EdgeInterpolationArray
        ;   Label: LAB_0048334b
    JNZ 0x00483353                      ; 0048334d | LAB_00483353
        ;   XREF to: 00483353 (CONDITIONAL_JUMP)
    CMP EAX,ESI                         ; 0048334f
    JNZ 0x0048335d                      ; 00483351 | LAB_0048335d
        ;   XREF to: 0048335d (CONDITIONAL_JUMP)
    INC EDX                             ; 00483353
        ;   Label: LAB_00483353
    ADD EAX,0x48                        ; 00483354 | DAT_02c6cbbc
    CMP EDX,EBX                         ; 00483357
    JL 0x0048334b                       ; 00483359 | LAB_0048334b
        ;   XREF to: 0048334b (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0048335b
        ;   Label: LAB_0048335b
    MOV dword ptr [0x02c6cb70],EBX      ; 0048335d | int g_RenderTriangleEdgeCount
        ;   Label: LAB_0048335d
    POP ESI                             ; 00483363
    POP EBX                             ; 00483364
    RET                                 ; 00483365


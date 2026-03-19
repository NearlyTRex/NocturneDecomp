; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SSoftwareEdge * __cdecl engine_prim_c_findEdgeInBuffer_FUN_00551f70(int y_value,SSoftwareEdge *edge_ptr)
;
; Parameters:
; int              Stack[0x4]:4   y_value
; SSoftwareEdge *  Stack[0x8]:4   edge_ptr
;
; XREF[2]:
;   engine_prim.c_renderIndexedPolygonSoftware_FUN_00552a40 at 00552c4b
;   engine_prim.c_renderPolygonSoftware_FUN_00552510 at 00552900
;
; Referenced Globals:
;   int g_SoftwareEdgeCount
;   SSoftwareEdge[16] g_SoftwareEdgeBuffer
;   undefined4 g_SoftwareEdgeBuffer[1].base.y_min
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00551f70
        ;   Label: engine_prim.c_findEdgeInBuffer_FUN_00551f70
    PUSH ESI                            ; 00551f71
    MOV EBX,dword ptr [0x030e5228]      ; 00551f72 | g_SoftwareEdgeCount
    MOV ECX,dword ptr [ESP + 0xc]       ; 00551f78
    MOV ESI,dword ptr [ESP + 0x10]      ; 00551f7c
    MOV EAX,0x30e522c                   ; 00551f80 | g_SoftwareEdgeBuffer
    XOR EDX,EDX                         ; 00551f85
    TEST EBX,EBX                        ; 00551f87
    JLE 0x00551f9b                      ; 00551f89
        ;   XREF to: 00551f9b (CONDITIONAL_JUMP)  ; LAB_00551f9b
    CMP ECX,dword ptr [EAX]             ; 00551f8b | g_SoftwareEdgeBuffer | g_SoftwareEdgeBuffer[1].base.y_min
        ;   Label: LAB_00551f8b
    JNZ 0x00551f93                      ; 00551f8d
        ;   XREF to: 00551f93 (CONDITIONAL_JUMP)  ; LAB_00551f93
    CMP EAX,ESI                         ; 00551f8f
    JNZ 0x00551f9d                      ; 00551f91
        ;   XREF to: 00551f9d (CONDITIONAL_JUMP)  ; LAB_00551f9d
    INC EDX                             ; 00551f93
        ;   Label: LAB_00551f93
    ADD EAX,0x48                        ; 00551f94 | g_SoftwareEdgeBuffer[1].base.y_min
    CMP EDX,EBX                         ; 00551f97
    JL 0x00551f8b                       ; 00551f99
        ;   XREF to: 00551f8b (CONDITIONAL_JUMP)  ; LAB_00551f8b
    XOR EAX,EAX                         ; 00551f9b
        ;   Label: LAB_00551f9b
    MOV dword ptr [0x030e5228],EBX      ; 00551f9d | g_SoftwareEdgeCount
        ;   Label: LAB_00551f9d
    POP ESI                             ; 00551fa3
    POP EBX                             ; 00551fa4
    RET                                 ; 00551fa5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_removeDegenerateTriangles_FUN_00463a20(void)
;
; Local Variables:
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   shape_design.c_vertexReducer_FUN_00467850 at 00467dc8
;
; Referenced Globals:
;   int g_PolygonCount
;   SShapeEditorPolygon[20000] g_ModelPolygonData
;   undefined4 g_ModelPolygonData[0].texture_name[0]
;   undefined4 g_ModelPolygonData[0].vertex_indices_count
;   undefined4 g_ModelPolygonData[0].vertex_indices[0]
;   undefined4 g_ModelPolygonData[0].vertex_indices[1]
;   undefined4 g_ModelPolygonData[0].vertex_indices[2]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00463a20
        ;   Label: shape_design.c_removeDegenerateTriangles_FUN_00463a20
    PUSH ESI                            ; 00463a21
    PUSH EDI                            ; 00463a22
    PUSH EBP                            ; 00463a23
    MOV EBP,ESP                         ; 00463a24
    SUB ESP,0x10                        ; 00463a26
    MOV dword ptr [EBP + -0x8],0x0      ; 00463a2c
        ;   Label: LAB_00463a2c
    MOV dword ptr [EBP + -0x10],0x0     ; 00463a33
    JMP 0x00463a42                      ; 00463a3a
        ;   XREF to: 00463a42 (UNCONDITIONAL_JUMP)  ; LAB_00463a42
    MOV EAX,dword ptr [EBP + -0x10]     ; 00463a3c
        ;   Label: LAB_00463a3c
    INC dword ptr [EBP + -0x10]         ; 00463a3f
    MOV EAX,dword ptr [EBP + -0x10]     ; 00463a42
        ;   Label: LAB_00463a42
    CMP EAX,dword ptr [0x016e990c]      ; 00463a45 | g_PolygonCount
    JGE 0x00463acc                      ; 00463a4b
        ;   XREF to: 00463acc (CONDITIONAL_JUMP)  ; LAB_00463acc
    IMUL EAX,dword ptr [EBP + -0x10],0x184 ; 00463a51
    MOV EDX,0x16e9910                   ; 00463a58 | g_ModelPolygonData
    ADD EDX,EAX                         ; 00463a5d
    MOV dword ptr [EBP + -0x4],EDX      ; 00463a5f
    MOV EAX,dword ptr [EBP + -0x4]      ; 00463a62
    CMP dword ptr [EAX + 0xa4],0x3      ; 00463a65 | g_ModelPolygonData[0].vertex_indices_count
    JNZ 0x00463abf                      ; 00463a6c
        ;   XREF to: 00463abf (CONDITIONAL_JUMP)  ; LAB_00463abf
    MOV EAX,dword ptr [EBP + -0x4]      ; 00463a6e
    MOV EDX,dword ptr [EAX + 0xb8]      ; 00463a71 | g_ModelPolygonData[0].vertex_indices[0]
    MOV EAX,dword ptr [EBP + -0x4]      ; 00463a77
    CMP EDX,dword ptr [EAX + 0xbc]      ; 00463a7a | g_ModelPolygonData[0].vertex_indices[1]
    JNZ 0x00463a89                      ; 00463a80
        ;   XREF to: 00463a89 (CONDITIONAL_JUMP)  ; LAB_00463a89
    MOV dword ptr [EBP + -0x8],0x1      ; 00463a82
    MOV EAX,dword ptr [EBP + -0x4]      ; 00463a89
        ;   Label: LAB_00463a89
    MOV EDX,dword ptr [EAX + 0xb8]      ; 00463a8c | g_ModelPolygonData[0].vertex_indices[0]
    MOV EAX,dword ptr [EBP + -0x4]      ; 00463a92
    CMP EDX,dword ptr [EAX + 0xc0]      ; 00463a95 | g_ModelPolygonData[0].vertex_indices[2]
    JNZ 0x00463aa4                      ; 00463a9b
        ;   XREF to: 00463aa4 (CONDITIONAL_JUMP)  ; LAB_00463aa4
    MOV dword ptr [EBP + -0x8],0x1      ; 00463a9d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00463aa4
        ;   Label: LAB_00463aa4
    MOV EDX,dword ptr [EAX + 0xbc]      ; 00463aa7 | g_ModelPolygonData[0].vertex_indices[1]
    MOV EAX,dword ptr [EBP + -0x4]      ; 00463aad
    CMP EDX,dword ptr [EAX + 0xc0]      ; 00463ab0 | g_ModelPolygonData[0].vertex_indices[2]
    JNZ 0x00463abf                      ; 00463ab6
        ;   XREF to: 00463abf (CONDITIONAL_JUMP)  ; LAB_00463abf
    MOV dword ptr [EBP + -0x8],0x1      ; 00463ab8
    CMP dword ptr [EBP + -0x8],0x0      ; 00463abf
        ;   Label: LAB_00463abf
    JZ 0x00463ac7                       ; 00463ac3
        ;   XREF to: 00463ac7 (CONDITIONAL_JUMP)  ; LAB_00463ac7
    JMP 0x00463acc                      ; 00463ac5
        ;   XREF to: 00463acc (UNCONDITIONAL_JUMP)  ; LAB_00463acc
    JMP 0x00463a3c                      ; 00463ac7
        ;   XREF to: 00463a3c (UNCONDITIONAL_JUMP)  ; LAB_00463a3c
        ;   Label: LAB_00463ac7
    CMP dword ptr [EBP + -0x8],0x0      ; 00463acc
        ;   Label: LAB_00463acc
    JZ 0x00463b25                       ; 00463ad0
        ;   XREF to: 00463b25 (CONDITIONAL_JUMP)  ; LAB_00463b25
    MOV EAX,dword ptr [EBP + -0x10]     ; 00463ad2
    MOV dword ptr [EBP + -0xc],EAX      ; 00463ad5
    JMP 0x00463ae0                      ; 00463ad8
        ;   XREF to: 00463ae0 (UNCONDITIONAL_JUMP)  ; LAB_00463ae0
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463ada
        ;   Label: LAB_00463ada
    INC dword ptr [EBP + -0xc]          ; 00463add
    MOV EAX,[0x016e990c]                ; 00463ae0 | g_PolygonCount
        ;   Label: LAB_00463ae0
    DEC EAX                             ; 00463ae5
    CMP EAX,dword ptr [EBP + -0xc]      ; 00463ae6
    JLE 0x00463b11                      ; 00463ae9
        ;   XREF to: 00463b11 (CONDITIONAL_JUMP)  ; LAB_00463b11
    MOV EAX,dword ptr [EBP + -0xc]      ; 00463aeb
    INC EAX                             ; 00463aee
    IMUL EAX,EAX,0x184                  ; 00463aef
    IMUL ESI,dword ptr [EBP + -0xc],0x184 ; 00463af5
    MOV ECX,0x61                        ; 00463afc
    LEA EDI,[ESI + 0x16e9910]           ; 00463b01 | g_ModelPolygonData
    LEA ESI,[EAX + 0x16e9910]           ; 00463b07 | g_ModelPolygonData
    MOVSD.REP ES:EDI,ESI                ; 00463b0d | g_ModelPolygonData | g_ModelPolygonData[0].texture_name[0]
    JMP 0x00463ada                      ; 00463b0f
        ;   XREF to: 00463ada (UNCONDITIONAL_JUMP)  ; LAB_00463ada
    DEC dword ptr [0x016e990c]          ; 00463b11 | g_PolygonCount
        ;   Label: LAB_00463b11
    CMP dword ptr [0x016e990c],0x0      ; 00463b17 | g_PolygonCount
    JLE 0x00463b25                      ; 00463b1e
        ;   XREF to: 00463b25 (CONDITIONAL_JUMP)  ; LAB_00463b25
    JMP 0x00463a2c                      ; 00463b20
        ;   XREF to: 00463a2c (UNCONDITIONAL_JUMP)  ; LAB_00463a2c
    MOV ESP,EBP                         ; 00463b25
        ;   Label: LAB_00463b25
    POP EBP                             ; 00463b27
    POP EDI                             ; 00463b28
    POP ESI                             ; 00463b29
    POP EBX                             ; 00463b2a
    RET                                 ; 00463b2b


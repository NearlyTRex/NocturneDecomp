; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_drawTransformedList_FUN_00515ae0(float *vertices,int vertex_count,ushort *indices,int triangle_count,int clip_flags)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
; int              Stack[0x14]:4   clip_flags
;
; XREF[5]:
;   engine_mini3d.cpp_polyListD3DL_FUN_005129d0 at 00512bbb
;   engine_mini3d.cpp_polyListD3DTL_FUN_00512de0 at 0051314b
;   engine_mini3d.cpp_polyListL_FUN_00512c60 at 00512dcf
;   engine_mini3d.cpp_polyList_FUN_005126d0 at 00512921
;   engine_mini3d.cpp_userClipPolyList_FUN_00517660 at 00517bae
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01d227e0
;   undefined4 DAT_02c83470
;
; Called Functions:
;   engine_mini3d.cpp_beginTriangleBatch_FUN_005155d0
;   engine_mini3d.cpp_clipBatchTriangle_FUN_00515850
;   engine_mini3d.cpp_flushTriangleBatch_FUN_00515750
;   engine_mini3d.cpp_rasterizeTriangle_FUN_00516060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515ae0
        ;   Label: engine_mini3d.cpp_drawTransformedList_FUN_00515ae0
    PUSH ESI                            ; 00515ae1
    PUSH EDI                            ; 00515ae2
    MOV ESI,dword ptr [ESP + 0x14]      ; 00515ae3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00515ae7
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00515aeb
    CMP dword ptr [ESP + 0x20],0x0      ; 00515aef
    JNZ 0x00515b71                      ; 00515af4
        ;   XREF to: 00515b71 (CONDITIONAL_JUMP)  ; LAB_00515b71
    CMP dword ptr [0x02c83470],0x0      ; 00515afa | DAT_02c83470
    JZ 0x00515b0c                       ; 00515b01
        ;   XREF to: 00515b0c (CONDITIONAL_JUMP)  ; LAB_00515b0c
    CMP dword ptr [0x01c50948],0x0      ; 00515b03 | DAT_01c50948
    JNZ 0x00515b54                      ; 00515b0a
        ;   XREF to: 00515b54 (CONDITIONAL_JUMP)  ; LAB_00515b54
    XOR ESI,ESI                         ; 00515b0c
        ;   Label: LAB_00515b0c
    TEST EDI,EDI                        ; 00515b0e
    JLE 0x00515b50                      ; 00515b10
        ;   XREF to: 00515b50 (CONDITIONAL_JUMP)  ; LAB_00515b50
    XOR EAX,EAX                         ; 00515b12
        ;   Label: LAB_00515b12
    MOV AX,word ptr [EBX + 0x4]         ; 00515b14
    MOV EDX,EAX                         ; 00515b18
    MOV EAX,[0x01d227e0]                ; 00515b1a | DAT_01d227e0
    SHL EDX,0x6                         ; 00515b1f
    ADD EDX,EAX                         ; 00515b22
    PUSH EDX                            ; 00515b24
    XOR EDX,EDX                         ; 00515b25
    MOV DX,word ptr [EBX + 0x2]         ; 00515b27
    SHL EDX,0x6                         ; 00515b2b
    ADD EDX,EAX                         ; 00515b2e
    PUSH EDX                            ; 00515b30
    XOR EDX,EDX                         ; 00515b31
    MOV DX,word ptr [EBX]               ; 00515b33
    SHL EDX,0x6                         ; 00515b36
    ADD EAX,EDX                         ; 00515b39
    PUSH EAX                            ; 00515b3b
    ADD EBX,0x6                         ; 00515b3c
    INC ESI                             ; 00515b3f
    CALL engine_mini3d.cpp_rasterizeTriangle_FUN_00516060 ; 00515b40
        ;   XREF to: 00516060 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_rasterizeTriangle_FUN_00516060(float * v0, float * v1, float * v2)
    ADD ESP,0xc                         ; 00515b45
    CMP ESI,EDI                         ; 00515b48
    JL 0x00515b12                       ; 00515b4a
        ;   XREF to: 00515b12 (CONDITIONAL_JUMP)  ; LAB_00515b12
    LEA EAX,[EAX]                       ; 00515b4c
    POP EDI                             ; 00515b50
        ;   Label: LAB_00515b50
    POP ESI                             ; 00515b51
    POP EBX                             ; 00515b52
    RET                                 ; 00515b53
    MOV EAX,[0x01c51d14]                ; 00515b54 | DAT_01c51d14
        ;   Label: LAB_00515b54
    PUSH EAX                            ; 00515b59
    PUSH EDI                            ; 00515b5a
    PUSH EBX                            ; 00515b5b
    PUSH ESI                            ; 00515b5c
    MOV EDX,dword ptr [0x01d227e0]      ; 00515b5d | DAT_01d227e0
    PUSH EDX                            ; 00515b63
    CALL dword ptr [0x02c83470]         ; 00515b64 | DAT_02c83470
    ADD ESP,0x14                        ; 00515b6a
    POP EDI                             ; 00515b6d
    POP ESI                             ; 00515b6e
    POP EBX                             ; 00515b6f
    RET                                 ; 00515b70
    PUSH ESI                            ; 00515b71
        ;   Label: LAB_00515b71
    CALL engine_mini3d.cpp_beginTriangleBatch_FUN_005155d0 ; 00515b72
        ;   XREF to: 005155d0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_beginTriangleBatch_FUN_005155d0(int base_vertex)
    ADD ESP,0x4                         ; 00515b77
    XOR ESI,ESI                         ; 00515b7a
    TEST EDI,EDI                        ; 00515b7c
    JLE 0x00515bc0                      ; 00515b7e
        ;   XREF to: 00515bc0 (CONDITIONAL_JUMP)  ; LAB_00515bc0
    XOR EAX,EAX                         ; 00515b80
        ;   Label: LAB_00515b80
    MOV AX,word ptr [EBX + 0x4]         ; 00515b82
    MOV EDX,EAX                         ; 00515b86
    MOV EAX,[0x01d227e0]                ; 00515b88 | DAT_01d227e0
    SHL EDX,0x6                         ; 00515b8d
    ADD EDX,EAX                         ; 00515b90
    PUSH EDX                            ; 00515b92
    XOR EDX,EDX                         ; 00515b93
    MOV DX,word ptr [EBX + 0x2]         ; 00515b95
    SHL EDX,0x6                         ; 00515b99
    ADD EDX,EAX                         ; 00515b9c
    PUSH EDX                            ; 00515b9e
    XOR EDX,EDX                         ; 00515b9f
    MOV DX,word ptr [EBX]               ; 00515ba1
    SHL EDX,0x6                         ; 00515ba4
    ADD EAX,EDX                         ; 00515ba7
    PUSH EAX                            ; 00515ba9
    ADD EBX,0x6                         ; 00515baa
    INC ESI                             ; 00515bad
    CALL engine_mini3d.cpp_clipBatchTriangle_FUN_00515850 ; 00515bae
        ;   XREF to: 00515850 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipBatchTriangle_FUN_00515850(float * v0, float * v1, float * v2)
    ADD ESP,0xc                         ; 00515bb3
    CMP ESI,EDI                         ; 00515bb6
    JL 0x00515b80                       ; 00515bb8
        ;   XREF to: 00515b80 (CONDITIONAL_JUMP)  ; LAB_00515b80
    LEA EAX,[EAX]                       ; 00515bba
    CALL engine_mini3d.cpp_flushTriangleBatch_FUN_00515750 ; 00515bc0
        ;   XREF to: 00515750 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_flushTriangleBatch_FUN_00515750()
        ;   Label: LAB_00515bc0
    POP EDI                             ; 00515bc5
    POP ESI                             ; 00515bc6
    POP EBX                             ; 00515bc7
    RET                                 ; 00515bc8


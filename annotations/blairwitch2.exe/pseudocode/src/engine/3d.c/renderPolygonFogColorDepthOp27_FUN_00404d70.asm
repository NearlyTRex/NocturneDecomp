; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonFogColorDepthOp27_FUN_00404d70(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404d70
        ;   Label: engine_3d.c_renderPolygonFogColorDepthOp27_FUN_00404d70
    PUSH ESI                            ; 00404d71
    PUSH EBP                            ; 00404d72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404d73
    LEA ESI,[EBX + 0x18]                ; 00404d77
    LEA EAX,[EBX + 0x8]                 ; 00404d7a
    PUSH EAX                            ; 00404d7d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00404d7e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404d83
    TEST EAX,EAX                        ; 00404d86
    JZ 0x00404dcb                       ; 00404d88
        ;   XREF to: 00404dcb (CONDITIONAL_JUMP)  ; LAB_00404dcb
    CMP dword ptr [0x01c38b40],0x0      ; 00404d8a | DAT_01c38b40
    JNZ 0x00404de6                      ; 00404d91
        ;   XREF to: 00404de6 (CONDITIONAL_JUMP)  ; LAB_00404de6
    CMP dword ptr [0x006141c0],0x20     ; 00404d93 | DAT_006141c0
    JNZ 0x00404dda                      ; 00404d9a
        ;   XREF to: 00404dda (CONDITIONAL_JUMP)  ; LAB_00404dda
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404d9c | DAT_01c35e6c
    PUSH EDI                            ; 00404da6
        ;   Label: LAB_00404da6
    MOV EDI,0xc4                        ; 00404da7
    PUSH ESI                            ; 00404dac
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404dad
    MOV EBP,0x1                         ; 00404db0
    PUSH EAX                            ; 00404db5
    MOV dword ptr [0x01c38b54],EDI      ; 00404db6 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00404dbc | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404dc2
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404dc7
    POP EDI                             ; 00404dca
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404dcb
        ;   Label: LAB_00404dcb
    ADD EBX,0x18                        ; 00404dce
    SHL EAX,0x2                         ; 00404dd1
    ADD EAX,EBX                         ; 00404dd4
    POP EBP                             ; 00404dd6
    POP ESI                             ; 00404dd7
    POP EBX                             ; 00404dd8
    RET                                 ; 00404dd9
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404dda | DAT_01c35e6c
        ;   Label: LAB_00404dda
    JMP 0x00404da6                      ; 00404de4
        ;   XREF to: 00404da6 (UNCONDITIONAL_JUMP)  ; LAB_00404da6
    CMP dword ptr [0x006141c0],0x20     ; 00404de6 | DAT_006141c0
        ;   Label: LAB_00404de6
    JNZ 0x00404dfb                      ; 00404ded
        ;   XREF to: 00404dfb (CONDITIONAL_JUMP)  ; LAB_00404dfb
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00404def | DAT_01c35e6c
    JMP 0x00404da6                      ; 00404df9
        ;   XREF to: 00404da6 (UNCONDITIONAL_JUMP)  ; LAB_00404da6
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00404dfb | DAT_01c35e6c
        ;   Label: LAB_00404dfb
    JMP 0x00404da6                      ; 00404e05
        ;   XREF to: 00404da6 (UNCONDITIONAL_JUMP)  ; LAB_00404da6


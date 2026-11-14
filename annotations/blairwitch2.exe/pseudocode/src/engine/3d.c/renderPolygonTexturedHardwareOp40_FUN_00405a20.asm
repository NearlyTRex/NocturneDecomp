; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00405a20(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0070ca6c
;   undefined4 DAT_0070ca84
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405a20
        ;   Label: engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405a20
    PUSH EDI                            ; 00405a21
    PUSH EBP                            ; 00405a22
    MOV EDX,dword ptr [ESP + 0x10]      ; 00405a23
    MOV ECX,dword ptr [0x01c38b40]      ; 00405a27 | DAT_01c38b40
    LEA EAX,[EDX + 0x18]                ; 00405a2d
    TEST ECX,ECX                        ; 00405a30
    JNZ 0x00405a86                      ; 00405a32
        ;   XREF to: 00405a86 (CONDITIONAL_JUMP)  ; LAB_00405a86
    CMP dword ptr [0x006141c0],0x20     ; 00405a34 | DAT_006141c0
    JNZ 0x00405a7a                      ; 00405a3b
        ;   XREF to: 00405a7a (CONDITIONAL_JUMP)  ; LAB_00405a7a
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405a3d | DAT_01c35e6c
    MOV ESI,0x1                         ; 00405a47
        ;   Label: LAB_00405a47
    XOR EDI,EDI                         ; 00405a4c
    MOV EBP,dword ptr [0x0070ca6c]      ; 00405a4e | DAT_0070ca6c
    MOV dword ptr [0x01c38b58],EDI      ; 00405a54 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],ESI      ; 00405a5a | DAT_01c38b54
    TEST EBP,EBP                        ; 00405a60
    JZ 0x00405aa7                       ; 00405a62
        ;   XREF to: 00405aa7 (CONDITIONAL_JUMP)  ; LAB_00405aa7
    MOV ECX,dword ptr [EDX + 0x4]       ; 00405a64
    PUSH ECX                            ; 00405a67
    PUSH EAX                            ; 00405a68
    CALL engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0 ; 00405a69
        ;   XREF to: 004abdd0 (UNCONDITIONAL_CALL)  ; void engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0(SRenderVertex * * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00405a6e
    MOV EAX,0x70ca84                    ; 00405a71 | DAT_0070ca84
    POP EBP                             ; 00405a76
    POP EDI                             ; 00405a77
    POP ESI                             ; 00405a78
    RET                                 ; 00405a79
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405a7a | DAT_01c35e6c
        ;   Label: LAB_00405a7a
    JMP 0x00405a47                      ; 00405a84
        ;   XREF to: 00405a47 (UNCONDITIONAL_JUMP)  ; LAB_00405a47
    CMP dword ptr [0x006141c0],0x20     ; 00405a86 | DAT_006141c0
        ;   Label: LAB_00405a86
    JNZ 0x00405a9b                      ; 00405a8d
        ;   XREF to: 00405a9b (CONDITIONAL_JUMP)  ; LAB_00405a9b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405a8f | DAT_01c35e6c
    JMP 0x00405a47                      ; 00405a99
        ;   XREF to: 00405a47 (UNCONDITIONAL_JUMP)  ; LAB_00405a47
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405a9b | DAT_01c35e6c
        ;   Label: LAB_00405a9b
    JMP 0x00405a47                      ; 00405aa5
        ;   XREF to: 00405a47 (UNCONDITIONAL_JUMP)  ; LAB_00405a47
    PUSH EAX                            ; 00405aa7
        ;   Label: LAB_00405aa7
    MOV EAX,dword ptr [EDX + 0x4]       ; 00405aa8
    PUSH EAX                            ; 00405aab
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00405aac
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405ab1
    MOV EAX,0x70ca84                    ; 00405ab4 | DAT_0070ca84
    POP EBP                             ; 00405ab9
    POP EDI                             ; 00405aba
    POP ESI                             ; 00405abb
    RET                                 ; 00405abc


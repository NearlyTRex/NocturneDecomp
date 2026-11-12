; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonTexturedHardwareOp40_FUN_00405850(SMRGLHeaderPrimitive *prim)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a6c
;   undefined4 DAT_00713a84
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_fpoly.c_rasterizePolygonHardware_FUN_004c4d80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405850
        ;   Label: engine_3d.c_renderPolygonTexturedHardwareOp40_FUN_00405850
    PUSH EDI                            ; 00405851
    PUSH EBP                            ; 00405852
    MOV EDX,dword ptr [ESP + 0x10]      ; 00405853
    MOV ECX,dword ptr [0x01c51d00]      ; 00405857 | DAT_01c51d00
    LEA EAX,[EDX + 0x18]                ; 0040585d
    TEST ECX,ECX                        ; 00405860
    JNZ 0x004058b6                      ; 00405862
        ;   XREF to: 004058b6 (CONDITIONAL_JUMP)  ; LAB_004058b6
    CMP dword ptr [0x0061b4a0],0x20     ; 00405864 | DAT_0061b4a0
    JNZ 0x004058aa                      ; 0040586b
        ;   XREF to: 004058aa (CONDITIONAL_JUMP)  ; LAB_004058aa
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 0040586d | DAT_01c4f02c
    MOV ESI,0x1                         ; 00405877
        ;   Label: LAB_00405877
    XOR EDI,EDI                         ; 0040587c
    MOV EBP,dword ptr [0x00713a6c]      ; 0040587e | DAT_00713a6c
    MOV dword ptr [0x01c51d18],EDI      ; 00405884 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],ESI      ; 0040588a | DAT_01c51d14
    TEST EBP,EBP                        ; 00405890
    JZ 0x004058d7                       ; 00405892
        ;   XREF to: 004058d7 (CONDITIONAL_JUMP)  ; LAB_004058d7
    MOV ECX,dword ptr [EDX + 0x4]       ; 00405894
    PUSH ECX                            ; 00405897
    PUSH EAX                            ; 00405898
    CALL engine_fpoly.c_rasterizePolygonHardware_FUN_004c4d80 ; 00405899
        ;   XREF to: 004c4d80 (UNCONDITIONAL_CALL)  ; void engine_fpoly.c_rasterizePolygonHardware_FUN_004c4d80(SRenderVertex * * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0040589e
    MOV EAX,0x713a84                    ; 004058a1 | DAT_00713a84
    POP EBP                             ; 004058a6
    POP EDI                             ; 004058a7
    POP ESI                             ; 004058a8
    RET                                 ; 004058a9
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 004058aa | DAT_01c4f02c
        ;   Label: LAB_004058aa
    JMP 0x00405877                      ; 004058b4
        ;   XREF to: 00405877 (UNCONDITIONAL_JUMP)  ; LAB_00405877
    CMP dword ptr [0x0061b4a0],0x20     ; 004058b6 | DAT_0061b4a0
        ;   Label: LAB_004058b6
    JNZ 0x004058cb                      ; 004058bd
        ;   XREF to: 004058cb (CONDITIONAL_JUMP)  ; LAB_004058cb
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004058bf | DAT_01c4f02c
    JMP 0x00405877                      ; 004058c9
        ;   XREF to: 00405877 (UNCONDITIONAL_JUMP)  ; LAB_00405877
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004058cb | DAT_01c4f02c
        ;   Label: LAB_004058cb
    JMP 0x00405877                      ; 004058d5
        ;   XREF to: 00405877 (UNCONDITIONAL_JUMP)  ; LAB_00405877
    PUSH EAX                            ; 004058d7
        ;   Label: LAB_004058d7
    MOV EAX,dword ptr [EDX + 0x4]       ; 004058d8
    PUSH EAX                            ; 004058db
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004058dc
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004058e1
    MOV EAX,0x713a84                    ; 004058e4 | DAT_00713a84
    POP EBP                             ; 004058e9
    POP EDI                             ; 004058ea
    POP ESI                             ; 004058eb
    RET                                 ; 004058ec


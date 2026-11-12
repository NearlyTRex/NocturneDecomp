; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_flushRenderQueue_FUN_00407980(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007ba070
;   undefined4 DAT_01c37788
;
; Called Functions:
;   engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70
;   engine_special.cpp_drawPolyList_FUN_0055f950
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00407980
        ;   Label: engine_3d.c_flushRenderQueue_FUN_00407980
    MOV EDX,dword ptr [0x007ba070]      ; 00407981 | DAT_007ba070
    TEST EDX,EDX                        ; 00407987
    JZ 0x004079c6                       ; 00407989
        ;   XREF to: 004079c6 (CONDITIONAL_JUMP)  ; LAB_004079c6
    PUSH ESI                            ; 0040798b
    CMP dword ptr [0x01c37788],0x0      ; 0040798c | DAT_01c37788
    JNZ 0x004079c8                      ; 00407993
        ;   XREF to: 004079c8 (CONDITIONAL_JUMP)  ; LAB_004079c8
    XOR ESI,ESI                         ; 00407995
    TEST EDX,EDX                        ; 00407997
    JLE 0x004079be                      ; 00407999
        ;   XREF to: 004079be (CONDITIONAL_JUMP)  ; LAB_004079be
    PUSH EDI                            ; 0040799b
    PUSH EBX                            ; 0040799c
    XOR EBX,EBX                         ; 0040799d
    MOV EDI,dword ptr [EBX + 0x7ba074]  ; 0040799f
        ;   Label: LAB_0040799f
    PUSH EDI                            ; 004079a5
    ADD EBX,0x4                         ; 004079a6
    INC ESI                             ; 004079a9
    CALL engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70 ; 004079aa
        ;   XREF to: 00405b70 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_renderPolygonFogTexturedPlaneMaskedOp41_FUN_00405b70(SMRGLHeaderPrimitive * prim)
    MOV EBP,dword ptr [0x007ba070]      ; 004079af | DAT_007ba070
    ADD ESP,0x4                         ; 004079b5
    CMP ESI,EBP                         ; 004079b8
    JL 0x0040799f                       ; 004079ba
        ;   XREF to: 0040799f (CONDITIONAL_JUMP)  ; LAB_0040799f
    POP EBX                             ; 004079bc
    POP EDI                             ; 004079bd
    XOR EAX,EAX                         ; 004079be
        ;   Label: LAB_004079be
    MOV [0x007ba070],EAX                ; 004079c0 | DAT_007ba070
    POP ESI                             ; 004079c5
    POP EBP                             ; 004079c6
        ;   Label: LAB_004079c6
    RET                                 ; 004079c7
    PUSH 0xcd                           ; 004079c8
        ;   Label: LAB_004079c8
    PUSH EDX                            ; 004079cd
    PUSH 0x7ba074                       ; 004079ce
    PUSH 0x622014                       ; 004079d3
    CALL engine_special.cpp_drawPolyList_FUN_0055f950 ; 004079d8
        ;   XREF to: 0055f950 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolyList_FUN_0055f950(SRenderVertex * vertex_buffer, SMRGLPrimitiveQuad * * polygons, int polygon_count, int render_flags)
    ADD ESP,0x10                        ; 004079dd
    XOR EAX,EAX                         ; 004079e0
    MOV [0x007ba070],EAX                ; 004079e2 | DAT_007ba070
    POP ESI                             ; 004079e7
    POP EBP                             ; 004079e8
    RET                                 ; 004079e9


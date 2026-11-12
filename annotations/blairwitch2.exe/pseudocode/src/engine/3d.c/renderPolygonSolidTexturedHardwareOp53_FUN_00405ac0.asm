; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonSolidTexturedHardwareOp53_FUN_00405ac0(SMRGLHeaderPrimitive *prim)
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
;   engine_3d.c_setRenderAlpha_FUN_00406da0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00405ac0
        ;   Label: engine_3d.c_renderPolygonSolidTexturedHardwareOp53_FUN_00405ac0
    PUSH ESI                            ; 00405ac1
    PUSH EDI                            ; 00405ac2
    PUSH EBP                            ; 00405ac3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00405ac4
    MOV EDX,dword ptr [0x01c38b40]      ; 00405ac8 | DAT_01c38b40
    LEA EBX,[ESI + 0x18]                ; 00405ace
    TEST EDX,EDX                        ; 00405ad1
    JNZ 0x00405b34                      ; 00405ad3
        ;   XREF to: 00405b34 (CONDITIONAL_JUMP)  ; LAB_00405b34
    CMP dword ptr [0x006141c0],0x20     ; 00405ad5 | DAT_006141c0
    JNZ 0x00405b28                      ; 00405adc
        ;   XREF to: 00405b28 (CONDITIONAL_JUMP)  ; LAB_00405b28
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405ade | DAT_01c35e6c
    MOV EDI,0x3                         ; 00405ae8
        ;   Label: LAB_00405ae8
    PUSH 0xffff                         ; 00405aed
    XOR EBP,EBP                         ; 00405af2
    MOV dword ptr [0x01c38b54],EDI      ; 00405af4 | DAT_01c38b54
    CALL engine_3d.c_setRenderAlpha_FUN_00406da0 ; 00405afa
        ;   XREF to: 00406da0 (UNCONDITIONAL_CALL)  ; int engine_3d.c_setRenderAlpha_FUN_00406da0(int alpha_color_value)
    MOV EAX,[0x0070ca6c]                ; 00405aff | DAT_0070ca6c
    ADD ESP,0x4                         ; 00405b04
    MOV dword ptr [0x01c38b58],EBP      ; 00405b07 | DAT_01c38b58
    TEST EAX,EAX                        ; 00405b0d
    JZ 0x00405b55                       ; 00405b0f
        ;   XREF to: 00405b55 (CONDITIONAL_JUMP)  ; LAB_00405b55
    MOV ECX,dword ptr [ESI + 0x4]       ; 00405b11
    PUSH ECX                            ; 00405b14
    PUSH EBX                            ; 00405b15
    CALL engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0 ; 00405b16
        ;   XREF to: 004abdd0 (UNCONDITIONAL_CALL)  ; void engine_fpoly.c_rasterizePolygonHardware_FUN_004abdd0(SRenderVertex * * vertices, int vertex_count)
    ADD ESP,0x8                         ; 00405b1b
    MOV EAX,0x70ca84                    ; 00405b1e | DAT_0070ca84
    POP EBP                             ; 00405b23
    POP EDI                             ; 00405b24
    POP ESI                             ; 00405b25
    POP EBX                             ; 00405b26
    RET                                 ; 00405b27
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405b28 | DAT_01c35e6c
        ;   Label: LAB_00405b28
    JMP 0x00405ae8                      ; 00405b32
        ;   XREF to: 00405ae8 (UNCONDITIONAL_JUMP)  ; LAB_00405ae8
    CMP dword ptr [0x006141c0],0x20     ; 00405b34 | DAT_006141c0
        ;   Label: LAB_00405b34
    JNZ 0x00405b49                      ; 00405b3b
        ;   XREF to: 00405b49 (CONDITIONAL_JUMP)  ; LAB_00405b49
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405b3d | DAT_01c35e6c
    JMP 0x00405ae8                      ; 00405b47
        ;   XREF to: 00405ae8 (UNCONDITIONAL_JUMP)  ; LAB_00405ae8
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405b49 | DAT_01c35e6c
        ;   Label: LAB_00405b49
    JMP 0x00405ae8                      ; 00405b53
        ;   XREF to: 00405ae8 (UNCONDITIONAL_JUMP)  ; LAB_00405ae8
    PUSH EBX                            ; 00405b55
        ;   Label: LAB_00405b55
    MOV EDX,dword ptr [ESI + 0x4]       ; 00405b56
    PUSH EDX                            ; 00405b59
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00405b5a
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00405b5f
    MOV EAX,0x70ca84                    ; 00405b62 | DAT_0070ca84
    POP EBP                             ; 00405b67
    POP EDI                             ; 00405b68
    POP ESI                             ; 00405b69
    POP EBX                             ; 00405b6a
    RET                                 ; 00405b6b


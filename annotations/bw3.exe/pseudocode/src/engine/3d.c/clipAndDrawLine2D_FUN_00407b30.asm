; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00407b30(SRenderVertex vertex1,SRenderVertex vertex2)
;
; Parameters:
; SRenderVertex    Stack[0x4]:48   vertex1
; SRenderVertex    Stack[0x34]:48   vertex2
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
;
; XREF[6]:
;   core_skeleton.cpp_FUN_005496c0 at 005497e6
;   engine_3d.c_drawLine2DFromIndices_FUN_00407ab0 at 00407b15
;   engine_3d.c_drawLineStrip2D_FUN_00404440 at 004044c6
;   shape_edittool.cpp_FUN_00480f00 at 00480ff8
;   shape_edittool.cpp_FUN_00481200 at 00481332
;   shape_edittool.cpp_FUN_00481350 at 004815cc
;
; Referenced Globals:
;   undefined4 DAT_0072ff34
;   undefined4 DAT_0072ff38
;   undefined4 DAT_0072ff44
;   undefined4 DAT_0072ff48
;   undefined4 DAT_0072ff64
;   undefined4 DAT_0072ff68
;   undefined4 DAT_0072ff74
;   undefined4 DAT_0072ff78
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;   engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0
;   engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0
;   engine_clipper.c_interpolateVertexRightClip_FUN_004390c0
;   engine_clipper.c_interpolateVertexTopClip_FUN_004392c0
;   engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407b30
        ;   Label: engine_3d.c_clipAndDrawLine2D_FUN_00407b30
    PUSH ESI                            ; 00407b31
    PUSH EDI                            ; 00407b32
    PUSH EBP                            ; 00407b33
    SUB ESP,0x30                        ; 00407b34
    MOV EAX,dword ptr [ESP + 0x54]      ; 00407b37
    AND EAX,dword ptr [ESP + 0x84]      ; 00407b3b
    TEST EAX,0x80000000                 ; 00407b42
    JNZ 0x00407d37                      ; 00407b47
        ;   XREF to: 00407d37 (CONDITIONAL_JUMP)  ; LAB_00407d37
    XOR EBX,EBX                         ; 00407b4d
        ;   Label: LAB_00407b4d
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407b4f
        ;   Label: LAB_00407b4f
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407b53
    JLE 0x00407b80                      ; 00407b57
        ;   XREF to: 00407b80 (CONDITIONAL_JUMP)  ; LAB_00407b80
    MOV EAX,ESP                         ; 00407b59
    PUSH EAX                            ; 00407b5b
    LEA EAX,[ESP + 0x78]                ; 00407b5c
    PUSH EAX                            ; 00407b60
    LEA EAX,[ESP + 0x4c]                ; 00407b61
    PUSH EAX                            ; 00407b65
    LEA EDI,[ESP + 0x80]                ; 00407b66
    LEA ESI,[ESP + 0xc]                 ; 00407b6d
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_004390c0 ; 00407b71
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_004390c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00407b76
    ADD ESP,0xc                         ; 00407b7b
    MOVSD.REP ES:EDI,ESI                ; 00407b7e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407b80
        ;   Label: LAB_00407b80
    MOV ESI,dword ptr [ESP + 0x74]      ; 00407b84
    NEG EAX                             ; 00407b88
    CMP EAX,ESI                         ; 00407b8a
    JLE 0x00407bb5                      ; 00407b8c
        ;   XREF to: 00407bb5 (CONDITIONAL_JUMP)  ; LAB_00407bb5
    MOV EAX,ESP                         ; 00407b8e
    PUSH EAX                            ; 00407b90
    LEA EAX,[ESP + 0x78]                ; 00407b91
    PUSH EAX                            ; 00407b95
    LEA EAX,[ESP + 0x4c]                ; 00407b96
    PUSH EAX                            ; 00407b9a
    LEA EDI,[ESP + 0x80]                ; 00407b9b
    LEA ESI,[ESP + 0xc]                 ; 00407ba2
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0 ; 00407ba6
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00407bab
    ADD ESP,0xc                         ; 00407bb0
    MOVSD.REP ES:EDI,ESI                ; 00407bb3
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407bb5
        ;   Label: LAB_00407bb5
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407bb9
    JLE 0x00407be6                      ; 00407bbd
        ;   XREF to: 00407be6 (CONDITIONAL_JUMP)  ; LAB_00407be6
    MOV EAX,ESP                         ; 00407bbf
    PUSH EAX                            ; 00407bc1
    LEA EAX,[ESP + 0x78]                ; 00407bc2
    PUSH EAX                            ; 00407bc6
    LEA EAX,[ESP + 0x4c]                ; 00407bc7
    PUSH EAX                            ; 00407bcb
    LEA EDI,[ESP + 0x80]                ; 00407bcc
    LEA ESI,[ESP + 0xc]                 ; 00407bd3
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_004392c0 ; 00407bd7
        ;   XREF to: 004392c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_004392c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00407bdc
    ADD ESP,0xc                         ; 00407be1
    MOVSD.REP ES:EDI,ESI                ; 00407be4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407be6
        ;   Label: LAB_00407be6
    MOV EBP,dword ptr [ESP + 0x78]      ; 00407bea
    NEG EAX                             ; 00407bee
    CMP EAX,EBP                         ; 00407bf0
    JLE 0x00407c1b                      ; 00407bf2
        ;   XREF to: 00407c1b (CONDITIONAL_JUMP)  ; LAB_00407c1b
    MOV EAX,ESP                         ; 00407bf4
    PUSH EAX                            ; 00407bf6
    LEA EAX,[ESP + 0x78]                ; 00407bf7
    PUSH EAX                            ; 00407bfb
    LEA EAX,[ESP + 0x4c]                ; 00407bfc
    PUSH EAX                            ; 00407c00
    LEA EDI,[ESP + 0x80]                ; 00407c01
    LEA ESI,[ESP + 0xc]                 ; 00407c08
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0 ; 00407c0c
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00407c11
    ADD ESP,0xc                         ; 00407c16
    MOVSD.REP ES:EDI,ESI                ; 00407c19
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407c1b
        ;   Label: LAB_00407c1b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407c1f
    JLE 0x00407c49                      ; 00407c23
        ;   XREF to: 00407c49 (CONDITIONAL_JUMP)  ; LAB_00407c49
    MOV EAX,ESP                         ; 00407c25
    PUSH EAX                            ; 00407c27
    LEA EAX,[ESP + 0x48]                ; 00407c28
    PUSH EAX                            ; 00407c2c
    LEA EAX,[ESP + 0x7c]                ; 00407c2d
    PUSH EAX                            ; 00407c31
    LEA EDI,[ESP + 0x50]                ; 00407c32
    LEA ESI,[ESP + 0xc]                 ; 00407c36
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_004390c0 ; 00407c3a
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_004390c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00407c3f
    ADD ESP,0xc                         ; 00407c44
    MOVSD.REP ES:EDI,ESI                ; 00407c47
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407c49
        ;   Label: LAB_00407c49
    MOV ECX,dword ptr [ESP + 0x44]      ; 00407c4d
    NEG EAX                             ; 00407c51
    CMP EAX,ECX                         ; 00407c53
    JLE 0x00407c7b                      ; 00407c55
        ;   XREF to: 00407c7b (CONDITIONAL_JUMP)  ; LAB_00407c7b
    MOV EAX,ESP                         ; 00407c57
    PUSH EAX                            ; 00407c59
    LEA EAX,[ESP + 0x48]                ; 00407c5a
    PUSH EAX                            ; 00407c5e
    LEA EAX,[ESP + 0x7c]                ; 00407c5f
    PUSH EAX                            ; 00407c63
    LEA EDI,[ESP + 0x50]                ; 00407c64
    LEA ESI,[ESP + 0xc]                 ; 00407c68
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0 ; 00407c6c
        ;   XREF to: 004391c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_004391c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00407c71
    ADD ESP,0xc                         ; 00407c76
    MOVSD.REP ES:EDI,ESI                ; 00407c79
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407c7b
        ;   Label: LAB_00407c7b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407c7f
    JLE 0x00407ca9                      ; 00407c83
        ;   XREF to: 00407ca9 (CONDITIONAL_JUMP)  ; LAB_00407ca9
    MOV EAX,ESP                         ; 00407c85
    PUSH EAX                            ; 00407c87
    LEA EAX,[ESP + 0x48]                ; 00407c88
    PUSH EAX                            ; 00407c8c
    LEA EAX,[ESP + 0x7c]                ; 00407c8d
    PUSH EAX                            ; 00407c91
    LEA EDI,[ESP + 0x50]                ; 00407c92
    LEA ESI,[ESP + 0xc]                 ; 00407c96
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_004392c0 ; 00407c9a
        ;   XREF to: 004392c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_004392c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00407c9f
    ADD ESP,0xc                         ; 00407ca4
    MOVSD.REP ES:EDI,ESI                ; 00407ca7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407ca9
        ;   Label: LAB_00407ca9
    MOV EDI,dword ptr [ESP + 0x48]      ; 00407cad
    NEG EAX                             ; 00407cb1
    CMP EAX,EDI                         ; 00407cb3
    JLE 0x00407cdb                      ; 00407cb5
        ;   XREF to: 00407cdb (CONDITIONAL_JUMP)  ; LAB_00407cdb
    MOV EAX,ESP                         ; 00407cb7
    PUSH EAX                            ; 00407cb9
    LEA EAX,[ESP + 0x48]                ; 00407cba
    PUSH EAX                            ; 00407cbe
    LEA EAX,[ESP + 0x7c]                ; 00407cbf
    PUSH EAX                            ; 00407cc3
    LEA EDI,[ESP + 0x50]                ; 00407cc4
    LEA ESI,[ESP + 0xc]                 ; 00407cc8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0 ; 00407ccc
        ;   XREF to: 004393c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_004393c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00407cd1
    ADD ESP,0xc                         ; 00407cd6
    MOVSD.REP ES:EDI,ESI                ; 00407cd9
    INC EBX                             ; 00407cdb
        ;   Label: LAB_00407cdb
    CMP EBX,0x2                         ; 00407cdc
    JL 0x00407b4f                       ; 00407cdf
        ;   XREF to: 00407b4f (CONDITIONAL_JUMP)  ; LAB_00407b4f
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407ce5
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00407ce9
    CMP EAX,EBP                         ; 00407ced
    JG 0x00407d2f                       ; 00407cef
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    MOV EBX,EBP                         ; 00407cf1
    NEG EBX                             ; 00407cf3
    CMP EBX,EAX                         ; 00407cf5
    JG 0x00407d2f                       ; 00407cf7
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407cf9
    CMP EAX,EBP                         ; 00407cfd
    JG 0x00407d2f                       ; 00407cff
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    CMP EBX,EAX                         ; 00407d01
    JG 0x00407d2f                       ; 00407d03
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407d05
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00407d09
    CMP EAX,EBX                         ; 00407d0d
    JG 0x00407d2f                       ; 00407d0f
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    NEG EBX                             ; 00407d11
    CMP EBX,EAX                         ; 00407d13
    JG 0x00407d2f                       ; 00407d15
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407d17
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00407d1b
    CMP EAX,EDI                         ; 00407d1f
    JG 0x00407d2f                       ; 00407d21
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    CMP EBX,EAX                         ; 00407d23
    JG 0x00407d2f                       ; 00407d25
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    TEST EBP,EBP                        ; 00407d27
    JLE 0x00407d2f                      ; 00407d29
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    TEST EDI,EDI                        ; 00407d2b
    JG 0x00407d40                       ; 00407d2d
        ;   XREF to: 00407d40 (CONDITIONAL_JUMP)  ; LAB_00407d40
    ADD ESP,0x30                        ; 00407d2f
        ;   Label: LAB_00407d2f
    POP EBP                             ; 00407d32
    POP EDI                             ; 00407d33
    POP ESI                             ; 00407d34
    POP EBX                             ; 00407d35
    RET                                 ; 00407d36
    TEST AL,0xff                        ; 00407d37
        ;   Label: LAB_00407d37
    JNZ 0x00407d2f                      ; 00407d39
        ;   XREF to: 00407d2f (CONDITIONAL_JUMP)  ; LAB_00407d2f
    JMP 0x00407b4d                      ; 00407d3b
        ;   XREF to: 00407b4d (UNCONDITIONAL_JUMP)  ; LAB_00407b4d
    MOV ECX,0xc                         ; 00407d40
        ;   Label: LAB_00407d40
    LEA ESI,[ESP + 0x44]                ; 00407d45
    MOV EDI,0x72ff34                    ; 00407d49 | DAT_0072ff34
    MOVSD.REP ES:EDI,ESI                ; 00407d4e | DAT_0072ff34 | DAT_0072ff38
    MOV ECX,0xc                         ; 00407d50
    LEA ESI,[ESP + 0x74]                ; 00407d55
    MOV EDI,0x72ff64                    ; 00407d59 | DAT_0072ff64
    PUSH 0x61a6                         ; 00407d5e
    MOVSD.REP ES:EDI,ESI                ; 00407d63 | DAT_0072ff64 | DAT_0072ff68
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630 ; 00407d65
        ;   XREF to: 004e5630 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)
    ADD ESP,0x4                         ; 00407d6a
    PUSH 0x61a7                         ; 00407d6d
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630 ; 00407d72
        ;   XREF to: 004e5630 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_004e5630(int cache_index)
    MOV EAX,[0x0072ff78]                ; 00407d77 | DAT_0072ff78
    ADD ESP,0x4                         ; 00407d7c
    SAR EAX,0x10                        ; 00407d7f
    PUSH EAX                            ; 00407d82
    MOV EAX,[0x0072ff74]                ; 00407d83 | DAT_0072ff74
    SAR EAX,0x10                        ; 00407d88
    PUSH EAX                            ; 00407d8b
    MOV EAX,[0x0072ff48]                ; 00407d8c | DAT_0072ff48
    SAR EAX,0x10                        ; 00407d91
    PUSH EAX                            ; 00407d94
    MOV EAX,[0x0072ff44]                ; 00407d95 | DAT_0072ff44
    SAR EAX,0x10                        ; 00407d9a
    PUSH EAX                            ; 00407d9d
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00407d9e
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00407da3
    ADD ESP,0x30                        ; 00407da6
    POP EBP                             ; 00407da9
    POP EDI                             ; 00407daa
    POP ESI                             ; 00407dab
    POP EBX                             ; 00407dac
    RET                                 ; 00407dad


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_clipAndDrawLine2D_FUN_00407af0(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
;
; XREF[6]:
;   core_skeleton.cpp_FUN_00564b1c at 00564c4d
;   engine_3d.c_drawLine2DFromIndices_FUN_00407a70 at 00407ad5
;   engine_3d.c_drawLineStrip2D_FUN_00404440 at 004044c6
;   shape_edittool.cpp_FUN_00498360 at 00498458
;   shape_edittool.cpp_FUN_00498660 at 00498792
;   shape_edittool.cpp_FUN_004987ae at 00498a2c
;
; Referenced Globals:
;   undefined4 DAT_007135b4
;   undefined4 DAT_007135b8
;   undefined4 DAT_007135c4
;   undefined4 DAT_007135c8
;   undefined4 DAT_007135e4
;   undefined4 DAT_007135e8
;   undefined4 DAT_007135f4
;   undefined4 DAT_007135f8
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;   engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0
;   engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0
;   engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0
;   engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0
;   engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407af0
        ;   Label: engine_3d.c_clipAndDrawLine2D_FUN_00407af0
    PUSH ESI                            ; 00407af1
    PUSH EDI                            ; 00407af2
    PUSH EBP                            ; 00407af3
    SUB ESP,0x30                        ; 00407af4
    MOV EAX,dword ptr [ESP + 0x54]      ; 00407af7
    AND EAX,dword ptr [ESP + 0x84]      ; 00407afb
    TEST EAX,0x80000000                 ; 00407b02
    JNZ 0x00407cf7                      ; 00407b07
        ;   XREF to: 00407cf7 (CONDITIONAL_JUMP)  ; LAB_00407cf7
    XOR EBX,EBX                         ; 00407b0d
        ;   Label: LAB_00407b0d
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407b0f
        ;   Label: LAB_00407b0f
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407b13
    JLE 0x00407b40                      ; 00407b17
        ;   XREF to: 00407b40 (CONDITIONAL_JUMP)  ; LAB_00407b40
    MOV EAX,ESP                         ; 00407b19
    PUSH EAX                            ; 00407b1b
    LEA EAX,[ESP + 0x78]                ; 00407b1c
    PUSH EAX                            ; 00407b20
    LEA EAX,[ESP + 0x4c]                ; 00407b21
    PUSH EAX                            ; 00407b25
    LEA EDI,[ESP + 0x80]                ; 00407b26
    LEA ESI,[ESP + 0xc]                 ; 00407b2d
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0 ; 00407b31
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0()
    MOV ECX,0xc                         ; 00407b36
    ADD ESP,0xc                         ; 00407b3b
    MOVSD.REP ES:EDI,ESI                ; 00407b3e
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407b40
        ;   Label: LAB_00407b40
    MOV ESI,dword ptr [ESP + 0x74]      ; 00407b44
    NEG EAX                             ; 00407b48
    CMP EAX,ESI                         ; 00407b4a
    JLE 0x00407b75                      ; 00407b4c
        ;   XREF to: 00407b75 (CONDITIONAL_JUMP)  ; LAB_00407b75
    MOV EAX,ESP                         ; 00407b4e
    PUSH EAX                            ; 00407b50
    LEA EAX,[ESP + 0x78]                ; 00407b51
    PUSH EAX                            ; 00407b55
    LEA EAX,[ESP + 0x4c]                ; 00407b56
    PUSH EAX                            ; 00407b5a
    LEA EDI,[ESP + 0x80]                ; 00407b5b
    LEA ESI,[ESP + 0xc]                 ; 00407b62
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0 ; 00407b66
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0()
    MOV ECX,0xc                         ; 00407b6b
    ADD ESP,0xc                         ; 00407b70
    MOVSD.REP ES:EDI,ESI                ; 00407b73
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407b75
        ;   Label: LAB_00407b75
    CMP EAX,dword ptr [ESP + 0x7c]      ; 00407b79
    JLE 0x00407ba6                      ; 00407b7d
        ;   XREF to: 00407ba6 (CONDITIONAL_JUMP)  ; LAB_00407ba6
    MOV EAX,ESP                         ; 00407b7f
    PUSH EAX                            ; 00407b81
    LEA EAX,[ESP + 0x78]                ; 00407b82
    PUSH EAX                            ; 00407b86
    LEA EAX,[ESP + 0x4c]                ; 00407b87
    PUSH EAX                            ; 00407b8b
    LEA EDI,[ESP + 0x80]                ; 00407b8c
    LEA ESI,[ESP + 0xc]                 ; 00407b93
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0 ; 00407b97
        ;   XREF to: 0043b6b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0()
    MOV ECX,0xc                         ; 00407b9c
    ADD ESP,0xc                         ; 00407ba1
    MOVSD.REP ES:EDI,ESI                ; 00407ba4
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00407ba6
        ;   Label: LAB_00407ba6
    MOV EBP,dword ptr [ESP + 0x78]      ; 00407baa
    NEG EAX                             ; 00407bae
    CMP EAX,EBP                         ; 00407bb0
    JLE 0x00407bdb                      ; 00407bb2
        ;   XREF to: 00407bdb (CONDITIONAL_JUMP)  ; LAB_00407bdb
    MOV EAX,ESP                         ; 00407bb4
    PUSH EAX                            ; 00407bb6
    LEA EAX,[ESP + 0x78]                ; 00407bb7
    PUSH EAX                            ; 00407bbb
    LEA EAX,[ESP + 0x4c]                ; 00407bbc
    PUSH EAX                            ; 00407bc0
    LEA EDI,[ESP + 0x80]                ; 00407bc1
    LEA ESI,[ESP + 0xc]                 ; 00407bc8
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0 ; 00407bcc
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0()
    MOV ECX,0xc                         ; 00407bd1
    ADD ESP,0xc                         ; 00407bd6
    MOVSD.REP ES:EDI,ESI                ; 00407bd9
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407bdb
        ;   Label: LAB_00407bdb
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407bdf
    JLE 0x00407c09                      ; 00407be3
        ;   XREF to: 00407c09 (CONDITIONAL_JUMP)  ; LAB_00407c09
    MOV EAX,ESP                         ; 00407be5
    PUSH EAX                            ; 00407be7
    LEA EAX,[ESP + 0x48]                ; 00407be8
    PUSH EAX                            ; 00407bec
    LEA EAX,[ESP + 0x7c]                ; 00407bed
    PUSH EAX                            ; 00407bf1
    LEA EDI,[ESP + 0x50]                ; 00407bf2
    LEA ESI,[ESP + 0xc]                 ; 00407bf6
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0 ; 00407bfa
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0()
    MOV ECX,0xc                         ; 00407bff
    ADD ESP,0xc                         ; 00407c04
    MOVSD.REP ES:EDI,ESI                ; 00407c07
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407c09
        ;   Label: LAB_00407c09
    MOV ECX,dword ptr [ESP + 0x44]      ; 00407c0d
    NEG EAX                             ; 00407c11
    CMP EAX,ECX                         ; 00407c13
    JLE 0x00407c3b                      ; 00407c15
        ;   XREF to: 00407c3b (CONDITIONAL_JUMP)  ; LAB_00407c3b
    MOV EAX,ESP                         ; 00407c17
    PUSH EAX                            ; 00407c19
    LEA EAX,[ESP + 0x48]                ; 00407c1a
    PUSH EAX                            ; 00407c1e
    LEA EAX,[ESP + 0x7c]                ; 00407c1f
    PUSH EAX                            ; 00407c23
    LEA EDI,[ESP + 0x50]                ; 00407c24
    LEA ESI,[ESP + 0xc]                 ; 00407c28
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0 ; 00407c2c
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0()
    MOV ECX,0xc                         ; 00407c31
    ADD ESP,0xc                         ; 00407c36
    MOVSD.REP ES:EDI,ESI                ; 00407c39
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407c3b
        ;   Label: LAB_00407c3b
    CMP EAX,dword ptr [ESP + 0x4c]      ; 00407c3f
    JLE 0x00407c69                      ; 00407c43
        ;   XREF to: 00407c69 (CONDITIONAL_JUMP)  ; LAB_00407c69
    MOV EAX,ESP                         ; 00407c45
    PUSH EAX                            ; 00407c47
    LEA EAX,[ESP + 0x48]                ; 00407c48
    PUSH EAX                            ; 00407c4c
    LEA EAX,[ESP + 0x7c]                ; 00407c4d
    PUSH EAX                            ; 00407c51
    LEA EDI,[ESP + 0x50]                ; 00407c52
    LEA ESI,[ESP + 0xc]                 ; 00407c56
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0 ; 00407c5a
        ;   XREF to: 0043b6b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0()
    MOV ECX,0xc                         ; 00407c5f
    ADD ESP,0xc                         ; 00407c64
    MOVSD.REP ES:EDI,ESI                ; 00407c67
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00407c69
        ;   Label: LAB_00407c69
    MOV EDI,dword ptr [ESP + 0x48]      ; 00407c6d
    NEG EAX                             ; 00407c71
    CMP EAX,EDI                         ; 00407c73
    JLE 0x00407c9b                      ; 00407c75
        ;   XREF to: 00407c9b (CONDITIONAL_JUMP)  ; LAB_00407c9b
    MOV EAX,ESP                         ; 00407c77
    PUSH EAX                            ; 00407c79
    LEA EAX,[ESP + 0x48]                ; 00407c7a
    PUSH EAX                            ; 00407c7e
    LEA EAX,[ESP + 0x7c]                ; 00407c7f
    PUSH EAX                            ; 00407c83
    LEA EDI,[ESP + 0x50]                ; 00407c84
    LEA ESI,[ESP + 0xc]                 ; 00407c88
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0 ; 00407c8c
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0()
    MOV ECX,0xc                         ; 00407c91
    ADD ESP,0xc                         ; 00407c96
    MOVSD.REP ES:EDI,ESI                ; 00407c99
    INC EBX                             ; 00407c9b
        ;   Label: LAB_00407c9b
    CMP EBX,0x2                         ; 00407c9c
    JL 0x00407b0f                       ; 00407c9f
        ;   XREF to: 00407b0f (CONDITIONAL_JUMP)  ; LAB_00407b0f
    MOV EAX,dword ptr [ESP + 0x44]      ; 00407ca5
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00407ca9
    CMP EAX,EBP                         ; 00407cad
    JG 0x00407cef                       ; 00407caf
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    MOV EBX,EBP                         ; 00407cb1
    NEG EBX                             ; 00407cb3
    CMP EBX,EAX                         ; 00407cb5
    JG 0x00407cef                       ; 00407cb7
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    MOV EAX,dword ptr [ESP + 0x48]      ; 00407cb9
    CMP EAX,EBP                         ; 00407cbd
    JG 0x00407cef                       ; 00407cbf
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    CMP EBX,EAX                         ; 00407cc1
    JG 0x00407cef                       ; 00407cc3
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    MOV EAX,dword ptr [ESP + 0x74]      ; 00407cc5
    MOV EBX,dword ptr [ESP + 0x7c]      ; 00407cc9
    CMP EAX,EBX                         ; 00407ccd
    JG 0x00407cef                       ; 00407ccf
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    NEG EBX                             ; 00407cd1
    CMP EBX,EAX                         ; 00407cd3
    JG 0x00407cef                       ; 00407cd5
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    MOV EAX,dword ptr [ESP + 0x78]      ; 00407cd7
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00407cdb
    CMP EAX,EDI                         ; 00407cdf
    JG 0x00407cef                       ; 00407ce1
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    CMP EBX,EAX                         ; 00407ce3
    JG 0x00407cef                       ; 00407ce5
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    TEST EBP,EBP                        ; 00407ce7
    JLE 0x00407cef                      ; 00407ce9
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    TEST EDI,EDI                        ; 00407ceb
    JG 0x00407d00                       ; 00407ced
        ;   XREF to: 00407d00 (CONDITIONAL_JUMP)  ; LAB_00407d00
    ADD ESP,0x30                        ; 00407cef
        ;   Label: LAB_00407cef
    POP EBP                             ; 00407cf2
    POP EDI                             ; 00407cf3
    POP ESI                             ; 00407cf4
    POP EBX                             ; 00407cf5
    RET                                 ; 00407cf6
    TEST AL,0xff                        ; 00407cf7
        ;   Label: LAB_00407cf7
    JNZ 0x00407cef                      ; 00407cf9
        ;   XREF to: 00407cef (CONDITIONAL_JUMP)  ; LAB_00407cef
    JMP 0x00407b0d                      ; 00407cfb
        ;   XREF to: 00407b0d (UNCONDITIONAL_JUMP)  ; LAB_00407b0d
    MOV ECX,0xc                         ; 00407d00
        ;   Label: LAB_00407d00
    LEA ESI,[ESP + 0x44]                ; 00407d05
    MOV EDI,0x7135b4                    ; 00407d09 | DAT_007135b4
    MOVSD.REP ES:EDI,ESI                ; 00407d0e | DAT_007135b4 | DAT_007135b8
    MOV ECX,0xc                         ; 00407d10
    LEA ESI,[ESP + 0x74]                ; 00407d15
    MOV EDI,0x7135e4                    ; 00407d19 | DAT_007135e4
    PUSH 0x4e1e                         ; 00407d1e
    MOVSD.REP ES:EDI,ESI                ; 00407d23 | DAT_007135e4 | DAT_007135e8
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0 ; 00407d25
        ;   XREF to: 00507bf0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)
    ADD ESP,0x4                         ; 00407d2a
    PUSH 0x4e1f                         ; 00407d2d
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0 ; 00407d32
        ;   XREF to: 00507bf0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)
    MOV EAX,[0x007135f8]                ; 00407d37 | DAT_007135f8
    ADD ESP,0x4                         ; 00407d3c
    SAR EAX,0x10                        ; 00407d3f
    PUSH EAX                            ; 00407d42
    MOV EAX,[0x007135f4]                ; 00407d43 | DAT_007135f4
    SAR EAX,0x10                        ; 00407d48
    PUSH EAX                            ; 00407d4b
    MOV EAX,[0x007135c8]                ; 00407d4c | DAT_007135c8
    SAR EAX,0x10                        ; 00407d51
    PUSH EAX                            ; 00407d54
    MOV EAX,[0x007135c4]                ; 00407d55 | DAT_007135c4
    SAR EAX,0x10                        ; 00407d5a
    PUSH EAX                            ; 00407d5d
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 00407d5e
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 00407d63
    ADD ESP,0x30                        ; 00407d66
    POP EBP                             ; 00407d69
    POP EDI                             ; 00407d6a
    POP ESI                             ; 00407d6b
    POP EBX                             ; 00407d6c
    RET                                 ; 00407d6d


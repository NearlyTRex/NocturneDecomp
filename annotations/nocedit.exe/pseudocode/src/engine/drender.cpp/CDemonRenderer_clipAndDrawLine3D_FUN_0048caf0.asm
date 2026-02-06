; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0 (CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index1
; int              Stack[0xc]:4   vertex_index2
; Local Variables:
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined1       Stack[-0x70]:1  local_70
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
;
; XREF[7]:
;   core_bugs.cpp_FUN_00425340 at 0042546d
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043d7bf
;   core_cloth.cpp_CCloth_renderBone_FUN_0043b7e0 at 0043b982
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 005839c1
;   core_setedit.cpp_FUN_00582930 at 00582bec
;   core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0 at 0059b607
;   core_tvbat.cpp_CTVBat_renderOpaque_FUN_005e4d80 at 005e5007
;
; Referenced Globals:
;   int g_CurrentPolygonColor
;   int g_ActiveRenderColor
;
; Called Functions:
;   engine_2d.c_drawLine3D_FUN_00401320
;   engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00
;   engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00
;   engine_clipper.c_interpolateVertexRightClip_FUN_00435b00
;   engine_clipper.c_interpolateVertexTopClip_FUN_00435d00
;   engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60
;   engine_prim.c_replaceWWithDepth_FUN_00552110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048caf0
        ;   Label: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
    PUSH ESI                            ; 0048caf1
    PUSH EDI                            ; 0048caf2
    PUSH EBP                            ; 0048caf3
    SUB ESP,0x90                        ; 0048caf4
    MOV EBP,dword ptr [ESP + 0xa4]      ; 0048cafa
    MOV EAX,[0x00772a5c]                ; 0048cb01 | g_CurrentPolygonColor
    MOV EBX,dword ptr [ESP + 0xa8]      ; 0048cb06
    MOV [0x02d02570],EAX                ; 0048cb0d | g_ActiveRenderColor
    LEA EAX,[EBX*0x4 + 0x0]             ; 0048cb12
    MOV ECX,0xc                         ; 0048cb19
    SUB EAX,EBX                         ; 0048cb1e
    MOV ESI,dword ptr [EBP]             ; 0048cb20
    SHL EAX,0x4                         ; 0048cb23
    LEA EDI,[ESP + 0x60]                ; 0048cb26
    ADD ESI,EAX                         ; 0048cb2a
    MOV EBX,dword ptr [ESP + 0xac]      ; 0048cb2c
    MOVSD.REP ES:EDI,ESI                ; 0048cb33
    LEA EAX,[EBX*0x4 + 0x0]             ; 0048cb35
    MOV ECX,0xc                         ; 0048cb3c
    SUB EAX,EBX                         ; 0048cb41
    MOV ESI,dword ptr [EBP]             ; 0048cb43
    SHL EAX,0x4                         ; 0048cb46
    MOV EDI,ESP                         ; 0048cb49
    ADD ESI,EAX                         ; 0048cb4b
    MOVSD.REP ES:EDI,ESI                ; 0048cb4d
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048cb4f
    AND EAX,dword ptr [ESP + 0x10]      ; 0048cb53
    TEST EAX,0x80000000                 ; 0048cb57
    JNZ 0x0048cd4e                      ; 0048cb5c
        ;   XREF to: 0048cd4e (CONDITIONAL_JUMP)  ; LAB_0048cd4e
    XOR EBX,EBX                         ; 0048cb62
        ;   Label: LAB_0048cb62
    MOV EAX,dword ptr [ESP]             ; 0048cb64
        ;   Label: LAB_0048cb64
    CMP EAX,dword ptr [ESP + 0x8]       ; 0048cb67
    JLE 0x0048cb93                      ; 0048cb6b
        ;   XREF to: 0048cb93 (CONDITIONAL_JUMP)  ; LAB_0048cb93
    LEA EAX,[ESP + 0x30]                ; 0048cb6d
    PUSH EAX                            ; 0048cb71
    LEA EAX,[ESP + 0x4]                 ; 0048cb72
    PUSH EAX                            ; 0048cb76
    LEA EAX,[ESP + 0x68]                ; 0048cb77
    PUSH EAX                            ; 0048cb7b
    LEA EDI,[ESP + 0xc]                 ; 0048cb7c
    LEA ESI,[ESP + 0x3c]                ; 0048cb80
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 0048cb84
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 0048cb89
    ADD ESP,0xc                         ; 0048cb8e
    MOVSD.REP ES:EDI,ESI                ; 0048cb91
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048cb93
        ;   Label: LAB_0048cb93
    MOV ESI,dword ptr [ESP]             ; 0048cb97
    NEG EAX                             ; 0048cb9a
    CMP EAX,ESI                         ; 0048cb9c
    JLE 0x0048cbc6                      ; 0048cb9e
        ;   XREF to: 0048cbc6 (CONDITIONAL_JUMP)  ; LAB_0048cbc6
    LEA EAX,[ESP + 0x30]                ; 0048cba0
    PUSH EAX                            ; 0048cba4
    LEA EAX,[ESP + 0x4]                 ; 0048cba5
    PUSH EAX                            ; 0048cba9
    LEA EAX,[ESP + 0x68]                ; 0048cbaa
    PUSH EAX                            ; 0048cbae
    LEA EDI,[ESP + 0xc]                 ; 0048cbaf
    LEA ESI,[ESP + 0x3c]                ; 0048cbb3
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 0048cbb7
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 0048cbbc
    ADD ESP,0xc                         ; 0048cbc1
    MOVSD.REP ES:EDI,ESI                ; 0048cbc4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048cbc6
        ;   Label: LAB_0048cbc6
    CMP EAX,dword ptr [ESP + 0x8]       ; 0048cbca
    JLE 0x0048cbf6                      ; 0048cbce
        ;   XREF to: 0048cbf6 (CONDITIONAL_JUMP)  ; LAB_0048cbf6
    LEA EAX,[ESP + 0x30]                ; 0048cbd0
    PUSH EAX                            ; 0048cbd4
    LEA EAX,[ESP + 0x4]                 ; 0048cbd5
    PUSH EAX                            ; 0048cbd9
    LEA EAX,[ESP + 0x68]                ; 0048cbda
    PUSH EAX                            ; 0048cbde
    LEA EDI,[ESP + 0xc]                 ; 0048cbdf
    LEA ESI,[ESP + 0x3c]                ; 0048cbe3
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 0048cbe7
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 0048cbec
    ADD ESP,0xc                         ; 0048cbf1
    MOVSD.REP ES:EDI,ESI                ; 0048cbf4
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048cbf6
        ;   Label: LAB_0048cbf6
    MOV EDX,dword ptr [ESP + 0x4]       ; 0048cbfa
    NEG EAX                             ; 0048cbfe
    CMP EAX,EDX                         ; 0048cc00
    JLE 0x0048cc2a                      ; 0048cc02
        ;   XREF to: 0048cc2a (CONDITIONAL_JUMP)  ; LAB_0048cc2a
    LEA EAX,[ESP + 0x30]                ; 0048cc04
    PUSH EAX                            ; 0048cc08
    LEA EAX,[ESP + 0x4]                 ; 0048cc09
    PUSH EAX                            ; 0048cc0d
    LEA EAX,[ESP + 0x68]                ; 0048cc0e
    PUSH EAX                            ; 0048cc12
    LEA EDI,[ESP + 0xc]                 ; 0048cc13
    LEA ESI,[ESP + 0x3c]                ; 0048cc17
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 0048cc1b
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 0048cc20
    ADD ESP,0xc                         ; 0048cc25
    MOVSD.REP ES:EDI,ESI                ; 0048cc28
    MOV EAX,dword ptr [ESP + 0x60]      ; 0048cc2a
        ;   Label: LAB_0048cc2a
    CMP EAX,dword ptr [ESP + 0x68]      ; 0048cc2e
    JLE 0x0048cc5a                      ; 0048cc32
        ;   XREF to: 0048cc5a (CONDITIONAL_JUMP)  ; LAB_0048cc5a
    LEA EAX,[ESP + 0x30]                ; 0048cc34
    PUSH EAX                            ; 0048cc38
    LEA EAX,[ESP + 0x64]                ; 0048cc39
    PUSH EAX                            ; 0048cc3d
    LEA EAX,[ESP + 0x8]                 ; 0048cc3e
    PUSH EAX                            ; 0048cc42
    LEA EDI,[ESP + 0x6c]                ; 0048cc43
    LEA ESI,[ESP + 0x3c]                ; 0048cc47
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00 ; 0048cc4b
        ;   XREF to: 00435a00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_00435a00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 0048cc50
    ADD ESP,0xc                         ; 0048cc55
    MOVSD.REP ES:EDI,ESI                ; 0048cc58
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048cc5a
        ;   Label: LAB_0048cc5a
    MOV ESI,dword ptr [ESP + 0x60]      ; 0048cc5e
    NEG EAX                             ; 0048cc62
    CMP EAX,ESI                         ; 0048cc64
    JLE 0x0048cc8e                      ; 0048cc66
        ;   XREF to: 0048cc8e (CONDITIONAL_JUMP)  ; LAB_0048cc8e
    LEA EAX,[ESP + 0x30]                ; 0048cc68
    PUSH EAX                            ; 0048cc6c
    LEA EAX,[ESP + 0x64]                ; 0048cc6d
    PUSH EAX                            ; 0048cc71
    LEA EAX,[ESP + 0x8]                 ; 0048cc72
    PUSH EAX                            ; 0048cc76
    LEA EDI,[ESP + 0x6c]                ; 0048cc77
    LEA ESI,[ESP + 0x3c]                ; 0048cc7b
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_00435b00 ; 0048cc7f
        ;   XREF to: 00435b00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_00435b00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 0048cc84
    ADD ESP,0xc                         ; 0048cc89
    MOVSD.REP ES:EDI,ESI                ; 0048cc8c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048cc8e
        ;   Label: LAB_0048cc8e
    CMP EAX,dword ptr [ESP + 0x68]      ; 0048cc92
    JLE 0x0048ccbe                      ; 0048cc96
        ;   XREF to: 0048ccbe (CONDITIONAL_JUMP)  ; LAB_0048ccbe
    LEA EAX,[ESP + 0x30]                ; 0048cc98
    PUSH EAX                            ; 0048cc9c
    LEA EAX,[ESP + 0x64]                ; 0048cc9d
    PUSH EAX                            ; 0048cca1
    LEA EAX,[ESP + 0x8]                 ; 0048cca2
    PUSH EAX                            ; 0048cca6
    LEA EDI,[ESP + 0x6c]                ; 0048cca7
    LEA ESI,[ESP + 0x3c]                ; 0048ccab
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00 ; 0048ccaf
        ;   XREF to: 00435c00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_00435c00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 0048ccb4
    ADD ESP,0xc                         ; 0048ccb9
    MOVSD.REP ES:EDI,ESI                ; 0048ccbc
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048ccbe
        ;   Label: LAB_0048ccbe
    MOV EDX,dword ptr [ESP + 0x64]      ; 0048ccc2
    NEG EAX                             ; 0048ccc6
    CMP EAX,EDX                         ; 0048ccc8
    JLE 0x0048ccf2                      ; 0048ccca
        ;   XREF to: 0048ccf2 (CONDITIONAL_JUMP)  ; LAB_0048ccf2
    LEA EAX,[ESP + 0x30]                ; 0048cccc
    PUSH EAX                            ; 0048ccd0
    LEA EAX,[ESP + 0x64]                ; 0048ccd1
    PUSH EAX                            ; 0048ccd5
    LEA EAX,[ESP + 0x8]                 ; 0048ccd6
    PUSH EAX                            ; 0048ccda
    LEA EDI,[ESP + 0x6c]                ; 0048ccdb
    LEA ESI,[ESP + 0x3c]                ; 0048ccdf
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_00435d00 ; 0048cce3
        ;   XREF to: 00435d00 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_00435d00(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 0048cce8
    ADD ESP,0xc                         ; 0048cced
    MOVSD.REP ES:EDI,ESI                ; 0048ccf0
    INC EBX                             ; 0048ccf2
        ;   Label: LAB_0048ccf2
    CMP EBX,0x2                         ; 0048ccf3
    JL 0x0048cb64                       ; 0048ccf6
        ;   XREF to: 0048cb64 (CONDITIONAL_JUMP)  ; LAB_0048cb64
    MOV EAX,dword ptr [ESP + 0x60]      ; 0048ccfc
    MOV ECX,dword ptr [ESP + 0x68]      ; 0048cd00
    CMP EAX,ECX                         ; 0048cd04
    JG 0x0048cd43                       ; 0048cd06
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    MOV EBX,ECX                         ; 0048cd08
    NEG EBX                             ; 0048cd0a
    CMP EBX,EAX                         ; 0048cd0c
    JG 0x0048cd43                       ; 0048cd0e
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048cd10
    CMP EAX,ECX                         ; 0048cd14
    JG 0x0048cd43                       ; 0048cd16
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    CMP EBX,EAX                         ; 0048cd18
    JG 0x0048cd43                       ; 0048cd1a
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    MOV EAX,dword ptr [ESP]             ; 0048cd1c
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048cd1f
    CMP EAX,EDX                         ; 0048cd23
    JG 0x0048cd43                       ; 0048cd25
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    MOV EBX,EDX                         ; 0048cd27
    NEG EBX                             ; 0048cd29
    CMP EBX,EAX                         ; 0048cd2b
    JG 0x0048cd43                       ; 0048cd2d
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048cd2f
    CMP EAX,EDX                         ; 0048cd33
    JG 0x0048cd43                       ; 0048cd35
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    CMP EBX,EAX                         ; 0048cd37
    JG 0x0048cd43                       ; 0048cd39
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    TEST ECX,ECX                        ; 0048cd3b
    JLE 0x0048cd43                      ; 0048cd3d
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    TEST EDX,EDX                        ; 0048cd3f
    JG 0x0048cd57                       ; 0048cd41
        ;   XREF to: 0048cd57 (CONDITIONAL_JUMP)  ; LAB_0048cd57
    ADD ESP,0x90                        ; 0048cd43
        ;   Label: LAB_0048cd43
    POP EBP                             ; 0048cd49
    POP EDI                             ; 0048cd4a
    POP ESI                             ; 0048cd4b
    POP EBX                             ; 0048cd4c
    RET                                 ; 0048cd4d
    TEST AL,0xff                        ; 0048cd4e
        ;   Label: LAB_0048cd4e
    JNZ 0x0048cd43                      ; 0048cd50
        ;   XREF to: 0048cd43 (CONDITIONAL_JUMP)  ; LAB_0048cd43
    JMP 0x0048cb62                      ; 0048cd52
        ;   XREF to: 0048cb62 (UNCONDITIONAL_JUMP)  ; LAB_0048cb62
    MOV ECX,0xc                         ; 0048cd57
        ;   Label: LAB_0048cd57
    MOV EDI,dword ptr [EBP]             ; 0048cd5c
    LEA ESI,[ESP + 0x60]                ; 0048cd5f
    ADD EDI,0xea5a0                     ; 0048cd63
    MOVSD.REP ES:EDI,ESI                ; 0048cd69
    MOV ECX,0xc                         ; 0048cd6b
    MOV EDI,dword ptr [EBP]             ; 0048cd70
    MOV ESI,ESP                         ; 0048cd73
    ADD EDI,0xea5d0                     ; 0048cd75
    PUSH 0x4e1e                         ; 0048cd7b
    MOVSD.REP ES:EDI,ESI                ; 0048cd80
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 0048cd82
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
    ADD ESP,0x4                         ; 0048cd87
    PUSH 0x4e1f                         ; 0048cd8a
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 0048cd8f
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
    ADD ESP,0x4                         ; 0048cd94
    MOV EAX,dword ptr [EBP]             ; 0048cd97
    PUSH 0x2                            ; 0048cd9a
    ADD EAX,0xea5a0                     ; 0048cd9c
    PUSH EAX                            ; 0048cda1
    CALL engine_prim.c_replaceWWithDepth_FUN_00552110 ; 0048cda2
        ;   XREF to: 00552110 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_00552110(SRenderVertex * vertices, int vertex_count)
    MOV EBX,dword ptr [EBP]             ; 0048cda7
    LEA EAX,[EBX + 0xea5d0]             ; 0048cdaa
    ADD ESP,0x8                         ; 0048cdb0
    MOV ECX,dword ptr [EAX + 0x8]       ; 0048cdb3
    MOV ESI,dword ptr [EAX + 0x14]      ; 0048cdb6
    PUSH ECX                            ; 0048cdb9
    SAR ESI,0x10                        ; 0048cdba
    MOV EAX,dword ptr [EAX + 0x10]      ; 0048cdbd
    PUSH ESI                            ; 0048cdc0
    SAR EAX,0x10                        ; 0048cdc1
    PUSH EAX                            ; 0048cdc4
    LEA EAX,[EBX + 0xea5a0]             ; 0048cdc5
    MOV EBX,dword ptr [EAX + 0x8]       ; 0048cdcb
    PUSH EBX                            ; 0048cdce
    MOV EBX,dword ptr [EAX + 0x14]      ; 0048cdcf
    SAR EBX,0x10                        ; 0048cdd2
    MOV EAX,dword ptr [EAX + 0x10]      ; 0048cdd5
    PUSH EBX                            ; 0048cdd8
    SAR EAX,0x10                        ; 0048cdd9
    PUSH EAX                            ; 0048cddc
    CALL engine_2d.c_drawLine3D_FUN_00401320 ; 0048cddd
        ;   XREF to: 00401320 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine3D_FUN_00401320(int x1, int y1, uint z1, int x2, ...)
    ADD ESP,0x18                        ; 0048cde2
    ADD ESP,0x90                        ; 0048cde5
    POP EBP                             ; 0048cdeb
    POP EDI                             ; 0048cdec
    POP ESI                             ; 0048cded
    POP EBX                             ; 0048cdee
    RET                                 ; 0048cdef


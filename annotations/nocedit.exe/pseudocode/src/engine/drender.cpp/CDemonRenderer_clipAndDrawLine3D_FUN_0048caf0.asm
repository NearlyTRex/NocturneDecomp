; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index1
; int              Stack[0xc]:4   vertex_index2
; Local Variables:
; SRenderVertex    Stack[-0xa0]:48  local_a0
; SRenderVertex    Stack[-0x70]:48  local_70
; SRenderVertex    Stack[-0x40]:48  local_40
;
; XREF[7]:
;   core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_00425340 at 0042546d
;   core_cloth.cpp_CCloth_lockedVertexEditor_FUN_0043d590 at 0043d7bf
;   core_cloth.cpp_CCloth_renderBone_FUN_0043b7e0 at 0043b982
;   core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170 at 005839c1
;   core_setedit.cpp_drawCameraFrustum_FUN_00582930 at 00582bec
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
    JMP 0x03fc0732                      ; 0048cb19
        ;   XREF to: 03fc0732 (UNCONDITIONAL_JUMP)  ; LAB_03fc0732
    LEA EAX,[EBX*0x4 + 0x0]             ; 0048cb35
        ;   Label: LAB_0048cb35
    JMP 0x03fc079f                      ; 0048cb3c
        ;   XREF to: 03fc079f (UNCONDITIONAL_JUMP)  ; LAB_03fc079f
    MOV EAX,dword ptr [ESP + 0x70]      ; 0048cb4f
        ;   Label: LAB_0048cb4f
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
    JMP 0x03fc0803                      ; 0048cb89
        ;   XREF to: 03fc0803 (UNCONDITIONAL_JUMP)  ; LAB_03fc0803
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
    JMP 0x03fc085e                      ; 0048cbbc
        ;   XREF to: 03fc085e (UNCONDITIONAL_JUMP)  ; LAB_03fc085e
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
    JMP 0x03fc08b9                      ; 0048cbec
        ;   XREF to: 03fc08b9 (UNCONDITIONAL_JUMP)  ; LAB_03fc08b9
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
    JMP 0x03fc0914                      ; 0048cc20
        ;   XREF to: 03fc0914 (UNCONDITIONAL_JUMP)  ; LAB_03fc0914
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
    JMP 0x03fc096f                      ; 0048cc50
        ;   XREF to: 03fc096f (UNCONDITIONAL_JUMP)  ; LAB_03fc096f
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
    JMP 0x03fc09ca                      ; 0048cc84
        ;   XREF to: 03fc09ca (UNCONDITIONAL_JUMP)  ; LAB_03fc09ca
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
    JMP 0x03fc0a25                      ; 0048ccb4
        ;   XREF to: 03fc0a25 (UNCONDITIONAL_JUMP)  ; LAB_03fc0a25
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
    JMP 0x03fc0a80                      ; 0048cce8
        ;   XREF to: 03fc0a80 (UNCONDITIONAL_JUMP)  ; LAB_03fc0a80
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
    JMP 0x03fc0adb                      ; 0048cd57
        ;   XREF to: 03fc0adb (UNCONDITIONAL_JUMP)  ; LAB_03fc0adb
        ;   Label: LAB_0048cd57
    JMP 0x03fc0b40                      ; 0048cd6b
        ;   XREF to: 03fc0b40 (UNCONDITIONAL_JUMP)  ; LAB_03fc0b40
        ;   Label: LAB_0048cd6b
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60 ; 0048cd82
        ;   XREF to: 0050ce60 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_0050ce60(int cache_index)
        ;   Label: LAB_0048cd82
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
    MOV ECX,0xc                         ; 03fc0732
        ;   Label: LAB_03fc0732
    SUB EAX,EBX                         ; 03fc0737
    MOV ESI,dword ptr [EBP]             ; 03fc0739
    SHL EAX,0x4                         ; 03fc073c
    LEA EDI,[ESP + 0x60]                ; 03fc073f
    ADD ESI,EAX                         ; 03fc0743
    MOV EBX,dword ptr [ESP + 0xac]      ; 03fc0745
    MOV ECX,dword ptr [ESI]             ; 03fc074c
    MOV dword ptr [EDI],ECX             ; 03fc074e
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0750
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0753
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0756
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0759
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc075c
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc075f
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0762
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0765
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0768
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc076b
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc076e
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0771
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0774
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0777
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc077a
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc077d
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0780
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0783
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0786
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0789
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc078c
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc078f
    ADD ESI,0x30                        ; 03fc0792
    ADD EDI,0x30                        ; 03fc0795
    XOR ECX,ECX                         ; 03fc0798
    JMP 0x0048cb35                      ; 03fc079a
        ;   XREF to: 0048cb35 (UNCONDITIONAL_JUMP)  ; LAB_0048cb35
    MOV ECX,0xc                         ; 03fc079f
        ;   Label: LAB_03fc079f
    SUB EAX,EBX                         ; 03fc07a4
    MOV ESI,dword ptr [EBP]             ; 03fc07a6
    SHL EAX,0x4                         ; 03fc07a9
    MOV EDI,ESP                         ; 03fc07ac
    ADD ESI,EAX                         ; 03fc07ae
    MOV ECX,dword ptr [ESI]             ; 03fc07b0
    MOV dword ptr [EDI],ECX             ; 03fc07b2
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc07b4
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc07b7
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc07ba
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc07bd
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc07c0
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc07c3
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc07c6
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc07c9
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc07cc
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc07cf
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc07d2
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc07d5
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc07d8
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc07db
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc07de
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc07e1
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc07e4
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc07e7
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc07ea
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc07ed
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc07f0
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc07f3
    ADD ESI,0x30                        ; 03fc07f6
    ADD EDI,0x30                        ; 03fc07f9
    XOR ECX,ECX                         ; 03fc07fc
    JMP 0x0048cb4f                      ; 03fc07fe
        ;   XREF to: 0048cb4f (UNCONDITIONAL_JUMP)  ; LAB_0048cb4f
    MOV ECX,0xc                         ; 03fc0803
        ;   Label: LAB_03fc0803
    ADD ESP,0xc                         ; 03fc0808
    MOV ECX,dword ptr [ESI]             ; 03fc080b
    MOV dword ptr [EDI],ECX             ; 03fc080d
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc080f
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0812
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0815
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0818
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc081b
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc081e
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0821
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0824
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0827
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc082a
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc082d
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0830
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0833
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0836
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0839
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc083c
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc083f
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0842
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0845
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0848
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc084b
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc084e
    ADD ESI,0x30                        ; 03fc0851
    ADD EDI,0x30                        ; 03fc0854
    XOR ECX,ECX                         ; 03fc0857
    JMP 0x0048cb93                      ; 03fc0859
        ;   XREF to: 0048cb93 (UNCONDITIONAL_JUMP)  ; LAB_0048cb93
    MOV ECX,0xc                         ; 03fc085e
        ;   Label: LAB_03fc085e
    ADD ESP,0xc                         ; 03fc0863
    MOV ECX,dword ptr [ESI]             ; 03fc0866
    MOV dword ptr [EDI],ECX             ; 03fc0868
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc086a
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc086d
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0870
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0873
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0876
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0879
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc087c
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc087f
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0882
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0885
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0888
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc088b
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc088e
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0891
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0894
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0897
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc089a
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc089d
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc08a0
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc08a3
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc08a6
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc08a9
    ADD ESI,0x30                        ; 03fc08ac
    ADD EDI,0x30                        ; 03fc08af
    XOR ECX,ECX                         ; 03fc08b2
    JMP 0x0048cbc6                      ; 03fc08b4
        ;   XREF to: 0048cbc6 (UNCONDITIONAL_JUMP)  ; LAB_0048cbc6
    MOV ECX,0xc                         ; 03fc08b9
        ;   Label: LAB_03fc08b9
    ADD ESP,0xc                         ; 03fc08be
    MOV ECX,dword ptr [ESI]             ; 03fc08c1
    MOV dword ptr [EDI],ECX             ; 03fc08c3
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc08c5
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc08c8
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc08cb
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc08ce
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc08d1
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc08d4
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc08d7
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc08da
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc08dd
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc08e0
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc08e3
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc08e6
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc08e9
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc08ec
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc08ef
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc08f2
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc08f5
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc08f8
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc08fb
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc08fe
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0901
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0904
    ADD ESI,0x30                        ; 03fc0907
    ADD EDI,0x30                        ; 03fc090a
    XOR ECX,ECX                         ; 03fc090d
    JMP 0x0048cbf6                      ; 03fc090f
        ;   XREF to: 0048cbf6 (UNCONDITIONAL_JUMP)  ; LAB_0048cbf6
    MOV ECX,0xc                         ; 03fc0914
        ;   Label: LAB_03fc0914
    ADD ESP,0xc                         ; 03fc0919
    MOV ECX,dword ptr [ESI]             ; 03fc091c
    MOV dword ptr [EDI],ECX             ; 03fc091e
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0920
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0923
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0926
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0929
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc092c
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc092f
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0932
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0935
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0938
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc093b
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc093e
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0941
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0944
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0947
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc094a
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc094d
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0950
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0953
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0956
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0959
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc095c
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc095f
    ADD ESI,0x30                        ; 03fc0962
    ADD EDI,0x30                        ; 03fc0965
    XOR ECX,ECX                         ; 03fc0968
    JMP 0x0048cc2a                      ; 03fc096a
        ;   XREF to: 0048cc2a (UNCONDITIONAL_JUMP)  ; LAB_0048cc2a
    MOV ECX,0xc                         ; 03fc096f
        ;   Label: LAB_03fc096f
    ADD ESP,0xc                         ; 03fc0974
    MOV ECX,dword ptr [ESI]             ; 03fc0977
    MOV dword ptr [EDI],ECX             ; 03fc0979
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc097b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc097e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0981
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0984
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0987
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc098a
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc098d
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0990
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0993
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0996
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0999
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc099c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc099f
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc09a2
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc09a5
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc09a8
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc09ab
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc09ae
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc09b1
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc09b4
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc09b7
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc09ba
    ADD ESI,0x30                        ; 03fc09bd
    ADD EDI,0x30                        ; 03fc09c0
    XOR ECX,ECX                         ; 03fc09c3
    JMP 0x0048cc5a                      ; 03fc09c5
        ;   XREF to: 0048cc5a (UNCONDITIONAL_JUMP)  ; LAB_0048cc5a
    MOV ECX,0xc                         ; 03fc09ca
        ;   Label: LAB_03fc09ca
    ADD ESP,0xc                         ; 03fc09cf
    MOV ECX,dword ptr [ESI]             ; 03fc09d2
    MOV dword ptr [EDI],ECX             ; 03fc09d4
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc09d6
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc09d9
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc09dc
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc09df
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc09e2
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc09e5
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc09e8
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc09eb
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc09ee
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc09f1
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc09f4
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc09f7
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc09fa
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc09fd
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0a00
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0a03
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0a06
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0a09
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0a0c
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0a0f
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0a12
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0a15
    ADD ESI,0x30                        ; 03fc0a18
    ADD EDI,0x30                        ; 03fc0a1b
    XOR ECX,ECX                         ; 03fc0a1e
    JMP 0x0048cc8e                      ; 03fc0a20
        ;   XREF to: 0048cc8e (UNCONDITIONAL_JUMP)  ; LAB_0048cc8e
    MOV ECX,0xc                         ; 03fc0a25
        ;   Label: LAB_03fc0a25
    ADD ESP,0xc                         ; 03fc0a2a
    MOV ECX,dword ptr [ESI]             ; 03fc0a2d
    MOV dword ptr [EDI],ECX             ; 03fc0a2f
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0a31
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0a34
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0a37
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0a3a
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0a3d
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0a40
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0a43
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0a46
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0a49
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0a4c
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0a4f
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0a52
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0a55
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0a58
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0a5b
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0a5e
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0a61
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0a64
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0a67
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0a6a
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0a6d
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0a70
    ADD ESI,0x30                        ; 03fc0a73
    ADD EDI,0x30                        ; 03fc0a76
    XOR ECX,ECX                         ; 03fc0a79
    JMP 0x0048ccbe                      ; 03fc0a7b
        ;   XREF to: 0048ccbe (UNCONDITIONAL_JUMP)  ; LAB_0048ccbe
    MOV ECX,0xc                         ; 03fc0a80
        ;   Label: LAB_03fc0a80
    ADD ESP,0xc                         ; 03fc0a85
    MOV ECX,dword ptr [ESI]             ; 03fc0a88
    MOV dword ptr [EDI],ECX             ; 03fc0a8a
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0a8c
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0a8f
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0a92
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0a95
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0a98
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0a9b
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0a9e
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0aa1
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0aa4
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0aa7
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0aaa
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0aad
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0ab0
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0ab3
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0ab6
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0ab9
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0abc
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0abf
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0ac2
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0ac5
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0ac8
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0acb
    ADD ESI,0x30                        ; 03fc0ace
    ADD EDI,0x30                        ; 03fc0ad1
    XOR ECX,ECX                         ; 03fc0ad4
    JMP 0x0048ccf2                      ; 03fc0ad6
        ;   XREF to: 0048ccf2 (UNCONDITIONAL_JUMP)  ; LAB_0048ccf2
    MOV ECX,0xc                         ; 03fc0adb
        ;   Label: LAB_03fc0adb
    MOV EDI,dword ptr [EBP]             ; 03fc0ae0
    LEA ESI,[ESP + 0x60]                ; 03fc0ae3
    ADD EDI,0xea5a0                     ; 03fc0ae7
    MOV ECX,dword ptr [ESI]             ; 03fc0aed
    MOV dword ptr [EDI],ECX             ; 03fc0aef
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0af1
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0af4
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0af7
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0afa
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0afd
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0b00
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0b03
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0b06
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0b09
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0b0c
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0b0f
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0b12
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0b15
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0b18
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0b1b
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0b1e
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0b21
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0b24
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0b27
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0b2a
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0b2d
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0b30
    ADD ESI,0x30                        ; 03fc0b33
    ADD EDI,0x30                        ; 03fc0b36
    XOR ECX,ECX                         ; 03fc0b39
    JMP 0x0048cd6b                      ; 03fc0b3b
        ;   XREF to: 0048cd6b (UNCONDITIONAL_JUMP)  ; LAB_0048cd6b
    MOV ECX,0xc                         ; 03fc0b40
        ;   Label: LAB_03fc0b40
    MOV EDI,dword ptr [EBP]             ; 03fc0b45
    MOV ESI,ESP                         ; 03fc0b48
    ADD EDI,0xea5d0                     ; 03fc0b4a
    PUSH 0x4e1e                         ; 03fc0b50
    MOV ECX,dword ptr [ESI]             ; 03fc0b55
    MOV dword ptr [EDI],ECX             ; 03fc0b57
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc0b59
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc0b5c
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc0b5f
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc0b62
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc0b65
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc0b68
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc0b6b
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc0b6e
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc0b71
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc0b74
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc0b77
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc0b7a
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc0b7d
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc0b80
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc0b83
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc0b86
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc0b89
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc0b8c
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc0b8f
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc0b92
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc0b95
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc0b98
    ADD ESI,0x30                        ; 03fc0b9b
    ADD EDI,0x30                        ; 03fc0b9e
    XOR ECX,ECX                         ; 03fc0ba1
    JMP 0x0048cd82                      ; 03fc0ba3
        ;   XREF to: 0048cd82 (UNCONDITIONAL_JUMP)  ; LAB_0048cd82


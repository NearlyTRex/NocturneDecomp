; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70(CDemonRenderer *this_ptr,int vertex_index1,int vertex_index2)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_index1
; int              Stack[0xc]:4   vertex_index2
;
; XREF[3]:
;   core_bugs.cpp_CBugs_renderGroundHeightGrid_FUN_00425650 at 0042577d
;   core_cloth.cpp_FUN_00441500 at 004416a0
;   core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_00564a80 at 00564ac9
;
; Referenced Globals:
;   undefined4 DAT_00713a5c
;   undefined4 DAT_01c4f020
;
; Called Functions:
;   engine_2d.c_drawLine3D_FUN_00401310
;   engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0
;   engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0
;   engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0
;   engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0
;   engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0
;   engine_prim.c_replaceWWithDepth_FUN_0053dd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483e70
        ;   Label: engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70
    PUSH ESI                            ; 00483e71
    PUSH EDI                            ; 00483e72
    PUSH EBP                            ; 00483e73
    SUB ESP,0x90                        ; 00483e74
    MOV EBP,dword ptr [ESP + 0xa4]      ; 00483e7a
    MOV EAX,[0x00713a5c]                ; 00483e81 | DAT_00713a5c
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00483e86
    MOV [0x01c4f020],EAX                ; 00483e8d | DAT_01c4f020
    LEA EAX,[EBX*0x4 + 0x0]             ; 00483e92
    MOV ECX,0xc                         ; 00483e99
    SUB EAX,EBX                         ; 00483e9e
    MOV ESI,dword ptr [EBP]             ; 00483ea0
    SHL EAX,0x4                         ; 00483ea3
    LEA EDI,[ESP + 0x60]                ; 00483ea6
    ADD ESI,EAX                         ; 00483eaa
    MOV EBX,dword ptr [ESP + 0xac]      ; 00483eac
    MOVSD.REP ES:EDI,ESI                ; 00483eb3
    LEA EAX,[EBX*0x4 + 0x0]             ; 00483eb5
    MOV ECX,0xc                         ; 00483ebc
    SUB EAX,EBX                         ; 00483ec1
    MOV ESI,dword ptr [EBP]             ; 00483ec3
    SHL EAX,0x4                         ; 00483ec6
    MOV EDI,ESP                         ; 00483ec9
    ADD ESI,EAX                         ; 00483ecb
    MOVSD.REP ES:EDI,ESI                ; 00483ecd
    MOV EAX,dword ptr [ESP + 0x70]      ; 00483ecf
    AND EAX,dword ptr [ESP + 0x10]      ; 00483ed3
    TEST EAX,0x80000000                 ; 00483ed7
    JNZ 0x004840ce                      ; 00483edc
        ;   XREF to: 004840ce (CONDITIONAL_JUMP)  ; LAB_004840ce
    XOR EBX,EBX                         ; 00483ee2
        ;   Label: LAB_00483ee2
    MOV EAX,dword ptr [ESP]             ; 00483ee4
        ;   Label: LAB_00483ee4
    CMP EAX,dword ptr [ESP + 0x8]       ; 00483ee7
    JLE 0x00483f13                      ; 00483eeb
        ;   XREF to: 00483f13 (CONDITIONAL_JUMP)  ; LAB_00483f13
    LEA EAX,[ESP + 0x30]                ; 00483eed
    PUSH EAX                            ; 00483ef1
    LEA EAX,[ESP + 0x4]                 ; 00483ef2
    PUSH EAX                            ; 00483ef6
    LEA EAX,[ESP + 0x68]                ; 00483ef7
    PUSH EAX                            ; 00483efb
    LEA EDI,[ESP + 0xc]                 ; 00483efc
    LEA ESI,[ESP + 0x3c]                ; 00483f00
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0 ; 00483f04
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00483f09
    ADD ESP,0xc                         ; 00483f0e
    MOVSD.REP ES:EDI,ESI                ; 00483f11
    MOV EAX,dword ptr [ESP + 0x8]       ; 00483f13
        ;   Label: LAB_00483f13
    MOV ESI,dword ptr [ESP]             ; 00483f17
    NEG EAX                             ; 00483f1a
    CMP EAX,ESI                         ; 00483f1c
    JLE 0x00483f46                      ; 00483f1e
        ;   XREF to: 00483f46 (CONDITIONAL_JUMP)  ; LAB_00483f46
    LEA EAX,[ESP + 0x30]                ; 00483f20
    PUSH EAX                            ; 00483f24
    LEA EAX,[ESP + 0x4]                 ; 00483f25
    PUSH EAX                            ; 00483f29
    LEA EAX,[ESP + 0x68]                ; 00483f2a
    PUSH EAX                            ; 00483f2e
    LEA EDI,[ESP + 0xc]                 ; 00483f2f
    LEA ESI,[ESP + 0x3c]                ; 00483f33
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0 ; 00483f37
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00483f3c
    ADD ESP,0xc                         ; 00483f41
    MOVSD.REP ES:EDI,ESI                ; 00483f44
    MOV EAX,dword ptr [ESP + 0x4]       ; 00483f46
        ;   Label: LAB_00483f46
    CMP EAX,dword ptr [ESP + 0x8]       ; 00483f4a
    JLE 0x00483f76                      ; 00483f4e
        ;   XREF to: 00483f76 (CONDITIONAL_JUMP)  ; LAB_00483f76
    LEA EAX,[ESP + 0x30]                ; 00483f50
    PUSH EAX                            ; 00483f54
    LEA EAX,[ESP + 0x4]                 ; 00483f55
    PUSH EAX                            ; 00483f59
    LEA EAX,[ESP + 0x68]                ; 00483f5a
    PUSH EAX                            ; 00483f5e
    LEA EDI,[ESP + 0xc]                 ; 00483f5f
    LEA ESI,[ESP + 0x3c]                ; 00483f63
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0 ; 00483f67
        ;   XREF to: 0043b6b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00483f6c
    ADD ESP,0xc                         ; 00483f71
    MOVSD.REP ES:EDI,ESI                ; 00483f74
    MOV EAX,dword ptr [ESP + 0x8]       ; 00483f76
        ;   Label: LAB_00483f76
    MOV EDX,dword ptr [ESP + 0x4]       ; 00483f7a
    NEG EAX                             ; 00483f7e
    CMP EAX,EDX                         ; 00483f80
    JLE 0x00483faa                      ; 00483f82
        ;   XREF to: 00483faa (CONDITIONAL_JUMP)  ; LAB_00483faa
    LEA EAX,[ESP + 0x30]                ; 00483f84
    PUSH EAX                            ; 00483f88
    LEA EAX,[ESP + 0x4]                 ; 00483f89
    PUSH EAX                            ; 00483f8d
    LEA EAX,[ESP + 0x68]                ; 00483f8e
    PUSH EAX                            ; 00483f92
    LEA EDI,[ESP + 0xc]                 ; 00483f93
    LEA ESI,[ESP + 0x3c]                ; 00483f97
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0 ; 00483f9b
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00483fa0
    ADD ESP,0xc                         ; 00483fa5
    MOVSD.REP ES:EDI,ESI                ; 00483fa8
    MOV EAX,dword ptr [ESP + 0x60]      ; 00483faa
        ;   Label: LAB_00483faa
    CMP EAX,dword ptr [ESP + 0x68]      ; 00483fae
    JLE 0x00483fda                      ; 00483fb2
        ;   XREF to: 00483fda (CONDITIONAL_JUMP)  ; LAB_00483fda
    LEA EAX,[ESP + 0x30]                ; 00483fb4
    PUSH EAX                            ; 00483fb8
    LEA EAX,[ESP + 0x64]                ; 00483fb9
    PUSH EAX                            ; 00483fbd
    LEA EAX,[ESP + 0x8]                 ; 00483fbe
    PUSH EAX                            ; 00483fc2
    LEA EDI,[ESP + 0x6c]                ; 00483fc3
    LEA ESI,[ESP + 0x3c]                ; 00483fc7
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0 ; 00483fcb
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00483fd0
    ADD ESP,0xc                         ; 00483fd5
    MOVSD.REP ES:EDI,ESI                ; 00483fd8
    MOV EAX,dword ptr [ESP + 0x68]      ; 00483fda
        ;   Label: LAB_00483fda
    MOV ESI,dword ptr [ESP + 0x60]      ; 00483fde
    NEG EAX                             ; 00483fe2
    CMP EAX,ESI                         ; 00483fe4
    JLE 0x0048400e                      ; 00483fe6
        ;   XREF to: 0048400e (CONDITIONAL_JUMP)  ; LAB_0048400e
    LEA EAX,[ESP + 0x30]                ; 00483fe8
    PUSH EAX                            ; 00483fec
    LEA EAX,[ESP + 0x64]                ; 00483fed
    PUSH EAX                            ; 00483ff1
    LEA EAX,[ESP + 0x8]                 ; 00483ff2
    PUSH EAX                            ; 00483ff6
    LEA EDI,[ESP + 0x6c]                ; 00483ff7
    LEA ESI,[ESP + 0x3c]                ; 00483ffb
    CALL engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0 ; 00483fff
        ;   XREF to: 0043b5b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00484004
    ADD ESP,0xc                         ; 00484009
    MOVSD.REP ES:EDI,ESI                ; 0048400c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0048400e
        ;   Label: LAB_0048400e
    CMP EAX,dword ptr [ESP + 0x68]      ; 00484012
    JLE 0x0048403e                      ; 00484016
        ;   XREF to: 0048403e (CONDITIONAL_JUMP)  ; LAB_0048403e
    LEA EAX,[ESP + 0x30]                ; 00484018
    PUSH EAX                            ; 0048401c
    LEA EAX,[ESP + 0x64]                ; 0048401d
    PUSH EAX                            ; 00484021
    LEA EAX,[ESP + 0x8]                 ; 00484022
    PUSH EAX                            ; 00484026
    LEA EDI,[ESP + 0x6c]                ; 00484027
    LEA ESI,[ESP + 0x3c]                ; 0048402b
    CALL engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0 ; 0048402f
        ;   XREF to: 0043b6b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00484034
    ADD ESP,0xc                         ; 00484039
    MOVSD.REP ES:EDI,ESI                ; 0048403c
    MOV EAX,dword ptr [ESP + 0x68]      ; 0048403e
        ;   Label: LAB_0048403e
    MOV EDX,dword ptr [ESP + 0x64]      ; 00484042
    NEG EAX                             ; 00484046
    CMP EAX,EDX                         ; 00484048
    JLE 0x00484072                      ; 0048404a
        ;   XREF to: 00484072 (CONDITIONAL_JUMP)  ; LAB_00484072
    LEA EAX,[ESP + 0x30]                ; 0048404c
    PUSH EAX                            ; 00484050
    LEA EAX,[ESP + 0x64]                ; 00484051
    PUSH EAX                            ; 00484055
    LEA EAX,[ESP + 0x8]                 ; 00484056
    PUSH EAX                            ; 0048405a
    LEA EDI,[ESP + 0x6c]                ; 0048405b
    LEA ESI,[ESP + 0x3c]                ; 0048405f
    CALL engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0 ; 00484063
        ;   XREF to: 0043b7b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ECX,0xc                         ; 00484068
    ADD ESP,0xc                         ; 0048406d
    MOVSD.REP ES:EDI,ESI                ; 00484070
    INC EBX                             ; 00484072
        ;   Label: LAB_00484072
    CMP EBX,0x2                         ; 00484073
    JL 0x00483ee4                       ; 00484076
        ;   XREF to: 00483ee4 (CONDITIONAL_JUMP)  ; LAB_00483ee4
    MOV EAX,dword ptr [ESP + 0x60]      ; 0048407c
    MOV ECX,dword ptr [ESP + 0x68]      ; 00484080
    CMP EAX,ECX                         ; 00484084
    JG 0x004840c3                       ; 00484086
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    MOV EBX,ECX                         ; 00484088
    NEG EBX                             ; 0048408a
    CMP EBX,EAX                         ; 0048408c
    JG 0x004840c3                       ; 0048408e
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    MOV EAX,dword ptr [ESP + 0x64]      ; 00484090
    CMP EAX,ECX                         ; 00484094
    JG 0x004840c3                       ; 00484096
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    CMP EBX,EAX                         ; 00484098
    JG 0x004840c3                       ; 0048409a
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    MOV EAX,dword ptr [ESP]             ; 0048409c
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048409f
    CMP EAX,EDX                         ; 004840a3
    JG 0x004840c3                       ; 004840a5
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    MOV EBX,EDX                         ; 004840a7
    NEG EBX                             ; 004840a9
    CMP EBX,EAX                         ; 004840ab
    JG 0x004840c3                       ; 004840ad
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    MOV EAX,dword ptr [ESP + 0x4]       ; 004840af
    CMP EAX,EDX                         ; 004840b3
    JG 0x004840c3                       ; 004840b5
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    CMP EBX,EAX                         ; 004840b7
    JG 0x004840c3                       ; 004840b9
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    TEST ECX,ECX                        ; 004840bb
    JLE 0x004840c3                      ; 004840bd
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    TEST EDX,EDX                        ; 004840bf
    JG 0x004840d7                       ; 004840c1
        ;   XREF to: 004840d7 (CONDITIONAL_JUMP)  ; LAB_004840d7
    ADD ESP,0x90                        ; 004840c3
        ;   Label: LAB_004840c3
    POP EBP                             ; 004840c9
    POP EDI                             ; 004840ca
    POP ESI                             ; 004840cb
    POP EBX                             ; 004840cc
    RET                                 ; 004840cd
    TEST AL,0xff                        ; 004840ce
        ;   Label: LAB_004840ce
    JNZ 0x004840c3                      ; 004840d0
        ;   XREF to: 004840c3 (CONDITIONAL_JUMP)  ; LAB_004840c3
    JMP 0x00483ee2                      ; 004840d2
        ;   XREF to: 00483ee2 (UNCONDITIONAL_JUMP)  ; LAB_00483ee2
    MOV ECX,0xc                         ; 004840d7
        ;   Label: LAB_004840d7
    MOV EDI,dword ptr [EBP]             ; 004840dc
    LEA ESI,[ESP + 0x60]                ; 004840df
    ADD EDI,0xea5a0                     ; 004840e3
    MOVSD.REP ES:EDI,ESI                ; 004840e9
    MOV ECX,0xc                         ; 004840eb
    MOV EDI,dword ptr [EBP]             ; 004840f0
    MOV ESI,ESP                         ; 004840f3
    ADD EDI,0xea5d0                     ; 004840f5
    PUSH 0x4e1e                         ; 004840fb
    MOVSD.REP ES:EDI,ESI                ; 00484100
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0 ; 00484102
        ;   XREF to: 00507bf0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)
    ADD ESP,0x4                         ; 00484107
    PUSH 0x4e1f                         ; 0048410a
    CALL engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0 ; 0048410f
        ;   XREF to: 00507bf0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_projectCachedPointUnchecked_FUN_00507bf0(int cache_index)
    ADD ESP,0x4                         ; 00484114
    MOV EAX,dword ptr [EBP]             ; 00484117
    PUSH 0x2                            ; 0048411a
    ADD EAX,0xea5a0                     ; 0048411c
    PUSH EAX                            ; 00484121
    CALL engine_prim.c_replaceWWithDepth_FUN_0053dd20 ; 00484122
        ;   XREF to: 0053dd20 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_0053dd20(SRenderVertex * vertices, int vertex_count)
    MOV EBX,dword ptr [EBP]             ; 00484127
    LEA EAX,[EBX + 0xea5d0]             ; 0048412a
    ADD ESP,0x8                         ; 00484130
    MOV ECX,dword ptr [EAX + 0x8]       ; 00484133
    MOV ESI,dword ptr [EAX + 0x14]      ; 00484136
    PUSH ECX                            ; 00484139
    SAR ESI,0x10                        ; 0048413a
    MOV EAX,dword ptr [EAX + 0x10]      ; 0048413d
    PUSH ESI                            ; 00484140
    SAR EAX,0x10                        ; 00484141
    PUSH EAX                            ; 00484144
    LEA EAX,[EBX + 0xea5a0]             ; 00484145
    MOV EBX,dword ptr [EAX + 0x8]       ; 0048414b
    PUSH EBX                            ; 0048414e
    MOV EBX,dword ptr [EAX + 0x14]      ; 0048414f
    SAR EBX,0x10                        ; 00484152
    MOV EAX,dword ptr [EAX + 0x10]      ; 00484155
    PUSH EBX                            ; 00484158
    SAR EAX,0x10                        ; 00484159
    PUSH EAX                            ; 0048415c
    CALL engine_2d.c_drawLine3D_FUN_00401310 ; 0048415d
        ;   XREF to: 00401310 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine3D_FUN_00401310(int x1, int y1, uint z1, int x2, ...)
    ADD ESP,0x18                        ; 00484162
    ADD ESP,0x90                        ; 00484165
    POP EBP                             ; 0048416b
    POP EDI                             ; 0048416c
    POP ESI                             ; 0048416d
    POP EBX                             ; 0048416e
    RET                                 ; 0048416f


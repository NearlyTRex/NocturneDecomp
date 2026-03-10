; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderEmitter_FUN_00509c60(CMansionPuzzleCircle *this_ptr,int panel_index)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   panel_index
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_renderOpaque_FUN_005090d0 at 005091bb
;
; Referenced Globals:
;   float FLOAT_00660d8c = 0.5235988
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CDemonRenderer g_CDemonRendererInstance
;   CEditorTools g_CEditorToolsInstance
;   int g_MansionPuzzleSlewType
;   UVector3 g_ZeroVector
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00509c60
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_renderEmitter_FUN_00509c60
    PUSH EDI                            ; 00509c61
    PUSH EBP                            ; 00509c62
    SUB ESP,0x1c                        ; 00509c63
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00509c66
    MOV EAX,dword ptr [ESP + 0x30]      ; 00509c6a
    MOV dword ptr [ESP + 0x18],EAX      ; 00509c6e
    XOR EDX,EDX                         ; 00509c72
    FILD dword ptr [ESP + 0x18]         ; 00509c74
    FMUL float ptr [0x00660d8c]         ; 00509c78 | FLOAT_00660d8c
    MOV dword ptr [ESP + 0xc],EDX       ; 00509c7e
    MOV dword ptr [ESP + 0x14],EDX      ; 00509c82
    FSTP float ptr [ESP + 0x10]         ; 00509c86
    MOV EAX,dword ptr [EBX + 0x150c]    ; 00509c8a
    PUSH EDX                            ; 00509c90
    MOV dword ptr [ESP + 0xc],EAX       ; 00509c91
    LEA EAX,[ESP + 0x10]                ; 00509c95
    PUSH EAX                            ; 00509c99
    MOV EBP,dword ptr [0x006703ec]      ; 00509c9a | g_CDemonRendererPtr2
    PUSH EBP                            ; 00509ca0 | g_CDemonRendererInstance
    MOV dword ptr [ESP + 0xc],EDX       ; 00509ca1
    MOV dword ptr [ESP + 0x10],EDX      ; 00509ca5
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00509ca9
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00509cae
    MOV EAX,ESP                         ; 00509cb1
    PUSH EAX                            ; 00509cb3
    PUSH 0x3f87558                      ; 00509cb4 | g_ZeroVector
    MOV EAX,[0x006703ec]                ; 00509cb9 | g_CDemonRendererPtr2
    PUSH EAX                            ; 00509cbe | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00509cbf
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    ADD ESP,0xc                         ; 00509cc4
    LEA EAX,[EBX + 0x5e4]               ; 00509cc7
    PUSH EAX                            ; 00509ccd
    PUSH 0x3f87558                      ; 00509cce | g_ZeroVector
    MOV EDX,dword ptr [0x006703ec]      ; 00509cd3 | g_CDemonRendererPtr2
    PUSH EDX                            ; 00509cd9 | g_CDemonRendererInstance
    MOV EBX,0xfb                        ; 00509cda
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0 ; 00509cdf
        ;   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    MOV ECX,dword ptr [0x02f0cb1c]      ; 00509ce4 | g_MansionPuzzleSlewType
    ADD ESP,0xc                         ; 00509cea
    CMP ECX,0x1                         ; 00509ced
    JZ 0x00509d3a                       ; 00509cf0
        ;   XREF to: 00509d3a (CONDITIONAL_JUMP)  ; LAB_00509d3a
    PUSH EBX                            ; 00509cf2
        ;   Label: LAB_00509cf2
    MOV EDI,dword ptr [0x00678a60]      ; 00509cf3 | g_CEditorToolsPtr
    PUSH 0x3f800000                     ; 00509cf9
    PUSH EDI                            ; 00509cfe | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0 ; 00509cff
        ;   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 00509d04
    MOV EBP,dword ptr [0x006703ec]      ; 00509d07 | g_CDemonRendererPtr2
    PUSH EBP                            ; 00509d0d | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720 ; 00509d0e
        ;   XREF to: 0048c640 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720()
    PUSH ESI                            ; 00509d3a
        ;   Label: LAB_00509d3a
    MOV ESI,dword ptr [0x00678a60]      ; 00509d3b | g_CEditorToolsPtr
    PUSH ESI                            ; 00509d41 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330 ; 00509d42
        ;   XREF to: 004a1330 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00509d47
    POP ESI                             ; 00509d4a
    JMP 0x00509cf2                      ; 00509d4b
        ;   XREF to: 00509cf2 (UNCONDITIONAL_JUMP)  ; LAB_00509cf2


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_FUN_0050ddd0(CDemonSet *this_ptr,SMRGLPrimitiveQuad *primitive_array,int primitive_count,int render_flags)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLPrimitiveQuad * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_cloth.cpp_CCloth_render_FUN_00437db0 at 00437f21
;   core_curtain.cpp_CCurtain_FUN_0043f330 at 0043f53a
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00453170 at 0045332d
;   core_wateract.cpp_CWaterActor_renderTransparent_FUN_00551c00 at 00551dd5
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 DAT_01b4d738
;   undefined4 g_CGame_01c775ec.scripted_sequence_active
;   undefined4 g_CGame_01c775ec.render_mode
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80
;   engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00461440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ddd0
        ;   Label: core_set.cpp_CDemonSet_FUN_0050ddd0
    PUSH ESI                            ; 0050ddd1
    PUSH EDI                            ; 0050ddd2
    PUSH EBP                            ; 0050ddd3
    SUB ESP,0x28                        ; 0050ddd4
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0050ddd7
    MOV EBP,dword ptr [ESP + 0x40]      ; 0050dddb
    MOV EDI,dword ptr [ESP + 0x44]      ; 0050dddf
    MOV EAX,[0x005b9354]                ; 0050dde3 | g_CGame_PTR_005b9354
    CMP dword ptr [EAX + 0x1f0],0x0     ; 0050dde8 | g_CGame_01c775ec.scripted_sequence_active
    JNZ 0x0050de96                      ; 0050ddef
        ;   XREF to: 0050de96 (CONDITIONAL_JUMP)  ; LAB_0050de96
    CMP dword ptr [EAX + 0x1f4],0x0     ; 0050ddf5 | g_CGame_01c775ec.render_mode
    JNZ 0x0050de9e                      ; 0050ddfc
        ;   XREF to: 0050de9e (CONDITIONAL_JUMP)  ; LAB_0050de9e
    CMP dword ptr [EBX + 0x15a890],0x0  ; 0050de02
        ;   Label: LAB_0050de02
    JZ 0x0050de80                       ; 0050de09
        ;   XREF to: 0050de80 (CONDITIONAL_JUMP)  ; LAB_0050de80
    MOV EBX,EBP                         ; 0050de0f
    XOR ESI,ESI                         ; 0050de11
    TEST EDI,EDI                        ; 0050de13
    JLE 0x0050de80                      ; 0050de15
        ;   XREF to: 0050de80 (CONDITIONAL_JUMP)  ; LAB_0050de80
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050de17
        ;   Label: LAB_0050de17
    MOV dword ptr [ESP + 0x4],EAX       ; 0050de1a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0050de1e
    MOV dword ptr [ESP + 0x8],EAX       ; 0050de21
    MOV EAX,dword ptr [EBX + 0xc]       ; 0050de25
    MOV dword ptr [ESP + 0xc],EAX       ; 0050de28
    MOV EAX,dword ptr [EBX + 0x10]      ; 0050de2c
    MOV dword ptr [ESP + 0x10],EAX      ; 0050de2f
    MOV EAX,dword ptr [EBX + 0x14]      ; 0050de33
    MOV dword ptr [ESP + 0x14],EAX      ; 0050de36
    MOV EAX,dword ptr [EBX + 0x18]      ; 0050de3a
    MOV dword ptr [ESP + 0x18],EAX      ; 0050de3d
    MOV EAX,dword ptr [EBX + 0x24]      ; 0050de41
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050de44
    MOV EAX,dword ptr [EBX + 0x30]      ; 0050de48
    MOV dword ptr [ESP + 0x20],EAX      ; 0050de4b
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0050de4f
    PUSH 0x444440                       ; 0050de52
    MOV dword ptr [ESP + 0x28],EAX      ; 0050de57
    LEA EAX,[ESP + 0x4]                 ; 0050de5b
    PUSH EAX                            ; 0050de5f
    MOV EDX,dword ptr [0x005ae704]      ; 0050de60 | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 0050de66 | DAT_01b4d738
    ADD EBX,0x48                        ; 0050de67
    INC ESI                             ; 0050de6a
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80 ; 0050de6b
        ;   XREF to: 00460e80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_00460e80(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, CustomScanlineFunc * scanline_renderer)
    ADD ESP,0xc                         ; 0050de70
    CMP ESI,EDI                         ; 0050de73
    JL 0x0050de17                       ; 0050de75
        ;   XREF to: 0050de17 (CONDITIONAL_JUMP)  ; LAB_0050de17
    LEA EAX,[EAX]                       ; 0050de77
    LEA EDX,[EDX]                       ; 0050de7d
    MOV ECX,dword ptr [ESP + 0x48]      ; 0050de80
        ;   Label: LAB_0050de80
    PUSH ECX                            ; 0050de84
    PUSH EDI                            ; 0050de85
    PUSH EBP                            ; 0050de86
    MOV EBX,dword ptr [0x005ae704]      ; 0050de87 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 0050de8d | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00461440 ; 0050de8e
        ;   XREF to: 00461440 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderQuadBatch_FUN_00461440(CDemonRenderer * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0050de93
    ADD ESP,0x28                        ; 0050de96
        ;   Label: LAB_0050de96
    POP EBP                             ; 0050de99
    POP EDI                             ; 0050de9a
    POP ESI                             ; 0050de9b
    POP EBX                             ; 0050de9c
    RET                                 ; 0050de9d
    MOV ESI,dword ptr [0x005ae704]      ; 0050de9e | g_CDemonRenderer_PTR_005ae704
        ;   Label: LAB_0050de9e
    PUSH ESI                            ; 0050dea4 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 0050dea5
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0050deaa
    TEST EAX,EAX                        ; 0050dead
    JNZ 0x0050de02                      ; 0050deaf
        ;   XREF to: 0050de02 (CONDITIONAL_JUMP)  ; LAB_0050de02
    PUSH 0xffff                         ; 0050deb5
    PUSH EDI                            ; 0050deba
    PUSH EBP                            ; 0050debb
    PUSH EBX                            ; 0050debc
    CALL core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670 ; 0050debd
        ;   XREF to: 0050d670 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapBatchQuad_FUN_0050d670(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha)
    ADD ESP,0x10                        ; 0050dec2
    ADD ESP,0x28                        ; 0050dec5
    POP EBP                             ; 0050dec8
    POP EDI                             ; 0050dec9
    POP ESI                             ; 0050deca
    POP EBX                             ; 0050decb
    RET                                 ; 0050decc


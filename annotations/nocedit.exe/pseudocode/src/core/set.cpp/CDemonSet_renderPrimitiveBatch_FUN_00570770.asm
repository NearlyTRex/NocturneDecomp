; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770(CDemonSet * this_ptr, SMRGLPrimitiveQuad * primitive_array, int primitive_count, int render_flags)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLPrimitiveQuad * Stack[0x8]:4   primitive_array
; int              Stack[0xc]:4   primitive_count
; int              Stack[0x10]:4   render_flags
; Local Variables:
; undefined1       Stack[-0x38]:1  local_38
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
;   core_cloth.cpp_FUN_0043bae0 at 0043be28
;   core_curtain.cpp_FUN_0044b060 at 0044b305
;   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980 at 00477bb3
;   core_wateract.cpp_CWaterActor_FUN_005eb280 at 005eb445
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonRenderer g_CDemonRendererInstance
;   CGame g_CGameInstance
;   undefined4 DAT_02d81c8c
;   undefined4 DAT_02d81c90
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_00570010
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
;   engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570770
        ;   Label: core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
    PUSH ESI                            ; 00570771
    PUSH EDI                            ; 00570772
    PUSH EBP                            ; 00570773
    SUB ESP,0x28                        ; 00570774
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00570777
    MOV EBP,dword ptr [ESP + 0x40]      ; 0057077b
    MOV EDI,dword ptr [ESP + 0x44]      ; 0057077f
    MOV EAX,[0x0067b654]                ; 00570783 | CGame g_CGameInstance | CGame * g_CGamePtr
    CMP dword ptr [EAX + 0x1f0],0x0     ; 00570788 | DAT_02d81c8c
    JNZ 0x00570836                      ; 0057078f | LAB_00570836
        ;   XREF to: 00570836 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x1f4],0x0     ; 00570795 | DAT_02d81c90
    JNZ 0x0057083e                      ; 0057079c | LAB_0057083e
        ;   XREF to: 0057083e (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x15ac78],0x0  ; 005707a2
        ;   Label: LAB_005707a2
    JZ 0x00570820                       ; 005707a9 | LAB_00570820
        ;   XREF to: 00570820 (CONDITIONAL_JUMP)
    MOV EBX,EBP                         ; 005707af
    XOR ESI,ESI                         ; 005707b1
    TEST EDI,EDI                        ; 005707b3
    JLE 0x00570820                      ; 005707b5 | LAB_00570820
        ;   XREF to: 00570820 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x4]       ; 005707b7
        ;   Label: LAB_005707b7
    MOV dword ptr [ESP + 0x4],EAX       ; 005707ba
    MOV EAX,dword ptr [EBX + 0x8]       ; 005707be
    MOV dword ptr [ESP + 0x8],EAX       ; 005707c1
    MOV EAX,dword ptr [EBX + 0xc]       ; 005707c5
    MOV dword ptr [ESP + 0xc],EAX       ; 005707c8
    MOV EAX,dword ptr [EBX + 0x10]      ; 005707cc
    MOV dword ptr [ESP + 0x10],EAX      ; 005707cf
    MOV EAX,dword ptr [EBX + 0x14]      ; 005707d3
    MOV dword ptr [ESP + 0x14],EAX      ; 005707d6
    MOV EAX,dword ptr [EBX + 0x18]      ; 005707da
    MOV dword ptr [ESP + 0x18],EAX      ; 005707dd
    MOV EAX,dword ptr [EBX + 0x24]      ; 005707e1
    MOV dword ptr [ESP + 0x1c],EAX      ; 005707e4
    MOV EAX,dword ptr [EBX + 0x30]      ; 005707e8
    MOV dword ptr [ESP + 0x20],EAX      ; 005707eb
    MOV EAX,dword ptr [EBX + 0x3c]      ; 005707ef
    PUSH 0x4505e0                       ; 005707f2
    MOV dword ptr [ESP + 0x28],EAX      ; 005707f7
    LEA EAX,[ESP + 0x4]                 ; 005707fb
    PUSH EAX                            ; 005707ff
    MOV EDX,dword ptr [0x006703ec]      ; 00570800 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EDX                            ; 00570806 | CDemonRenderer g_CDemonRendererInstance
    ADD EBX,0x48                        ; 00570807
    INC ESI                             ; 0057080a
    CALL engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0 ; 0057080b | void engine_drender.cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim, RenderScanlineFunc * scanline_renderer)
        ;   XREF to: 0048c8d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00570810
    CMP ESI,EDI                         ; 00570813
    JL 0x005707b7                       ; 00570815 | LAB_005707b7
        ;   XREF to: 005707b7 (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 00570817
    LEA EDX,[EDX]                       ; 0057081d | CDemonRenderer g_CDemonRendererInstance
    MOV ECX,dword ptr [ESP + 0x48]      ; 00570820
        ;   Label: LAB_00570820
    PUSH ECX                            ; 00570824
    PUSH EDI                            ; 00570825
    PUSH EBP                            ; 00570826
    MOV EBX,dword ptr [0x006703ec]      ; 00570827 | CDemonRenderer g_CDemonRendererInstance | CDemonRenderer * g_CDemonRendererPtr
    PUSH EBX                            ; 0057082d | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90 ; 0057082e | int engine_drender.cpp_CDemonRenderer_renderPrimitiveBatch_FUN_0048ce90(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * primitive_array, int primitive_count, int render_flags)
        ;   XREF to: 0048ce90 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00570833
    ADD ESP,0x28                        ; 00570836
        ;   Label: LAB_00570836
    POP EBP                             ; 00570839
    POP EDI                             ; 0057083a
    POP ESI                             ; 0057083b
    POP EBX                             ; 0057083c
    RET                                 ; 0057083d
    MOV ESI,dword ptr [0x006703ec]      ; 0057083e | CDemonRenderer * g_CDemonRendererPtr
        ;   Label: LAB_0057083e
    PUSH ESI                            ; 00570844 | CDemonRenderer g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 00570845 | int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0057084a
    TEST EAX,EAX                        ; 0057084d
    JNZ 0x005707a2                      ; 0057084f | LAB_005707a2
        ;   XREF to: 005707a2 (CONDITIONAL_JUMP)
    PUSH 0xffff                         ; 00570855
    PUSH EDI                            ; 0057085a
    PUSH EBP                            ; 0057085b
    PUSH EBX                            ; 0057085c
    CALL core_set.cpp_CDemonSet_FUN_00570010 ; 0057085d | void core_set.cpp_CDemonSet_FUN_00570010(CDemonSet * this_ptr)
        ;   XREF to: 00570010 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00570862
    ADD ESP,0x28                        ; 00570865
    POP EBP                             ; 00570868
    POP EDI                             ; 00570869
    POP ESI                             ; 0057086a
    POP EBX                             ; 0057086b
    RET                                 ; 0057086c


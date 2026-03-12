; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; Local Variables:
; uint             Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_00574ba0 at 00574d94
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_00621fae
;   TerminatedCString s_Can_t_use_demonZFacetCou_00621fc4
;   int g_RenderPixelCounter
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER32 g_RenderStateFlags
;   int g_RenderStateFlag2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048aa50
        ;   Label: engine_drender.cpp_CDemonRenderer_renderStandardTextured_FUN_0048aa50
    PUSH ESI                            ; 0048aa51
    PUSH EDI                            ; 0048aa52
    PUSH EBP                            ; 0048aa53
    SUB ESP,0x4                         ; 0048aa54
    MOV EBP,dword ptr [ESP + 0x18]      ; 0048aa57
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0048aa5b
    XOR EDX,EDX                         ; 0048aa5f
    MOV ECX,dword ptr [EBP + 0xc]       ; 0048aa61
    MOV dword ptr [0x02c6d5a4],EDX      ; 0048aa64 | g_RenderPixelCounter
    TEST ECX,ECX                        ; 0048aa6a
    JNZ 0x0048ab05                      ; 0048aa6c
        ;   XREF to: 0048ab05 (CONDITIONAL_JUMP)  ; LAB_0048ab05
    MOV EBX,0xffffffff                  ; 0048aa72
        ;   Label: LAB_0048aa72
    MOV ESI,dword ptr [EDI + 0x4]       ; 0048aa77
    XOR EAX,EAX                         ; 0048aa7a
    MOV dword ptr [ESP],EBX             ; 0048aa7c
    TEST ESI,ESI                        ; 0048aa7f
    JLE 0x0048aab0                      ; 0048aa81
        ;   XREF to: 0048aab0 (CONDITIONAL_JUMP)  ; LAB_0048aab0
    MOV EDX,EDI                         ; 0048aa83
    XOR ECX,ECX                         ; 0048aa85
    MOV EBX,dword ptr [EDX + 0x18]      ; 0048aa87
        ;   Label: LAB_0048aa87
    MOV dword ptr [ECX + 0x2c6d5ac],EBX ; 0048aa8a | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    IMUL ESI,EBX,0x30                   ; 0048aa90
    MOV EBX,dword ptr [EBP]             ; 0048aa93
    ADD ECX,0x4                         ; 0048aa96
    ADD EDX,0xc                         ; 0048aa99
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x10] ; 0048aa9c
    MOV ESI,dword ptr [ESP]             ; 0048aaa0
    INC EAX                             ; 0048aaa3
    AND ESI,EBX                         ; 0048aaa4
    MOV EBX,dword ptr [EDI + 0x4]       ; 0048aaa6
    MOV dword ptr [ESP],ESI             ; 0048aaa9
    CMP EAX,EBX                         ; 0048aaac
    JL 0x0048aa87                       ; 0048aaae
        ;   XREF to: 0048aa87 (CONDITIONAL_JUMP)  ; LAB_0048aa87
    TEST byte ptr [ESP + 0x3],0x80      ; 0048aab0
        ;   Label: LAB_0048aab0
    JZ 0x0048aabd                       ; 0048aab5
        ;   XREF to: 0048aabd (CONDITIONAL_JUMP)  ; LAB_0048aabd
    TEST byte ptr [ESP],0x1f            ; 0048aab7
    JNZ 0x0048ab1b                      ; 0048aabb
        ;   XREF to: 0048ab1b (CONDITIONAL_JUMP)  ; LAB_0048ab1b
    CMP dword ptr [EBP + 0x4],0x0       ; 0048aabd
        ;   Label: LAB_0048aabd
    JZ 0x0048ab1f                       ; 0048aac1
        ;   XREF to: 0048ab1f (CONDITIONAL_JUMP)  ; LAB_0048ab1f
    MOV EBX,0x621fae                    ; 0048aac3 | = "..\\engine\\drender.cpp"
    MOV ESI,0x29d                       ; 0048aac8
    PUSH 0x621fc4                       ; 0048aacd | = "Can't use demonZFacetCount in shadow ..."
    MOV dword ptr [0x02f0ca48],EBX      ; 0048aad2 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0048aad8 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048aade
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048aae3
    PUSH 0x2c6d5ac                      ; 0048aae6 | g_VertexIndexBuffer
        ;   Label: LAB_0048aae6
    MOV EAX,dword ptr [EDI + 0x4]       ; 0048aaeb
    PUSH EAX                            ; 0048aaee
    PUSH EBP                            ; 0048aaef
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048aaf0
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    MOV EAX,[0x02c6d5a4]                ; 0048aaf5 | g_RenderPixelCounter
    ADD ESP,0xc                         ; 0048aafa
    ADD ESP,0x4                         ; 0048aafd
        ;   Label: LAB_0048aafd
    POP EBP                             ; 0048ab00
    POP EDI                             ; 0048ab01
    POP ESI                             ; 0048ab02
    POP EBX                             ; 0048ab03
    RET                                 ; 0048ab04
    LEA EAX,[EDI + 0x8]                 ; 0048ab05
        ;   Label: LAB_0048ab05
    PUSH EAX                            ; 0048ab08
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048ab09
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048ab0e
    TEST EAX,EAX                        ; 0048ab11
    JNZ 0x0048aa72                      ; 0048ab13
        ;   XREF to: 0048aa72 (CONDITIONAL_JUMP)  ; LAB_0048aa72
    JMP 0x0048aafd                      ; 0048ab19
        ;   XREF to: 0048aafd (UNCONDITIONAL_JUMP)  ; LAB_0048aafd
    XOR EAX,EAX                         ; 0048ab1b
        ;   Label: LAB_0048ab1b
    JMP 0x0048aafd                      ; 0048ab1d
        ;   XREF to: 0048aafd (UNCONDITIONAL_JUMP)  ; LAB_0048aafd
    MOV EDX,0xc0                        ; 0048ab1f
        ;   Label: LAB_0048ab1f
    MOV ECX,0x6                         ; 0048ab24
    MOV EAX,0x490d35                    ; 0048ab29
    MOV dword ptr [0x02d052a0],EDX      ; 0048ab2e | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 0048ab34 | g_RenderStateFlag2
    MOV [0x02d0257c],EAX                ; 0048ab3a | g_ScanlineRenderFunc
    JMP 0x0048aae6                      ; 0048ab3f
        ;   XREF to: 0048aae6 (UNCONDITIONAL_JUMP)  ; LAB_0048aae6


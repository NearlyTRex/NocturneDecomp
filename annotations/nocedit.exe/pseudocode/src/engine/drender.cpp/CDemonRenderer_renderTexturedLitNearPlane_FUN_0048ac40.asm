; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40 (CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   polygon_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597538
;
; Referenced Globals:
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   int g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ac40
        ;   Label: engine_drender.cpp_CDemonRenderer_renderTexturedLitNearPlane_FUN_0048ac40
    PUSH ESI                            ; 0048ac41
    PUSH EDI                            ; 0048ac42
    PUSH EBP                            ; 0048ac43
    SUB ESP,0x4                         ; 0048ac44
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048ac47
    CMP dword ptr [EBX + 0xc],0x0       ; 0048ac4b
    JNZ 0x0048ad01                      ; 0048ac4f
        ;   XREF to: 0048ad01 (CONDITIONAL_JUMP)  ; LAB_0048ad01
    MOV ECX,0xffffffff                  ; 0048ac55
        ;   Label: LAB_0048ac55
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048ac5a
    MOV dword ptr [ESP],ECX             ; 0048ac5e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048ac61
    XOR ECX,ECX                         ; 0048ac64
    TEST ESI,ESI                        ; 0048ac66
    JLE 0x0048aca0                      ; 0048ac68
        ;   XREF to: 0048aca0 (CONDITIONAL_JUMP)  ; LAB_0048aca0
    XOR EDX,EDX                         ; 0048ac6a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048ac6c
        ;   Label: LAB_0048ac6c
    MOV dword ptr [EDX + 0x2c6d5ac],ESI ; 0048ac6f | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    IMUL ESI,ESI,0x30                   ; 0048ac75
    MOV EDI,dword ptr [EBX]             ; 0048ac78
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0048ac7a
    MOV EDI,dword ptr [ESP]             ; 0048ac7e
    ADD EDX,0x4                         ; 0048ac81
    AND EDI,ESI                         ; 0048ac84
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048ac86
    ADD EAX,0xc                         ; 0048ac8a
    INC ECX                             ; 0048ac8d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048ac8e
    MOV dword ptr [ESP],EDI             ; 0048ac91
    CMP ECX,EBP                         ; 0048ac94
    JL 0x0048ac6c                       ; 0048ac96
        ;   XREF to: 0048ac6c (CONDITIONAL_JUMP)  ; LAB_0048ac6c
    LEA EAX,[EAX]                       ; 0048ac98
    MOV EDX,EDX                         ; 0048ac9e
    TEST byte ptr [ESP + 0x3],0x80      ; 0048aca0
        ;   Label: LAB_0048aca0
    JZ 0x0048acad                       ; 0048aca5
        ;   XREF to: 0048acad (CONDITIONAL_JUMP)  ; LAB_0048acad
    TEST byte ptr [ESP],0x1f            ; 0048aca7
    JNZ 0x0048acf9                      ; 0048acab
        ;   XREF to: 0048acf9 (CONDITIONAL_JUMP)  ; LAB_0048acf9
    CMP dword ptr [EBX + 0x4],0x0       ; 0048acad
        ;   Label: LAB_0048acad
    JZ 0x0048ad1a                       ; 0048acb1
        ;   XREF to: 0048ad1a (CONDITIONAL_JUMP)  ; LAB_0048ad1a
    LEA EAX,[EAX]                       ; 0048acb3
    LEA EDX,[EDX]                       ; 0048acb9
    NOP                                 ; 0048acbf
    CMP dword ptr [EBX + 0x4],0x0       ; 0048acc0
        ;   Label: LAB_0048acc0
    JZ 0x0048ad61                       ; 0048acc4
        ;   XREF to: 0048ad61 (CONDITIONAL_JUMP)  ; LAB_0048ad61
    XOR EDI,EDI                         ; 0048acca
    MOV ESI,0x49072f                    ; 0048accc
    MOV dword ptr [0x02d052a0],EDI      ; 0048acd1 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDI      ; 0048acd7 | g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],ESI      ; 0048acdd | g_ScanlineRenderFunc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048ace3
        ;   Label: LAB_0048ace3
    PUSH 0x2c6d5ac                      ; 0048ace7 | g_VertexIndexBuffer
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048acec
    PUSH EDX                            ; 0048acef
    PUSH EBX                            ; 0048acf0
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048acf1
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048acf6
    ADD ESP,0x4                         ; 0048acf9
        ;   Label: LAB_0048acf9
    POP EBP                             ; 0048acfc
    POP EDI                             ; 0048acfd
    POP ESI                             ; 0048acfe
    POP EBX                             ; 0048acff
    RET                                 ; 0048ad00
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048ad01
        ;   Label: LAB_0048ad01
    ADD EAX,0x8                         ; 0048ad05
    PUSH EAX                            ; 0048ad08
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048ad09
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048ad0e
    TEST EAX,EAX                        ; 0048ad11
    JZ 0x0048acf9                       ; 0048ad13
        ;   XREF to: 0048acf9 (CONDITIONAL_JUMP)  ; LAB_0048acf9
    JMP 0x0048ac55                      ; 0048ad15
        ;   XREF to: 0048ac55 (UNCONDITIONAL_JUMP)  ; LAB_0048ac55
    MOV EDX,dword ptr [EBX + 0x20]      ; 0048ad1a
        ;   Label: LAB_0048ad1a
    TEST EDX,EDX                        ; 0048ad1d
    JNZ 0x0048acc0                      ; 0048ad1f
        ;   XREF to: 0048acc0 (CONDITIONAL_JUMP)  ; LAB_0048acc0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048ad21
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048ad25
    XOR ECX,ECX                         ; 0048ad28
    TEST ESI,ESI                        ; 0048ad2a
    JLE 0x0048acc0                      ; 0048ad2c
        ;   XREF to: 0048acc0 (CONDITIONAL_JUMP)  ; LAB_0048acc0
    MOV ESI,dword ptr [EDX + 0x2c6d5ac] ; 0048ad2e | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
        ;   Label: LAB_0048ad2e
    IMUL ESI,ESI,0x30                   ; 0048ad34
    MOV EDI,dword ptr [EBX]             ; 0048ad37
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048ad39
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0048ad3c
    MOV EDI,dword ptr [EBX]             ; 0048ad40
    ADD EDI,ESI                         ; 0048ad42
    MOV ESI,dword ptr [EAX + 0x20]      ; 0048ad44
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048ad47
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048ad4a
    ADD EAX,0xc                         ; 0048ad4e
    INC ECX                             ; 0048ad51
    MOV EDI,dword ptr [ESI + 0x4]       ; 0048ad52
    ADD EDX,0x4                         ; 0048ad55
    CMP ECX,EDI                         ; 0048ad58
    JL 0x0048ad2e                       ; 0048ad5a
        ;   XREF to: 0048ad2e (CONDITIONAL_JUMP)  ; LAB_0048ad2e
    JMP 0x0048acc0                      ; 0048ad5c
        ;   XREF to: 0048acc0 (UNCONDITIONAL_JUMP)  ; LAB_0048acc0
    MOV EDX,0xc1                        ; 0048ad61
        ;   Label: LAB_0048ad61
    MOV ECX,0x3                         ; 0048ad66
    MOV EAX,0x490ec0                    ; 0048ad6b
    MOV dword ptr [0x02d052a0],EDX      ; 0048ad70 | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],ECX      ; 0048ad76 | g_RenderStateFlag2
    MOV [0x02d0257c],EAX                ; 0048ad7c | g_ScanlineRenderFunc
    JMP 0x0048ace3                      ; 0048ad81
        ;   XREF to: 0048ace3 (UNCONDITIONAL_JUMP)  ; LAB_0048ace3


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *polygon_info)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   polygon_info
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_FUN_00570040 at 005702a2
;   core_set.cpp_FUN_005702b0 at 005706eb
;
; Referenced Globals:
;   int g_BitsPerPixel = 0x8
;   int[16] g_VertexIndexBuffer
;   undefined4 g_VertexIndexBuffer[1]
;   RenderScanlineFunc* g_ScanlineRenderFunc
;   _BIT_INTEGER g_RenderStateFlags
;   int g_RenderStateFlag2
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403950
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b970
        ;   Label: engine_drender.cpp_CDemonRenderer_renderUltraPremium_FUN_0048b970
    PUSH ESI                            ; 0048b971
    PUSH EDI                            ; 0048b972
    PUSH EBP                            ; 0048b973
    SUB ESP,0x4                         ; 0048b974
    MOV EBX,dword ptr [ESP + 0x18]      ; 0048b977
    CMP dword ptr [EBX + 0xc],0x0       ; 0048b97b
    JNZ 0x0048ba2e                      ; 0048b97f
        ;   XREF to: 0048ba2e (CONDITIONAL_JUMP)  ; LAB_0048ba2e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048b985
        ;   Label: LAB_0048b985
    MOV ECX,0xffffffff                  ; 0048b989
    XOR EDX,EDX                         ; 0048b98e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0048b990
    MOV dword ptr [ESP],ECX             ; 0048b993
    TEST ESI,ESI                        ; 0048b996
    JLE 0x0048b9d0                      ; 0048b998
        ;   XREF to: 0048b9d0 (CONDITIONAL_JUMP)  ; LAB_0048b9d0
    XOR ECX,ECX                         ; 0048b99a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0048b99c
        ;   Label: LAB_0048b99c
    MOV dword ptr [ECX + 0x2c6d5ac],ESI ; 0048b99f | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
    IMUL ESI,ESI,0x30                   ; 0048b9a5
    MOV EDI,dword ptr [EBX]             ; 0048b9a8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0048b9aa
    MOV EDI,dword ptr [ESP]             ; 0048b9ae
    ADD ECX,0x4                         ; 0048b9b1
    AND EDI,ESI                         ; 0048b9b4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048b9b6
    ADD EAX,0xc                         ; 0048b9ba
    INC EDX                             ; 0048b9bd
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048b9be
    MOV dword ptr [ESP],EDI             ; 0048b9c1
    CMP EDX,EBP                         ; 0048b9c4
    JL 0x0048b99c                       ; 0048b9c6
        ;   XREF to: 0048b99c (CONDITIONAL_JUMP)  ; LAB_0048b99c
    LEA EAX,[EAX]                       ; 0048b9c8
    MOV EDX,EDX                         ; 0048b9ce
    TEST byte ptr [ESP + 0x3],0x80      ; 0048b9d0
        ;   Label: LAB_0048b9d0
    JZ 0x0048b9dd                       ; 0048b9d5
        ;   XREF to: 0048b9dd (CONDITIONAL_JUMP)  ; LAB_0048b9dd
    TEST byte ptr [ESP],0x1f            ; 0048b9d7
    JNZ 0x0048ba26                      ; 0048b9db
        ;   XREF to: 0048ba26 (CONDITIONAL_JUMP)  ; LAB_0048ba26
    CMP dword ptr [EBX + 0x4],0x0       ; 0048b9dd
        ;   Label: LAB_0048b9dd
    JZ 0x0048ba47                       ; 0048b9e1
        ;   XREF to: 0048ba47 (CONDITIONAL_JUMP)  ; LAB_0048ba47
    MOV ESI,0x1                         ; 0048b9e3
    MOV ECX,0x4907e7                    ; 0048b9e8
    XOR EDI,EDI                         ; 0048b9ed
    MOV dword ptr [0x02d052a0],ESI      ; 0048b9ef | g_RenderStateFlags
    MOV dword ptr [0x02d052a4],EDI      ; 0048b9f5 | g_RenderStateFlag2
    MOV dword ptr [0x02d0257c],ECX      ; 0048b9fb | g_ScanlineRenderFunc
    LEA EAX,[EAX]                       ; 0048ba01
    LEA EDX,[EDX]                       ; 0048ba07
    LEA EAX,[EAX]                       ; 0048ba0d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048ba10
        ;   Label: LAB_0048ba10
    PUSH 0x2c6d5ac                      ; 0048ba14 | g_VertexIndexBuffer
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048ba19
    PUSH EDX                            ; 0048ba1c
    PUSH EBX                            ; 0048ba1d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740 ; 0048ba1e
        ;   XREF to: 0048a740 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0048a740(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0048ba23
    ADD ESP,0x4                         ; 0048ba26
        ;   Label: LAB_0048ba26
    POP EBP                             ; 0048ba29
    POP EDI                             ; 0048ba2a
    POP ESI                             ; 0048ba2b
    POP EBX                             ; 0048ba2c
    RET                                 ; 0048ba2d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048ba2e
        ;   Label: LAB_0048ba2e
    ADD EAX,0x8                         ; 0048ba32
    PUSH EAX                            ; 0048ba35
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 0048ba36
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048ba3b
    TEST EAX,EAX                        ; 0048ba3e
    JZ 0x0048ba26                       ; 0048ba40
        ;   XREF to: 0048ba26 (CONDITIONAL_JUMP)  ; LAB_0048ba26
    JMP 0x0048b985                      ; 0048ba42
        ;   XREF to: 0048b985 (UNCONDITIONAL_JUMP)  ; LAB_0048b985
    CMP dword ptr [0x0067939c],0x20     ; 0048ba47 | g_BitsPerPixel
        ;   Label: LAB_0048ba47
    JNZ 0x0048bab9                      ; 0048ba4e
        ;   XREF to: 0048bab9 (CONDITIONAL_JUMP)  ; LAB_0048bab9
    MOV dword ptr [0x02d0257c],0x5b4031 ; 0048ba50 | g_ScanlineRenderFunc
    MOV EBP,0x6                         ; 0048ba5a
        ;   Label: LAB_0048ba5a
    MOV EDI,0x2e7                       ; 0048ba5f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0048ba64
    MOV dword ptr [0x02d052a4],EBP      ; 0048ba67 | g_RenderStateFlag2
    MOV dword ptr [0x02d052a0],EDI      ; 0048ba6d | g_RenderStateFlags
    TEST EAX,EAX                        ; 0048ba73
    JNZ 0x0048ba10                      ; 0048ba75
        ;   XREF to: 0048ba10 (CONDITIONAL_JUMP)  ; LAB_0048ba10
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048ba77
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048ba7b
    XOR ECX,ECX                         ; 0048ba7e
    TEST EDX,EDX                        ; 0048ba80
    JLE 0x0048ba10                      ; 0048ba82
        ;   XREF to: 0048ba10 (CONDITIONAL_JUMP)  ; LAB_0048ba10
    XOR EDX,EDX                         ; 0048ba84
    MOV ESI,dword ptr [EDX + 0x2c6d5ac] ; 0048ba86 | g_VertexIndexBuffer | g_VertexIndexBuffer[1]
        ;   Label: LAB_0048ba86
    IMUL ESI,ESI,0x30                   ; 0048ba8c
    MOV EDI,dword ptr [EBX]             ; 0048ba8f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0048ba91
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0048ba94
    MOV EDI,dword ptr [EBX]             ; 0048ba98
    ADD EDI,ESI                         ; 0048ba9a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0048ba9c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048ba9f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0048baa2
    ADD EAX,0xc                         ; 0048baa6
    INC ECX                             ; 0048baa9
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048baaa
    ADD EDX,0x4                         ; 0048baad
    CMP ECX,EBP                         ; 0048bab0
    JL 0x0048ba86                       ; 0048bab2
        ;   XREF to: 0048ba86 (CONDITIONAL_JUMP)  ; LAB_0048ba86
    JMP 0x0048ba10                      ; 0048bab4
        ;   XREF to: 0048ba10 (UNCONDITIONAL_JUMP)  ; LAB_0048ba10
    MOV dword ptr [0x02d0257c],0x5b4823 ; 0048bab9 | g_ScanlineRenderFunc
        ;   Label: LAB_0048bab9
    JMP 0x0048ba5a                      ; 0048bac3
        ;   XREF to: 0048ba5a (UNCONDITIONAL_JUMP)  ; LAB_0048ba5a


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0053ab0e(CDemonSet *param_1,SMRGLPrimitiveTriangle *param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CGame* g_CGamePtr = 01d2130c
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0053a3f0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0053ab0e
        ;   Label: core_set.cpp_FUN_0053ab0e
    PUSH EBX                            ; 0053ab10
    PUSH EBP                            ; 0053ab11
    MOV EAX,[0x005fe9dc]                ; 0053ab12 | g_CGamePtr
    CMP dword ptr [EAX + 0x214],0x0     ; 0053ab17
    JNZ 0x0053ab5a                      ; 0053ab1e
        ;   XREF to: 0053ab5a (CONDITIONAL_JUMP)  ; LAB_0053ab5a
    CMP dword ptr [EAX + 0x218],0x0     ; 0053ab20
    JZ 0x0053ab3c                       ; 0053ab27
        ;   XREF to: 0053ab3c (CONDITIONAL_JUMP)  ; LAB_0053ab3c
    MOV EBX,dword ptr [0x005f2afc]      ; 0053ab29 | DAT_005f2afc
    PUSH EBX                            ; 0053ab2f
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0053ab30
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0053ab35
    TEST EAX,EAX                        ; 0053ab38
    JZ 0x0053ab5d                       ; 0053ab3a
        ;   XREF to: 0053ab5d (CONDITIONAL_JUMP)  ; LAB_0053ab5d
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053ab3c
        ;   Label: LAB_0053ab3c
    PUSH EAX                            ; 0053ab40
    MOV EDX,dword ptr [ESP + 0x18]      ; 0053ab41
    PUSH EDX                            ; 0053ab45
    MOV ECX,dword ptr [ESP + 0x18]      ; 0053ab46
    PUSH ECX                            ; 0053ab4a
    MOV EBX,dword ptr [0x005f2afc]      ; 0053ab4b | DAT_005f2afc
    PUSH EBX                            ; 0053ab51
    CALL engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880 ; 0053ab52
        ;   XREF to: 0046d880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046d880(CDemonRenderer * this_ptr, SMRGLPrimitiveTriangle * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 0053ab57
    POP EBP                             ; 0053ab5a
        ;   Label: LAB_0053ab5a
    POP EBX                             ; 0053ab5b
    RET                                 ; 0053ab5c
    PUSH EDI                            ; 0053ab5d
        ;   Label: LAB_0053ab5d
    PUSH ESI                            ; 0053ab5e
    PUSH 0xffff                         ; 0053ab5f
    MOV ESI,dword ptr [ESP + 0x20]      ; 0053ab64
    PUSH ESI                            ; 0053ab68
    MOV EDI,dword ptr [ESP + 0x20]      ; 0053ab69
    PUSH EDI                            ; 0053ab6d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0053ab6e
    PUSH EBP                            ; 0053ab72
    CALL core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0053a3f0 ; 0053ab73
        ;   XREF to: 0053a3f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0053a3f0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha)
    ADD ESP,0x10                        ; 0053ab78
    POP ESI                             ; 0053ab7b
    POP EDI                             ; 0053ab7c
    POP EBP                             ; 0053ab7d
    POP EBX                             ; 0053ab7e
    RET                                 ; 0053ab7f


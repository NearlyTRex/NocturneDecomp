; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_00533ece(CDemonSet *param_1,SMRGLHeaderPrimitive *param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CGame* g_CGamePtr = 01cb6900
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_005337b0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00533ece
        ;   Label: core_set.cpp_FUN_00533ece
    PUSH EBX                            ; 00533ed0
    PUSH EBP                            ; 00533ed1
    MOV EAX,[0x00616494]                ; 00533ed2 | g_CGamePtr
    CMP dword ptr [EAX + 0x20c],0x0     ; 00533ed7
    JNZ 0x00533f1a                      ; 00533ede
        ;   XREF to: 00533f1a (CONDITIONAL_JUMP)  ; LAB_00533f1a
    CMP dword ptr [EAX + 0x210],0x0     ; 00533ee0
    JZ 0x00533efc                       ; 00533ee7
        ;   XREF to: 00533efc (CONDITIONAL_JUMP)  ; LAB_00533efc
    MOV EBX,dword ptr [0x0060b280]      ; 00533ee9 | DAT_0060b280
    PUSH EBX                            ; 00533eef
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 00533ef0
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00533ef5
    TEST EAX,EAX                        ; 00533ef8
    JZ 0x00533f1d                       ; 00533efa
        ;   XREF to: 00533f1d (CONDITIONAL_JUMP)  ; LAB_00533f1d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00533efc
        ;   Label: LAB_00533efc
    PUSH EAX                            ; 00533f00
    MOV EDX,dword ptr [ESP + 0x18]      ; 00533f01
    PUSH EDX                            ; 00533f05
    MOV ECX,dword ptr [ESP + 0x18]      ; 00533f06
    PUSH ECX                            ; 00533f0a
    MOV EBX,dword ptr [0x0060b280]      ; 00533f0b | DAT_0060b280
    PUSH EBX                            ; 00533f11
    CALL engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0 ; 00533f12
        ;   XREF to: 0046bca0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_0046bca0(CDemonRenderer * this_ptr, SMRGLPrimitiveTriangle * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 00533f17
    POP EBP                             ; 00533f1a
        ;   Label: LAB_00533f1a
    POP EBX                             ; 00533f1b
    RET                                 ; 00533f1c
    PUSH EDI                            ; 00533f1d
        ;   Label: LAB_00533f1d
    PUSH ESI                            ; 00533f1e
    PUSH 0xffff                         ; 00533f1f
    MOV ESI,dword ptr [ESP + 0x20]      ; 00533f24
    PUSH ESI                            ; 00533f28
    MOV EDI,dword ptr [ESP + 0x20]      ; 00533f29
    PUSH EDI                            ; 00533f2d
    MOV EBP,dword ptr [ESP + 0x20]      ; 00533f2e
    PUSH EBP                            ; 00533f32
    CALL core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_005337b0 ; 00533f33
        ;   XREF to: 005337b0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_005337b0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha)
    ADD ESP,0x10                        ; 00533f38
    POP ESI                             ; 00533f3b
    POP EDI                             ; 00533f3c
    POP EBP                             ; 00533f3d
    POP EBX                             ; 00533f3e
    RET                                 ; 00533f3f


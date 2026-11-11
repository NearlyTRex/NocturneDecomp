; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0055517e(CDemonSet *param_1,SMRGLPrimitiveTriangle *param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CGame* g_CGamePtr = 01ccf390
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_00554a60
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;   engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0055517e
        ;   Label: core_set.cpp_FUN_0055517e
    PUSH EBX                            ; 00555180
    PUSH EBP                            ; 00555181
    MOV EAX,[0x0061d95c]                ; 00555182 | g_CGamePtr
    CMP dword ptr [EAX + 0x20c],0x0     ; 00555187
    JNZ 0x005551ca                      ; 0055518e
        ;   XREF to: 005551ca (CONDITIONAL_JUMP)  ; LAB_005551ca
    CMP dword ptr [EAX + 0x210],0x0     ; 00555190
    JZ 0x005551ac                       ; 00555197
        ;   XREF to: 005551ac (CONDITIONAL_JUMP)  ; LAB_005551ac
    MOV EBX,dword ptr [0x00612560]      ; 00555199 | DAT_00612560
    PUSH EBX                            ; 0055519f
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 005551a0
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005551a5
    TEST EAX,EAX                        ; 005551a8
    JZ 0x005551cd                       ; 005551aa
        ;   XREF to: 005551cd (CONDITIONAL_JUMP)  ; LAB_005551cd
    MOV EAX,dword ptr [ESP + 0x18]      ; 005551ac
        ;   Label: LAB_005551ac
    PUSH EAX                            ; 005551b0
    MOV EDX,dword ptr [ESP + 0x18]      ; 005551b1
    PUSH EDX                            ; 005551b5
    MOV ECX,dword ptr [ESP + 0x18]      ; 005551b6
    PUSH ECX                            ; 005551ba
    MOV EBX,dword ptr [0x00612560]      ; 005551bb | DAT_00612560
    PUSH EBX                            ; 005551c1
    CALL engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0 ; 005551c2
        ;   XREF to: 004841a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTriangleBatch_FUN_004841a0(CDemonRenderer * this_ptr, SMRGLPrimitiveTriangle * primitive_array, int primitive_count, int render_flags)
    ADD ESP,0x10                        ; 005551c7
    POP EBP                             ; 005551ca
        ;   Label: LAB_005551ca
    POP EBX                             ; 005551cb
    RET                                 ; 005551cc
    PUSH EDI                            ; 005551cd
        ;   Label: LAB_005551cd
    PUSH ESI                            ; 005551ce
    PUSH 0xffff                         ; 005551cf
    MOV ESI,dword ptr [ESP + 0x20]      ; 005551d4
    PUSH ESI                            ; 005551d8
    MOV EDI,dword ptr [ESP + 0x20]      ; 005551d9
    PUSH EDI                            ; 005551dd
    MOV EBP,dword ptr [ESP + 0x20]      ; 005551de
    PUSH EBP                            ; 005551e2
    CALL core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_00554a60 ; 005551e3
        ;   XREF to: 00554a60 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_00554a60(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prims, int count, int alpha)
    ADD ESP,0x10                        ; 005551e8
    POP ESI                             ; 005551eb
    POP EDI                             ; 005551ec
    POP EBP                             ; 005551ed
    POP EBX                             ; 005551ee
    RET                                 ; 005551ef


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[5]:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 at 00474d9d
;   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_004fac90 at 004facb9
;   core_mirror.cpp_FUN_004fad5e at 004faec6
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 at 00534637
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_00585e10 at 00586274
;
; Referenced Globals:
;   undefined4 DAT_0060b284
;   undefined4 DAT_01ba5c7c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;   undefined4 DAT_01e61b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004699a0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
    PUSH ESI                            ; 004699a1
    PUSH EDI                            ; 004699a2
    PUSH EBP                            ; 004699a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004699a4
    MOV ESI,dword ptr [ESP + 0x18]      ; 004699a8
    MOV EDI,dword ptr [0x01e61b58]      ; 004699ac | DAT_01e61b58
    XOR EDX,EDX                         ; 004699b2
    MOV ECX,dword ptr [EBX + 0xc]       ; 004699b4
    MOV dword ptr [0x01ba5c7c],EDX      ; 004699b7 | DAT_01ba5c7c
    TEST ECX,ECX                        ; 004699bd
    JNZ 0x00469a43                      ; 004699bf
        ;   XREF to: 00469a43 (CONDITIONAL_JUMP)  ; LAB_00469a43
    CMP dword ptr [EBX + 0x4],0x0       ; 004699c5
        ;   Label: LAB_004699c5
    JZ 0x00469a5c                       ; 004699c9
        ;   XREF to: 00469a5c (CONDITIONAL_JUMP)  ; LAB_00469a5c
    XOR EAX,EAX                         ; 004699cf
    MOV EBP,0x46eeb5                    ; 004699d1
    MOV [0x01c38b54],EAX                ; 004699d6 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 004699db | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],EBP      ; 004699e0 | DAT_01c35e6c
    MOV ECX,dword ptr [0x01c37788]      ; 004699e6 | DAT_01c37788
        ;   Label: LAB_004699e6
    MOV EBP,dword ptr [EBX + 0x4]       ; 004699ec
    TEST ECX,ECX                        ; 004699ef
    JZ 0x004699fe                       ; 004699f1
        ;   XREF to: 004699fe (CONDITIONAL_JUMP)  ; LAB_004699fe
    PUSH 0x1                            ; 004699f3
    PUSH EBX                            ; 004699f5
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940 ; 004699f6
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 004699fb
    LEA EAX,[ESI + 0x18]                ; 004699fe
        ;   Label: LAB_004699fe
    PUSH EAX                            ; 00469a01
    MOV EAX,dword ptr [ESI + 0x4]       ; 00469a02
    PUSH EAX                            ; 00469a05
    PUSH EBX                            ; 00469a06
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 00469a07
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    MOV EDX,dword ptr [0x01c37788]      ; 00469a0c | DAT_01c37788
    ADD ESP,0xc                         ; 00469a12
    TEST EDX,EDX                        ; 00469a15
    JZ 0x00469a23                       ; 00469a17
        ;   XREF to: 00469a23 (CONDITIONAL_JUMP)  ; LAB_00469a23
    PUSH EBP                            ; 00469a19
    PUSH EBX                            ; 00469a1a
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940 ; 00469a1b
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_0046b940(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00469a20
    MOV EAX,[0x01ba5c7c]                ; 00469a23 | DAT_01ba5c7c
        ;   Label: LAB_00469a23
    MOV ECX,dword ptr [0x0060b284]      ; 00469a28 | DAT_0060b284
    MOV dword ptr [0x01e61b58],EDI      ; 00469a2e | DAT_01e61b58
    CMP EAX,ECX                         ; 00469a34
    SETGE AL                            ; 00469a36
    AND EAX,0xff                        ; 00469a39
    POP EBP                             ; 00469a3e
    POP EDI                             ; 00469a3f
    POP ESI                             ; 00469a40
    POP EBX                             ; 00469a41
    RET                                 ; 00469a42
    LEA EAX,[ESI + 0x8]                 ; 00469a43
        ;   Label: LAB_00469a43
    PUSH EAX                            ; 00469a46
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00469a47
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00469a4c
    TEST EAX,EAX                        ; 00469a4f
    JNZ 0x004699c5                      ; 00469a51
        ;   XREF to: 004699c5 (CONDITIONAL_JUMP)  ; LAB_004699c5
    POP EBP                             ; 00469a57
    POP EDI                             ; 00469a58
    POP ESI                             ; 00469a59
    POP EBX                             ; 00469a5a
    RET                                 ; 00469a5b
    MOV EDX,0xc0                        ; 00469a5c
        ;   Label: LAB_00469a5c
    MOV ECX,0x6                         ; 00469a61
    MOV EAX,0x46ee37                    ; 00469a66
    MOV dword ptr [0x01c38b54],EDX      ; 00469a6b | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 00469a71 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 00469a77 | DAT_01c35e6c
    JMP 0x004699e6                      ; 00469a7c
        ;   XREF to: 004699e6 (UNCONDITIONAL_JUMP)  ; LAB_004699e6


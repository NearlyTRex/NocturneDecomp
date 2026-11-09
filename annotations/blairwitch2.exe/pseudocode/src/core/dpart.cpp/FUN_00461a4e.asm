; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00461a4e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90
;   core_set.cpp_FUN_00534130
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00461a4e
        ;   Label: core_dpart.cpp_FUN_00461a4e
    PUSH EBX                            ; 00461a50
    PUSH ESI                            ; 00461a51
    PUSH EDI                            ; 00461a52
    PUSH EBP                            ; 00461a53
    SUB ESP,0x48                        ; 00461a54
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00461a57
    PUSH 0x0                            ; 00461a5b
    MOV EDX,dword ptr [0x0060b280]      ; 00461a5d | DAT_0060b280
    PUSH EDX                            ; 00461a63
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 00461a64
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00461a69
    PUSH 0x0                            ; 00461a6c
    MOV ECX,dword ptr [0x0060b280]      ; 00461a6e | DAT_0060b280
    PUSH ECX                            ; 00461a74
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 00461a75
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [EDI + 0x20]      ; 00461a7a
    MOV EBX,dword ptr [EDI + 0x28]      ; 00461a7d
    MOV EAX,EDX                         ; 00461a80
    SAR EDX,0x1f                        ; 00461a82
    IDIV EBX                            ; 00461a85
    MOV EBX,dword ptr [EDI + 0x384]     ; 00461a87
    IMUL EBX,EAX                        ; 00461a8d
    MOV EDX,EAX                         ; 00461a90
    LEA EAX,[EBX*0x4 + 0x0]             ; 00461a92
    SUB EAX,EBX                         ; 00461a99
    SHL EAX,0x2                         ; 00461a9b
    MOV EBX,dword ptr [EDI + 0x2c]      ; 00461a9e
    ADD ESP,0x8                         ; 00461aa1
    ADD EAX,EBX                         ; 00461aa4
    PUSH EAX                            ; 00461aa6
    PUSH EDX                            ; 00461aa7
    MOV ESI,dword ptr [0x0061b5a8]      ; 00461aa8 | g_CDemonSetPtr
    PUSH ESI                            ; 00461aae
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90 ; 00461aaf
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,[0x0060b280]                ; 00461ab4 | DAT_0060b280
    MOV EDX,dword ptr [EAX + 0x18]      ; 00461ab9
    ADD ESP,0xc                         ; 00461abc
    TEST EDX,EDX                        ; 00461abf
    JNZ 0x00461b16                      ; 00461ac1
        ;   XREF to: 00461b16 (CONDITIONAL_JUMP)  ; LAB_00461b16
    MOV EBP,dword ptr [EDI + 0x24]      ; 00461ac3
        ;   Label: LAB_00461ac3
    MOV EBX,dword ptr [EDI + 0x34]      ; 00461ac6
    XOR ESI,ESI                         ; 00461ac9
    TEST EBP,EBP                        ; 00461acb
    JLE 0x00461aec                      ; 00461acd
        ;   XREF to: 00461aec (CONDITIONAL_JUMP)  ; LAB_00461aec
    MOV EBP,0x3                         ; 00461acf
    PUSH EBX                            ; 00461ad4
        ;   Label: LAB_00461ad4
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00461ad5
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00461ada
    TEST EAX,EAX                        ; 00461add
    JNZ 0x00461b23                      ; 00461adf
        ;   XREF to: 00461b23 (CONDITIONAL_JUMP)  ; LAB_00461b23
    INC ESI                             ; 00461ae1
        ;   Label: LAB_00461ae1
    MOV EAX,dword ptr [EDI + 0x24]      ; 00461ae2
    ADD EBX,0x20                        ; 00461ae5
    CMP ESI,EAX                         ; 00461ae8
    JL 0x00461ad4                       ; 00461aea
        ;   XREF to: 00461ad4 (CONDITIONAL_JUMP)  ; LAB_00461ad4
    PUSH 0x1                            ; 00461aec
        ;   Label: LAB_00461aec
    MOV ECX,dword ptr [0x0060b280]      ; 00461aee | DAT_0060b280
    PUSH ECX                            ; 00461af4
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870 ; 00461af5
        ;   XREF to: 0046b870 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00461afa
    PUSH 0x1                            ; 00461afd
    MOV EBX,dword ptr [0x0060b280]      ; 00461aff | DAT_0060b280
    PUSH EBX                            ; 00461b05
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 00461b06
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00461b0b
    ADD ESP,0x48                        ; 00461b0e
    POP EBP                             ; 00461b11
    POP EDI                             ; 00461b12
    POP ESI                             ; 00461b13
    POP EBX                             ; 00461b14
    RET                                 ; 00461b15
    PUSH 0x1                            ; 00461b16
        ;   Label: LAB_00461b16
    PUSH EAX                            ; 00461b18
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920 ; 00461b19
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 00461b1e
    JMP 0x00461ac3                      ; 00461b21
        ;   XREF to: 00461ac3 (UNCONDITIONAL_JUMP)  ; LAB_00461ac3
    MOV EAX,ESI                         ; 00461b23
        ;   Label: LAB_00461b23
    AND EAX,0x7f                        ; 00461b25
    ADD EAX,0x80                        ; 00461b28
    NEG EAX                             ; 00461b2d
    PUSH EAX                            ; 00461b2f
    MOV EDX,dword ptr [0x0060b280]      ; 00461b30 | DAT_0060b280
    PUSH EDX                            ; 00461b36
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0 ; 00461b37
        ;   XREF to: 0046b7e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 00461b3c
    MOV EAX,dword ptr [EBX]             ; 00461b3f
    MOV dword ptr [ESP + 0x8],EAX       ; 00461b41
    MOV EAX,dword ptr [EBX + 0x4]       ; 00461b45
    MOV dword ptr [ESP + 0xc],EAX       ; 00461b48
    MOV EAX,dword ptr [EBX + 0x8]       ; 00461b4c
    MOV dword ptr [ESP + 0x10],EAX      ; 00461b4f
    MOV EAX,dword ptr [EBX + 0xc]       ; 00461b53
    MOV dword ptr [ESP + 0x14],EAX      ; 00461b56
    MOV EAX,dword ptr [EBX + 0x10]      ; 00461b5a
    MOV dword ptr [ESP + 0x18],EAX      ; 00461b5d
    MOV EAX,dword ptr [EBX + 0x14]      ; 00461b61
    MOV dword ptr [ESP + 0x24],EAX      ; 00461b64
    MOV EAX,dword ptr [EBX + 0x18]      ; 00461b68
    MOV dword ptr [ESP + 0x30],EAX      ; 00461b6b
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00461b6f
    CMP ECX,-0x1                        ; 00461b72
    JZ 0x00461b9f                       ; 00461b75
        ;   XREF to: 00461b9f (CONDITIONAL_JUMP)  ; LAB_00461b9f
    MOV EAX,0x4                         ; 00461b77
    MOV dword ptr [ESP + 0x3c],ECX      ; 00461b7c
    MOV dword ptr [ESP + 0x4],EAX       ; 00461b80
    PUSH 0x1                            ; 00461b84
        ;   Label: LAB_00461b84
    LEA EAX,[ESP + 0x4]                 ; 00461b86
    PUSH EAX                            ; 00461b8a
    MOV EDX,dword ptr [0x0061b5a8]      ; 00461b8b | g_CDemonSetPtr
    PUSH EDX                            ; 00461b91
    CALL core_set.cpp_FUN_00534130      ; 00461b92
        ;   XREF to: 00534130 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00534130()
    ADD ESP,0xc                         ; 00461b97
    JMP 0x00461ae1                      ; 00461b9a
        ;   XREF to: 00461ae1 (UNCONDITIONAL_JUMP)  ; LAB_00461ae1
    MOV dword ptr [ESP + 0x4],EBP       ; 00461b9f
        ;   Label: LAB_00461b9f
    JMP 0x00461b84                      ; 00461ba3
        ;   XREF to: 00461b84 (UNCONDITIONAL_JUMP)  ; LAB_00461b84


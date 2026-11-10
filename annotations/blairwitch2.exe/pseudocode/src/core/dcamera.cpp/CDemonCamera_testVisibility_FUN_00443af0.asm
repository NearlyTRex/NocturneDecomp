; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dcamera_cpp_CDemonCamera_testVisibility_FUN_00443af0(CDemonCamera *this_ptr,CVector3i *corners)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   corners
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_00622014
;   undefined4 DAT_00622044
;   undefined4 DAT_01ba5c50
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610
;   engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880
;   engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40
;   engine_special.cpp_FUN_0055d9ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443af0
        ;   Label: core_dcamera.cpp_CDemonCamera_testVisibility_FUN_00443af0
    PUSH ESI                            ; 00443af1
    PUSH EDI                            ; 00443af2
    PUSH EBP                            ; 00443af3
    SUB ESP,0x28                        ; 00443af4
    MOV EBP,dword ptr [ESP + 0x40]      ; 00443af7
    PUSH 0x151072c                      ; 00443afb
    MOV EDX,dword ptr [0x0060b280]      ; 00443b00 | DAT_0060b280
    PUSH EDX                            ; 00443b06 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0 ; 00443b07
        ;   XREF to: 0046cca0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046cca0(CDemonRenderer * this_ptr, SCameraViewportState * output_state)
    ADD ESP,0x8                         ; 00443b0c
    PUSH 0x1468440                      ; 00443b0f
    MOV ECX,dword ptr [0x0060b280]      ; 00443b14 | DAT_0060b280
    MOV EDI,0x622014                    ; 00443b1a | DAT_00622014
    PUSH ECX                            ; 00443b1f | DAT_01ba5c50
    MOV ESI,EBP                         ; 00443b20
    ADD EBP,0x60                        ; 00443b22
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40 ; 00443b25
        ;   XREF to: 0046cb40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40(CDemonRenderer * this_ptr, SCameraViewportState * camera_state)
    ADD ESP,0x8                         ; 00443b2a
    PUSH ESI                            ; 00443b2d
        ;   Label: LAB_00443b2d
    PUSH EDI                            ; 00443b2e | DAT_00622014 | DAT_00622044
    CALL engine_special.cpp_FUN_0055d9ec ; 00443b2f
        ;   XREF to: 0055d9ec (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d9ec(SProjectedVertex * output, CVector3i * input)
    ADD ESI,0xc                         ; 00443b34
    ADD ESP,0x8                         ; 00443b37
    ADD EDI,0x30                        ; 00443b3a
    CMP ESI,EBP                         ; 00443b3d
    JNZ 0x00443b2d                      ; 00443b3f
        ;   XREF to: 00443b2d (CONDITIONAL_JUMP)  ; LAB_00443b2d
    MOV EBX,0x4                         ; 00443b41
    PUSH 0x1                            ; 00443b46
    MOV EDX,dword ptr [0x0060b280]      ; 00443b48 | DAT_0060b280
    XOR ESI,EBP                         ; 00443b4e
    XOR EDI,EDI                         ; 00443b50
    MOV EBP,0x2                         ; 00443b52
    MOV dword ptr [ESP + 0x8],EBX       ; 00443b57
    MOV dword ptr [ESP + 0x18],ESI      ; 00443b5b
    MOV dword ptr [ESP + 0x14],EDI      ; 00443b5f
    PUSH EDX                            ; 00443b63 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x14],EDI      ; 00443b64
    MOV dword ptr [ESP + 0x10],EDI      ; 00443b68
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 00443b6c
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    LEA EAX,[ESP + 0x8]                 ; 00443b71
    ADD ESP,0x8                         ; 00443b75
    XOR ESI,ESI                         ; 00443b78
    MOV dword ptr [ESP + 0x18],EDI      ; 00443b7a
    MOV dword ptr [ESP + 0x1c],EBX      ; 00443b7e
    PUSH EAX                            ; 00443b82
    MOV EAX,[0x0061b5a8]                ; 00443b83 | g_CDemonSetPtr
    MOV EDI,0x6                         ; 00443b88
    PUSH EAX                            ; 00443b8d | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x2c],EBP      ; 00443b8e
    MOV dword ptr [ESP + 0x28],EDI      ; 00443b92
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 00443b96
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00443b9b
    TEST EAX,EAX                        ; 00443b9e
    JZ 0x00443bd6                       ; 00443ba0
        ;   XREF to: 00443bd6 (CONDITIONAL_JUMP)  ; LAB_00443bd6
    MOV ESI,0x1                         ; 00443ba2
        ;   Label: LAB_00443ba2
    PUSH 0x0                            ; 00443ba7
        ;   Label: LAB_00443ba7
    MOV ECX,dword ptr [0x0060b280]      ; 00443ba9 | DAT_0060b280
    PUSH ECX                            ; 00443baf | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880 ; 00443bb0
        ;   XREF to: 0046b880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046b880(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00443bb5
    PUSH 0x151072c                      ; 00443bb8
    MOV EBX,dword ptr [0x0060b280]      ; 00443bbd | DAT_0060b280
    PUSH EBX                            ; 00443bc3 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40 ; 00443bc4
        ;   XREF to: 0046cb40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndViewport_FUN_0046cb40(CDemonRenderer * this_ptr, SCameraViewportState * camera_state)
    ADD ESP,0x8                         ; 00443bc9
    MOV EAX,ESI                         ; 00443bcc
    ADD ESP,0x28                        ; 00443bce
    POP EBP                             ; 00443bd1
    POP EDI                             ; 00443bd2
    POP ESI                             ; 00443bd3
    POP EBX                             ; 00443bd4
    RET                                 ; 00443bd5
    MOV EDX,0x1                         ; 00443bd6
        ;   Label: LAB_00443bd6
    MOV ECX,0x3                         ; 00443bdb
    MOV EBX,0x7                         ; 00443be0
    MOV EDI,0x5                         ; 00443be5
    MOV EAX,ESP                         ; 00443bea
    MOV EBP,dword ptr [0x0061b5a8]      ; 00443bec | g_CDemonSetPtr
    PUSH EAX                            ; 00443bf2
    MOV dword ptr [ESP + 0x1c],EDX      ; 00443bf3
    MOV dword ptr [ESP + 0x20],ECX      ; 00443bf7
    PUSH EBP                            ; 00443bfb | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EBX      ; 00443bfc
    MOV dword ptr [ESP + 0x2c],EDI      ; 00443c00
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 00443c04
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00443c09
    TEST EAX,EAX                        ; 00443c0c
    JNZ 0x00443ba2                      ; 00443c0e
        ;   XREF to: 00443ba2 (CONDITIONAL_JUMP)  ; LAB_00443ba2
    MOV EDX,0x1                         ; 00443c10
    MOV dword ptr [ESP + 0x18],EAX      ; 00443c15
    MOV EAX,ESP                         ; 00443c19
    MOV dword ptr [ESP + 0x20],EDI      ; 00443c1b
    PUSH EAX                            ; 00443c1f
    MOV EDI,dword ptr [0x0061b5a8]      ; 00443c20 | g_CDemonSetPtr
    MOV EBX,0x4                         ; 00443c26
    PUSH EDI                            ; 00443c2b | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDX      ; 00443c2c
    MOV dword ptr [ESP + 0x2c],EBX      ; 00443c30
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 00443c34
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00443c39
    TEST EAX,EAX                        ; 00443c3c
    JNZ 0x00443ba2                      ; 00443c3e
        ;   XREF to: 00443ba2 (CONDITIONAL_JUMP)  ; LAB_00443ba2
    MOV EBP,0x2                         ; 00443c44
    MOV EAX,0x6                         ; 00443c49
    MOV EDX,0x7                         ; 00443c4e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00443c53
    MOV EAX,ESP                         ; 00443c57
    MOV ECX,0x3                         ; 00443c59
    PUSH EAX                            ; 00443c5e
    MOV EBX,dword ptr [0x0061b5a8]      ; 00443c5f | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBP      ; 00443c65
    PUSH EBX                            ; 00443c69 | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x28],EDX      ; 00443c6a
    MOV dword ptr [ESP + 0x2c],ECX      ; 00443c6e
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 00443c72
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00443c77
    TEST EAX,EAX                        ; 00443c7a
    JNZ 0x00443ba2                      ; 00443c7c
        ;   XREF to: 00443ba2 (CONDITIONAL_JUMP)  ; LAB_00443ba2
    MOV dword ptr [ESP + 0x20],0x3      ; 00443c82
    MOV EAX,ESP                         ; 00443c8a
    MOV EDX,0x1                         ; 00443c8c
    PUSH EAX                            ; 00443c91
    MOV ECX,dword ptr [0x0061b5a8]      ; 00443c92 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],ESI      ; 00443c98
    PUSH ECX                            ; 00443c9c | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EBP      ; 00443c9d
    MOV dword ptr [ESP + 0x2c],EDX      ; 00443ca1
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 00443ca5
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00443caa
    TEST EAX,EAX                        ; 00443cad
    JNZ 0x00443ba2                      ; 00443caf
        ;   XREF to: 00443ba2 (CONDITIONAL_JUMP)  ; LAB_00443ba2
    MOV EBX,0x4                         ; 00443cb5
    MOV EAX,0x6                         ; 00443cba
    MOV EDI,0x5                         ; 00443cbf
    MOV dword ptr [ESP + 0x24],EAX      ; 00443cc4
    MOV EAX,ESP                         ; 00443cc8
    MOV EBP,0x7                         ; 00443cca
    PUSH EAX                            ; 00443ccf
    MOV EDX,dword ptr [0x0061b5a8]      ; 00443cd0 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x1c],EBX      ; 00443cd6
    PUSH EDX                            ; 00443cda | g_CDemonSetInstance
    MOV dword ptr [ESP + 0x24],EDI      ; 00443cdb
    MOV dword ptr [ESP + 0x28],EBP      ; 00443cdf
    CALL core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610 ; 00443ce3
        ;   XREF to: 00534610 (UNCONDITIONAL_CALL)  ; int core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_00534610(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 00443ce8
    TEST EAX,EAX                        ; 00443ceb
    JZ 0x00443ba7                       ; 00443ced
        ;   XREF to: 00443ba7 (CONDITIONAL_JUMP)  ; LAB_00443ba7
    JMP 0x00443ba2                      ; 00443cf3
        ;   XREF to: 00443ba2 (UNCONDITIONAL_JUMP)  ; LAB_00443ba2


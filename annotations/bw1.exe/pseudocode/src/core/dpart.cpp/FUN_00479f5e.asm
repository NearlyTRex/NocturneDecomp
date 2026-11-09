; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00479f5e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   CDemonSet* g_CDemonSetPtr = 01e82168
;
; Called Functions:
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140
;   core_set.cpp_FUN_005553e0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00479f5e
        ;   Label: core_dpart.cpp_FUN_00479f5e
    PUSH EBX                            ; 00479f60
    PUSH ESI                            ; 00479f61
    PUSH EDI                            ; 00479f62
    PUSH EBP                            ; 00479f63
    SUB ESP,0x48                        ; 00479f64
    MOV EDI,dword ptr [ESP + 0x5c]      ; 00479f67
    PUSH 0x0                            ; 00479f6b
    MOV EDX,dword ptr [0x00612560]      ; 00479f6d | DAT_00612560
    PUSH EDX                            ; 00479f73
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 00479f74
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 00479f79
    PUSH 0x0                            ; 00479f7c
    MOV ECX,dword ptr [0x00612560]      ; 00479f7e | DAT_00612560
    PUSH ECX                            ; 00479f84
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 00479f85
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [EDI + 0x20]      ; 00479f8a
    MOV EBX,dword ptr [EDI + 0x28]      ; 00479f8d
    MOV EAX,EDX                         ; 00479f90
    SAR EDX,0x1f                        ; 00479f92
    IDIV EBX                            ; 00479f95
    MOV EBX,dword ptr [EDI + 0x384]     ; 00479f97
    IMUL EBX,EAX                        ; 00479f9d
    MOV EDX,EAX                         ; 00479fa0
    LEA EAX,[EBX*0x4 + 0x0]             ; 00479fa2
    SUB EAX,EBX                         ; 00479fa9
    SHL EAX,0x2                         ; 00479fab
    MOV EBX,dword ptr [EDI + 0x2c]      ; 00479fae
    ADD ESP,0x8                         ; 00479fb1
    ADD EAX,EBX                         ; 00479fb4
    PUSH EAX                            ; 00479fb6
    PUSH EDX                            ; 00479fb7
    MOV ESI,dword ptr [0x00622c18]      ; 00479fb8 | g_CDemonSetPtr
    PUSH ESI                            ; 00479fbe
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140 ; 00479fbf
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00553140(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,[0x00612560]                ; 00479fc4 | DAT_00612560
    MOV EDX,dword ptr [EAX + 0x18]      ; 00479fc9
    ADD ESP,0xc                         ; 00479fcc
    TEST EDX,EDX                        ; 00479fcf
    JNZ 0x0047a026                      ; 00479fd1
        ;   XREF to: 0047a026 (CONDITIONAL_JUMP)  ; LAB_0047a026
    MOV EBP,dword ptr [EDI + 0x24]      ; 00479fd3
        ;   Label: LAB_00479fd3
    MOV EBX,dword ptr [EDI + 0x34]      ; 00479fd6
    XOR ESI,ESI                         ; 00479fd9
    TEST EBP,EBP                        ; 00479fdb
    JLE 0x00479ffc                      ; 00479fdd
        ;   XREF to: 00479ffc (CONDITIONAL_JUMP)  ; LAB_00479ffc
    MOV EBP,0x3                         ; 00479fdf
    PUSH EBX                            ; 00479fe4
        ;   Label: LAB_00479fe4
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00479fe5
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00479fea
    TEST EAX,EAX                        ; 00479fed
    JNZ 0x0047a033                      ; 00479fef
        ;   XREF to: 0047a033 (CONDITIONAL_JUMP)  ; LAB_0047a033
    INC ESI                             ; 00479ff1
        ;   Label: LAB_00479ff1
    MOV EAX,dword ptr [EDI + 0x24]      ; 00479ff2
    ADD EBX,0x20                        ; 00479ff5
    CMP ESI,EAX                         ; 00479ff8
    JL 0x00479fe4                       ; 00479ffa
        ;   XREF to: 00479fe4 (CONDITIONAL_JUMP)  ; LAB_00479fe4
    PUSH 0x1                            ; 00479ffc
        ;   Label: LAB_00479ffc
    MOV ECX,dword ptr [0x00612560]      ; 00479ffe | DAT_00612560
    PUSH ECX                            ; 0047a004
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 0047a005
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0047a00a
    PUSH 0x1                            ; 0047a00d
    MOV EBX,dword ptr [0x00612560]      ; 0047a00f | DAT_00612560
    PUSH EBX                            ; 0047a015
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 0047a016
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0047a01b
    ADD ESP,0x48                        ; 0047a01e
    POP EBP                             ; 0047a021
    POP EDI                             ; 0047a022
    POP ESI                             ; 0047a023
    POP EBX                             ; 0047a024
    RET                                 ; 0047a025
    PUSH 0x1                            ; 0047a026
        ;   Label: LAB_0047a026
    PUSH EAX                            ; 0047a028
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20 ; 0047a029
        ;   XREF to: 00483e20 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00483e20(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0047a02e
    JMP 0x00479fd3                      ; 0047a031
        ;   XREF to: 00479fd3 (UNCONDITIONAL_JUMP)  ; LAB_00479fd3
    MOV EAX,ESI                         ; 0047a033
        ;   Label: LAB_0047a033
    AND EAX,0x7f                        ; 0047a035
    ADD EAX,0x80                        ; 0047a038
    NEG EAX                             ; 0047a03d
    PUSH EAX                            ; 0047a03f
    MOV EDX,dword ptr [0x00612560]      ; 0047a040 | DAT_00612560
    PUSH EDX                            ; 0047a046
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0 ; 0047a047
        ;   XREF to: 00483ce0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00483ce0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0047a04c
    MOV EAX,dword ptr [EBX]             ; 0047a04f
    MOV dword ptr [ESP + 0x8],EAX       ; 0047a051
    MOV EAX,dword ptr [EBX + 0x4]       ; 0047a055
    MOV dword ptr [ESP + 0xc],EAX       ; 0047a058
    MOV EAX,dword ptr [EBX + 0x8]       ; 0047a05c
    MOV dword ptr [ESP + 0x10],EAX      ; 0047a05f
    MOV EAX,dword ptr [EBX + 0xc]       ; 0047a063
    MOV dword ptr [ESP + 0x14],EAX      ; 0047a066
    MOV EAX,dword ptr [EBX + 0x10]      ; 0047a06a
    MOV dword ptr [ESP + 0x18],EAX      ; 0047a06d
    MOV EAX,dword ptr [EBX + 0x14]      ; 0047a071
    MOV dword ptr [ESP + 0x24],EAX      ; 0047a074
    MOV EAX,dword ptr [EBX + 0x18]      ; 0047a078
    MOV dword ptr [ESP + 0x30],EAX      ; 0047a07b
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0047a07f
    CMP ECX,-0x1                        ; 0047a082
    JZ 0x0047a0af                       ; 0047a085
        ;   XREF to: 0047a0af (CONDITIONAL_JUMP)  ; LAB_0047a0af
    MOV EAX,0x4                         ; 0047a087
    MOV dword ptr [ESP + 0x3c],ECX      ; 0047a08c
    MOV dword ptr [ESP + 0x4],EAX       ; 0047a090
    PUSH 0x1                            ; 0047a094
        ;   Label: LAB_0047a094
    LEA EAX,[ESP + 0x4]                 ; 0047a096
    PUSH EAX                            ; 0047a09a
    MOV EDX,dword ptr [0x00622c18]      ; 0047a09b | g_CDemonSetPtr
    PUSH EDX                            ; 0047a0a1
    CALL core_set.cpp_FUN_005553e0      ; 0047a0a2
        ;   XREF to: 005553e0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_005553e0()
    ADD ESP,0xc                         ; 0047a0a7
    JMP 0x00479ff1                      ; 0047a0aa
        ;   XREF to: 00479ff1 (UNCONDITIONAL_JUMP)  ; LAB_00479ff1
    MOV dword ptr [ESP + 0x4],EBP       ; 0047a0af
        ;   Label: LAB_0047a0af
    JMP 0x0047a094                      ; 0047a0b3
        ;   XREF to: 0047a094 (UNCONDITIONAL_JUMP)  ; LAB_0047a094


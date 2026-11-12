; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca5c
;   undefined4 DAT_0070ca70
;   undefined4 DAT_0070ca74
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
;   undefined4 DAT_01c35e60
;   undefined4 DAT_01c35e64
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_00403a20
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_3d.c_lookupLitColor_FUN_004039e0
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;   engine_light.cpp_calculateLighting_FUN_004e28b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00404860
        ;   Label: engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_00404860
    PUSH EBP                            ; 00404861
    MOV EBP,dword ptr [ESP + 0xc]       ; 00404862
    LEA ESI,[EBP + 0x18]                ; 00404866
    LEA EAX,[EBP + 0x8]                 ; 00404869
    PUSH EAX                            ; 0040486c
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0040486d
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 00404872
    TEST EAX,EAX                        ; 00404875
    JZ 0x00404a3f                       ; 00404877
        ;   XREF to: 00404a3f (CONDITIONAL_JUMP)  ; LAB_00404a3f
    PUSH EDI                            ; 0040487d
    PUSH EBX                            ; 0040487e
    CMP dword ptr [0x0070ca74],0x0      ; 0040487f | DAT_0070ca74
    JZ 0x00404925                       ; 00404886
        ;   XREF to: 00404925 (CONDITIONAL_JUMP)  ; LAB_00404925
    CMP dword ptr [0x01c38b40],0x0      ; 0040488c | DAT_01c38b40
    JNZ 0x00404904                      ; 00404893
        ;   XREF to: 00404904 (CONDITIONAL_JUMP)  ; LAB_00404904
    CMP dword ptr [0x006141c0],0x20     ; 00404895 | DAT_006141c0
    JNZ 0x004048f8                      ; 0040489c
        ;   XREF to: 004048f8 (CONDITIONAL_JUMP)  ; LAB_004048f8
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 0040489e | DAT_01c35e6c
    XOR EBX,EBX                         ; 004048a8
        ;   Label: LAB_004048a8
    MOV dword ptr [0x01c38b58],EBX      ; 004048aa | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EBX      ; 004048b0 | DAT_01c38b54
    MOV EAX,ESI                         ; 004048b6
        ;   Label: LAB_004048b6
    XOR EDX,EDX                         ; 004048b8
    XOR ECX,ECX                         ; 004048ba
    XOR EBX,EBX                         ; 004048bc
    MOV ESI,dword ptr [EBP + 0x4]       ; 004048be
        ;   Label: LAB_004048be
    LEA ESI,[ESI + ESI*0x2]             ; 004048c1
    CMP EDX,ESI                         ; 004048c4
    JGE 0x00404a2f                      ; 004048c6
        ;   XREF to: 00404a2f (CONDITIONAL_JUMP)  ; LAB_00404a2f
    MOV ESI,dword ptr [EAX]             ; 004048cc
    MOV dword ptr [ECX + 0x70ca98],ESI  ; 004048ce | DAT_0070ca98 | DAT_0070ca9c
    IMUL EDI,ESI,0x30                   ; 004048d4
    MOV ESI,dword ptr [EAX + 0x4]       ; 004048d7
    MOV dword ptr [EDI + 0x62202c],ESI  ; 004048da | DAT_0062202c
    IMUL EDI,dword ptr [EAX],0x30       ; 004048e0
    ADD EAX,0xc                         ; 004048e3
    ADD ECX,0x4                         ; 004048e6
    INC EBX                             ; 004048e9
    MOV ESI,dword ptr [EAX + -0x4]      ; 004048ea
    ADD EDX,0x3                         ; 004048ed
    MOV dword ptr [EDI + 0x622030],ESI  ; 004048f0 | DAT_00622030
    JMP 0x004048be                      ; 004048f6
        ;   XREF to: 004048be (UNCONDITIONAL_JUMP)  ; LAB_004048be
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004048f8 | DAT_01c35e6c
        ;   Label: LAB_004048f8
    JMP 0x004048a8                      ; 00404902
        ;   XREF to: 004048a8 (UNCONDITIONAL_JUMP)  ; LAB_004048a8
    CMP dword ptr [0x006141c0],0x20     ; 00404904 | DAT_006141c0
        ;   Label: LAB_00404904
    JNZ 0x00404919                      ; 0040490b
        ;   XREF to: 00404919 (CONDITIONAL_JUMP)  ; LAB_00404919
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040490d | DAT_01c35e6c
    JMP 0x004048a8                      ; 00404917
        ;   XREF to: 004048a8 (UNCONDITIONAL_JUMP)  ; LAB_004048a8
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00404919 | DAT_01c35e6c
        ;   Label: LAB_00404919
    JMP 0x004048a8                      ; 00404923
        ;   XREF to: 004048a8 (UNCONDITIONAL_JUMP)  ; LAB_004048a8
    CMP dword ptr [0x0070ca70],0x0      ; 00404925 | DAT_0070ca70
        ;   Label: LAB_00404925
    JNZ 0x0040499e                      ; 0040492c
        ;   XREF to: 0040499e (CONDITIONAL_JUMP)  ; LAB_0040499e
    CMP dword ptr [0x01c38b40],0x0      ; 00404932 | DAT_01c38b40
    JNZ 0x0040497d                      ; 00404939
        ;   XREF to: 0040497d (CONDITIONAL_JUMP)  ; LAB_0040497d
    CMP dword ptr [0x006141c0],0x20     ; 0040493b | DAT_006141c0
    JNZ 0x00404971                      ; 00404942
        ;   XREF to: 00404971 (CONDITIONAL_JUMP)  ; LAB_00404971
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404944 | DAT_01c35e6c
    MOV EDI,0xd1                        ; 0040494e
        ;   Label: LAB_0040494e
    MOV EAX,0x3                         ; 00404953
    PUSH EBP                            ; 00404958
    MOV dword ptr [0x01c38b54],EDI      ; 00404959 | DAT_01c38b54
    MOV [0x01c38b58],EAX                ; 0040495f | DAT_01c38b58
    CALL engine_3d.c_calculatePolygonLighting_FUN_00403a20 ; 00404964
        ;   XREF to: 00403a20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_calculatePolygonLighting_FUN_00403a20(SMRGLHeaderPrimitive * prim)
    ADD ESP,0x4                         ; 00404969
    JMP 0x004048b6                      ; 0040496c
        ;   XREF to: 004048b6 (UNCONDITIONAL_JUMP)  ; LAB_004048b6
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404971 | DAT_01c35e6c
        ;   Label: LAB_00404971
    JMP 0x0040494e                      ; 0040497b
        ;   XREF to: 0040494e (UNCONDITIONAL_JUMP)  ; LAB_0040494e
    CMP dword ptr [0x006141c0],0x20     ; 0040497d | DAT_006141c0
        ;   Label: LAB_0040497d
    JNZ 0x00404992                      ; 00404984
        ;   XREF to: 00404992 (CONDITIONAL_JUMP)  ; LAB_00404992
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00404986 | DAT_01c35e6c
    JMP 0x0040494e                      ; 00404990
        ;   XREF to: 0040494e (UNCONDITIONAL_JUMP)  ; LAB_0040494e
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00404992 | DAT_01c35e6c
        ;   Label: LAB_00404992
    JMP 0x0040494e                      ; 0040499c
        ;   XREF to: 0040494e (UNCONDITIONAL_JUMP)  ; LAB_0040494e
    CMP dword ptr [0x01c38b40],0x0      ; 0040499e | DAT_01c38b40
        ;   Label: LAB_0040499e
    JNZ 0x00404a0e                      ; 004049a5
        ;   XREF to: 00404a0e (CONDITIONAL_JUMP)  ; LAB_00404a0e
    CMP dword ptr [0x006141c0],0x20     ; 004049a7 | DAT_006141c0
    JNZ 0x00404a02                      ; 004049ae
        ;   XREF to: 00404a02 (CONDITIONAL_JUMP)  ; LAB_00404a02
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 004049b0 | DAT_01c35e6c
    MOV ECX,dword ptr [EBP + 0x10]      ; 004049ba
        ;   Label: LAB_004049ba
    PUSH ECX                            ; 004049bd
    MOV EBX,dword ptr [EBP + 0xc]       ; 004049be
    MOV EAX,0xd0                        ; 004049c1
    PUSH EBX                            ; 004049c6
    MOV EDI,dword ptr [EBP + 0x8]       ; 004049c7
    MOV EDX,0x1                         ; 004049ca
    PUSH EDI                            ; 004049cf
    MOV [0x01c38b54],EAX                ; 004049d0 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 004049d5 | DAT_01c38b58
    CALL engine_light.cpp_calculateLighting_FUN_004e28b0 ; 004049db
        ;   XREF to: 004e28b0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e28b0(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 004049e0
    MOV EAX,[0x01c35e64]                ; 004049e3 | DAT_01c35e64
    PUSH EAX                            ; 004049e8
    MOV EDX,dword ptr [0x0070ca5c]      ; 004049e9 | DAT_0070ca5c
    PUSH EDX                            ; 004049ef
    CALL engine_3d.c_lookupLitColor_FUN_004039e0 ; 004049f0
        ;   XREF to: 004039e0 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_004039e0(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 004049f5
    MOV [0x01c35e60],EAX                ; 004049f8 | DAT_01c35e60
    JMP 0x004048b6                      ; 004049fd
        ;   XREF to: 004048b6 (UNCONDITIONAL_JUMP)  ; LAB_004048b6
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404a02 | DAT_01c35e6c
        ;   Label: LAB_00404a02
    JMP 0x004049ba                      ; 00404a0c
        ;   XREF to: 004049ba (UNCONDITIONAL_JUMP)  ; LAB_004049ba
    CMP dword ptr [0x006141c0],0x20     ; 00404a0e | DAT_006141c0
        ;   Label: LAB_00404a0e
    JNZ 0x00404a23                      ; 00404a15
        ;   XREF to: 00404a23 (CONDITIONAL_JUMP)  ; LAB_00404a23
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00404a17 | DAT_01c35e6c
    JMP 0x004049ba                      ; 00404a21
        ;   XREF to: 004049ba (UNCONDITIONAL_JUMP)  ; LAB_004049ba
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00404a23 | DAT_01c35e6c
        ;   Label: LAB_00404a23
    JMP 0x004049ba                      ; 00404a2d
        ;   XREF to: 004049ba (UNCONDITIONAL_JUMP)  ; LAB_004049ba
    PUSH 0x70ca98                       ; 00404a2f | DAT_0070ca98
        ;   Label: LAB_00404a2f
    PUSH EBX                            ; 00404a34
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404a35
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404a3a
    POP EBX                             ; 00404a3d
    POP EDI                             ; 00404a3e
    MOV EDX,dword ptr [EBP + 0x4]       ; 00404a3f
        ;   Label: LAB_00404a3f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00404a42
    SUB EAX,EDX                         ; 00404a49
    LEA EDX,[EAX*0x4 + 0x0]             ; 00404a4b
    LEA EAX,[EBP + 0x18]                ; 00404a52
    ADD EAX,EDX                         ; 00404a55
    POP EBP                             ; 00404a57
    POP ESI                             ; 00404a58
    RET                                 ; 00404a59


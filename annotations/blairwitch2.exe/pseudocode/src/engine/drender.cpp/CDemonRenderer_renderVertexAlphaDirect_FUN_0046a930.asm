; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[17]:
;   core_bwspart.cpp_FUN_005a86a0 at 005a8c60
;   core_charactr.cpp_FUN_0042b760 at 0042be48
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00 at 00448c72
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960 at 0044c114
;   core_dlight.cpp_FUN_0044b020 at 0044b55b
;   core_dlight.cpp_FUN_0044c15e at 0044c7a1
;   core_dlight.cpp_renderConeLightGeometry_FUN_0044d060 at 0044d520
;   core_fire.cpp_CFirefly_render_FUN_00495150 at 0049528f
;   core_fire.cpp_CGunFlame_render_FUN_0049a500 at 0049aa7b
;   core_fire.cpp_CLaserBeam_render_FUN_00497800 at 00498024
;   ... and 7 more
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a930
        ;   Label: engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
    PUSH ESI                            ; 0046a931
    PUSH EDI                            ; 0046a932
    PUSH EBP                            ; 0046a933
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046a934
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046a938
    CMP dword ptr [EBP + 0xc],0x0       ; 0046a93c
    JNZ 0x0046a9b1                      ; 0046a940
        ;   XREF to: 0046a9b1 (CONDITIONAL_JUMP)  ; LAB_0046a9b1
    MOV ECX,0xffffffff                  ; 0046a946
        ;   Label: LAB_0046a946
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046a94b
    XOR EDX,EDX                         ; 0046a94e
    TEST EBX,EBX                        ; 0046a950
    JLE 0x0046a970                      ; 0046a952
        ;   XREF to: 0046a970 (CONDITIONAL_JUMP)  ; LAB_0046a970
    MOV EAX,ESI                         ; 0046a954
    MOV EDI,dword ptr [EBP]             ; 0046a956
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046a959
        ;   Label: LAB_0046a959
    IMUL EBX,EBX,0x30                   ; 0046a95c
    INC EDX                             ; 0046a95f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046a960
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046a964
    ADD EAX,0x4                         ; 0046a967
    CMP EDX,EBX                         ; 0046a96a
    JL 0x0046a959                       ; 0046a96c
        ;   XREF to: 0046a959 (CONDITIONAL_JUMP)  ; LAB_0046a959
    MOV EAX,EAX                         ; 0046a96e
    TEST ECX,0x80000000                 ; 0046a970
        ;   Label: LAB_0046a970
    JZ 0x0046a97d                       ; 0046a976
        ;   XREF to: 0046a97d (CONDITIONAL_JUMP)  ; LAB_0046a97d
    TEST CL,0x1f                        ; 0046a978
    JNZ 0x0046a9ac                      ; 0046a97b
        ;   XREF to: 0046a9ac (CONDITIONAL_JUMP)  ; LAB_0046a9ac
    CMP dword ptr [EBP + 0x4],0x0       ; 0046a97d
        ;   Label: LAB_0046a97d
    JZ 0x0046a9c3                       ; 0046a981
        ;   XREF to: 0046a9c3 (CONDITIONAL_JUMP)  ; LAB_0046a9c3
    XOR EDX,EDX                         ; 0046a983
    MOV EAX,0x46e936                    ; 0046a985
    MOV dword ptr [0x01c38b54],EDX      ; 0046a98a | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 0046a990 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 0046a996 | DAT_01c35e6c
    LEA EAX,[ESI + 0x18]                ; 0046a99b
        ;   Label: LAB_0046a99b
    PUSH EAX                            ; 0046a99e
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046a99f
    PUSH EBX                            ; 0046a9a2
    PUSH EBP                            ; 0046a9a3
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046a9a4
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046a9a9
    POP EBP                             ; 0046a9ac
        ;   Label: LAB_0046a9ac
    POP EDI                             ; 0046a9ad
    POP ESI                             ; 0046a9ae
    POP EBX                             ; 0046a9af
    RET                                 ; 0046a9b0
    LEA EAX,[ESI + 0x8]                 ; 0046a9b1
        ;   Label: LAB_0046a9b1
    PUSH EAX                            ; 0046a9b4
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046a9b5
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046a9ba
    TEST EAX,EAX                        ; 0046a9bd
    JZ 0x0046a9ac                       ; 0046a9bf
        ;   XREF to: 0046a9ac (CONDITIONAL_JUMP)  ; LAB_0046a9ac
    JMP 0x0046a946                      ; 0046a9c1
        ;   XREF to: 0046a946 (UNCONDITIONAL_JUMP)  ; LAB_0046a946
    CMP dword ptr [0x006141c0],0x20     ; 0046a9c3 | DAT_006141c0
        ;   Label: LAB_0046a9c3
    JNZ 0x0046a9ee                      ; 0046a9ca
        ;   XREF to: 0046a9ee (CONDITIONAL_JUMP)  ; LAB_0046a9ee
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046a9cc | DAT_01c35e6c
    MOV EDI,0x6                         ; 0046a9d6
        ;   Label: LAB_0046a9d6
    MOV EBX,0x367                       ; 0046a9db
    MOV dword ptr [0x01c38b58],EDI      ; 0046a9e0 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EBX      ; 0046a9e6 | DAT_01c38b54
    JMP 0x0046a99b                      ; 0046a9ec
        ;   XREF to: 0046a99b (UNCONDITIONAL_JUMP)  ; LAB_0046a99b
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046a9ee | DAT_01c35e6c
        ;   Label: LAB_0046a9ee
    JMP 0x0046a9d6                      ; 0046a9f8
        ;   XREF to: 0046a9d6 (UNCONDITIONAL_JUMP)  ; LAB_0046a9d6


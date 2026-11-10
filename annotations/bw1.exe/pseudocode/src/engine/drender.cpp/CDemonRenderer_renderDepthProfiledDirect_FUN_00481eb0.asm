; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[5]:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_0048cba0 at 0048d28d
;   core_mirror.cpp_CMirror_renderReflectedPrimitive_FUN_00519be0 at 00519c09
;   core_mirror.cpp_FUN_00519cae at 00519e16
;   core_set.cpp_CDemonSet_renderSinglePrimitive_FUN_005558c0 at 005558e7
;   core_water.cpp_CWater_calculateVisibleTiles_FUN_005a9a40 at 005a9ea4
;
; Referenced Globals:
;   undefined4 DAT_00612564
;   undefined4 DAT_01bc1238
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01e7dac8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;   engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481eb0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
    PUSH ESI                            ; 00481eb1
    PUSH EDI                            ; 00481eb2
    PUSH EBP                            ; 00481eb3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00481eb4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00481eb8
    MOV EDI,dword ptr [0x01e7dac8]      ; 00481ebc | DAT_01e7dac8
    XOR EDX,EDX                         ; 00481ec2
    MOV ECX,dword ptr [EBX + 0xc]       ; 00481ec4
    MOV dword ptr [0x01bc1238],EDX      ; 00481ec7 | DAT_01bc1238
    TEST ECX,ECX                        ; 00481ecd
    JNZ 0x00481f53                      ; 00481ecf
        ;   XREF to: 00481f53 (CONDITIONAL_JUMP)  ; LAB_00481f53
    CMP dword ptr [EBX + 0x4],0x0       ; 00481ed5
        ;   Label: LAB_00481ed5
    JZ 0x00481f6c                       ; 00481ed9
        ;   XREF to: 00481f6c (CONDITIONAL_JUMP)  ; LAB_00481f6c
    XOR EAX,EAX                         ; 00481edf
    MOV EBP,0x4873a5                    ; 00481ee1
    MOV [0x01c51d14],EAX                ; 00481ee6 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 00481eeb | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EBP      ; 00481ef0 | DAT_01c4f02c
    MOV ECX,dword ptr [0x01c50948]      ; 00481ef6 | DAT_01c50948
        ;   Label: LAB_00481ef6
    MOV EBP,dword ptr [EBX + 0x4]       ; 00481efc
    TEST ECX,ECX                        ; 00481eff
    JZ 0x00481f0e                       ; 00481f01
        ;   XREF to: 00481f0e (CONDITIONAL_JUMP)  ; LAB_00481f0e
    PUSH 0x1                            ; 00481f03
    PUSH EBX                            ; 00481f05
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 00481f06
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00481f0b
    LEA EAX,[ESI + 0x18]                ; 00481f0e
        ;   Label: LAB_00481f0e
    PUSH EAX                            ; 00481f11
    MOV EAX,dword ptr [ESI + 0x4]       ; 00481f12
    PUSH EAX                            ; 00481f15
    PUSH EBX                            ; 00481f16
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00481f17
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    MOV EDX,dword ptr [0x01c50948]      ; 00481f1c | DAT_01c50948
    ADD ESP,0xc                         ; 00481f22
    TEST EDX,EDX                        ; 00481f25
    JZ 0x00481f33                       ; 00481f27
        ;   XREF to: 00481f33 (CONDITIONAL_JUMP)  ; LAB_00481f33
    PUSH EBP                            ; 00481f29
    PUSH EBX                            ; 00481f2a
    CALL engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40 ; 00481f2b
        ;   XREF to: 00483e40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setShadowPass_FUN_00483e40(CDemonRenderer * this_ptr, int value)
    ADD ESP,0x8                         ; 00481f30
    MOV EAX,[0x01bc1238]                ; 00481f33 | DAT_01bc1238
        ;   Label: LAB_00481f33
    MOV ECX,dword ptr [0x00612564]      ; 00481f38 | DAT_00612564
    MOV dword ptr [0x01e7dac8],EDI      ; 00481f3e | DAT_01e7dac8
    CMP EAX,ECX                         ; 00481f44
    SETGE AL                            ; 00481f46
    AND EAX,0xff                        ; 00481f49
    POP EBP                             ; 00481f4e
    POP EDI                             ; 00481f4f
    POP ESI                             ; 00481f50
    POP EBX                             ; 00481f51
    RET                                 ; 00481f52
    LEA EAX,[ESI + 0x8]                 ; 00481f53
        ;   Label: LAB_00481f53
    PUSH EAX                            ; 00481f56
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00481f57
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00481f5c
    TEST EAX,EAX                        ; 00481f5f
    JNZ 0x00481ed5                      ; 00481f61
        ;   XREF to: 00481ed5 (CONDITIONAL_JUMP)  ; LAB_00481ed5
    POP EBP                             ; 00481f67
    POP EDI                             ; 00481f68
    POP ESI                             ; 00481f69
    POP EBX                             ; 00481f6a
    RET                                 ; 00481f6b
    MOV EDX,0xc0                        ; 00481f6c
        ;   Label: LAB_00481f6c
    MOV ECX,0x6                         ; 00481f71
    MOV EAX,0x487327                    ; 00481f76
    MOV dword ptr [0x01c51d14],EDX      ; 00481f7b | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 00481f81 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 00481f87 | DAT_01c4f02c
    JMP 0x00481ef6                      ; 00481f8c
        ;   XREF to: 00481ef6 (UNCONDITIONAL_JUMP)  ; LAB_00481ef6


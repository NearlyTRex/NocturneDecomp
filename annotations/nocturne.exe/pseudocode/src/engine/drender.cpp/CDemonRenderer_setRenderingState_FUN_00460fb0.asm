; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(int param_1,int param_2)
;
;
; XREF[19]:
;   FUN_0042c4c0 at 0042c55b
;   FUN_0043f330 at 0043f440
;   FUN_004574e0 at 004574f4
;   FUN_00468d00 at 004690f1
;   FUN_004d77f0 at 004d790a
;   FUN_00511d80 at 005121ef
;   FUN_005125a0 at 00513170
;   FUN_005159a0 at 00515ba7
;   FUN_00551c00 at 00551de8
;   core_box.cpp_CBoundingBox3D_render_FUN_0041dcc0 at 0041dd56
;   ... and 9 more
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
;   engine_prim.c_setCullingMode_FUN_004f9450
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00460fb0
        ;   Label: engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
    MOV EDX,dword ptr [ESP + 0xc]       ; 00460fb1
    TEST EDX,EDX                        ; 00460fb5
    JZ 0x00460fee                       ; 00460fb7
        ;   XREF to: 00460fee (CONDITIONAL_JUMP)  ; LAB_00460fee
    MOV EAX,dword ptr [ESP + 0x8]       ; 00460fb9
    CMP dword ptr [EAX + 0x18],0x0      ; 00460fbd
    JZ 0x00460fea                       ; 00460fc1
        ;   XREF to: 00460fea (CONDITIONAL_JUMP)  ; LAB_00460fea
    PUSH 0x2                            ; 00460fc3
    CALL engine_prim.c_setCullingMode_FUN_004f9450 ; 00460fc5
        ;   XREF to: 004f9450 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_setCullingMode_FUN_004f9450()
        ;   Label: LAB_00460fc5
    ADD ESP,0x4                         ; 00460fca
    CMP dword ptr [ESP + 0xc],0x0       ; 00460fcd
    SETZ AL                             ; 00460fd2
    AND EAX,0xff                        ; 00460fd5
    PUSH EAX                            ; 00460fda
    MOV ESI,dword ptr [ESP + 0xc]       ; 00460fdb
    PUSH ESI                            ; 00460fdf
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 00460fe0
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0()
    ADD ESP,0x8                         ; 00460fe5
    POP ESI                             ; 00460fe8
    RET                                 ; 00460fe9
    PUSH 0x1                            ; 00460fea
        ;   Label: LAB_00460fea
    JMP 0x00460fc5                      ; 00460fec
        ;   XREF to: 00460fc5 (UNCONDITIONAL_JUMP)  ; LAB_00460fc5
    PUSH EDX                            ; 00460fee
        ;   Label: LAB_00460fee
    JMP 0x00460fc5                      ; 00460fef
        ;   XREF to: 00460fc5 (UNCONDITIONAL_JUMP)  ; LAB_00460fc5


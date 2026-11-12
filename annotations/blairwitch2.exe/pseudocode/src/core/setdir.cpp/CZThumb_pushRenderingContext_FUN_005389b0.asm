; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_CZThumb_pushRenderingContext_FUN_005389b0(CZThumb *this_ptr)
;
; Parameters:
; CZThumb *        Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_setdir.cpp_CZThumb_calculateActorVisibility_FUN_005386e0 at 005386f0
;   core_setdir.cpp_CZThumb_saveZBufferTable_FUN_00538470 at 0053858a
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_020b1518
;   undefined4 DAT_020b151c
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
;   engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005389b0
        ;   Label: core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0
    PUSH ESI                            ; 005389b1
    PUSH EDI                            ; 005389b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005389b3
    MOV EAX,[0x006141b8]                ; 005389b7 | DAT_006141b8
    MOV [0x020b1518],EAX                ; 005389bc | DAT_020b1518
    MOV EAX,[0x006141bc]                ; 005389c1 | DAT_006141bc
    MOV [0x020b151c],EAX                ; 005389c6 | DAT_020b151c
    MOV EAX,dword ptr [EBX]             ; 005389cb
    MOV [0x006141b8],EAX                ; 005389cd | DAT_006141b8
    MOV EAX,dword ptr [EBX + 0x4]       ; 005389d2
    MOV [0x006141bc],EAX                ; 005389d5 | DAT_006141bc
    DEC EAX                             ; 005389da
    PUSH EAX                            ; 005389db
    MOV EAX,dword ptr [EBX]             ; 005389dc
    DEC EAX                             ; 005389de
    PUSH EAX                            ; 005389df
    PUSH 0x0                            ; 005389e0
    PUSH 0x0                            ; 005389e2
    MOV EDX,dword ptr [0x0060b280]      ; 005389e4 | DAT_0060b280
    PUSH EDX                            ; 005389ea | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710 ; 005389eb
        ;   XREF to: 0046b710 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0046b710(CDemonRenderer * this_ptr, int x, int y, int width, ...)
    ADD ESP,0x14                        ; 005389f0
    LEA EAX,[EBX + 0x8]                 ; 005389f3
    PUSH EAX                            ; 005389f6
    MOV ECX,dword ptr [0x0060b280]      ; 005389f7 | DAT_0060b280
    PUSH ECX                            ; 005389fd | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0 ; 005389fe
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 00538a03
    MOV ESI,dword ptr [0x0060b280]      ; 00538a06 | DAT_0060b280
    PUSH dword ptr [EBX + 0x20]         ; 00538a0c
    PUSH ESI                            ; 00538a0f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0 ; 00538a10
        ;   XREF to: 0046b4d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0(CDemonRenderer * this_ptr, float scale_factor)
    ADD ESP,0x8                         ; 00538a15
    ADD EBX,0x14                        ; 00538a18
    PUSH EBX                            ; 00538a1b
    MOV EDI,dword ptr [0x0060b280]      ; 00538a1c | DAT_0060b280
    PUSH EDI                            ; 00538a22 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030 ; 00538a23
        ;   XREF to: 0046b030 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030(CDemonRenderer * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00538a28
    POP EDI                             ; 00538a2b
    POP ESI                             ; 00538a2c
    POP EBX                             ; 00538a2d
    RET                                 ; 00538a2e


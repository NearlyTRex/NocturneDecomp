; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_render_FUN_004e7f80(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_terrain.cpp_CTerrain_render_FUN_0059f3e0 at 0059f4c3
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_ground.cpp_CGround_renderVisibleTerrain_FUN_004e7e60
;   core_ground.cpp_CGround_transformAndStoreVertices_FUN_004e7780
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_matrix.c_getCameraOrigin_FUN_00509050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7f80
        ;   Label: core_ground.cpp_CGround_render_FUN_004e7f80
    PUSH ESI                            ; 004e7f81
    PUSH EBP                            ; 004e7f82
    SUB ESP,0xc                         ; 004e7f83
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e7f86
    MOV ESI,ESP                         ; 004e7f8a
    CALL engine_matrix.c_getCameraOrigin_FUN_00509050 ; 004e7f8c
        ;   XREF to: 00509050 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraOrigin_FUN_00509050()
    MOV EAX,dword ptr [ESP]             ; 004e7f91
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004e7f94
    MOV EDX,EAX                         ; 004e7f97
    SHL ESI,0x8                         ; 004e7f99
    SAR EDX,0x1f                        ; 004e7f9c
    IDIV ESI                            ; 004e7f9f
    MOV dword ptr [EBX + 0x2c],EAX      ; 004e7fa1
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e7fa4
    MOV ESI,dword ptr [EBX + 0x1c]      ; 004e7fa8
    MOV EDX,EAX                         ; 004e7fab
    SHL ESI,0x8                         ; 004e7fad
    SAR EDX,0x1f                        ; 004e7fb0
    IDIV ESI                            ; 004e7fb3
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004e7fb5
    MOV dword ptr [EBX + 0x30],EAX      ; 004e7fb8
    TEST EDX,EDX                        ; 004e7fbb
    JL 0x004e8000                       ; 004e7fbd
        ;   XREF to: 004e8000 (CONDITIONAL_JUMP)  ; LAB_004e8000
    MOV ESI,dword ptr [EBX + 0x30]      ; 004e7fbf
        ;   Label: LAB_004e7fbf
    TEST ESI,ESI                        ; 004e7fc2
    JL 0x004e8008                       ; 004e7fc4
        ;   XREF to: 004e8008 (CONDITIONAL_JUMP)  ; LAB_004e8008
    PUSH EBX                            ; 004e7fc6
        ;   Label: LAB_004e7fc6
    CALL core_ground.cpp_CGround_transformAndStoreVertices_FUN_004e7780 ; 004e7fc7
        ;   XREF to: 004e7780 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_transformAndStoreVertices_FUN_004e7780(CGround * this_ptr)
    ADD ESP,0x4                         ; 004e7fcc
    PUSH 0x1                            ; 004e7fcf
    MOV EBP,dword ptr [0x00612560]      ; 004e7fd1 | DAT_00612560
    PUSH EBP                            ; 004e7fd7 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 004e7fd8
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004e7fdd
    PUSH EBX                            ; 004e7fe0
    CALL core_ground.cpp_CGround_renderVisibleTerrain_FUN_004e7e60 ; 004e7fe1
        ;   XREF to: 004e7e60 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderVisibleTerrain_FUN_004e7e60(CGround * this_ptr)
    ADD ESP,0x4                         ; 004e7fe6
    PUSH 0x0                            ; 004e7fe9
    MOV EAX,[0x00612560]                ; 004e7feb | DAT_00612560
    PUSH EAX                            ; 004e7ff0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 004e7ff1
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004e7ff6
    ADD ESP,0xc                         ; 004e7ff9
    POP EBP                             ; 004e7ffc
    POP ESI                             ; 004e7ffd
    POP EBX                             ; 004e7ffe
    RET                                 ; 004e7fff
    LEA ECX,[EDX + -0x1]                ; 004e8000
        ;   Label: LAB_004e8000
    MOV dword ptr [EBX + 0x2c],ECX      ; 004e8003
    JMP 0x004e7fbf                      ; 004e8006
        ;   XREF to: 004e7fbf (UNCONDITIONAL_JUMP)  ; LAB_004e7fbf
    PUSH EDI                            ; 004e8008
        ;   Label: LAB_004e8008
    LEA EDI,[ESI + -0x1]                ; 004e8009
    MOV dword ptr [EBX + 0x30],EDI      ; 004e800c
    POP EDI                             ; 004e800f
    JMP 0x004e7fc6                      ; 004e8010
        ;   XREF to: 004e7fc6 (UNCONDITIONAL_JUMP)  ; LAB_004e7fc6


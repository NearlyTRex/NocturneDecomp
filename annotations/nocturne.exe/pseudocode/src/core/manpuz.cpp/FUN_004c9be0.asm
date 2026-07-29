; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_manpuz_cpp_FUN_004c9be0(CMansionPuzzleCircle *param_1)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
;
; Referenced Globals:
;   undefined4 DAT_005a0020
;   undefined4 DAT_005ae704
;   undefined4 DAT_005baf90
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01cc9454
;   undefined4 DAT_02dd1184
;   undefined4 DAT_02dd1188
;   undefined4 DAT_02dd118c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0
;   core_manpuz.cpp_FUN_004ca710
;   core_manpuz.cpp_FUN_004ca790
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c9be0
        ;   Label: core_manpuz.cpp_FUN_004c9be0
    PUSH EDI                            ; 004c9be1
    SUB ESP,0x24                        ; 004c9be2
    MOV ESI,dword ptr [ESP + 0x30]      ; 004c9be5
    PUSH ESI                            ; 004c9be9
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 004c9bea
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20(CDemonActor * actor)
    ADD ESP,0x4                         ; 004c9bef
    PUSH 0x0                            ; 004c9bf2
    LEA EDX,[ESP + 0x4]                 ; 004c9bf4
    PUSH EDX                            ; 004c9bf8
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004c9bf9
    PUSH ESI                            ; 004c9bff
    CALL dword ptr [EAX + 0x14]         ; 004c9c00
    ADD ESP,0x8                         ; 004c9c03
    PUSH EAX                            ; 004c9c06
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 004c9c07
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(CBoundingBox3D * this_ptr)
    ADD ESP,0x8                         ; 004c9c0c
    MOV EDI,EAX                         ; 004c9c0f
    TEST EAX,EAX                        ; 004c9c11
    JNZ 0x004c9c26                      ; 004c9c13
        ;   XREF to: 004c9c26 (CONDITIONAL_JUMP)  ; LAB_004c9c26
    PUSH ESI                            ; 004c9c15
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004c9c16
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c9c1b
    MOV EAX,EDI                         ; 004c9c1e
    ADD ESP,0x24                        ; 004c9c20
    POP EDI                             ; 004c9c23
    POP ESI                             ; 004c9c24
    RET                                 ; 004c9c25
    PUSH EBX                            ; 004c9c26
        ;   Label: LAB_004c9c26
    LEA EBX,[ESP + 0x1c]                ; 004c9c27
    MOV EAX,0x2dd1184                   ; 004c9c2b
    MOV EDX,dword ptr [0x005ae704]      ; 004c9c30 | DAT_005ae704
    FLD float ptr [EAX]                 ; 004c9c36 | DAT_02dd1184
    FMUL float ptr [0x005a0020]         ; 004c9c38 | DAT_005a0020
    FISTP dword ptr [EBX]               ; 004c9c3e
    FLD float ptr [EAX + 0x4]           ; 004c9c40 | DAT_02dd1188
    FMUL float ptr [0x005a0020]         ; 004c9c43 | DAT_005a0020
    FISTP dword ptr [EBX + 0x4]         ; 004c9c49
    FLD float ptr [EAX + 0x8]           ; 004c9c4c | DAT_02dd118c
    FMUL float ptr [0x005a0020]         ; 004c9c4f | DAT_005a0020
    FISTP dword ptr [EBX + 0x8]         ; 004c9c55
    LEA EAX,[ESP + 0x1c]                ; 004c9c58
    PUSH EAX                            ; 004c9c5c
    MOV EAX,dword ptr [EDX]             ; 004c9c5d | DAT_01b4d738
    ADD EAX,0xbb80                      ; 004c9c5f
    PUSH EAX                            ; 004c9c64
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004c9c65
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_transformAndProjectPoint_FUN_0053075c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004c9c6a
    XOR EBX,EBX                         ; 004c9c6d
    PUSH EBX                            ; 004c9c6f
        ;   Label: LAB_004c9c6f
    PUSH ESI                            ; 004c9c70
    CALL core_manpuz.cpp_FUN_004ca710   ; 004c9c71
        ;   XREF to: 004ca710 (UNCONDITIONAL_CALL)  ; undefined core_manpuz.cpp_FUN_004ca710()
    ADD ESP,0x8                         ; 004c9c76
    PUSH EBX                            ; 004c9c79
    PUSH ESI                            ; 004c9c7a
    CALL core_manpuz.cpp_FUN_004ca790   ; 004c9c7b
        ;   XREF to: 004ca790 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_FUN_004ca790(CMansionPuzzleCircle * this_ptr, int gem_index)
    INC EBX                             ; 004c9c80
    ADD ESP,0x8                         ; 004c9c81
    CMP EBX,0xc                         ; 004c9c84
    JL 0x004c9c6f                       ; 004c9c87
        ;   XREF to: 004c9c6f (CONDITIONAL_JUMP)  ; LAB_004c9c6f
    MOV EAX,[0x005baf90]                ; 004c9c89 | DAT_005baf90
    CMP dword ptr [EAX + 0x4],0x0       ; 004c9c8e | DAT_01cc9454
    JNZ 0x004c9cc4                      ; 004c9c92
        ;   XREF to: 004c9cc4 (CONDITIONAL_JUMP)  ; LAB_004c9cc4
    LEA EAX,[EAX]                       ; 004c9c94
    LEA EDX,[EDX]                       ; 004c9c9a
    XOR EBX,EBX                         ; 004c9ca0
        ;   Label: LAB_004c9ca0
    PUSH EBX                            ; 004c9ca2
        ;   Label: LAB_004c9ca2
    PUSH ESI                            ; 004c9ca3
    CALL core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0 ; 004c9ca4
        ;   XREF to: 004cabf0 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_renderReflector_FUN_004cabf0(CMansionPuzzleCircle * this_ptr, int reflector_index)
    INC EBX                             ; 004c9ca9
    ADD ESP,0x8                         ; 004c9caa
    CMP EBX,0x2                         ; 004c9cad
    JL 0x004c9ca2                       ; 004c9cb0
        ;   XREF to: 004c9ca2 (CONDITIONAL_JUMP)  ; LAB_004c9ca2
    POP EBX                             ; 004c9cb2
    PUSH ESI                            ; 004c9cb3
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 004c9cb4
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c9cb9
    MOV EAX,EDI                         ; 004c9cbc
    ADD ESP,0x24                        ; 004c9cbe
    POP EDI                             ; 004c9cc1
    POP ESI                             ; 004c9cc2
    RET                                 ; 004c9cc3
    MOV ECX,dword ptr [0x005ae704]      ; 004c9cc4 | DAT_005ae704
        ;   Label: LAB_004c9cc4
    PUSH ECX                            ; 004c9cca | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 004c9ccb
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 004c9cd0
    TEST EAX,EAX                        ; 004c9cd3
    JNZ 0x004c9ca0                      ; 004c9cd5
        ;   XREF to: 004c9ca0 (CONDITIONAL_JUMP)  ; LAB_004c9ca0
    XOR EBX,EBX                         ; 004c9cd7
    PUSH EBX                            ; 004c9cd9
        ;   Label: LAB_004c9cd9
    PUSH ESI                            ; 004c9cda
    INC EBX                             ; 004c9cdb
    ADD ESP,0x8                         ; 004c9cdc
    CMP EBX,0xc                         ; 004c9cdf
    JL 0x004c9cd9                       ; 004c9ce2
        ;   XREF to: 004c9cd9 (CONDITIONAL_JUMP)  ; LAB_004c9cd9
    JMP 0x004c9ca0                      ; 004c9ce4
        ;   XREF to: 004c9ca0 (UNCONDITIONAL_JUMP)  ; LAB_004c9ca0


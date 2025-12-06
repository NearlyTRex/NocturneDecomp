; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_xform.cpp_clipPolygonStage1_FUN_005f7ed0(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_005f7ebc = 005f7f31
;   void* PTR_caseD_3_005f7ec8 = 005f7f76
;   int g_ClipVertexCountStage1
;   int g_ClipVertexCountStage2
;   SRenderVertex[32] g_ClipVertexBufferStage2
;   undefined4 g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
;   undefined4 DAT_03f9952c
;   undefined4 DAT_03f99530
;   SRenderVertex[32] g_ClipVertexBufferStage1
;   undefined4 DAT_03f99b28
;   undefined4 DAT_03f99b50
;   undefined4 DAT_03f99b54
;   undefined4 DAT_03f99b5c
;   undefined4 g_ClipVertexBufferStage1[1].projected_vertex.screen_x
;
; Called Functions:
;   core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f7ed0
        ;   Label: core_xform.cpp_clipPolygonStage1_FUN_005f7ed0
    PUSH ESI                            ; 005f7ed1
    PUSH EDI                            ; 005f7ed2
    PUSH EBP                            ; 005f7ed3
    SUB ESP,0x4                         ; 005f7ed4
    XOR EDX,EDX                         ; 005f7ed7
    MOV ECX,dword ptr [0x03f99510]      ; 005f7ed9 | int g_ClipVertexCountStage1
    MOV dword ptr [ESP],EDX             ; 005f7edf
    TEST ECX,ECX                        ; 005f7ee2
    JLE 0x005f7f8e                      ; 005f7ee4 | LAB_005f7f8e
        ;   XREF to: 005f7f8e (CONDITIONAL_JUMP)
    MOV EBX,0x3f99b20                   ; 005f7eea | SRenderVertex[32] g_ClipVertexBufferStage1
    MOV EAX,dword ptr [ESP]             ; 005f7eef
        ;   Label: LAB_005f7eef
    MOV EBP,dword ptr [0x03f99510]      ; 005f7ef2 | int g_ClipVertexCountStage1
    INC EAX                             ; 005f7ef8
    CMP EAX,EBP                         ; 005f7ef9
    JNZ 0x005f7eff                      ; 005f7efb | LAB_005f7eff
        ;   XREF to: 005f7eff (CONDITIONAL_JUMP)
    XOR EAX,EBP                         ; 005f7efd
    IMUL EAX,EAX,0x30                   ; 005f7eff
        ;   Label: LAB_005f7eff
    MOV EBP,0x3f99b20                   ; 005f7f02 | SRenderVertex[32] g_ClipVertexBufferStage1
    MOV EDX,EBX                         ; 005f7f07 | DAT_03f99b50
    MOV EDI,dword ptr [EBX]             ; 005f7f09 | SRenderVertex[32] g_ClipVertexBufferStage1
    MOV ECX,dword ptr [EBX + 0x8]       ; 005f7f0b | DAT_03f99b28
    ADD EBP,EAX                         ; 005f7f0e
    XOR EAX,EAX                         ; 005f7f10
    CMP EDI,ECX                         ; 005f7f12
    JL 0x005f7f1b                       ; 005f7f14 | LAB_005f7f1b
        ;   XREF to: 005f7f1b (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 005f7f16
    MOV ESI,dword ptr [EBP + 0x8]       ; 005f7f1b | DAT_03f99b28
        ;   Label: LAB_005f7f1b
    CMP ESI,dword ptr [EBP]             ; 005f7f1e | SRenderVertex[32] g_ClipVertexBufferStage1
    JG 0x005f7f25                       ; 005f7f21 | LAB_005f7f25
        ;   XREF to: 005f7f25 (CONDITIONAL_JUMP)
    OR AL,0x2                           ; 005f7f23
    CMP EAX,0x3                         ; 005f7f25
        ;   Label: LAB_005f7f25
    JA 0x005f7f76                       ; 005f7f28 | caseD_3
        ;   XREF to: 005f7f76 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x5f7ebc]  ; 005f7f2a | void * PTR_caseD_3_005f7ec8 | switchdataD_005f7ebc = 005f7f31
        ;   Label: switchD
    IMUL EDI,dword ptr [0x03f99514],0x30 ; 005f7f31 | int g_ClipVertexCountStage2
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 005f7f38
    MOV ESI,EDX                         ; 005f7f3d
    ADD EDI,0x3f99520                   ; 005f7f3f | SRenderVertex[32] g_ClipVertexBufferStage2
    TEST EDI,0x7                        ; 005f7f45
    JZ 0x005f7f53                       ; 005f7f4b | LAB_005f7f53
        ;   XREF to: 005f7f53 (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f7f4d | DAT_03f99b50 | g_ClipVertexBufferStage2
    SUB ECX,0x4                         ; 005f7f4e
    JLE 0x005f7f70                      ; 005f7f51 | LAB_005f7f70
        ;   XREF to: 005f7f70 (CONDITIONAL_JUMP)
    SUB ECX,0x8                         ; 005f7f53
        ;   Label: LAB_005f7f53
    JL 0x005f7f64                       ; 005f7f56 | LAB_005f7f64
        ;   XREF to: 005f7f64 (CONDITIONAL_JUMP)
    FILD qword ptr [ESI]                ; 005f7f58 | DAT_03f99b54
    ADD ESI,0x8                         ; 005f7f5a
    FISTP qword ptr [EDI]               ; 005f7f5d | g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f7f5f
    JMP 0x005f7f53                      ; 005f7f62 | LAB_005f7f53
        ;   XREF to: 005f7f53 (UNCONDITIONAL_JUMP)
    ADD ECX,0x8                         ; 005f7f64
        ;   Label: LAB_005f7f64
    JLE 0x005f7f70                      ; 005f7f67 | LAB_005f7f70
        ;   XREF to: 005f7f70 (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f7f69 | DAT_03f99b5c
    SUB ECX,0x4                         ; 005f7f6a
    JLE 0x005f7f70                      ; 005f7f6d | LAB_005f7f70
        ;   XREF to: 005f7f70 (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f7f6f | g_ClipVertexBufferStage1[1].projected_vertex.screen_x
    INC dword ptr [0x03f99514]          ; 005f7f70 | int g_ClipVertexCountStage2
        ;   Label: LAB_005f7f70
    MOV ESI,dword ptr [ESP]             ; 005f7f76
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x03f99510]      ; 005f7f79 | int g_ClipVertexCountStage1
    INC ESI                             ; 005f7f7f
    ADD EBX,0x30                        ; 005f7f80 | DAT_03f99b50
    MOV dword ptr [ESP],ESI             ; 005f7f83
    CMP ESI,EDI                         ; 005f7f86
    JL 0x005f7eef                       ; 005f7f88 | LAB_005f7eef
        ;   XREF to: 005f7eef (CONDITIONAL_JUMP)
    ADD ESP,0x4                         ; 005f7f8e
        ;   Label: LAB_005f7f8e
    POP EBP                             ; 005f7f91
    POP EDI                             ; 005f7f92
    POP ESI                             ; 005f7f93
    POP EBX                             ; 005f7f94
    RET                                 ; 005f7f95
    IMUL EAX,dword ptr [0x03f99514],0x30 ; 005f7f96 | int g_ClipVertexCountStage2
        ;   Label: caseD_1
    ADD EAX,0x3f99520                   ; 005f7f9d | SRenderVertex[32] g_ClipVertexBufferStage2
    PUSH EAX                            ; 005f7fa2
    PUSH EDX                            ; 005f7fa3 | DAT_03f99b50
    PUSH EBP                            ; 005f7fa4
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0 ; 005f7fa5 | void core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
        ;   XREF to: 005f7bc0 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x03f99514]      ; 005f7faa | int g_ClipVertexCountStage2
    INC ESI                             ; 005f7fb0
    ADD ESP,0xc                         ; 005f7fb1
    MOV dword ptr [0x03f99514],ESI      ; 005f7fb4 | int g_ClipVertexCountStage2
    JMP 0x005f7f76                      ; 005f7fba | caseD_3
        ;   XREF to: 005f7f76 (UNCONDITIONAL_JUMP)
    IMUL EDI,dword ptr [0x03f99514],0x30 ; 005f7fbc | int g_ClipVertexCountStage2
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 005f7fc3
    MOV ESI,EDX                         ; 005f7fc8
    ADD EDI,0x3f99520                   ; 005f7fca | SRenderVertex[32] g_ClipVertexBufferStage2
    TEST EDI,0x7                        ; 005f7fd0
    JZ 0x005f7fde                       ; 005f7fd6 | LAB_005f7fde
        ;   XREF to: 005f7fde (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f7fd8 | DAT_03f99b50 | g_ClipVertexBufferStage2
    SUB ECX,0x4                         ; 005f7fd9
    JLE 0x005f7ffb                      ; 005f7fdc | LAB_005f7ffb
        ;   XREF to: 005f7ffb (CONDITIONAL_JUMP)
    SUB ECX,0x8                         ; 005f7fde
        ;   Label: LAB_005f7fde
    JL 0x005f7fef                       ; 005f7fe1 | LAB_005f7fef
        ;   XREF to: 005f7fef (CONDITIONAL_JUMP)
    FILD qword ptr [ESI]                ; 005f7fe3 | DAT_03f99b54
    ADD ESI,0x8                         ; 005f7fe5
    FISTP qword ptr [EDI]               ; 005f7fe8 | g_ClipVertexBufferStage2[0].projected_vertex.transformed_y
    ADD EDI,0x8                         ; 005f7fea
    JMP 0x005f7fde                      ; 005f7fed | LAB_005f7fde
        ;   XREF to: 005f7fde (UNCONDITIONAL_JUMP)
    ADD ECX,0x8                         ; 005f7fef
        ;   Label: LAB_005f7fef
    JLE 0x005f7ffb                      ; 005f7ff2 | LAB_005f7ffb
        ;   XREF to: 005f7ffb (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f7ff4 | DAT_03f99b5c
    SUB ECX,0x4                         ; 005f7ff5
    JLE 0x005f7ffb                      ; 005f7ff8 | LAB_005f7ffb
        ;   XREF to: 005f7ffb (CONDITIONAL_JUMP)
    MOVSD ES:EDI,ESI                    ; 005f7ffa | g_ClipVertexBufferStage1[1].projected_vertex.screen_x
    MOV ECX,dword ptr [0x03f99514]      ; 005f7ffb | int g_ClipVertexCountStage2
        ;   Label: LAB_005f7ffb
    INC ECX                             ; 005f8001
    MOV dword ptr [0x03f99514],ECX      ; 005f8002 | int g_ClipVertexCountStage2
    IMUL EAX,ECX,0x30                   ; 005f8008
    ADD EAX,0x3f99520                   ; 005f800b | SRenderVertex[32] g_ClipVertexBufferStage2
    PUSH EAX                            ; 005f8010
    PUSH EBP                            ; 005f8011
    PUSH EDX                            ; 005f8012 | DAT_03f99b50
    CALL core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0 ; 005f8013 | void core_xform.cpp_clipInterpolateRightPlane_FUN_005f7bc0(SRenderVertex * vertex_a, SRenderVertex * vertex_b, SRenderVertex * vertex_out)
        ;   XREF to: 005f7bc0 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x03f99514]      ; 005f8018 | int g_ClipVertexCountStage2
    INC EDI                             ; 005f801e
    ADD ESP,0xc                         ; 005f801f
    MOV dword ptr [0x03f99514],EDI      ; 005f8022 | int g_ClipVertexCountStage2
    JMP 0x005f7f76                      ; 005f8028 | caseD_3
        ;   XREF to: 005f7f76 (UNCONDITIONAL_JUMP)


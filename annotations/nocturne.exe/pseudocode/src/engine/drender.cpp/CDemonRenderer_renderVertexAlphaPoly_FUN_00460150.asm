; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_fire.cpp_CLaserBeam_render_FUN_00485a90 at 0048684e
;   core_manpuz.cpp_FUN_004ca790 at 004cab7b
;   core_path.cpp_FUN_004f16d0 at 004f18ab
;   core_path.cpp_FUN_004f18c0 at 004f1c7e
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460150
        ;   Label: engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
    PUSH ESI                            ; 00460151
    PUSH EDI                            ; 00460152
    PUSH EBP                            ; 00460153
    SUB ESP,0x4                         ; 00460154
    MOV EBX,dword ptr [ESP + 0x18]      ; 00460157
    CMP dword ptr [EBX + 0xc],0x0       ; 0046015b
    JNZ 0x004601fe                      ; 0046015f
        ;   XREF to: 004601fe (CONDITIONAL_JUMP)  ; LAB_004601fe
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00460165
        ;   Label: LAB_00460165
    MOV ECX,0xffffffff                  ; 00460169
    XOR EDX,EDX                         ; 0046016e
    MOV ESI,dword ptr [EAX + 0x4]       ; 00460170
    MOV dword ptr [ESP],ECX             ; 00460173
    TEST ESI,ESI                        ; 00460176
    JLE 0x004601b0                      ; 00460178
        ;   XREF to: 004601b0 (CONDITIONAL_JUMP)  ; LAB_004601b0
    XOR ECX,ECX                         ; 0046017a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046017c
        ;   Label: LAB_0046017c
    MOV dword ptr [ECX + 0x1b4d76c],ESI ; 0046017f | DAT_01b4d76c | DAT_01b4d770
    IMUL ESI,ESI,0x30                   ; 00460185
    MOV EDI,dword ptr [EBX]             ; 00460188
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046018a
    MOV EDI,dword ptr [ESP]             ; 0046018e
    ADD ECX,0x4                         ; 00460191
    AND EDI,ESI                         ; 00460194
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00460196
    ADD EAX,0xc                         ; 0046019a
    INC EDX                             ; 0046019d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046019e
    MOV dword ptr [ESP],EDI             ; 004601a1
    CMP EDX,EBP                         ; 004601a4
    JL 0x0046017c                       ; 004601a6
        ;   XREF to: 0046017c (CONDITIONAL_JUMP)  ; LAB_0046017c
    LEA EAX,[EAX]                       ; 004601a8
    MOV EDX,EDX                         ; 004601ae
    TEST byte ptr [ESP + 0x3],0x80      ; 004601b0
        ;   Label: LAB_004601b0
    JZ 0x004601bd                       ; 004601b5
        ;   XREF to: 004601bd (CONDITIONAL_JUMP)  ; LAB_004601bd
    TEST byte ptr [ESP],0x1f            ; 004601b7
    JNZ 0x004601f6                      ; 004601bb
        ;   XREF to: 004601f6 (CONDITIONAL_JUMP)  ; LAB_004601f6
    CMP dword ptr [EBX + 0x4],0x0       ; 004601bd
        ;   Label: LAB_004601bd
    JZ 0x00460217                       ; 004601c1
        ;   XREF to: 00460217 (CONDITIONAL_JUMP)  ; LAB_00460217
    XOR ESI,ESI                         ; 004601c3
    MOV ECX,0x463a79                    ; 004601c5
    MOV dword ptr [0x01c039a0],ESI      ; 004601ca | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ESI      ; 004601d0 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],ECX      ; 004601d6 | DAT_01c00c7c
    LEA EAX,[EAX]                       ; 004601dc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004601e0
        ;   Label: LAB_004601e0
    PUSH 0x1b4d76c                      ; 004601e4 | DAT_01b4d76c
    MOV EDX,dword ptr [EAX + 0x4]       ; 004601e9
    PUSH EDX                            ; 004601ec
    PUSH EBX                            ; 004601ed
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 004601ee
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 004601f3
    ADD ESP,0x4                         ; 004601f6
        ;   Label: LAB_004601f6
    POP EBP                             ; 004601f9
    POP EDI                             ; 004601fa
    POP ESI                             ; 004601fb
    POP EBX                             ; 004601fc
    RET                                 ; 004601fd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004601fe
        ;   Label: LAB_004601fe
    ADD EAX,0x8                         ; 00460202
    PUSH EAX                            ; 00460205
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00460206
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0046020b
    TEST EAX,EAX                        ; 0046020e
    JZ 0x004601f6                       ; 00460210
        ;   XREF to: 004601f6 (CONDITIONAL_JUMP)  ; LAB_004601f6
    JMP 0x00460165                      ; 00460212
        ;   XREF to: 00460165 (UNCONDITIONAL_JUMP)  ; LAB_00460165
    CMP dword ptr [0x005b7624],0x20     ; 00460217 | DAT_005b7624
        ;   Label: LAB_00460217
    JNZ 0x00460289                      ; 0046021e
        ;   XREF to: 00460289 (CONDITIONAL_JUMP)  ; LAB_00460289
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00460220 | DAT_01c00c7c
    MOV EBP,0x6                         ; 0046022a
        ;   Label: LAB_0046022a
    MOV EDI,0x367                       ; 0046022f
    MOV EAX,dword ptr [EBX + 0x20]      ; 00460234
    MOV dword ptr [0x01c039a4],EBP      ; 00460237 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDI      ; 0046023d | DAT_01c039a0
    TEST EAX,EAX                        ; 00460243
    JNZ 0x004601e0                      ; 00460245
        ;   XREF to: 004601e0 (CONDITIONAL_JUMP)  ; LAB_004601e0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00460247
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046024b
    XOR ECX,ECX                         ; 0046024e
    TEST EDX,EDX                        ; 00460250
    JLE 0x004601e0                      ; 00460252
        ;   XREF to: 004601e0 (CONDITIONAL_JUMP)  ; LAB_004601e0
    XOR EDX,EDX                         ; 00460254
    MOV ESI,dword ptr [EDX + 0x1b4d76c] ; 00460256 | DAT_01b4d76c | DAT_01b4d770
        ;   Label: LAB_00460256
    IMUL ESI,ESI,0x30                   ; 0046025c
    MOV EDI,dword ptr [EBX]             ; 0046025f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00460261
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00460264
    MOV EDI,dword ptr [EBX]             ; 00460268
    ADD EDI,ESI                         ; 0046026a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046026c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046026f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00460272
    ADD EAX,0xc                         ; 00460276
    INC ECX                             ; 00460279
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046027a
    ADD EDX,0x4                         ; 0046027d
    CMP ECX,EBP                         ; 00460280
    JL 0x00460256                       ; 00460282
        ;   XREF to: 00460256 (CONDITIONAL_JUMP)  ; LAB_00460256
    JMP 0x004601e0                      ; 00460284
        ;   XREF to: 004601e0 (UNCONDITIONAL_JUMP)  ; LAB_004601e0
    MOV dword ptr [0x01c00c7c],0x52f823 ; 00460289 | DAT_01c00c7c
        ;   Label: LAB_00460289
    JMP 0x0046022a                      ; 00460293
        ;   XREF to: 0046022a (UNCONDITIONAL_JUMP)  ; LAB_0046022a


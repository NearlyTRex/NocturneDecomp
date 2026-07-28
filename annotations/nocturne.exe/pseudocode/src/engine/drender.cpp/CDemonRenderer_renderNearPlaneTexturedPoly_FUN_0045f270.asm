; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270(CDemonRenderer *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
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

    PUSH EBX                            ; 0045f270
        ;   Label: engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_0045f270
    PUSH ESI                            ; 0045f271
    PUSH EDI                            ; 0045f272
    PUSH EBP                            ; 0045f273
    SUB ESP,0x4                         ; 0045f274
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045f277
    CMP dword ptr [EBX + 0xc],0x0       ; 0045f27b
    JNZ 0x0045f331                      ; 0045f27f
        ;   XREF to: 0045f331 (CONDITIONAL_JUMP)  ; LAB_0045f331
    MOV ECX,0xffffffff                  ; 0045f285
        ;   Label: LAB_0045f285
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f28a
    MOV dword ptr [ESP],ECX             ; 0045f28e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0045f291
    XOR ECX,ECX                         ; 0045f294
    TEST ESI,ESI                        ; 0045f296
    JLE 0x0045f2d0                      ; 0045f298
        ;   XREF to: 0045f2d0 (CONDITIONAL_JUMP)  ; LAB_0045f2d0
    XOR EDX,EDX                         ; 0045f29a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0045f29c
        ;   Label: LAB_0045f29c
    MOV dword ptr [EDX + 0x1b4d76c],ESI ; 0045f29f | DAT_01b4d76c | DAT_01b4d770
    IMUL ESI,ESI,0x30                   ; 0045f2a5
    MOV EDI,dword ptr [EBX]             ; 0045f2a8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0045f2aa
    MOV EDI,dword ptr [ESP]             ; 0045f2ae
    ADD EDX,0x4                         ; 0045f2b1
    AND EDI,ESI                         ; 0045f2b4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045f2b6
    ADD EAX,0xc                         ; 0045f2ba
    INC ECX                             ; 0045f2bd
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045f2be
    MOV dword ptr [ESP],EDI             ; 0045f2c1
    CMP ECX,EBP                         ; 0045f2c4
    JL 0x0045f29c                       ; 0045f2c6
        ;   XREF to: 0045f29c (CONDITIONAL_JUMP)  ; LAB_0045f29c
    LEA EAX,[EAX]                       ; 0045f2c8
    MOV EDX,EDX                         ; 0045f2ce
    TEST byte ptr [ESP + 0x3],0x80      ; 0045f2d0
        ;   Label: LAB_0045f2d0
    JZ 0x0045f2dd                       ; 0045f2d5
        ;   XREF to: 0045f2dd (CONDITIONAL_JUMP)  ; LAB_0045f2dd
    TEST byte ptr [ESP],0x1f            ; 0045f2d7
    JNZ 0x0045f329                      ; 0045f2db
        ;   XREF to: 0045f329 (CONDITIONAL_JUMP)  ; LAB_0045f329
    CMP dword ptr [EBX + 0x4],0x0       ; 0045f2dd
        ;   Label: LAB_0045f2dd
    JZ 0x0045f34a                       ; 0045f2e1
        ;   XREF to: 0045f34a (CONDITIONAL_JUMP)  ; LAB_0045f34a
    LEA EAX,[EAX]                       ; 0045f2e3
    LEA EDX,[EDX]                       ; 0045f2e9
    NOP                                 ; 0045f2ef
    CMP dword ptr [EBX + 0x4],0x0       ; 0045f2f0
        ;   Label: LAB_0045f2f0
    JZ 0x0045f391                       ; 0045f2f4
        ;   XREF to: 0045f391 (CONDITIONAL_JUMP)  ; LAB_0045f391
    XOR EDI,EDI                         ; 0045f2fa
    MOV ESI,0x463a79                    ; 0045f2fc
    MOV dword ptr [0x01c039a0],EDI      ; 0045f301 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDI      ; 0045f307 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],ESI      ; 0045f30d | DAT_01c00c7c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f313
        ;   Label: LAB_0045f313
    PUSH 0x1b4d76c                      ; 0045f317 | DAT_01b4d76c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045f31c
    PUSH EDX                            ; 0045f31f
    PUSH EBX                            ; 0045f320
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f321
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0045f326
    ADD ESP,0x4                         ; 0045f329
        ;   Label: LAB_0045f329
    POP EBP                             ; 0045f32c
    POP EDI                             ; 0045f32d
    POP ESI                             ; 0045f32e
    POP EBX                             ; 0045f32f
    RET                                 ; 0045f330
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f331
        ;   Label: LAB_0045f331
    ADD EAX,0x8                         ; 0045f335
    PUSH EAX                            ; 0045f338
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045f339
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045f33e
    TEST EAX,EAX                        ; 0045f341
    JZ 0x0045f329                       ; 0045f343
        ;   XREF to: 0045f329 (CONDITIONAL_JUMP)  ; LAB_0045f329
    JMP 0x0045f285                      ; 0045f345
        ;   XREF to: 0045f285 (UNCONDITIONAL_JUMP)  ; LAB_0045f285
    MOV EDX,dword ptr [EBX + 0x20]      ; 0045f34a
        ;   Label: LAB_0045f34a
    TEST EDX,EDX                        ; 0045f34d
    JNZ 0x0045f2f0                      ; 0045f34f
        ;   XREF to: 0045f2f0 (CONDITIONAL_JUMP)  ; LAB_0045f2f0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f351
    MOV ESI,dword ptr [EAX + 0x4]       ; 0045f355
    XOR ECX,ECX                         ; 0045f358
    TEST ESI,ESI                        ; 0045f35a
    JLE 0x0045f2f0                      ; 0045f35c
        ;   XREF to: 0045f2f0 (CONDITIONAL_JUMP)  ; LAB_0045f2f0
    MOV ESI,dword ptr [EDX + 0x1b4d76c] ; 0045f35e | DAT_01b4d76c | DAT_01b4d770
        ;   Label: LAB_0045f35e
    IMUL ESI,ESI,0x30                   ; 0045f364
    MOV EDI,dword ptr [EBX]             ; 0045f367
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0045f369
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0045f36c
    MOV EDI,dword ptr [EBX]             ; 0045f370
    ADD EDI,ESI                         ; 0045f372
    MOV ESI,dword ptr [EAX + 0x20]      ; 0045f374
    MOV dword ptr [EDI + 0x1c],ESI      ; 0045f377
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045f37a
    ADD EAX,0xc                         ; 0045f37e
    INC ECX                             ; 0045f381
    MOV EDI,dword ptr [ESI + 0x4]       ; 0045f382
    ADD EDX,0x4                         ; 0045f385
    CMP ECX,EDI                         ; 0045f388
    JL 0x0045f35e                       ; 0045f38a
        ;   XREF to: 0045f35e (CONDITIONAL_JUMP)  ; LAB_0045f35e
    JMP 0x0045f2f0                      ; 0045f38c
        ;   XREF to: 0045f2f0 (UNCONDITIONAL_JUMP)  ; LAB_0045f2f0
    MOV EDX,0xc1                        ; 0045f391
        ;   Label: LAB_0045f391
    MOV ECX,0x3                         ; 0045f396
    MOV EAX,0x464200                    ; 0045f39b
    MOV dword ptr [0x01c039a0],EDX      ; 0045f3a0 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ECX      ; 0045f3a6 | DAT_01c039a4
    MOV [0x01c00c7c],EAX                ; 0045f3ac | DAT_01c00c7c
    JMP 0x0045f313                      ; 0045f3b1
        ;   XREF to: 0045f313 (UNCONDITIONAL_JUMP)  ; LAB_0045f313


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_captureFace_FUN_0046e300(CDemonRenderer *this_ptr,STrianglePackedIndices *triangle_indices,int render_flags)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; STrianglePackedIndices * Stack[0x8]:4   triangle_indices
; int              Stack[0xc]:4   render_flags
;
; XREF[4]:
;   engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_0046e200 at 0046e294
;   engine_drender.cpp_CDemonRenderer_processVisiblePrimitive_FUN_0046e160 at 0046e1f2
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_0046dbd0 at 0046dbfe
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70 at 0046baf6
;
; Referenced Globals:
;   TerminatedCString s_engine_drender_cpp_005bc67c
;   TerminatedCString s_CDR_captureFace_too_many_005bc692
;   undefined4 DAT_01bdd858
;   undefined4 DAT_01bdd85c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_prim.c_getTriangleWindingFromPackedIndices_FUN_00515d60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e300
        ;   Label: engine_drender.cpp_CDemonRenderer_captureFace_FUN_0046e300
    PUSH ESI                            ; 0046e301
    PUSH EBP                            ; 0046e302
    MOV EBP,dword ptr [ESP + 0x10]      ; 0046e303
    MOV EBX,dword ptr [ESP + 0x14]      ; 0046e307
    CMP dword ptr [EBP + 0x10],0x0      ; 0046e30b
    JZ 0x0046e42e                       ; 0046e30f
        ;   XREF to: 0046e42e (CONDITIONAL_JUMP)  ; LAB_0046e42e
    XOR EDX,EDX                         ; 0046e315
    MOV DX,word ptr [EBX + 0x2]         ; 0046e317
    LEA EAX,[EDX*0x4 + 0x0]             ; 0046e31b
    SUB EAX,EDX                         ; 0046e322
    XOR ECX,ECX                         ; 0046e324
    SHL EAX,0x4                         ; 0046e326
    MOV EDX,dword ptr [EBP]             ; 0046e329
    MOV CX,word ptr [EBX]               ; 0046e32c
    LEA ESI,[EDX + EAX*0x1]             ; 0046e32f
    LEA EAX,[ECX*0x4 + 0x0]             ; 0046e332
    SUB EAX,ECX                         ; 0046e339
    SHL EAX,0x4                         ; 0046e33b
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 0046e33e
    MOV ECX,dword ptr [ESI + 0x10]      ; 0046e342
    MOV ESI,EAX                         ; 0046e345
    AND ESI,ECX                         ; 0046e347
    XOR ECX,ECX                         ; 0046e349
    MOV CX,word ptr [EBX + 0x4]         ; 0046e34b
    LEA EAX,[ECX*0x4 + 0x0]             ; 0046e34f
    SUB EAX,ECX                         ; 0046e356
    SHL EAX,0x4                         ; 0046e358
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x10] ; 0046e35b
    AND EAX,ESI                         ; 0046e35f
    TEST EAX,0x80000000                 ; 0046e361
    JZ 0x0046e370                       ; 0046e366
        ;   XREF to: 0046e370 (CONDITIONAL_JUMP)  ; LAB_0046e370
    TEST AL,0xff                        ; 0046e368
    JNZ 0x0046e42a                      ; 0046e36a
        ;   XREF to: 0046e42a (CONDITIONAL_JUMP)  ; LAB_0046e42a
    PUSH EDI                            ; 0046e370
        ;   Label: LAB_0046e370
    CMP dword ptr [0x01bdd858],0x1388   ; 0046e371 | DAT_01bdd858
    JL 0x0046e39f                       ; 0046e37b
        ;   XREF to: 0046e39f (CONDITIONAL_JUMP)  ; LAB_0046e39f
    MOV EDI,0x5bc67c                    ; 0046e37d | = "..\\engine\\drender.cpp"
    MOV EAX,0xb78                       ; 0046e382
    PUSH 0x5bc692                       ; 0046e387 | = "CDR::captureFace - too many faces cap..."
    MOV dword ptr [0x01d71de0],EDI      ; 0046e38c | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0046e392 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0046e397
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0046e39c
    MOV EDX,dword ptr [0x01bdd858]      ; 0046e39f | DAT_01bdd858
        ;   Label: LAB_0046e39f
    SHL EDX,0x5                         ; 0046e3a5
    MOV ESI,EBX                         ; 0046e3a8
    LEA EDI,[EDX + 0x1bdd86c]           ; 0046e3aa
    MOV EAX,[0x01bdd85c]                ; 0046e3b0 | DAT_01bdd85c
    MOVSD ES:EDI,ESI                    ; 0046e3b5
    MOVSD ES:EDI,ESI                    ; 0046e3b6
    MOVSD ES:EDI,ESI                    ; 0046e3b7
    MOVSD ES:EDI,ESI                    ; 0046e3b8
    MOVSW ES:EDI,ESI                    ; 0046e3b9
    MOV dword ptr [EDX + 0x1bdd860],EAX ; 0046e3bb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046e3c1
    XOR ECX,ECX                         ; 0046e3c5
    MOV dword ptr [EDX + 0x1bdd864],EAX ; 0046e3c7
    MOV CX,word ptr [EBX]               ; 0046e3cd
    LEA EAX,[ECX*0x4 + 0x0]             ; 0046e3d0
    XOR EDI,EDI                         ; 0046e3d7
    SUB EAX,ECX                         ; 0046e3d9
    MOV ECX,dword ptr [EBP]             ; 0046e3db
    SHL EAX,0x4                         ; 0046e3de
    MOV DI,word ptr [EBX + 0x2]         ; 0046e3e1
    MOV ESI,dword ptr [ECX + EAX*0x1 + 0x8] ; 0046e3e5
    LEA EAX,[EDI*0x4 + 0x0]             ; 0046e3e9
    SUB EAX,EDI                         ; 0046e3f0
    SHL EAX,0x4                         ; 0046e3f2
    LEA EDI,[ECX + EAX*0x1]             ; 0046e3f5
    MOV BX,word ptr [EBX + 0x4]         ; 0046e3f8
    MOV EDI,dword ptr [EDI + 0x8]       ; 0046e3fc
    AND EBX,0xffff                      ; 0046e3ff
    LEA EAX,[EBX*0x4 + 0x0]             ; 0046e405
    SUB EAX,EBX                         ; 0046e40c
    SHL EAX,0x4                         ; 0046e40e
    MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8] ; 0046e411
    CMP ESI,EDI                         ; 0046e415
    JGE 0x0046e443                      ; 0046e417
        ;   XREF to: 0046e443 (CONDITIONAL_JUMP)  ; LAB_0046e443
    CMP ESI,EAX                         ; 0046e419
    JGE 0x0046e443                      ; 0046e41b
        ;   XREF to: 0046e443 (CONDITIONAL_JUMP)  ; LAB_0046e443
    MOV dword ptr [EDX + 0x1bdd868],ESI ; 0046e41d
    INC dword ptr [0x01bdd858]          ; 0046e423 | DAT_01bdd858
    POP EDI                             ; 0046e429
    POP EBP                             ; 0046e42a
        ;   Label: LAB_0046e42a
    POP ESI                             ; 0046e42b
    POP EBX                             ; 0046e42c
    RET                                 ; 0046e42d
    PUSH EBX                            ; 0046e42e
        ;   Label: LAB_0046e42e
    CALL engine_prim.c_getTriangleWindingFromPackedIndices_FUN_00515d60 ; 0046e42f
        ;   XREF to: 00515d60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_getTriangleWindingFromPackedIndices_FUN_00515d60(STrianglePackedIndices * triangle)
    ADD ESP,0x4                         ; 0046e434
    TEST EAX,EAX                        ; 0046e437
    JNZ 0x0046e370                      ; 0046e439
        ;   XREF to: 0046e370 (CONDITIONAL_JUMP)  ; LAB_0046e370
    POP EBP                             ; 0046e43f
    POP ESI                             ; 0046e440
    POP EBX                             ; 0046e441
    RET                                 ; 0046e442
    MOV EDX,dword ptr [0x01bdd858]      ; 0046e443 | DAT_01bdd858
        ;   Label: LAB_0046e443
    SHL EDX,0x5                         ; 0046e449
    CMP EDI,EAX                         ; 0046e44c
    JGE 0x0046e461                      ; 0046e44e
        ;   XREF to: 0046e461 (CONDITIONAL_JUMP)  ; LAB_0046e461
    MOV dword ptr [EDX + 0x1bdd868],EDI ; 0046e450
    INC dword ptr [0x01bdd858]          ; 0046e456 | DAT_01bdd858
    POP EDI                             ; 0046e45c
    POP EBP                             ; 0046e45d
    POP ESI                             ; 0046e45e
    POP EBX                             ; 0046e45f
    RET                                 ; 0046e460
    MOV dword ptr [EDX + 0x1bdd868],EAX ; 0046e461
        ;   Label: LAB_0046e461
    INC dword ptr [0x01bdd858]          ; 0046e467 | DAT_01bdd858
    POP EDI                             ; 0046e46d
    POP EBP                             ; 0046e46e
    POP ESI                             ; 0046e46f
    POP EBX                             ; 0046e470
    RET                                 ; 0046e471


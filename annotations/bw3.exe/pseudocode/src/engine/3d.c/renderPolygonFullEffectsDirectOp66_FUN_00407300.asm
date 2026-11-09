; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonFullEffectsDirectOp66_FUN_00407300(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba38
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b018
;   undefined4 DAT_00730478
;   undefined4 DAT_0073047c
;   undefined4 DAT_00730480
;   undefined4 DAT_00730484
;   undefined4 DAT_00730488
;   undefined4 DAT_0073048c
;   undefined4 DAT_007304b4
;   undefined4 DAT_00730544
;   undefined4 DAT_00730548
;   undefined4 DAT_0073058c
;   undefined4 DAT_00730590
;   ... and 6 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_texture.cpp_FUN_0056acf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407300
        ;   Label: engine_3d.c_renderPolygonFullEffectsDirectOp66_FUN_00407300
    PUSH ESI                            ; 00407301
    PUSH EDI                            ; 00407302
    PUSH EBP                            ; 00407303
    SUB ESP,0x4                         ; 00407304
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407307
    ADD EAX,0x8                         ; 0040730b
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040730e
    PUSH EAX                            ; 00407312
    ADD EBX,0x18                        ; 00407313
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00407316
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0040731b
    TEST EAX,EAX                        ; 0040731e
    JZ 0x00407438                       ; 00407320
        ;   XREF to: 00407438 (CONDITIONAL_JUMP)  ; LAB_00407438
    CMP dword ptr [0x01c6e2a0],0x0      ; 00407326 | DAT_01c6e2a0
    JNZ 0x0040746f                      ; 0040732d
        ;   XREF to: 0040746f (CONDITIONAL_JUMP)  ; LAB_0040746f
    CMP dword ptr [0x005fba20],0x20     ; 00407333 | DAT_005fba20
    JNZ 0x00407460                      ; 0040733a
        ;   XREF to: 00407460 (CONDITIONAL_JUMP)  ; LAB_00407460
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00407340 | DAT_01c6b5cc
    MOV ESI,0x1                         ; 0040734a
        ;   Label: LAB_0040734a
    MOV ECX,0x1e7                       ; 0040734f
    MOV EDI,dword ptr [0x00730478]      ; 00407354 | DAT_00730478
    MOV dword ptr [0x01c6e2b8],ESI      ; 0040735a | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],ECX      ; 00407360 | DAT_01c6e2b4
    TEST EDI,EDI                        ; 00407366
    JZ 0x00407496                       ; 00407368
        ;   XREF to: 00407496 (CONDITIONAL_JUMP)  ; LAB_00407496
    MOV EBP,dword ptr [0x0073047c]      ; 0040736e | DAT_0073047c
    CMP EBP,0x9c4                       ; 00407374
    JGE 0x00407496                      ; 0040737a
        ;   XREF to: 00407496 (CONDITIONAL_JUMP)  ; LAB_00407496
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407380
    CMP dword ptr [EAX + 0x4],0x4       ; 00407384
    JG 0x00407496                       ; 00407388
        ;   XREF to: 00407496 (CONDITIONAL_JUMP)  ; LAB_00407496
    LEA EAX,[EBP*0x8 + 0x0]             ; 0040738e
    ADD EAX,EBP                         ; 00407395
    SHL EAX,0x2                         ; 00407397
    SUB EAX,EBP                         ; 0040739a
    MOV EDX,0x730480                    ; 0040739c | DAT_00730480
    SHL EAX,0x3                         ; 004073a1
    MOV ESI,dword ptr [0x0073047c]      ; 004073a4 | DAT_0073047c
    ADD EDX,EAX                         ; 004073aa
    MOV EAX,dword ptr [ESP + 0x18]      ; 004073ac
    INC ESI                             ; 004073b0
    MOV EAX,dword ptr [EAX + 0x4]       ; 004073b1
    MOV dword ptr [0x0073047c],ESI      ; 004073b4 | DAT_0073047c
    MOV dword ptr [EDX],EAX             ; 004073ba | DAT_00730480
    MOV EAX,dword ptr [ESP + 0x18]      ; 004073bc
    MOV EBP,0x7fffffff                  ; 004073c0
    MOV dword ptr [ESP],EDX             ; 004073c5
    MOV EDI,dword ptr [EAX + 0x4]       ; 004073c8
    XOR EDX,EDX                         ; 004073cb
    TEST EDI,EDI                        ; 004073cd
    JLE 0x00407402                      ; 004073cf
        ;   XREF to: 00407402 (CONDITIONAL_JUMP)  ; LAB_00407402
    MOV EAX,dword ptr [ESP]             ; 004073d1
    IMUL ESI,dword ptr [EBX],0x30       ; 004073d4
        ;   Label: LAB_004073d4
    MOV ECX,0xc                         ; 004073d7
    LEA EDI,[EAX + 0x4]                 ; 004073dc
    LEA ESI,[ESI + 0x60b014]            ; 004073df | DAT_0060b014
    MOVSD.REP ES:EDI,ESI                ; 004073e5 | DAT_0060b014 | DAT_00730484 | DAT_0060b018
    MOV ECX,dword ptr [EAX + 0xc]       ; 004073e7 | DAT_0073048c
    CMP EBP,ECX                         ; 004073ea
    JLE 0x004073f0                      ; 004073ec
        ;   XREF to: 004073f0 (CONDITIONAL_JUMP)  ; LAB_004073f0
    MOV EBP,ECX                         ; 004073ee
    MOV ESI,dword ptr [ESP + 0x18]      ; 004073f0
        ;   Label: LAB_004073f0
    ADD EAX,0x30                        ; 004073f4
    INC EDX                             ; 004073f7
    MOV ECX,dword ptr [ESI + 0x4]       ; 004073f8
    ADD EBX,0x4                         ; 004073fb
    CMP EDX,ECX                         ; 004073fe
    JL 0x004073d4                       ; 00407400
        ;   XREF to: 004073d4 (CONDITIONAL_JUMP)  ; LAB_004073d4
    CALL engine_texture.cpp_FUN_0056acf0 ; 00407402
        ;   XREF to: 0056acf0 (UNCONDITIONAL_CALL)  ; SMRGLTextureBasic * engine_texture.cpp_FUN_0056acf0()
        ;   Label: LAB_00407402
    MOV EDI,dword ptr [ESP]             ; 00407407
    MOV ECX,0x12                        ; 0040740a
    MOV ESI,EAX                         ; 0040740f
    LEA EDI,[EDI + 0xc4]                ; 00407411
    MOV EDX,dword ptr [ESP]             ; 00407417
    MOV EAX,[0x005fba38]                ; 0040741a | DAT_005fba38
    MOVSD.REP ES:EDI,ESI                ; 0040741f | DAT_00730544 | DAT_00730548
    MOV dword ptr [EDX + 0x10c],EAX     ; 00407421 | DAT_0073058c
    MOV dword ptr [EDX + 0x114],EBP     ; 00407427 | DAT_00730594
    MOV EAX,[0x01c6e2ac]                ; 0040742d | DAT_01c6e2ac
    MOV dword ptr [EDX + 0x110],EAX     ; 00407432 | DAT_00730590
    MOV EDX,dword ptr [ESP + 0x18]      ; 00407438
        ;   Label: LAB_00407438
    MOV EDX,dword ptr [EDX + 0x4]       ; 0040743c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0040743f
    SUB EAX,EDX                         ; 00407446
    LEA EDX,[EAX*0x4 + 0x0]             ; 00407448
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040744f
    ADD EAX,0x18                        ; 00407453
    ADD EAX,EDX                         ; 00407456
    ADD ESP,0x4                         ; 00407458
    POP EBP                             ; 0040745b
    POP EDI                             ; 0040745c
    POP ESI                             ; 0040745d
    POP EBX                             ; 0040745e
    RET                                 ; 0040745f
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00407460 | DAT_01c6b5cc
        ;   Label: LAB_00407460
    JMP 0x0040734a                      ; 0040746a
        ;   XREF to: 0040734a (UNCONDITIONAL_JUMP)  ; LAB_0040734a
    CMP dword ptr [0x005fba20],0x20     ; 0040746f | DAT_005fba20
        ;   Label: LAB_0040746f
    JNZ 0x00407487                      ; 00407476
        ;   XREF to: 00407487 (CONDITIONAL_JUMP)  ; LAB_00407487
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00407478 | DAT_01c6b5cc
    JMP 0x0040734a                      ; 00407482
        ;   XREF to: 0040734a (UNCONDITIONAL_JUMP)  ; LAB_0040734a
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00407487 | DAT_01c6b5cc
        ;   Label: LAB_00407487
    JMP 0x0040734a                      ; 00407491
        ;   XREF to: 0040734a (UNCONDITIONAL_JUMP)  ; LAB_0040734a
    MOV EAX,dword ptr [ESP + 0x18]      ; 00407496
        ;   Label: LAB_00407496
    PUSH EBX                            ; 0040749a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0040749b
    PUSH ECX                            ; 0040749e
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 0040749f
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004074a4
    JMP 0x00407438                      ; 004074a7
        ;   XREF to: 00407438 (UNCONDITIONAL_JUMP)  ; LAB_00407438


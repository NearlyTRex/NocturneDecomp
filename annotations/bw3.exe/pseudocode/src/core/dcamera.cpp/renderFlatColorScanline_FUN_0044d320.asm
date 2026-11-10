; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_renderFlatColorScanline_FUN_0044d320(int scanline_y,SSoftwareEdge *right,SSoftwareEdge *left)
;
; Parameters:
; int              Stack[0x4]:4   scanline_y
; SSoftwareEdge *  Stack[0x8]:4   right
; SSoftwareEdge *  Stack[0xc]:4   left
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderPrimitiveBatch_FUN_0053ab80 at 0053ac02
;
; Referenced Globals:
;   undefined4 DAT_013405b0
;   undefined4 DAT_0149d6d8
;   undefined4 DAT_01547200
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d320
        ;   Label: core_dcamera.cpp_renderFlatColorScanline_FUN_0044d320
    PUSH ESI                            ; 0044d321
    PUSH EDI                            ; 0044d322
    PUSH EBP                            ; 0044d323
    SUB ESP,0x18                        ; 0044d324
    MOV ESI,dword ptr [0x0149d6d8]      ; 0044d327 | DAT_0149d6d8
    MOV EBP,dword ptr [ESP + 0x30]      ; 0044d32d
    MOV EDX,dword ptr [ESP + 0x34]      ; 0044d331
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0044d335
    SUB ECX,dword ptr [0x01c6b5ac]      ; 0044d339 | DAT_01c6b5ac
    MOV EBX,dword ptr [0x013405b0]      ; 0044d33f | DAT_013405b0
    MOV dword ptr [ESP + 0x2c],ECX      ; 0044d345
    CMP EBX,0x1                         ; 0044d349
    JNZ 0x0044d359                      ; 0044d34c
        ;   XREF to: 0044d359 (CONDITIONAL_JUMP)  ; LAB_0044d359
    TEST byte ptr [ESP + 0x2c],0x1      ; 0044d34e
    JNZ 0x0044d4cb                      ; 0044d353
        ;   XREF to: 0044d4cb (CONDITIONAL_JUMP)  ; LAB_0044d4cb
    CMP dword ptr [0x013405b0],0x2      ; 0044d359 | DAT_013405b0
        ;   Label: LAB_0044d359
    JNZ 0x0044d36d                      ; 0044d360
        ;   XREF to: 0044d36d (CONDITIONAL_JUMP)  ; LAB_0044d36d
    TEST byte ptr [ESP + 0x2c],0x3      ; 0044d362
    JNZ 0x0044d4cb                      ; 0044d367
        ;   XREF to: 0044d4cb (CONDITIONAL_JUMP)  ; LAB_0044d4cb
    MOV EDI,dword ptr [EBP + 0x8]       ; 0044d36d
        ;   Label: LAB_0044d36d
    MOV EAX,[0x01c6b5a8]                ; 0044d370 | DAT_01c6b5a8
    SAR EDI,0x10                        ; 0044d375
    SUB EDI,EAX                         ; 0044d378
    MOV EAX,dword ptr [EDX + 0x8]       ; 0044d37a
    MOV ECX,dword ptr [0x01c6b5a8]      ; 0044d37d | DAT_01c6b5a8
    SAR EAX,0x10                        ; 0044d383
    SUB EAX,ECX                         ; 0044d386
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d388
    CMP EDI,EAX                         ; 0044d38c
    JLE 0x0044d3a0                      ; 0044d38e
        ;   XREF to: 0044d3a0 (CONDITIONAL_JUMP)  ; LAB_0044d3a0
    MOV EAX,EDI                         ; 0044d390
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044d392
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d396
    MOV EAX,EBP                         ; 0044d39a
    MOV EBP,EDX                         ; 0044d39c
    MOV EDX,EAX                         ; 0044d39e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044d3a0
        ;   Label: LAB_0044d3a0
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0044d3a4
    LEA ECX,[EDI*0x4 + 0x0]             ; 0044d3a8
    MOV EBP,dword ptr [EBP + 0x28]      ; 0044d3af
    MOV EAX,dword ptr [EAX*0x4 + 0x1c60dac] ; 0044d3b2
    MOV EDX,dword ptr [EDX + 0x28]      ; 0044d3b9
    ADD EAX,ECX                         ; 0044d3bc
    MOV CL,byte ptr [0x013405b0]        ; 0044d3be | DAT_013405b0
    MOV dword ptr [ESP + 0x14],EAX      ; 0044d3c4
    MOV EAX,dword ptr [ESP + 0x10]      ; 0044d3c8
    SUB EDX,EBP                         ; 0044d3cc
    SAR EAX,CL                          ; 0044d3ce
    SAR EDI,CL                          ; 0044d3d0
    MOV dword ptr [ESP + 0x10],EAX      ; 0044d3d2
    SUB EAX,EDI                         ; 0044d3d6
    SAR EBX,CL                          ; 0044d3d8
    LEA ECX,[EAX + 0x1]                 ; 0044d3da
    MOV EAX,EDX                         ; 0044d3dd
    SAR EDX,0x1f                        ; 0044d3df
    IDIV ECX                            ; 0044d3e2
    MOV dword ptr [ESP + 0xc],EAX       ; 0044d3e4
    MOV EAX,[0x01547200]                ; 0044d3e8 | DAT_01547200
    MOV EDX,EAX                         ; 0044d3ed
    SAR EDX,0x1f                        ; 0044d3ef
    SHL EDX,0x8                         ; 0044d3f2
    SBB EAX,EDX                         ; 0044d3f5
    SAR EAX,0x8                         ; 0044d3f7
    MOV dword ptr [ESP + 0x2c],EBX      ; 0044d3fa
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0044d3fe
    MOV BL,AL                           ; 0044d402
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044d404
    ADD EAX,EDX                         ; 0044d40b
    SHL EAX,0x6                         ; 0044d40d
    CMP ESI,0x1                         ; 0044d410
    JLE 0x0044d47f                      ; 0044d413
        ;   XREF to: 0044d47f (CONDITIONAL_JUMP)  ; LAB_0044d47f
    MOV EDX,0x1                         ; 0044d415
    MOV CL,byte ptr [0x013405b0]        ; 0044d41a | DAT_013405b0
    SHL EDX,CL                          ; 0044d420
    LEA ECX,[EDX*0x4 + 0x0]             ; 0044d422
    MOV dword ptr [ESP + 0x4],EAX       ; 0044d429
    MOV dword ptr [ESP + 0x8],ECX       ; 0044d42d
    XOR ECX,ECX                         ; 0044d431
    CMP EDI,dword ptr [ESP + 0x10]      ; 0044d433
        ;   Label: LAB_0044d433
    JGE 0x0044d4cb                      ; 0044d437
        ;   XREF to: 0044d4cb (CONDITIONAL_JUMP)  ; LAB_0044d4cb
    MOV EAX,EBP                         ; 0044d43d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d43f
    SAR EAX,0x8                         ; 0044d443
    CMP EAX,dword ptr [EDX]             ; 0044d446
    JA 0x0044d461                       ; 0044d448
        ;   XREF to: 0044d461 (CONDITIONAL_JUMP)  ; LAB_0044d461
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044d44a
        ;   Label: LAB_0044d44a
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d44e
    INC EDI                             ; 0044d452
    ADD EDX,EAX                         ; 0044d453
    MOV EAX,dword ptr [ESP + 0xc]       ; 0044d455
    MOV dword ptr [ESP + 0x14],EDX      ; 0044d459
    ADD EBP,EAX                         ; 0044d45d
    JMP 0x0044d433                      ; 0044d45f
        ;   XREF to: 0044d433 (UNCONDITIONAL_JUMP)  ; LAB_0044d433
    MOV EDX,ECX                         ; 0044d461
        ;   Label: LAB_0044d461
    TEST ESI,ESI                        ; 0044d463
    JLE 0x0044d44a                      ; 0044d465
        ;   XREF to: 0044d44a (CONDITIONAL_JUMP)  ; LAB_0044d44a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044d467
    ADD EAX,EDI                         ; 0044d46b
    ADD EAX,0x12c00                     ; 0044d46d
        ;   Label: LAB_0044d46d
    INC EDX                             ; 0044d472
    MOV byte ptr [EAX + 0x135ead0],BL   ; 0044d473
    CMP EDX,ESI                         ; 0044d479
    JL 0x0044d46d                       ; 0044d47b
        ;   XREF to: 0044d46d (CONDITIONAL_JUMP)  ; LAB_0044d46d
    JMP 0x0044d44a                      ; 0044d47d
        ;   XREF to: 0044d44a (UNCONDITIONAL_JUMP)  ; LAB_0044d44a
    ADD EAX,0x135ead0                   ; 0044d47f
        ;   Label: LAB_0044d47f
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044d484
    ADD EAX,EDI                         ; 0044d488
    CMP EDI,EDX                         ; 0044d48a
    JGE 0x0044d4cb                      ; 0044d48c
        ;   XREF to: 0044d4cb (CONDITIONAL_JUMP)  ; LAB_0044d4cb
    MOV EDX,EBP                         ; 0044d48e
        ;   Label: LAB_0044d48e
    SAR EDX,0x8                         ; 0044d490
    MOV dword ptr [ESP],EDX             ; 0044d493
    MOV EDX,dword ptr [ESP + 0x14]      ; 0044d496
    MOV ECX,dword ptr [ESP]             ; 0044d49a
    CMP ECX,dword ptr [EDX]             ; 0044d49d
    JA 0x0044d4d9                       ; 0044d49f
        ;   XREF to: 0044d4d9 (CONDITIONAL_JUMP)  ; LAB_0044d4d9
    MOV ECX,dword ptr [ESP + 0xc]       ; 0044d4a1
        ;   Label: LAB_0044d4a1
    MOV EDX,0x1                         ; 0044d4a5
    ADD EBP,ECX                         ; 0044d4aa
    MOV CL,byte ptr [0x013405b0]        ; 0044d4ac | DAT_013405b0
    INC EDI                             ; 0044d4b2
    SHL EDX,CL                          ; 0044d4b3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0044d4b5
    SHL EDX,0x2                         ; 0044d4b9
    INC EAX                             ; 0044d4bc
    ADD ECX,EDX                         ; 0044d4bd
    MOV EDX,dword ptr [ESP + 0x10]      ; 0044d4bf
    MOV dword ptr [ESP + 0x14],ECX      ; 0044d4c3
    CMP EDI,EDX                         ; 0044d4c7
    JL 0x0044d48e                       ; 0044d4c9
        ;   XREF to: 0044d48e (CONDITIONAL_JUMP)  ; LAB_0044d48e
    MOV dword ptr [0x0149d6d8],ESI      ; 0044d4cb | DAT_0149d6d8
        ;   Label: LAB_0044d4cb
    ADD ESP,0x18                        ; 0044d4d1
        ;   Label: LAB_0044d4d1
    POP EBP                             ; 0044d4d4
    POP EDI                             ; 0044d4d5
    POP ESI                             ; 0044d4d6
    POP EBX                             ; 0044d4d7
    RET                                 ; 0044d4d8
    MOV byte ptr [EAX],BL               ; 0044d4d9
        ;   Label: LAB_0044d4d9
    JMP 0x0044d4a1                      ; 0044d4db
        ;   XREF to: 0044d4a1 (UNCONDITIONAL_JUMP)  ; LAB_0044d4a1


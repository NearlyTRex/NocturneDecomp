; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00541540(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380 at 005443c8
;   core_skeleton.cpp_FUN_00548e80 at 00548f0f
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   core_skeleton.cpp_FUN_005430b0
;   core_skeleton.cpp_FUN_00548fc0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00541540
        ;   Label: core_skeleton.cpp_FUN_00541540
    PUSH ESI                            ; 00541541
    PUSH EDI                            ; 00541542
    PUSH EBP                            ; 00541543
    SUB ESP,0x4                         ; 00541544
    MOV EDI,dword ptr [ESP + 0x18]      ; 00541547
    LEA EAX,[EDI + 0x2a1c]              ; 0054154b
    PUSH EAX                            ; 00541551
    CALL core_skeleton.cpp_FUN_00548fc0 ; 00541552
        ;   XREF to: 00548fc0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_FUN_00548fc0(char * filename)
    ADD ESP,0x4                         ; 00541557
    PUSH EAX                            ; 0054155a
    PUSH EDI                            ; 0054155b
    XOR EBP,EBP                         ; 0054155c
    CALL core_skeleton.cpp_FUN_005430b0 ; 0054155e
        ;   XREF to: 005430b0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005430b0()
    MOV EDX,dword ptr [EDI + 0xb8]      ; 00541563
    ADD ESP,0x8                         ; 00541569
    TEST EDX,EDX                        ; 0054156c
    JLE 0x005415bc                      ; 0054156e
        ;   XREF to: 005415bc (CONDITIONAL_JUMP)  ; LAB_005415bc
    LEA EAX,[EDI + 0xc0]                ; 00541570
    MOV dword ptr [ESP],EAX             ; 00541576
    MOV ESI,dword ptr [EDI + 0xbc]      ; 00541579
        ;   Label: LAB_00541579
    XOR EBX,EBX                         ; 0054157f
    TEST ESI,ESI                        ; 00541581
    JLE 0x005415a5                      ; 00541583
        ;   XREF to: 005415a5 (CONDITIONAL_JUMP)  ; LAB_005415a5
    MOV ESI,dword ptr [ESP]             ; 00541585
    PUSH ESI                            ; 00541588
        ;   Label: LAB_00541588
    MOV EAX,[0x0060b280]                ; 00541589 | DAT_0060b280
    PUSH EAX                            ; 0054158e | DAT_01ba5c50
    INC EBX                             ; 0054158f
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 00541590
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x48                        ; 00541595
    MOV EDX,dword ptr [EDI + 0xbc]      ; 00541598
    ADD ESP,0x8                         ; 0054159e
    CMP EBX,EDX                         ; 005415a1
    JL 0x00541588                       ; 005415a3
        ;   XREF to: 00541588 (CONDITIONAL_JUMP)  ; LAB_00541588
    MOV ECX,dword ptr [ESP]             ; 005415a5
        ;   Label: LAB_005415a5
    INC EBP                             ; 005415a8
    ADD ECX,0x240                       ; 005415a9
    MOV EBX,dword ptr [EDI + 0xb8]      ; 005415af
    MOV dword ptr [ESP],ECX             ; 005415b5
    CMP EBP,EBX                         ; 005415b8
    JL 0x00541579                       ; 005415ba
        ;   XREF to: 00541579 (CONDITIONAL_JUMP)  ; LAB_00541579
    ADD ESP,0x4                         ; 005415bc
        ;   Label: LAB_005415bc
    POP EBP                             ; 005415bf
    POP EDI                             ; 005415c0
    POP ESI                             ; 005415c1
    POP EBX                             ; 005415c2
    RET                                 ; 005415c3


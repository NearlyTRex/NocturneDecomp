; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00548750(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0 at 0054b5f8
;   core_skeleton.cpp_FUN_005500b0 at 0055013a
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054a2c0
;   core_skeleton.cpp_FUN_005501e0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548750
        ;   Label: core_skeleton.cpp_FUN_00548750
    PUSH ESI                            ; 00548751
    PUSH EDI                            ; 00548752
    PUSH EBP                            ; 00548753
    SUB ESP,0x4                         ; 00548754
    MOV EDI,dword ptr [ESP + 0x18]      ; 00548757
    LEA EAX,[EDI + 0x355c]              ; 0054875b
    PUSH EAX                            ; 00548761
    CALL core_skeleton.cpp_FUN_005501e0 ; 00548762
        ;   XREF to: 005501e0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005501e0()
    ADD ESP,0x4                         ; 00548767
    PUSH EAX                            ; 0054876a
    PUSH EDI                            ; 0054876b
    XOR EBP,EBP                         ; 0054876c
    CALL core_skeleton.cpp_FUN_0054a2c0 ; 0054876e
        ;   XREF to: 0054a2c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054a2c0()
    MOV EDX,dword ptr [EDI + 0xb8]      ; 00548773
    ADD ESP,0x8                         ; 00548779
    TEST EDX,EDX                        ; 0054877c
    JLE 0x005487cc                      ; 0054877e
        ;   XREF to: 005487cc (CONDITIONAL_JUMP)  ; LAB_005487cc
    LEA EAX,[EDI + 0xc0]                ; 00548780
    MOV dword ptr [ESP],EAX             ; 00548786
    MOV ESI,dword ptr [EDI + 0xbc]      ; 00548789
        ;   Label: LAB_00548789
    XOR EBX,EBX                         ; 0054878f
    TEST ESI,ESI                        ; 00548791
    JLE 0x005487b5                      ; 00548793
        ;   XREF to: 005487b5 (CONDITIONAL_JUMP)  ; LAB_005487b5
    MOV ESI,dword ptr [ESP]             ; 00548795
    PUSH ESI                            ; 00548798
        ;   Label: LAB_00548798
    MOV EAX,[0x005f2afc]                ; 00548799 | DAT_005f2afc
    PUSH EAX                            ; 0054879e | DAT_01bdd7e4
    INC EBX                             ; 0054879f
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 005487a0
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x48                        ; 005487a5
    MOV EDX,dword ptr [EDI + 0xbc]      ; 005487a8
    ADD ESP,0x8                         ; 005487ae
    CMP EBX,EDX                         ; 005487b1
    JL 0x00548798                       ; 005487b3
        ;   XREF to: 00548798 (CONDITIONAL_JUMP)  ; LAB_00548798
    MOV ECX,dword ptr [ESP]             ; 005487b5
        ;   Label: LAB_005487b5
    INC EBP                             ; 005487b8
    ADD ECX,0x240                       ; 005487b9
    MOV EBX,dword ptr [EDI + 0xb8]      ; 005487bf
    MOV dword ptr [ESP],ECX             ; 005487c5
    CMP EBP,EBX                         ; 005487c8
    JL 0x00548789                       ; 005487ca
        ;   XREF to: 00548789 (CONDITIONAL_JUMP)  ; LAB_00548789
    ADD ESP,0x4                         ; 005487cc
        ;   Label: LAB_005487cc
    POP EBP                             ; 005487cf
    POP EDI                             ; 005487d0
    POP ESI                             ; 005487d1
    POP EBX                             ; 005487d2
    RET                                 ; 005487d3


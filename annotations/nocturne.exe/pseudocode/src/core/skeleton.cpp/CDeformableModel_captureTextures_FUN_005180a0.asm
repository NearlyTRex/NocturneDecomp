; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_005180a0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20 at 0051ad6c
;   core_skeleton.cpp_getDeformableModel_FUN_0051f570 at 0051f632
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00519ae0
;   core_skeleton.cpp_FUN_0051f680
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005180a0
        ;   Label: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_005180a0
    PUSH ESI                            ; 005180a1
    PUSH EDI                            ; 005180a2
    PUSH EBP                            ; 005180a3
    SUB ESP,0x4                         ; 005180a4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005180a7
    LEA EAX,[EDI + 0x2a1c]              ; 005180ab
    PUSH EAX                            ; 005180b1
    CALL core_skeleton.cpp_FUN_0051f680 ; 005180b2
        ;   XREF to: 0051f680 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_FUN_0051f680(char * filename)
    ADD ESP,0x4                         ; 005180b7
    PUSH EAX                            ; 005180ba
    PUSH EDI                            ; 005180bb
    XOR EBP,EBP                         ; 005180bc
    CALL core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00519ae0 ; 005180be
        ;   XREF to: 00519ae0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00519ae0(CDeformableModel * this_ptr, CSkeleton * skeleton_ptr)
    MOV EDX,dword ptr [EDI + 0xb8]      ; 005180c3
    ADD ESP,0x8                         ; 005180c9
    TEST EDX,EDX                        ; 005180cc
    JLE 0x0051811c                      ; 005180ce
        ;   XREF to: 0051811c (CONDITIONAL_JUMP)  ; LAB_0051811c
    LEA EAX,[EDI + 0xc0]                ; 005180d0
    MOV dword ptr [ESP],EAX             ; 005180d6
    MOV ESI,dword ptr [EDI + 0xbc]      ; 005180d9
        ;   Label: LAB_005180d9
    XOR EBX,EBX                         ; 005180df
    TEST ESI,ESI                        ; 005180e1
    JLE 0x00518105                      ; 005180e3
        ;   XREF to: 00518105 (CONDITIONAL_JUMP)  ; LAB_00518105
    MOV ESI,dword ptr [ESP]             ; 005180e5
    PUSH ESI                            ; 005180e8
        ;   Label: LAB_005180e8
    MOV EAX,[0x005ae704]                ; 005180e9 | DAT_005ae704
    PUSH EAX                            ; 005180ee | DAT_01b4d738
    INC EBX                             ; 005180ef
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0 ; 005180f0
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00461eb0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x48                        ; 005180f5
    MOV EDX,dword ptr [EDI + 0xbc]      ; 005180f8
    ADD ESP,0x8                         ; 005180fe
    CMP EBX,EDX                         ; 00518101
    JL 0x005180e8                       ; 00518103
        ;   XREF to: 005180e8 (CONDITIONAL_JUMP)  ; LAB_005180e8
    MOV ECX,dword ptr [ESP]             ; 00518105
        ;   Label: LAB_00518105
    INC EBP                             ; 00518108
    ADD ECX,0x240                       ; 00518109
    MOV EBX,dword ptr [EDI + 0xb8]      ; 0051810f
    MOV dword ptr [ESP],ECX             ; 00518115
    CMP EBP,EBX                         ; 00518118
    JL 0x005180d9                       ; 0051811a
        ;   XREF to: 005180d9 (CONDITIONAL_JUMP)  ; LAB_005180d9
    ADD ESP,0x4                         ; 0051811c
        ;   Label: LAB_0051811c
    POP EBP                             ; 0051811f
    POP EDI                             ; 00518120
    POP ESI                             ; 00518121
    POP EBX                             ; 00518122
    RET                                 ; 00518123


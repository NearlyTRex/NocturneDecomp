; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModel_captureTextures_FUN_00563bb0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00566a20 at 00566a68
;   core_skeleton.cpp_FUN_0056b520 at 0056b5aa
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00565730
;   core_skeleton.cpp_loadSkeleton_FUN_0056b650
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563bb0
        ;   Label: core_skeleton.cpp_CDeformableModel_captureTextures_FUN_00563bb0
    PUSH ESI                            ; 00563bb1
    PUSH EDI                            ; 00563bb2
    PUSH EBP                            ; 00563bb3
    SUB ESP,0x4                         ; 00563bb4
    MOV EDI,dword ptr [ESP + 0x18]      ; 00563bb7
    LEA EAX,[EDI + 0x355c]              ; 00563bbb
    PUSH EAX                            ; 00563bc1
    CALL core_skeleton.cpp_loadSkeleton_FUN_0056b650 ; 00563bc2
        ;   XREF to: 0056b650 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_loadSkeleton_FUN_0056b650(char * filename)
    ADD ESP,0x4                         ; 00563bc7
    PUSH EAX                            ; 00563bca
    PUSH EDI                            ; 00563bcb
    XOR EBP,EBP                         ; 00563bcc
    CALL core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00565730 ; 00563bce
        ;   XREF to: 00565730 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00565730(CDeformableModel * this_ptr, CSkeleton * skeleton_ptr)
    MOV EDX,dword ptr [EDI + 0xb8]      ; 00563bd3
    ADD ESP,0x8                         ; 00563bd9
    TEST EDX,EDX                        ; 00563bdc
    JLE 0x00563c2c                      ; 00563bde
        ;   XREF to: 00563c2c (CONDITIONAL_JUMP)  ; LAB_00563c2c
    LEA EAX,[EDI + 0xc0]                ; 00563be0
    MOV dword ptr [ESP],EAX             ; 00563be6
    MOV ESI,dword ptr [EDI + 0xbc]      ; 00563be9
        ;   Label: LAB_00563be9
    XOR EBX,EBX                         ; 00563bef
    TEST ESI,ESI                        ; 00563bf1
    JLE 0x00563c15                      ; 00563bf3
        ;   XREF to: 00563c15 (CONDITIONAL_JUMP)  ; LAB_00563c15
    MOV ESI,dword ptr [ESP]             ; 00563bf5
    PUSH ESI                            ; 00563bf8
        ;   Label: LAB_00563bf8
    MOV EAX,[0x00612560]                ; 00563bf9 | DAT_00612560
    PUSH EAX                            ; 00563bfe | DAT_01bc120c
    INC EBX                             ; 00563bff
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 00563c00
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESI,0x48                        ; 00563c05
    MOV EDX,dword ptr [EDI + 0xbc]      ; 00563c08
    ADD ESP,0x8                         ; 00563c0e
    CMP EBX,EDX                         ; 00563c11
    JL 0x00563bf8                       ; 00563c13
        ;   XREF to: 00563bf8 (CONDITIONAL_JUMP)  ; LAB_00563bf8
    MOV ECX,dword ptr [ESP]             ; 00563c15
        ;   Label: LAB_00563c15
    INC EBP                             ; 00563c18
    ADD ECX,0x240                       ; 00563c19
    MOV EBX,dword ptr [EDI + 0xb8]      ; 00563c1f
    MOV dword ptr [ESP],ECX             ; 00563c25
    CMP EBP,EBX                         ; 00563c28
    JL 0x00563be9                       ; 00563c2a
        ;   XREF to: 00563be9 (CONDITIONAL_JUMP)  ; LAB_00563be9
    ADD ESP,0x4                         ; 00563c2c
        ;   Label: LAB_00563c2c
    POP EBP                             ; 00563c2f
    POP EDI                             ; 00563c30
    POP ESI                             ; 00563c31
    POP EBX                             ; 00563c32
    RET                                 ; 00563c33


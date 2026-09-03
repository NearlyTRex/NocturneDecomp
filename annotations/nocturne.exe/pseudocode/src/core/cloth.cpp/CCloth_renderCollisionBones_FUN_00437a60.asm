; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_renderCollisionBones_FUN_00437a60(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_cloth.cpp_CCloth_renderBone_FUN_00437ab0
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437a60
        ;   Label: core_cloth.cpp_CCloth_renderCollisionBones_FUN_00437a60
    PUSH ESI                            ; 00437a61
    MOV ESI,dword ptr [ESP + 0xc]       ; 00437a62
    PUSH 0xff                           ; 00437a66
    MOV EDX,dword ptr [0x005ae704]      ; 00437a6b | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00437a71 | DAT_01b4d738
    XOR EBX,EBX                         ; 00437a72
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10 ; 00437a74
        ;   XREF to: 00460f10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(CDemonRenderer * this_ptr, int color)
    MOV ECX,dword ptr [ESI + 0x37b4c]   ; 00437a79
    ADD ESP,0x8                         ; 00437a7f
    TEST ECX,ECX                        ; 00437a82
    JLE 0x00437a9f                      ; 00437a84
        ;   XREF to: 00437a9f (CONDITIONAL_JUMP)  ; LAB_00437a9f
    PUSH EDI                            ; 00437a86
    PUSH 0x0                            ; 00437a87
        ;   Label: LAB_00437a87
    PUSH EBX                            ; 00437a89
    PUSH ESI                            ; 00437a8a
    CALL core_cloth.cpp_CCloth_renderBone_FUN_00437ab0 ; 00437a8b
        ;   XREF to: 00437ab0 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_renderBone_FUN_00437ab0(CCloth * this_ptr, int bone_index, int show_labels)
    INC EBX                             ; 00437a90
    MOV EDI,dword ptr [ESI + 0x37b4c]   ; 00437a91
    ADD ESP,0xc                         ; 00437a97
    CMP EBX,EDI                         ; 00437a9a
    JL 0x00437a87                       ; 00437a9c
        ;   XREF to: 00437a87 (CONDITIONAL_JUMP)  ; LAB_00437a87
    POP EDI                             ; 00437a9e
    POP ESI                             ; 00437a9f
        ;   Label: LAB_00437a9f
    POP EBX                             ; 00437aa0
    RET                                 ; 00437aa1


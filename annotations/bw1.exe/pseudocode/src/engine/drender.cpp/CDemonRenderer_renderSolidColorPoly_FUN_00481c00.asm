; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
;
; XREF[7]:
;   core_dtrace.cpp_FUN_0048c510 at 0048c924
;   core_dtri.cpp_FUN_004922fc at 0049243d
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_005553e0 at 00555446
;   core_setdir.cpp_FUN_00559c10 at 00559d06
;   core_setdir.cpp_FUN_00559f80 at 0055ae9b
;   core_skeleton.cpp_CDeformableModel_renderParts_FUN_005640d0 at 00564861
;   core_water.cpp_CWater_render_FUN_005a9f10 at 005aa522
;
; Referenced Globals:
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00481c00
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidColorPoly_FUN_00481c00
    PUSH EDI                            ; 00481c01
    PUSH EBP                            ; 00481c02
    MOV EDI,dword ptr [ESP + 0x10]      ; 00481c03
    MOV ESI,dword ptr [ESP + 0x14]      ; 00481c07
    CMP dword ptr [EDI + 0xc],0x0       ; 00481c0b
    JNZ 0x00481c76                      ; 00481c0f
        ;   XREF to: 00481c76 (CONDITIONAL_JUMP)  ; LAB_00481c76
    PUSH EBX                            ; 00481c11
        ;   Label: LAB_00481c11
    MOV ECX,dword ptr [ESI + 0x4]       ; 00481c12
    XOR EDX,EDX                         ; 00481c15
    TEST ECX,ECX                        ; 00481c17
    JLE 0x00481c40                      ; 00481c19
        ;   XREF to: 00481c40 (CONDITIONAL_JUMP)  ; LAB_00481c40
    MOV EAX,ESI                         ; 00481c1b
    XOR ECX,ECX                         ; 00481c1d
    ADD ECX,0x4                         ; 00481c1f
        ;   Label: LAB_00481c1f
    MOV EBX,dword ptr [EAX + 0x18]      ; 00481c22
    MOV dword ptr [ECX + 0x1bc123c],EBX ; 00481c25 | DAT_01bc1240 | DAT_01bc1244
    INC EDX                             ; 00481c2b
    MOV EBX,dword ptr [ESI + 0x4]       ; 00481c2c
    ADD EAX,0xc                         ; 00481c2f
    CMP EDX,EBX                         ; 00481c32
    JL 0x00481c1f                       ; 00481c34
        ;   XREF to: 00481c1f (CONDITIONAL_JUMP)  ; LAB_00481c1f
    LEA EAX,[EAX]                       ; 00481c36
    LEA EDX,[EDX]                       ; 00481c3c
    CMP dword ptr [EDI + 0x4],0x0       ; 00481c40
        ;   Label: LAB_00481c40
    JZ 0x00481c88                       ; 00481c44
        ;   XREF to: 00481c88 (CONDITIONAL_JUMP)  ; LAB_00481c88
    XOR EBP,EBP                         ; 00481c46
    MOV EBX,0x486e26                    ; 00481c48
    MOV dword ptr [0x01c51d14],EBP      ; 00481c4d | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00481c53 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EBX      ; 00481c59 | DAT_01c4f02c
    PUSH 0x1bc1240                      ; 00481c5f | DAT_01bc1240
        ;   Label: LAB_00481c5f
    MOV EDX,dword ptr [ESI + 0x4]       ; 00481c64
    PUSH EDX                            ; 00481c67
    PUSH EDI                            ; 00481c68
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00481c69
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00481c6e
    POP EBX                             ; 00481c71
    POP EBP                             ; 00481c72
        ;   Label: LAB_00481c72
    POP EDI                             ; 00481c73
    POP ESI                             ; 00481c74
    RET                                 ; 00481c75
    LEA EAX,[ESI + 0x8]                 ; 00481c76
        ;   Label: LAB_00481c76
    PUSH EAX                            ; 00481c79
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00481c7a
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00481c7f
    TEST EAX,EAX                        ; 00481c82
    JZ 0x00481c72                       ; 00481c84
        ;   XREF to: 00481c72 (CONDITIONAL_JUMP)  ; LAB_00481c72
    JMP 0x00481c11                      ; 00481c86
        ;   XREF to: 00481c11 (UNCONDITIONAL_JUMP)  ; LAB_00481c11
    MOV EDX,0xc0                        ; 00481c88
        ;   Label: LAB_00481c88
    MOV ECX,0x6                         ; 00481c8d
    MOV EAX,0x487148                    ; 00481c92
    MOV dword ptr [0x01c51d14],EDX      ; 00481c97 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 00481c9d | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 00481ca3 | DAT_01c4f02c
    JMP 0x00481c5f                      ; 00481ca8
        ;   XREF to: 00481c5f (UNCONDITIONAL_JUMP)  ; LAB_00481c5f


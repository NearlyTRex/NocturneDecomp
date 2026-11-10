; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0053a450 at 0053a62f
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_0053a6c0 at 0053aa50
;   core_water.cpp_CWater_render_FUN_00577760 at 00577ca8
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd818
;   undefined4 DAT_01bdd81c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046bc20
        ;   Label: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046bc20
    PUSH EBP                            ; 0046bc21
    SUB ESP,0x4                         ; 0046bc22
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046bc25
    CMP dword ptr [EBX + 0xc],0x0       ; 0046bc29
    JNZ 0x0046bcb0                      ; 0046bc2d
        ;   XREF to: 0046bcb0 (CONDITIONAL_JUMP)  ; LAB_0046bcb0
    PUSH EDI                            ; 0046bc33
        ;   Label: LAB_0046bc33
    PUSH ESI                            ; 0046bc34
    MOV ECX,dword ptr [EBX + 0x4]       ; 0046bc35
    TEST ECX,ECX                        ; 0046bc38
    JZ 0x0046bcc9                       ; 0046bc3a
        ;   XREF to: 0046bcc9 (CONDITIONAL_JUMP)  ; LAB_0046bcc9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046bc40
    MOV EDI,dword ptr [EAX + 0x4]       ; 0046bc44
    XOR EDX,EDX                         ; 0046bc47
    TEST EDI,EDI                        ; 0046bc49
    JLE 0x0046bc70                      ; 0046bc4b
        ;   XREF to: 0046bc70 (CONDITIONAL_JUMP)  ; LAB_0046bc70
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046bc4d
    XOR EAX,EAX                         ; 0046bc51
    MOV ESI,dword ptr [ECX + 0x18]      ; 0046bc53
        ;   Label: LAB_0046bc53
    MOV dword ptr [EAX + 0x1bdd818],ESI ; 0046bc56 | DAT_01bdd818 | DAT_01bdd81c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046bc5c
    ADD EAX,0x4                         ; 0046bc60
    INC EDX                             ; 0046bc63
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046bc64
    ADD ECX,0xc                         ; 0046bc67
    CMP EDX,EBP                         ; 0046bc6a
    JL 0x0046bc53                       ; 0046bc6c
        ;   XREF to: 0046bc53 (CONDITIONAL_JUMP)  ; LAB_0046bc53
    MOV EAX,EAX                         ; 0046bc6e
    CMP dword ptr [EBX + 0x4],0x0       ; 0046bc70
        ;   Label: LAB_0046bc70
    JZ 0x0046bd22                       ; 0046bc74
        ;   XREF to: 0046bd22 (CONDITIONAL_JUMP)  ; LAB_0046bd22
    XOR EDX,EDX                         ; 0046bc7a
    MOV EAX,0x46f9a6                    ; 0046bc7c
    MOV dword ptr [0x01c6e2b4],EDX      ; 0046bc81 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 0046bc87 | DAT_01c6e2b8
    MOV [0x01c6b5cc],EAX                ; 0046bc8d | DAT_01c6b5cc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046bc92
        ;   Label: LAB_0046bc92
    PUSH 0x1bdd818                      ; 0046bc96 | DAT_01bdd818
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046bc9b
    PUSH ESI                            ; 0046bc9e
    PUSH EBX                            ; 0046bc9f
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046bca0
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046bca5
    POP ESI                             ; 0046bca8
    POP EDI                             ; 0046bca9
    ADD ESP,0x4                         ; 0046bcaa
        ;   Label: LAB_0046bcaa
    POP EBP                             ; 0046bcad
    POP EBX                             ; 0046bcae
    RET                                 ; 0046bcaf
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046bcb0
        ;   Label: LAB_0046bcb0
    ADD EAX,0x8                         ; 0046bcb4
    PUSH EAX                            ; 0046bcb7
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046bcb8
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046bcbd
    TEST EAX,EAX                        ; 0046bcc0
    JZ 0x0046bcaa                       ; 0046bcc2
        ;   XREF to: 0046bcaa (CONDITIONAL_JUMP)  ; LAB_0046bcaa
    JMP 0x0046bc33                      ; 0046bcc4
        ;   XREF to: 0046bc33 (UNCONDITIONAL_JUMP)  ; LAB_0046bc33
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046bcc9
        ;   Label: LAB_0046bcc9
    CMP dword ptr [EAX + 0x4],0x0       ; 0046bccd
    JLE 0x0046bc70                      ; 0046bcd1
        ;   XREF to: 0046bc70 (CONDITIONAL_JUMP)  ; LAB_0046bc70
    XOR EDX,EDX                         ; 0046bcd3
    MOV EDI,dword ptr [EBX + 0x20]      ; 0046bcd5
        ;   Label: LAB_0046bcd5
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046bcd8
    TEST EDI,EDI                        ; 0046bcdb
    JZ 0x0046bcfd                       ; 0046bcdd
        ;   XREF to: 0046bcfd (CONDITIONAL_JUMP)  ; LAB_0046bcfd
    MOV dword ptr [EDX + 0x1bdd818],ESI ; 0046bcdf | DAT_01bdd818 | DAT_01bdd81c
        ;   Label: LAB_0046bcdf
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046bce5
    ADD EAX,0xc                         ; 0046bce9
    INC ECX                             ; 0046bcec
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046bced
    ADD EDX,0x4                         ; 0046bcf0
    CMP ECX,EBP                         ; 0046bcf3
    JGE 0x0046bc70                      ; 0046bcf5
        ;   XREF to: 0046bc70 (CONDITIONAL_JUMP)  ; LAB_0046bc70
    JMP 0x0046bcd5                      ; 0046bcfb
        ;   XREF to: 0046bcd5 (UNCONDITIONAL_JUMP)  ; LAB_0046bcd5
    IMUL EDI,ESI,0x30                   ; 0046bcfd
        ;   Label: LAB_0046bcfd
    MOV dword ptr [ESP + 0x8],EDI       ; 0046bd00
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046bd04
    MOV EDI,dword ptr [EBX]             ; 0046bd08
    ADD EDI,EBP                         ; 0046bd0a
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046bd0c
    MOV dword ptr [EDI + 0x18],EBP      ; 0046bd0f
    MOV EDI,dword ptr [ESP + 0x8]       ; 0046bd12
    MOV EBP,dword ptr [EBX]             ; 0046bd16
    ADD EBP,EDI                         ; 0046bd18
    MOV EDI,dword ptr [EAX + 0x20]      ; 0046bd1a
    MOV dword ptr [EBP + 0x1c],EDI      ; 0046bd1d
    JMP 0x0046bcdf                      ; 0046bd20
        ;   XREF to: 0046bcdf (UNCONDITIONAL_JUMP)  ; LAB_0046bcdf
    CMP dword ptr [0x005fba20],0x20     ; 0046bd22 | DAT_005fba20
        ;   Label: LAB_0046bd22
    JNZ 0x0046bd50                      ; 0046bd29
        ;   XREF to: 0046bd50 (CONDITIONAL_JUMP)  ; LAB_0046bd50
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0046bd2b | DAT_01c6b5cc
    MOV EBP,0x6                         ; 0046bd35
        ;   Label: LAB_0046bd35
    MOV EDI,0x2cd                       ; 0046bd3a
    MOV dword ptr [0x01c6e2b8],EBP      ; 0046bd3f | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EDI      ; 0046bd45 | DAT_01c6e2b4
    JMP 0x0046bc92                      ; 0046bd4b
        ;   XREF to: 0046bc92 (UNCONDITIONAL_JUMP)  ; LAB_0046bc92
    MOV dword ptr [0x01c6b5cc],0x561713 ; 0046bd50 | DAT_01c6b5cc
        ;   Label: LAB_0046bd50
    JMP 0x0046bd35                      ; 0046bd5a
        ;   XREF to: 0046bd35 (UNCONDITIONAL_JUMP)  ; LAB_0046bd35


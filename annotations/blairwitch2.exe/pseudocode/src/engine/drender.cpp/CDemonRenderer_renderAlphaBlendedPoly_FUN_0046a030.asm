; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00533810 at 005339ef
;   core_set.cpp_CDemonSet_renderEnvMapTriangles_FUN_00533a80 at 00533e10
;   core_water.cpp_CWater_render_FUN_005862e0 at 005868cc
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046a030
        ;   Label: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0046a030
    PUSH EBP                            ; 0046a031
    SUB ESP,0x4                         ; 0046a032
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046a035
    CMP dword ptr [EBX + 0xc],0x0       ; 0046a039
    JNZ 0x0046a0c0                      ; 0046a03d
        ;   XREF to: 0046a0c0 (CONDITIONAL_JUMP)  ; LAB_0046a0c0
    PUSH EDI                            ; 0046a043
        ;   Label: LAB_0046a043
    PUSH ESI                            ; 0046a044
    MOV ECX,dword ptr [EBX + 0x4]       ; 0046a045
    TEST ECX,ECX                        ; 0046a048
    JZ 0x0046a0d9                       ; 0046a04a
        ;   XREF to: 0046a0d9 (CONDITIONAL_JUMP)  ; LAB_0046a0d9
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a050
    MOV EDI,dword ptr [EAX + 0x4]       ; 0046a054
    XOR EDX,EDX                         ; 0046a057
    TEST EDI,EDI                        ; 0046a059
    JLE 0x0046a080                      ; 0046a05b
        ;   XREF to: 0046a080 (CONDITIONAL_JUMP)  ; LAB_0046a080
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046a05d
    XOR EAX,EAX                         ; 0046a061
    MOV ESI,dword ptr [ECX + 0x18]      ; 0046a063
        ;   Label: LAB_0046a063
    MOV dword ptr [EAX + 0x1ba5c84],ESI ; 0046a066 | DAT_01ba5c84 | DAT_01ba5c88
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046a06c
    ADD EAX,0x4                         ; 0046a070
    INC EDX                             ; 0046a073
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046a074
    ADD ECX,0xc                         ; 0046a077
    CMP EDX,EBP                         ; 0046a07a
    JL 0x0046a063                       ; 0046a07c
        ;   XREF to: 0046a063 (CONDITIONAL_JUMP)  ; LAB_0046a063
    MOV EAX,EAX                         ; 0046a07e
    CMP dword ptr [EBX + 0x4],0x0       ; 0046a080
        ;   Label: LAB_0046a080
    JZ 0x0046a132                       ; 0046a084
        ;   XREF to: 0046a132 (CONDITIONAL_JUMP)  ; LAB_0046a132
    XOR EDX,EDX                         ; 0046a08a
    MOV EAX,0x46e936                    ; 0046a08c
    MOV dword ptr [0x01c38b54],EDX      ; 0046a091 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 0046a097 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 0046a09d | DAT_01c35e6c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a0a2
        ;   Label: LAB_0046a0a2
    PUSH 0x1ba5c84                      ; 0046a0a6 | DAT_01ba5c84
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046a0ab
    PUSH ESI                            ; 0046a0ae
    PUSH EBX                            ; 0046a0af
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046a0b0
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046a0b5
    POP ESI                             ; 0046a0b8
    POP EDI                             ; 0046a0b9
    ADD ESP,0x4                         ; 0046a0ba
        ;   Label: LAB_0046a0ba
    POP EBP                             ; 0046a0bd
    POP EBX                             ; 0046a0be
    RET                                 ; 0046a0bf
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046a0c0
        ;   Label: LAB_0046a0c0
    ADD EAX,0x8                         ; 0046a0c4
    PUSH EAX                            ; 0046a0c7
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046a0c8
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046a0cd
    TEST EAX,EAX                        ; 0046a0d0
    JZ 0x0046a0ba                       ; 0046a0d2
        ;   XREF to: 0046a0ba (CONDITIONAL_JUMP)  ; LAB_0046a0ba
    JMP 0x0046a043                      ; 0046a0d4
        ;   XREF to: 0046a043 (UNCONDITIONAL_JUMP)  ; LAB_0046a043
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046a0d9
        ;   Label: LAB_0046a0d9
    CMP dword ptr [EAX + 0x4],0x0       ; 0046a0dd
    JLE 0x0046a080                      ; 0046a0e1
        ;   XREF to: 0046a080 (CONDITIONAL_JUMP)  ; LAB_0046a080
    XOR EDX,EDX                         ; 0046a0e3
    MOV EDI,dword ptr [EBX + 0x20]      ; 0046a0e5
        ;   Label: LAB_0046a0e5
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046a0e8
    TEST EDI,EDI                        ; 0046a0eb
    JZ 0x0046a10d                       ; 0046a0ed
        ;   XREF to: 0046a10d (CONDITIONAL_JUMP)  ; LAB_0046a10d
    MOV dword ptr [EDX + 0x1ba5c84],ESI ; 0046a0ef | DAT_01ba5c84 | DAT_01ba5c88
        ;   Label: LAB_0046a0ef
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046a0f5
    ADD EAX,0xc                         ; 0046a0f9
    INC ECX                             ; 0046a0fc
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046a0fd
    ADD EDX,0x4                         ; 0046a100
    CMP ECX,EBP                         ; 0046a103
    JGE 0x0046a080                      ; 0046a105
        ;   XREF to: 0046a080 (CONDITIONAL_JUMP)  ; LAB_0046a080
    JMP 0x0046a0e5                      ; 0046a10b
        ;   XREF to: 0046a0e5 (UNCONDITIONAL_JUMP)  ; LAB_0046a0e5
    IMUL EDI,ESI,0x30                   ; 0046a10d
        ;   Label: LAB_0046a10d
    MOV dword ptr [ESP + 0x8],EDI       ; 0046a110
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046a114
    MOV EDI,dword ptr [EBX]             ; 0046a118
    ADD EDI,EBP                         ; 0046a11a
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046a11c
    MOV dword ptr [EDI + 0x18],EBP      ; 0046a11f
    MOV EDI,dword ptr [ESP + 0x8]       ; 0046a122
    MOV EBP,dword ptr [EBX]             ; 0046a126
    ADD EBP,EDI                         ; 0046a128
    MOV EDI,dword ptr [EAX + 0x20]      ; 0046a12a
    MOV dword ptr [EBP + 0x1c],EDI      ; 0046a12d
    JMP 0x0046a0ef                      ; 0046a130
        ;   XREF to: 0046a0ef (UNCONDITIONAL_JUMP)  ; LAB_0046a0ef
    CMP dword ptr [0x006141c0],0x20     ; 0046a132 | DAT_006141c0
        ;   Label: LAB_0046a132
    JNZ 0x0046a160                      ; 0046a139
        ;   XREF to: 0046a160 (CONDITIONAL_JUMP)  ; LAB_0046a160
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046a13b | DAT_01c35e6c
    MOV EBP,0x6                         ; 0046a145
        ;   Label: LAB_0046a145
    MOV EDI,0x2cd                       ; 0046a14a
    MOV dword ptr [0x01c38b58],EBP      ; 0046a14f | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDI      ; 0046a155 | DAT_01c38b54
    JMP 0x0046a0a2                      ; 0046a15b
        ;   XREF to: 0046a0a2 (UNCONDITIONAL_JUMP)  ; LAB_0046a0a2
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046a160 | DAT_01c35e6c
        ;   Label: LAB_0046a160
    JMP 0x0046a145                      ; 0046a16a
        ;   XREF to: 0046a145 (UNCONDITIONAL_JUMP)  ; LAB_0046a145


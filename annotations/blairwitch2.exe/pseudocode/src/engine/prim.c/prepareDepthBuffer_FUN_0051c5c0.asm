; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_prepareDepthBuffer_FUN_0051c5c0(int param_1,int param_2)
;
;
; XREF[7]:
;   core_dpart.cpp_FUN_004625f0 at 0046270a
;   engine_3d.c_clipAndDrawLine3D_FUN_00407fc0 at 00408221
;   engine_prim.c_FUN_0051cb20 at 0051cd28
;   engine_prim.c_FUN_0051da80 at 0051dd99
;   engine_prim.c_FUN_0051e130 at 0051e2a2
;   unkafter_zombie.cpp_FUN_0059a0b0 at 0059a3c0
;   unkafter_zombie.cpp_FUN_0059a5d0 at 0059a85b
;
; Referenced Globals:
;   undefined4 DAT_01c38b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c5c0
        ;   Label: engine_prim.c_prepareDepthBuffer_FUN_0051c5c0
    PUSH ESI                            ; 0051c5c1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051c5c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051c5c6
    MOV EDX,dword ptr [0x01c38b50]      ; 0051c5ca | DAT_01c38b50
    TEST EDX,EDX                        ; 0051c5d0
    JZ 0x0051c5ff                       ; 0051c5d2
        ;   XREF to: 0051c5ff (CONDITIONAL_JUMP)  ; LAB_0051c5ff
    XOR EDX,EDX                         ; 0051c5d4
    TEST EBX,EBX                        ; 0051c5d6
    JLE 0x0051c5f0                      ; 0051c5d8
        ;   XREF to: 0051c5f0 (CONDITIONAL_JUMP)  ; LAB_0051c5f0
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051c5da
        ;   Label: LAB_0051c5da
    TEST ECX,ECX                        ; 0051c5dd
    JNZ 0x0051c5f3                      ; 0051c5df
        ;   XREF to: 0051c5f3 (CONDITIONAL_JUMP)  ; LAB_0051c5f3
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 0051c5e1
    INC EDX                             ; 0051c5e8
        ;   Label: LAB_0051c5e8
    ADD EAX,0x30                        ; 0051c5e9
    CMP EDX,EBX                         ; 0051c5ec
    JL 0x0051c5da                       ; 0051c5ee
        ;   XREF to: 0051c5da (CONDITIONAL_JUMP)  ; LAB_0051c5da
    POP ESI                             ; 0051c5f0
        ;   Label: LAB_0051c5f0
    POP EBX                             ; 0051c5f1
    RET                                 ; 0051c5f2
    MOV ESI,0x7fffffff                  ; 0051c5f3
        ;   Label: LAB_0051c5f3
    SUB ESI,ECX                         ; 0051c5f8
    MOV dword ptr [EAX + 0x8],ESI       ; 0051c5fa
    JMP 0x0051c5e8                      ; 0051c5fd
        ;   XREF to: 0051c5e8 (UNCONDITIONAL_JUMP)  ; LAB_0051c5e8
    TEST EBX,EBX                        ; 0051c5ff
        ;   Label: LAB_0051c5ff
    JLE 0x0051c5f0                      ; 0051c601
        ;   XREF to: 0051c5f0 (CONDITIONAL_JUMP)  ; LAB_0051c5f0
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051c603
        ;   Label: LAB_0051c603
    SAR ECX,0x4                         ; 0051c606
    TEST ECX,ECX                        ; 0051c609
    JNZ 0x0051c61e                      ; 0051c60b
        ;   XREF to: 0051c61e (CONDITIONAL_JUMP)  ; LAB_0051c61e
    MOV dword ptr [EAX + 0x8],0x7fffffff ; 0051c60d
    INC EDX                             ; 0051c614
    ADD EAX,0x30                        ; 0051c615
    CMP EDX,EBX                         ; 0051c618
    JGE 0x0051c5f0                      ; 0051c61a
        ;   XREF to: 0051c5f0 (CONDITIONAL_JUMP)  ; LAB_0051c5f0
    JMP 0x0051c603                      ; 0051c61c
        ;   XREF to: 0051c603 (UNCONDITIONAL_JUMP)  ; LAB_0051c603
    MOV ECX,dword ptr [EAX + 0xc]       ; 0051c61e
        ;   Label: LAB_0051c61e
    MOV dword ptr [EAX + 0x8],ECX       ; 0051c621
    INC EDX                             ; 0051c624
    ADD EAX,0x30                        ; 0051c625
    CMP EDX,EBX                         ; 0051c628
    JGE 0x0051c5f0                      ; 0051c62a
        ;   XREF to: 0051c5f0 (CONDITIONAL_JUMP)  ; LAB_0051c5f0
    JMP 0x0051c603                      ; 0051c62c
        ;   XREF to: 0051c603 (UNCONDITIONAL_JUMP)  ; LAB_0051c603


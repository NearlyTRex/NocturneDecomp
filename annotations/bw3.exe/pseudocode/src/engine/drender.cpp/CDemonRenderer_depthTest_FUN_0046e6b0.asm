; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0(CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SRenderVertex *  Stack[0x8]:4   vertex_ptr
;
; XREF[7]:
;   core_fire.cpp_CFirefly_render_FUN_00498b40 at 00498ba9
;   core_fire.cpp_CPopcorn_render_FUN_004a0cd0 at 004a0d26
;   core_fire.cpp_CRainDrop_render_FUN_004a1040 at 004a1096
;   core_fire.cpp_CShell_render_FUN_004a09f0 at 004a0a51
;   core_fire.cpp_CSmokeParticle_render_FUN_00496f60 at 00496fb2
;   core_fire.cpp_FUN_004980b0 at 0049812e
;   core_weather.cpp_FUN_0057c890 at 0057ca79
;
; Referenced Globals:
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c60dac
;
; Called Functions:
;   engine_prim.c_replaceWWithDepth_FUN_00515a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e6b0
        ;   Label: engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046e6b0
    PUSH ESI                            ; 0046e6b1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046e6b2
    TEST byte ptr [EBX + 0x13],0x80     ; 0046e6b6
    JNZ 0x0046e6f1                      ; 0046e6ba
        ;   XREF to: 0046e6f1 (CONDITIONAL_JUMP)  ; LAB_0046e6f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046e6bc
    CMP dword ptr [EAX + 0x4],0x0       ; 0046e6c0
    JZ 0x0046e6f6                       ; 0046e6c4
        ;   XREF to: 0046e6f6 (CONDITIONAL_JUMP)  ; LAB_0046e6f6
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046e6c6
        ;   Label: LAB_0046e6c6
    MOV EAX,dword ptr [EBX + 0x10]      ; 0046e6ca
    MOV EDX,dword ptr [EBX + 0x14]      ; 0046e6cd
    SAR EAX,0x10                        ; 0046e6d0
    SAR EDX,0x10                        ; 0046e6d3
    MOV ESI,dword ptr [ECX + 0x4]       ; 0046e6d6
    SHL EAX,0x2                         ; 0046e6d9
    SHL EDX,0x2                         ; 0046e6dc
    TEST ESI,ESI                        ; 0046e6df
    JNZ 0x0046e703                      ; 0046e6e1
        ;   XREF to: 0046e703 (CONDITIONAL_JUMP)  ; LAB_0046e703
    MOV EDX,dword ptr [EDX + 0x1c60dac] ; 0046e6e3 | DAT_01c60dac
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 0046e6e9
    CMP EAX,dword ptr [EBX + 0x8]       ; 0046e6ec
    JLE 0x0046e716                      ; 0046e6ef
        ;   XREF to: 0046e716 (CONDITIONAL_JUMP)  ; LAB_0046e716
    XOR EAX,EAX                         ; 0046e6f1
        ;   Label: LAB_0046e6f1
    POP ESI                             ; 0046e6f3
    POP EBX                             ; 0046e6f4
    RET                                 ; 0046e6f5
    PUSH 0x1                            ; 0046e6f6
        ;   Label: LAB_0046e6f6
    PUSH EBX                            ; 0046e6f8
    CALL engine_prim.c_replaceWWithDepth_FUN_00515a80 ; 0046e6f9
        ;   XREF to: 00515a80 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_00515a80()
    ADD ESP,0x8                         ; 0046e6fe
    JMP 0x0046e6c6                      ; 0046e701
        ;   XREF to: 0046e6c6 (UNCONDITIONAL_JUMP)  ; LAB_0046e6c6
    MOV EDX,dword ptr [EDX + 0x1c5faec] ; 0046e703 | DAT_01c5faec
        ;   Label: LAB_0046e703
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 0046e709
    CMP EAX,dword ptr [EBX + 0x8]       ; 0046e70c
    JLE 0x0046e716                      ; 0046e70f
        ;   XREF to: 0046e716 (CONDITIONAL_JUMP)  ; LAB_0046e716
    XOR EAX,EAX                         ; 0046e711
    POP ESI                             ; 0046e713
    POP EBX                             ; 0046e714
    RET                                 ; 0046e715
    MOV EAX,0x1                         ; 0046e716
        ;   Label: LAB_0046e716
    POP ESI                             ; 0046e71b
    POP EBX                             ; 0046e71c
    RET                                 ; 0046e71d


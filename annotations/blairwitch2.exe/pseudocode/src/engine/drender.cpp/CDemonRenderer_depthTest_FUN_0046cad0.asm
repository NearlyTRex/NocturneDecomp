; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0(CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SRenderVertex *  Stack[0x8]:4   vertex_ptr
;
; XREF[8]:
;   core_fire.cpp_CFirefly_render_FUN_00495150 at 004951b9
;   core_fire.cpp_CPopcorn_render_FUN_0049b9d0 at 0049ba26
;   core_fire.cpp_CRainDrop_render_FUN_0049bd40 at 0049bd96
;   core_fire.cpp_CShell_render_FUN_0049b6f0 at 0049b751
;   core_fire.cpp_CSmokeParticle_render_FUN_00493710 at 00493762
;   core_fire.cpp_FUN_004947a0 at 00494802
;   core_weather.cpp_CWeather_renderParticles_FUN_0058ad40 at 0058aef6
;   unkafter_superopt.cpp_FUN_005a86a0 at 005a871d
;
; Referenced Globals:
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2b64c
;
; Called Functions:
;   engine_prim.c_replaceWWithDepth_FUN_0051c720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046cad0
        ;   Label: engine_drender.cpp_CDemonRenderer_depthTest_FUN_0046cad0
    PUSH ESI                            ; 0046cad1
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046cad2
    TEST byte ptr [EBX + 0x13],0x80     ; 0046cad6
    JNZ 0x0046cb11                      ; 0046cada
        ;   XREF to: 0046cb11 (CONDITIONAL_JUMP)  ; LAB_0046cb11
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046cadc
    CMP dword ptr [EAX + 0x4],0x0       ; 0046cae0
    JZ 0x0046cb16                       ; 0046cae4
        ;   XREF to: 0046cb16 (CONDITIONAL_JUMP)  ; LAB_0046cb16
    MOV ECX,dword ptr [ESP + 0xc]       ; 0046cae6
        ;   Label: LAB_0046cae6
    MOV EAX,dword ptr [EBX + 0x10]      ; 0046caea
    MOV EDX,dword ptr [EBX + 0x14]      ; 0046caed
    SAR EAX,0x10                        ; 0046caf0
    SAR EDX,0x10                        ; 0046caf3
    MOV ESI,dword ptr [ECX + 0x4]       ; 0046caf6
    SHL EAX,0x2                         ; 0046caf9
    SHL EDX,0x2                         ; 0046cafc
    TEST ESI,ESI                        ; 0046caff
    JNZ 0x0046cb23                      ; 0046cb01
        ;   XREF to: 0046cb23 (CONDITIONAL_JUMP)  ; LAB_0046cb23
    MOV EDX,dword ptr [EDX + 0x1c2b64c] ; 0046cb03 | DAT_01c2b64c
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 0046cb09
    CMP EAX,dword ptr [EBX + 0x8]       ; 0046cb0c
    JLE 0x0046cb36                      ; 0046cb0f
        ;   XREF to: 0046cb36 (CONDITIONAL_JUMP)  ; LAB_0046cb36
    XOR EAX,EAX                         ; 0046cb11
        ;   Label: LAB_0046cb11
    POP ESI                             ; 0046cb13
    POP EBX                             ; 0046cb14
    RET                                 ; 0046cb15
    PUSH 0x1                            ; 0046cb16
        ;   Label: LAB_0046cb16
    PUSH EBX                            ; 0046cb18
    CALL engine_prim.c_replaceWWithDepth_FUN_0051c720 ; 0046cb19
        ;   XREF to: 0051c720 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_0051c720()
    ADD ESP,0x8                         ; 0046cb1e
    JMP 0x0046cae6                      ; 0046cb21
        ;   XREF to: 0046cae6 (UNCONDITIONAL_JUMP)  ; LAB_0046cae6
    MOV EDX,dword ptr [EDX + 0x1c2a38c] ; 0046cb23 | DAT_01c2a38c
        ;   Label: LAB_0046cb23
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 0046cb29
    CMP EAX,dword ptr [EBX + 0x8]       ; 0046cb2c
    JLE 0x0046cb36                      ; 0046cb2f
        ;   XREF to: 0046cb36 (CONDITIONAL_JUMP)  ; LAB_0046cb36
    XOR EAX,EAX                         ; 0046cb31
    POP ESI                             ; 0046cb33
    POP EBX                             ; 0046cb34
    RET                                 ; 0046cb35
    MOV EAX,0x1                         ; 0046cb36
        ;   Label: LAB_0046cb36
    POP ESI                             ; 0046cb3b
    POP EBX                             ; 0046cb3c
    RET                                 ; 0046cb3d


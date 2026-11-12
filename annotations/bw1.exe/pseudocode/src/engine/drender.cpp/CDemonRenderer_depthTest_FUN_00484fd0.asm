; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_00484fd0(CDemonRenderer *this_ptr,SRenderVertex *vertex_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SRenderVertex *  Stack[0x8]:4   vertex_ptr
;
; XREF[7]:
;   core_fire.cpp_CFirefly_render_FUN_004adaf0 at 004adb59
;   core_fire.cpp_CPopcorn_render_FUN_004b4370 at 004b43c6
;   core_fire.cpp_CRainDrop_render_FUN_004b46e0 at 004b4736
;   core_fire.cpp_CShell_render_FUN_004b4090 at 004b40f1
;   core_fire.cpp_CSmokeParticle_render_FUN_004ac0b0 at 004ac102
;   core_fire.cpp_FUN_004ad140 at 004ad1a2
;   core_weather.cpp_CWeather_renderParticles_FUN_005ae890 at 005aea46
;
; Referenced Globals:
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4480c
;
; Called Functions:
;   engine_prim.c_replaceWWithDepth_FUN_0053dd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484fd0
        ;   Label: engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0
    PUSH ESI                            ; 00484fd1
    MOV EBX,dword ptr [ESP + 0x10]      ; 00484fd2
    TEST byte ptr [EBX + 0x13],0x80     ; 00484fd6
    JNZ 0x00485011                      ; 00484fda
        ;   XREF to: 00485011 (CONDITIONAL_JUMP)  ; LAB_00485011
    MOV EAX,dword ptr [ESP + 0xc]       ; 00484fdc
    CMP dword ptr [EAX + 0x4],0x0       ; 00484fe0
    JZ 0x00485016                       ; 00484fe4
        ;   XREF to: 00485016 (CONDITIONAL_JUMP)  ; LAB_00485016
    MOV ECX,dword ptr [ESP + 0xc]       ; 00484fe6
        ;   Label: LAB_00484fe6
    MOV EAX,dword ptr [EBX + 0x10]      ; 00484fea
    MOV EDX,dword ptr [EBX + 0x14]      ; 00484fed
    SAR EAX,0x10                        ; 00484ff0
    SAR EDX,0x10                        ; 00484ff3
    MOV ESI,dword ptr [ECX + 0x4]       ; 00484ff6
    SHL EAX,0x2                         ; 00484ff9
    SHL EDX,0x2                         ; 00484ffc
    TEST ESI,ESI                        ; 00484fff
    JNZ 0x00485023                      ; 00485001
        ;   XREF to: 00485023 (CONDITIONAL_JUMP)  ; LAB_00485023
    MOV EDX,dword ptr [EDX + 0x1c4480c] ; 00485003 | DAT_01c4480c
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 00485009
    CMP EAX,dword ptr [EBX + 0x8]       ; 0048500c
    JLE 0x00485036                      ; 0048500f
        ;   XREF to: 00485036 (CONDITIONAL_JUMP)  ; LAB_00485036
    XOR EAX,EAX                         ; 00485011
        ;   Label: LAB_00485011
    POP ESI                             ; 00485013
    POP EBX                             ; 00485014
    RET                                 ; 00485015
    PUSH 0x1                            ; 00485016
        ;   Label: LAB_00485016
    PUSH EBX                            ; 00485018
    CALL engine_prim.c_replaceWWithDepth_FUN_0053dd20 ; 00485019
        ;   XREF to: 0053dd20 (UNCONDITIONAL_CALL)  ; void engine_prim.c_replaceWWithDepth_FUN_0053dd20(SRenderVertex * vertices, int vertex_count)
    ADD ESP,0x8                         ; 0048501e
    JMP 0x00484fe6                      ; 00485021
        ;   XREF to: 00484fe6 (UNCONDITIONAL_JUMP)  ; LAB_00484fe6
    MOV EDX,dword ptr [EDX + 0x1c4354c] ; 00485023 | DAT_01c4354c
        ;   Label: LAB_00485023
    MOV EAX,dword ptr [EDX + EAX*0x1]   ; 00485029
    CMP EAX,dword ptr [EBX + 0x8]       ; 0048502c
    JLE 0x00485036                      ; 0048502f
        ;   XREF to: 00485036 (CONDITIONAL_JUMP)  ; LAB_00485036
    XOR EAX,EAX                         ; 00485031
    POP ESI                             ; 00485033
    POP EBX                             ; 00485034
    RET                                 ; 00485035
    MOV EAX,0x1                         ; 00485036
        ;   Label: LAB_00485036
    POP ESI                             ; 0048503b
    POP EBX                             ; 0048503c
    RET                                 ; 0048503d


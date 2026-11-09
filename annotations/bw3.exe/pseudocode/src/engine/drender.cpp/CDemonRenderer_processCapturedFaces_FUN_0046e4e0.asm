; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0(CDemonRenderer *this_ptr)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
;
; XREF[14]:
;   core_asgaya.cpp_FUN_005a17e0 at 005a191e
;   core_baal.cpp_FUN_00597970 at 00597ac1
;   core_boneguy.cpp_FUN_00418f90 at 0041903d
;   core_hecaitmx.cpp_FUN_00598480 at 0059853e
;   core_hino.cpp_FUN_0059d120 at 0059d2d3
;   core_inv.cpp_FUN_004dbe70 at 004dc385
;   core_kedward.cpp_FUN_00591680 at 005917c4
;   core_mattnntt.cpp_FUN_00593710 at 005938a5
;   core_morph.cpp_CMorphModel_renderFaces_FUN_004fa6d0 at 004fa7af
;   core_npc.cpp_FUN_005095f0 at 0050975e
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_01bdd858
;   undefined4 DAT_01bdd860
;   undefined4 DAT_01bdd864
;
; Called Functions:
;   crt_stdlib.c__qsort_FUN_005a29e8
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
;   engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0046e4e0
        ;   Label: engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_0046e4e0
    MOV EBP,dword ptr [ESP + 0x8]       ; 0046e4e1
    CMP dword ptr [EBP + 0x4],0x0       ; 0046e4e5
    JNZ 0x0046e5c3                      ; 0046e4e9
        ;   XREF to: 0046e5c3 (CONDITIONAL_JUMP)  ; LAB_0046e5c3
    PUSH EDI                            ; 0046e4ef
    PUSH ESI                            ; 0046e4f0
    PUSH EBX                            ; 0046e4f1
    MOV ECX,dword ptr [0x01bdd858]      ; 0046e4f2 | DAT_01bdd858
    TEST ECX,ECX                        ; 0046e4f8
    JLE 0x0046e520                      ; 0046e4fa
        ;   XREF to: 0046e520 (CONDITIONAL_JUMP)  ; LAB_0046e520
    MOV EBX,0x1bdd860                   ; 0046e4fc
    LEA ESI,[ECX*0x4 + 0x0]             ; 0046e501
    XOR EAX,EAX                         ; 0046e508
    MOV dword ptr [EAX + 0x1c04960],EBX ; 0046e50a
        ;   Label: LAB_0046e50a
    ADD EAX,0x4                         ; 0046e510
    ADD EBX,0x20                        ; 0046e513
    CMP EAX,ESI                         ; 0046e516
    JL 0x0046e50a                       ; 0046e518
        ;   XREF to: 0046e50a (CONDITIONAL_JUMP)  ; LAB_0046e50a
    LEA EAX,[EAX]                       ; 0046e51a
    CMP dword ptr [EBP + 0x1c],0x1      ; 0046e520
        ;   Label: LAB_0046e520
    JZ 0x0046e5c5                       ; 0046e524
        ;   XREF to: 0046e5c5 (CONDITIONAL_JUMP)  ; LAB_0046e5c5
    PUSH 0x46e480                       ; 0046e52a
    PUSH 0x4                            ; 0046e52f
    MOV ESI,dword ptr [0x01bdd858]      ; 0046e531 | DAT_01bdd858
    PUSH ESI                            ; 0046e537
    PUSH 0x1c04960                      ; 0046e538
        ;   Label: LAB_0046e538
    CALL crt_stdlib.c__qsort_FUN_005a29e8 ; 0046e53d
        ;   XREF to: 005a29e8 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__qsort_FUN_005a29e8()
    ADD ESP,0x10                        ; 0046e542
    MOV EAX,dword ptr [EBP + 0x10]      ; 0046e545
    MOV dword ptr [EBP + 0x1c],0x0      ; 0046e548
    TEST EAX,EAX                        ; 0046e54f
    JZ 0x0046e55e                       ; 0046e551
        ;   XREF to: 0046e55e (CONDITIONAL_JUMP)  ; LAB_0046e55e
    PUSH 0x1                            ; 0046e553
    PUSH EBP                            ; 0046e555
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0046e556
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0046e55b
    MOV EDI,0xffffffff                  ; 0046e55e
        ;   Label: LAB_0046e55e
    MOV EDX,dword ptr [0x01bdd858]      ; 0046e563 | DAT_01bdd858
    XOR ESI,ESI                         ; 0046e569
    TEST EDX,EDX                        ; 0046e56b
    JLE 0x0046e5b5                      ; 0046e56d
        ;   XREF to: 0046e5b5 (CONDITIONAL_JUMP)  ; LAB_0046e5b5
    XOR EBX,EBX                         ; 0046e56f
    MOV EAX,dword ptr [EBX + 0x1c04960] ; 0046e571
        ;   Label: LAB_0046e571
    MOV EDX,dword ptr [EAX]             ; 0046e577 | DAT_01bdd860
    CMP EDI,EDX                         ; 0046e579
    JZ 0x0046e591                       ; 0046e57b
        ;   XREF to: 0046e591 (CONDITIONAL_JUMP)  ; LAB_0046e591
    MOV EDI,EDX                         ; 0046e57d
    IMUL EAX,EDX,0x48                   ; 0046e57f
    ADD EAX,0x1c09780                   ; 0046e582
    PUSH EAX                            ; 0046e587
    PUSH EBP                            ; 0046e588
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0 ; 0046e589
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046e5e0(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0046e58e
    MOV EAX,dword ptr [EBX + 0x1c04960] ; 0046e591
        ;   Label: LAB_0046e591
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046e597 | DAT_01bdd864
    PUSH ECX                            ; 0046e59a
    ADD EAX,0xc                         ; 0046e59b
    PUSH EAX                            ; 0046e59e
    PUSH EBP                            ; 0046e59f
    ADD EBX,0x4                         ; 0046e5a0
    INC ESI                             ; 0046e5a3
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70 ; 0046e5a4
        ;   XREF to: 0046ba70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedFace_FUN_0046ba70(CDemonRenderer * this_ptr, SInputFace * face, int render_flags)
    MOV EAX,[0x01bdd858]                ; 0046e5a9 | DAT_01bdd858
    ADD ESP,0xc                         ; 0046e5ae
    CMP ESI,EAX                         ; 0046e5b1
    JL 0x0046e571                       ; 0046e5b3
        ;   XREF to: 0046e571 (CONDITIONAL_JUMP)  ; LAB_0046e571
    PUSH 0x0                            ; 0046e5b5
        ;   Label: LAB_0046e5b5
    PUSH EBP                            ; 0046e5b7
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460 ; 0046e5b8
        ;   XREF to: 0046d460 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_0046d460(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 0046e5bd
    POP EBX                             ; 0046e5c0
    POP ESI                             ; 0046e5c1
    POP EDI                             ; 0046e5c2
    POP EBP                             ; 0046e5c3
        ;   Label: LAB_0046e5c3
    RET                                 ; 0046e5c4
    PUSH 0x46e4b0                       ; 0046e5c5
        ;   Label: LAB_0046e5c5
    PUSH 0x4                            ; 0046e5ca
    MOV EDI,dword ptr [0x01bdd858]      ; 0046e5cc | DAT_01bdd858
    PUSH EDI                            ; 0046e5d2
    JMP 0x0046e538                      ; 0046e5d3
        ;   XREF to: 0046e538 (UNCONDITIONAL_JUMP)  ; LAB_0046e538


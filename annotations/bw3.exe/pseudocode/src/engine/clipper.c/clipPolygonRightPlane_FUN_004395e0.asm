; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_004395e0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   input_vertices
; SRenderVertex * * Stack[0x8]:4   output_vertices
; int              Stack[0xc]:4   vertex_count
;
; Referenced Globals:
;   undefined1* switchdataD_004395c4 = 0043962f
;   undefined1* PTR_caseD_1_004395c8 = 0043965a
;   undefined1* PTR_caseD_3_004395d0 = 00439634
;   TerminatedCString s_engine_clipper_c_005b8f4a
;   TerminatedCString s_Ran_out_of_clipped_verts_005b8f5e
;   undefined4 DAT_007e4b10
;   undefined4 DAT_007e4d50
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_clipper.c_interpolateVertexRightClip_FUN_004390c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004395e0
        ;   Label: engine_clipper.c_clipPolygonRightPlane_FUN_004395e0
    PUSH ESI                            ; 004395e1
    PUSH EDI                            ; 004395e2
    PUSH EBP                            ; 004395e3
    SUB ESP,0x8                         ; 004395e4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004395e7
    MOV EBP,dword ptr [ESP + 0x20]      ; 004395eb
    XOR EBX,EBX                         ; 004395ef
    MOV EAX,dword ptr [ESP + 0x24]      ; 004395f1
    MOV dword ptr [ESP],EBX             ; 004395f5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 004395f8
    TEST EAX,EAX                        ; 004395fc
    JLE 0x00439650                      ; 004395fe
        ;   XREF to: 00439650 (CONDITIONAL_JUMP)  ; LAB_00439650
    MOV dword ptr [ESP + 0x4],EDX       ; 00439600
    MOV EDI,dword ptr [ESP + 0x4]       ; 00439604
        ;   Label: LAB_00439604
    MOV EDX,dword ptr [ESI]             ; 00439608
    MOV ECX,dword ptr [ESI + 0x8]       ; 0043960a
    XOR EAX,EAX                         ; 0043960d
    MOV EDI,dword ptr [EDI]             ; 0043960f
    CMP EDX,ECX                         ; 00439611
    JL 0x0043961a                       ; 00439613
        ;   XREF to: 0043961a (CONDITIONAL_JUMP)  ; LAB_0043961a
    MOV EAX,0x1                         ; 00439615
    MOV ECX,dword ptr [EDI + 0x8]       ; 0043961a
        ;   Label: LAB_0043961a
    CMP ECX,dword ptr [EDI]             ; 0043961d
    JG 0x00439623                       ; 0043961f
        ;   XREF to: 00439623 (CONDITIONAL_JUMP)  ; LAB_00439623
    OR AL,0x2                           ; 00439621
    CMP EAX,0x3                         ; 00439623
        ;   Label: LAB_00439623
    JA 0x00439634                       ; 00439626
        ;   XREF to: 00439634 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x4395c4]  ; 00439628 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043962f
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 00439630
    MOV EAX,dword ptr [ESP + 0x4]       ; 00439634
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 00439638
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043963b
    MOV ESI,EDI                         ; 0043963f
    ADD EAX,0x4                         ; 00439641
    INC EDX                             ; 00439644
    MOV dword ptr [ESP + 0x4],EAX       ; 00439645
    MOV dword ptr [ESP],EDX             ; 00439649
    CMP EDX,ECX                         ; 0043964c
    JL 0x00439604                       ; 0043964e
        ;   XREF to: 00439604 (CONDITIONAL_JUMP)  ; LAB_00439604
    MOV EAX,EBX                         ; 00439650
        ;   Label: LAB_00439650
    ADD ESP,0x8                         ; 00439652
    POP EBP                             ; 00439655
    POP EDI                             ; 00439656
    POP ESI                             ; 00439657
    POP EBX                             ; 00439658
    RET                                 ; 00439659
    CMP dword ptr [0x007e4d50],0xc      ; 0043965a | DAT_007e4d50
        ;   Label: caseD_1
    JL 0x00439685                       ; 00439661
        ;   XREF to: 00439685 (CONDITIONAL_JUMP)  ; LAB_00439685
    MOV ECX,0x5b8f4a                    ; 00439663 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 00439668
    PUSH 0x5b8f5e                       ; 0043966d | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],ECX      ; 00439672 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00439678 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0043967d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00439682
    MOV EAX,[0x007e4d50]                ; 00439685 | DAT_007e4d50
        ;   Label: LAB_00439685
    IMUL EDX,EAX,0x30                   ; 0043968a
    ADD EDX,0x7e4b10                    ; 0043968d | DAT_007e4b10
    PUSH EDX                            ; 00439693
    PUSH ESI                            ; 00439694
    INC EBX                             ; 00439695
    INC EAX                             ; 00439696
    PUSH EDI                            ; 00439697
    MOV [0x007e4d50],EAX                ; 00439698 | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043969d
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_004390c0 ; 004396a1
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_004390c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 004396a6
    JMP 0x00439634                      ; 004396a9
        ;   XREF to: 00439634 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 004396ab
        ;   Label: caseD_2
    MOV EAX,[0x007e4d50]                ; 004396ac | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 004396b1
    CMP EAX,0xc                         ; 004396b5
    JL 0x004396dd                       ; 004396b8
        ;   XREF to: 004396dd (CONDITIONAL_JUMP)  ; LAB_004396dd
    MOV EDX,0x5b8f4a                    ; 004396ba | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 004396bf
    PUSH 0x5b8f5e                       ; 004396c4 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d71de0],EDX      ; 004396c9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004396cf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004396d5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004396da
    MOV EAX,[0x007e4d50]                ; 004396dd | DAT_007e4d50
        ;   Label: LAB_004396dd
    IMUL EDX,EAX,0x30                   ; 004396e2
    ADD EDX,0x7e4b10                    ; 004396e5 | DAT_007e4b10
    PUSH EDX                            ; 004396eb
    PUSH EDI                            ; 004396ec
    INC EBX                             ; 004396ed
    INC EAX                             ; 004396ee
    PUSH ESI                            ; 004396ef
    MOV [0x007e4d50],EAX                ; 004396f0 | DAT_007e4d50
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 004396f5
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_004390c0 ; 004396f9
        ;   XREF to: 004390c0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_004390c0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 004396fe
    JMP 0x00439634                      ; 00439701
        ;   XREF to: 00439634 (UNCONDITIONAL_JUMP)  ; caseD_3


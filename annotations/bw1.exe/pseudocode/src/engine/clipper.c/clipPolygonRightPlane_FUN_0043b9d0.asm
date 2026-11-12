; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonRightPlane_FUN_0043b9d0(SRenderVertex **input_vertices,SRenderVertex **output_vertices,int vertex_count)
;
; Parameters:
; SRenderVertex * * Stack[0x4]:4   input_vertices
; SRenderVertex * * Stack[0x8]:4   output_vertices
; int              Stack[0xc]:4   vertex_count
;
; Referenced Globals:
;   undefined1* switchdataD_0043b9b4 = 0043ba1f
;   undefined1* PTR_caseD_1_0043b9b8 = 0043ba4a
;   undefined1* PTR_caseD_3_0043b9c0 = 0043ba24
;   TerminatedCString s_engine_clipper_c_005d66da
;   TerminatedCString s_Ran_out_of_clipped_verts_005d66ee
;   undefined4 DAT_007c81dc
;   undefined4 DAT_007c841c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b9d0
        ;   Label: engine_clipper.c_clipPolygonRightPlane_FUN_0043b9d0
    PUSH ESI                            ; 0043b9d1
    PUSH EDI                            ; 0043b9d2
    PUSH EBP                            ; 0043b9d3
    SUB ESP,0x8                         ; 0043b9d4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0043b9d7
    MOV EBP,dword ptr [ESP + 0x20]      ; 0043b9db
    XOR EBX,EBX                         ; 0043b9df
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043b9e1
    MOV dword ptr [ESP],EBX             ; 0043b9e5
    MOV ESI,dword ptr [EDX + EAX*0x4 + -0x4] ; 0043b9e8
    TEST EAX,EAX                        ; 0043b9ec
    JLE 0x0043ba40                      ; 0043b9ee
        ;   XREF to: 0043ba40 (CONDITIONAL_JUMP)  ; LAB_0043ba40
    MOV dword ptr [ESP + 0x4],EDX       ; 0043b9f0
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043b9f4
        ;   Label: LAB_0043b9f4
    MOV EDX,dword ptr [ESI]             ; 0043b9f8
    MOV ECX,dword ptr [ESI + 0x8]       ; 0043b9fa
    XOR EAX,EAX                         ; 0043b9fd
    MOV EDI,dword ptr [EDI]             ; 0043b9ff
    CMP EDX,ECX                         ; 0043ba01
    JL 0x0043ba0a                       ; 0043ba03
        ;   XREF to: 0043ba0a (CONDITIONAL_JUMP)  ; LAB_0043ba0a
    MOV EAX,0x1                         ; 0043ba05
    MOV ECX,dword ptr [EDI + 0x8]       ; 0043ba0a
        ;   Label: LAB_0043ba0a
    CMP ECX,dword ptr [EDI]             ; 0043ba0d
    JG 0x0043ba13                       ; 0043ba0f
        ;   XREF to: 0043ba13 (CONDITIONAL_JUMP)  ; LAB_0043ba13
    OR AL,0x2                           ; 0043ba11
    CMP EAX,0x3                         ; 0043ba13
        ;   Label: LAB_0043ba13
    JA 0x0043ba24                       ; 0043ba16
        ;   XREF to: 0043ba24 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43b9b4]  ; 0043ba18 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    INC EBX                             ; 0043ba1f
        ;   Label: caseD_0
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 0043ba20
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043ba24
        ;   Label: caseD_3
    MOV EDX,dword ptr [ESP]             ; 0043ba28
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043ba2b
    MOV ESI,EDI                         ; 0043ba2f
    ADD EAX,0x4                         ; 0043ba31
    INC EDX                             ; 0043ba34
    MOV dword ptr [ESP + 0x4],EAX       ; 0043ba35
    MOV dword ptr [ESP],EDX             ; 0043ba39
    CMP EDX,ECX                         ; 0043ba3c
    JL 0x0043b9f4                       ; 0043ba3e
        ;   XREF to: 0043b9f4 (CONDITIONAL_JUMP)  ; LAB_0043b9f4
    MOV EAX,EBX                         ; 0043ba40
        ;   Label: LAB_0043ba40
    ADD ESP,0x8                         ; 0043ba42
    POP EBP                             ; 0043ba45
    POP EDI                             ; 0043ba46
    POP ESI                             ; 0043ba47
    POP EBX                             ; 0043ba48
    RET                                 ; 0043ba49
    CMP dword ptr [0x007c841c],0xc      ; 0043ba4a | DAT_007c841c
        ;   Label: caseD_1
    JL 0x0043ba75                       ; 0043ba51
        ;   XREF to: 0043ba75 (CONDITIONAL_JUMP)  ; LAB_0043ba75
    MOV ECX,0x5d66da                    ; 0043ba53 | = "..\\engine\\clipper.c"
    MOV EAX,0x5e                        ; 0043ba58
    PUSH 0x5d66ee                       ; 0043ba5d | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],ECX      ; 0043ba62 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0043ba68 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043ba6d
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043ba72
    MOV EAX,[0x007c841c]                ; 0043ba75 | DAT_007c841c
        ;   Label: LAB_0043ba75
    IMUL EDX,EAX,0x30                   ; 0043ba7a
    ADD EDX,0x7c81dc                    ; 0043ba7d | DAT_007c81dc
    PUSH EDX                            ; 0043ba83
    PUSH ESI                            ; 0043ba84
    INC EBX                             ; 0043ba85
    INC EAX                             ; 0043ba86
    PUSH EDI                            ; 0043ba87
    MOV [0x007c841c],EAX                ; 0043ba88 | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043ba8d
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0 ; 0043ba91
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043ba96
    JMP 0x0043ba24                      ; 0043ba99
        ;   XREF to: 0043ba24 (UNCONDITIONAL_JUMP)  ; caseD_3
    INC EBX                             ; 0043ba9b
        ;   Label: caseD_2
    MOV EAX,[0x007c841c]                ; 0043ba9c | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],ESI ; 0043baa1
    CMP EAX,0xc                         ; 0043baa5
    JL 0x0043bacd                       ; 0043baa8
        ;   XREF to: 0043bacd (CONDITIONAL_JUMP)  ; LAB_0043bacd
    MOV EDX,0x5d66da                    ; 0043baaa | = "..\\engine\\clipper.c"
    MOV ECX,0x5e                        ; 0043baaf
    PUSH 0x5d66ee                       ; 0043bab4 | = "Ran out of clipped verts!"
    MOV dword ptr [0x01d1d400],EDX      ; 0043bab9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0043babf | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0043bac5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0043baca
    MOV EAX,[0x007c841c]                ; 0043bacd | DAT_007c841c
        ;   Label: LAB_0043bacd
    IMUL EDX,EAX,0x30                   ; 0043bad2
    ADD EDX,0x7c81dc                    ; 0043bad5 | DAT_007c81dc
    PUSH EDX                            ; 0043badb
    PUSH EDI                            ; 0043badc
    INC EBX                             ; 0043badd
    INC EAX                             ; 0043bade
    PUSH ESI                            ; 0043badf
    MOV [0x007c841c],EAX                ; 0043bae0 | DAT_007c841c
    MOV dword ptr [EBP + EBX*0x4 + -0x4],EDX ; 0043bae5
    CALL engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0 ; 0043bae9
        ;   XREF to: 0043b4b0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClip_FUN_0043b4b0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    ADD ESP,0xc                         ; 0043baee
    JMP 0x0043ba24                      ; 0043baf1
        ;   XREF to: 0043ba24 (UNCONDITIONAL_JUMP)  ; caseD_3


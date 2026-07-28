; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_glass.cpp_FUN_004ac7c0 at 004ac951
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045fb00
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0045fb00
    PUSH EBP                            ; 0045fb01
    SUB ESP,0x4                         ; 0045fb02
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045fb05
    CMP dword ptr [EBX + 0xc],0x0       ; 0045fb09
    JNZ 0x0045fbaa                      ; 0045fb0d
        ;   XREF to: 0045fbaa (CONDITIONAL_JUMP)  ; LAB_0045fbaa
    PUSH EDI                            ; 0045fb13
        ;   Label: LAB_0045fb13
    PUSH ESI                            ; 0045fb14
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045fb15
    MOV ESI,dword ptr [EAX + 0x4]       ; 0045fb19
    XOR ECX,ECX                         ; 0045fb1c
    TEST ESI,ESI                        ; 0045fb1e
    JLE 0x0045fb69                      ; 0045fb20
        ;   XREF to: 0045fb69 (CONDITIONAL_JUMP)  ; LAB_0045fb69
    XOR EDX,EDX                         ; 0045fb22
    MOV EDI,dword ptr [EBX + 0x20]      ; 0045fb24
        ;   Label: LAB_0045fb24
    MOV ESI,dword ptr [EAX + 0x18]      ; 0045fb27
    TEST EDI,EDI                        ; 0045fb2a
    JNZ 0x0045fb51                      ; 0045fb2c
        ;   XREF to: 0045fb51 (CONDITIONAL_JUMP)  ; LAB_0045fb51
    IMUL EDI,ESI,0x30                   ; 0045fb2e
    MOV dword ptr [ESP + 0x8],EDI       ; 0045fb31
    MOV EBP,dword ptr [ESP + 0x8]       ; 0045fb35
    MOV EDI,dword ptr [EBX]             ; 0045fb39
    ADD EDI,EBP                         ; 0045fb3b
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0045fb3d
    MOV dword ptr [EDI + 0x18],EBP      ; 0045fb40
    MOV EBP,dword ptr [ESP + 0x8]       ; 0045fb43
    MOV EDI,dword ptr [EBX]             ; 0045fb47
    ADD EBP,EDI                         ; 0045fb49
    MOV EDI,dword ptr [EAX + 0x20]      ; 0045fb4b
    MOV dword ptr [EBP + 0x1c],EDI      ; 0045fb4e
    MOV dword ptr [EDX + 0x1b4d76c],ESI ; 0045fb51 | DAT_01b4d76c | DAT_01b4d770
        ;   Label: LAB_0045fb51
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045fb57
    ADD EAX,0xc                         ; 0045fb5b
    INC ECX                             ; 0045fb5e
    MOV EDI,dword ptr [ESI + 0x4]       ; 0045fb5f
    ADD EDX,0x4                         ; 0045fb62
    CMP ECX,EDI                         ; 0045fb65
    JL 0x0045fb24                       ; 0045fb67
        ;   XREF to: 0045fb24 (CONDITIONAL_JUMP)  ; LAB_0045fb24
    CMP dword ptr [EBX + 0x4],0x0       ; 0045fb69
        ;   Label: LAB_0045fb69
    JZ 0x0045fbc3                       ; 0045fb6d
        ;   XREF to: 0045fbc3 (CONDITIONAL_JUMP)  ; LAB_0045fbc3
    MOV EAX,0x1                         ; 0045fb6f
    MOV EBP,0x463b27                    ; 0045fb74
    XOR EDX,EDX                         ; 0045fb79
    MOV [0x01c039a0],EAX                ; 0045fb7b | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 0045fb80 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],EBP      ; 0045fb86 | DAT_01c00c7c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045fb8c
        ;   Label: LAB_0045fb8c
    PUSH 0x1b4d76c                      ; 0045fb90 | DAT_01b4d76c
    MOV ECX,dword ptr [EAX + 0x4]       ; 0045fb95
    PUSH ECX                            ; 0045fb98
    PUSH EBX                            ; 0045fb99
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045fb9a
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0045fb9f
    POP ESI                             ; 0045fba2
    POP EDI                             ; 0045fba3
    ADD ESP,0x4                         ; 0045fba4
        ;   Label: LAB_0045fba4
    POP EBP                             ; 0045fba7
    POP EBX                             ; 0045fba8
    RET                                 ; 0045fba9
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045fbaa
        ;   Label: LAB_0045fbaa
    ADD EAX,0x8                         ; 0045fbae
    PUSH EAX                            ; 0045fbb1
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045fbb2
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045fbb7
    TEST EAX,EAX                        ; 0045fbba
    JZ 0x0045fba4                       ; 0045fbbc
        ;   XREF to: 0045fba4 (CONDITIONAL_JUMP)  ; LAB_0045fba4
    JMP 0x0045fb13                      ; 0045fbbe
        ;   XREF to: 0045fb13 (UNCONDITIONAL_JUMP)  ; LAB_0045fb13
    CMP dword ptr [0x005b7624],0x20     ; 0045fbc3 | DAT_005b7624
        ;   Label: LAB_0045fbc3
    JNZ 0x0045fbee                      ; 0045fbca
        ;   XREF to: 0045fbee (CONDITIONAL_JUMP)  ; LAB_0045fbee
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045fbcc | DAT_01c00c7c
    MOV EDI,0x6                         ; 0045fbd6
        ;   Label: LAB_0045fbd6
    MOV ESI,0xc3                        ; 0045fbdb
    MOV dword ptr [0x01c039a4],EDI      ; 0045fbe0 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],ESI      ; 0045fbe6 | DAT_01c039a0
    JMP 0x0045fb8c                      ; 0045fbec
        ;   XREF to: 0045fb8c (UNCONDITIONAL_JUMP)  ; LAB_0045fb8c
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045fbee | DAT_01c00c7c
        ;   Label: LAB_0045fbee
    JMP 0x0045fbd6                      ; 0045fbf8
        ;   XREF to: 0045fbd6 (UNCONDITIONAL_JUMP)  ; LAB_0045fbd6


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_findVertexMatches_FUN_00461ae0(int *vertices1,int *vertices2,int count1,int count2)
;
; Parameters:
; int *            Stack[0x4]:4   vertices1
; int *            Stack[0x8]:4   vertices2
; int              Stack[0xc]:4   count1
; int              Stack[0x10]:4   count2
; Local Variables:
; uint             Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[3]:
;   shape_design.c_configureSinglePassPolygonReduction_FUN_00465560 at 004656fb
;   shape_design.c_mergePolygonsWithValidation_FUN_00465b40 at 00465bcf
;   shape_design.c_optimizePolygonMesh_FUN_004658e0 at 00465a16
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461ae0
        ;   Label: shape_design.c_findVertexMatches_FUN_00461ae0
    PUSH ESI                            ; 00461ae1
    PUSH EDI                            ; 00461ae2
    PUSH EBP                            ; 00461ae3
    MOV EBP,ESP                         ; 00461ae4
    SUB ESP,0x10                        ; 00461ae6
    MOV dword ptr [EBP + -0x4],0x0      ; 00461aec
    MOV dword ptr [EBP + -0xc],0x0      ; 00461af3
    JMP 0x00461b02                      ; 00461afa
        ;   XREF to: 00461b02 (UNCONDITIONAL_JUMP)  ; LAB_00461b02
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461afc
        ;   Label: LAB_00461afc
    INC dword ptr [EBP + -0xc]          ; 00461aff
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461b02
        ;   Label: LAB_00461b02
    CMP EAX,dword ptr [EBP + 0x1c]      ; 00461b05
    JGE 0x00461b47                      ; 00461b08
        ;   XREF to: 00461b47 (CONDITIONAL_JUMP)  ; LAB_00461b47
    MOV dword ptr [EBP + -0x8],0x0      ; 00461b0a
    JMP 0x00461b19                      ; 00461b11
        ;   XREF to: 00461b19 (UNCONDITIONAL_JUMP)  ; LAB_00461b19
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461b13
        ;   Label: LAB_00461b13
    INC dword ptr [EBP + -0x8]          ; 00461b16
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461b19
        ;   Label: LAB_00461b19
    CMP EAX,dword ptr [EBP + 0x20]      ; 00461b1c
    JGE 0x00461b45                      ; 00461b1f
        ;   XREF to: 00461b45 (CONDITIONAL_JUMP)  ; LAB_00461b45
    MOV EAX,dword ptr [EBP + -0xc]      ; 00461b21
    SHL EAX,0x2                         ; 00461b24
    MOV ECX,dword ptr [EBP + 0x14]      ; 00461b27
    ADD ECX,EAX                         ; 00461b2a
    MOV EAX,dword ptr [EBP + -0x8]      ; 00461b2c
    SHL EAX,0x2                         ; 00461b2f
    MOV EDX,dword ptr [EBP + 0x18]      ; 00461b32
    ADD EDX,EAX                         ; 00461b35
    MOV EAX,dword ptr [ECX]             ; 00461b37
    CMP EAX,dword ptr [EDX]             ; 00461b39
    JNZ 0x00461b43                      ; 00461b3b
        ;   XREF to: 00461b43 (CONDITIONAL_JUMP)  ; LAB_00461b43
    MOV EAX,dword ptr [EBP + -0x4]      ; 00461b3d
    INC dword ptr [EBP + -0x4]          ; 00461b40
    JMP 0x00461b13                      ; 00461b43
        ;   XREF to: 00461b13 (UNCONDITIONAL_JUMP)  ; LAB_00461b13
        ;   Label: LAB_00461b43
    JMP 0x00461afc                      ; 00461b45
        ;   XREF to: 00461afc (UNCONDITIONAL_JUMP)  ; LAB_00461afc
        ;   Label: LAB_00461b45
    CMP dword ptr [EBP + -0x4],0x2      ; 00461b47
        ;   Label: LAB_00461b47
    JNZ 0x00461b56                      ; 00461b4b
        ;   XREF to: 00461b56 (CONDITIONAL_JUMP)  ; LAB_00461b56
    MOV dword ptr [EBP + -0x10],0x1     ; 00461b4d
    JMP 0x00461b5d                      ; 00461b54
        ;   XREF to: 00461b5d (UNCONDITIONAL_JUMP)  ; LAB_00461b5d
    MOV dword ptr [EBP + -0x10],0x0     ; 00461b56
        ;   Label: LAB_00461b56
    MOV EAX,dword ptr [EBP + -0x10]     ; 00461b5d
        ;   Label: LAB_00461b5d
    MOV ESP,EBP                         ; 00461b60
    POP EBP                             ; 00461b62
    POP EDI                             ; 00461b63
    POP ESI                             ; 00461b64
    POP EBX                             ; 00461b65
    RET                                 ; 00461b66


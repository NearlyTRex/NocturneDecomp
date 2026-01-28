; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode *tree_node)
;
; Parameters:
; SSpatialTreeNode * Stack[0x4]:4   tree_node
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   double g_SpatialTreeScale = 0.00390625
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;
; Called Functions:
;   shape_design.c_renderPolygonsByPart_FUN_004616a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004616f0
        ;   Label: shape_design.c_traverseSpatialTree_FUN_004616f0
    PUSH ESI                            ; 004616f1
    PUSH EDI                            ; 004616f2
    PUSH EBP                            ; 004616f3
    MOV EBP,ESP                         ; 004616f4
    SUB ESP,0x10                        ; 004616f6
    CMP dword ptr [EBP + 0x14],0x0      ; 004616fc
    JZ 0x004617b7                       ; 00461700
        ;   XREF to: 004617b7 (CONDITIONAL_JUMP)  ; LAB_004617b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461706
    CMP dword ptr [EAX + 0x8],0x0       ; 00461709
    JNZ 0x00461722                      ; 0046170d
        ;   XREF to: 00461722 (CONDITIONAL_JUMP)  ; LAB_00461722
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046170f
    PUSH dword ptr [EAX + 0xc]          ; 00461712
    CALL shape_design.c_renderPolygonsByPart_FUN_004616a0 ; 00461715
        ;   XREF to: 004616a0 (UNCONDITIONAL_CALL)  ; void shape_design.c_renderPolygonsByPart_FUN_004616a0(int part_id)
    ADD ESP,0x4                         ; 0046171a
    JMP 0x004617b7                      ; 0046171d
        ;   XREF to: 004617b7 (UNCONDITIONAL_JUMP)  ; LAB_004617b7
    FILD dword ptr [0x02d052b8]         ; 00461722 | g_RelativeX
        ;   Label: LAB_00461722
    FMUL double ptr [0x0061befe]        ; 00461728 | g_SpatialTreeScale
    FSTP float ptr [EBP + -0x10]        ; 0046172e
    FILD dword ptr [0x02d052bc]         ; 00461731 | g_RelativeY
    FMUL double ptr [0x0061befe]        ; 00461737 | g_SpatialTreeScale
    FSTP float ptr [EBP + -0xc]         ; 0046173d
    FILD dword ptr [0x02d052c0]         ; 00461740 | g_RelativeZ
    FMUL double ptr [0x0061befe]        ; 00461746 | g_SpatialTreeScale
    FSTP float ptr [EBP + -0x8]         ; 0046174c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046174f
    FLD float ptr [EBP + -0x10]         ; 00461752
    FMUL float ptr [EAX + 0xc]          ; 00461755
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461758
    FLD float ptr [EBP + -0xc]          ; 0046175b
    FMUL float ptr [EAX + 0x10]         ; 0046175e
    FADDP                               ; 00461761
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461763
    FLD float ptr [EBP + -0x8]          ; 00461766
    FMUL float ptr [EAX + 0x14]         ; 00461769
    FADDP                               ; 0046176c
    FSTP float ptr [EBP + -0x4]         ; 0046176e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00461771
    FLD float ptr [EBP + -0x4]          ; 00461774
    FCOMP float ptr [EAX + 0x18]        ; 00461777
    FNSTSW AX                           ; 0046177a
    SAHF                                ; 0046177c
    JBE 0x0046179c                      ; 0046177d
        ;   XREF to: 0046179c (CONDITIONAL_JUMP)  ; LAB_0046179c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046177f
    PUSH dword ptr [EAX]                ; 00461782
    CALL shape_design.c_traverseSpatialTree_FUN_004616f0 ; 00461784
        ;   XREF to: 004616f0 (UNCONDITIONAL_CALL)  ; void shape_design.c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode * tree_node)
    ADD ESP,0x4                         ; 00461789
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046178c
    PUSH dword ptr [EAX + 0x4]          ; 0046178f
    CALL shape_design.c_traverseSpatialTree_FUN_004616f0 ; 00461792
        ;   XREF to: 004616f0 (UNCONDITIONAL_CALL)  ; void shape_design.c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode * tree_node)
    ADD ESP,0x4                         ; 00461797
    JMP 0x004617b7                      ; 0046179a
        ;   XREF to: 004617b7 (UNCONDITIONAL_JUMP)  ; LAB_004617b7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046179c
        ;   Label: LAB_0046179c
    PUSH dword ptr [EAX + 0x4]          ; 0046179f
    CALL shape_design.c_traverseSpatialTree_FUN_004616f0 ; 004617a2
        ;   XREF to: 004616f0 (UNCONDITIONAL_CALL)  ; void shape_design.c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode * tree_node)
    ADD ESP,0x4                         ; 004617a7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004617aa
    PUSH dword ptr [EAX]                ; 004617ad
    CALL shape_design.c_traverseSpatialTree_FUN_004616f0 ; 004617af
        ;   XREF to: 004616f0 (UNCONDITIONAL_CALL)  ; void shape_design.c_traverseSpatialTree_FUN_004616f0(SSpatialTreeNode * tree_node)
    ADD ESP,0x4                         ; 004617b4
    MOV ESP,EBP                         ; 004617b7
        ;   Label: LAB_004617b7
    POP EBP                             ; 004617b9
    POP EDI                             ; 004617ba
    POP ESI                             ; 004617bb
    POP EBX                             ; 004617bc
    RET                                 ; 004617bd


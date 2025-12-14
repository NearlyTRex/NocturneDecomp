; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680(CLodMesh * this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_generateLOD_FUN_00516ba0 at 00516bdd
;
; Referenced Globals:
;   double g_InfiniteCollapseCost = 1.00000000000000E+35
;   undefined4 g_InfiniteCollapseCost+4
;
; Called Functions:
;   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519680
        ;   Label: shape_meshlod.cpp_CLodMesh_findMinimumCostEdge_FUN_00519680
    PUSH ESI                            ; 00519681
    PUSH EDI                            ; 00519682
    PUSH EBP                            ; 00519683
    MOV EBP,ESP                         ; 00519684
    SUB ESP,0xc                         ; 00519686
    AND ESP,0xfffffff8                  ; 00519689
    MOV ESI,dword ptr [EBP + 0x14]      ; 0051968c
    PUSH ESI                            ; 0051968f
    XOR EBX,EBX                         ; 00519690
    MOV EDX,0xffffffff                  ; 00519692
    MOV EAX,[0x00661388]                ; 00519697 | g_InfiniteCollapseCost
    ADD ESP,0x4                         ; 0051969c
    MOV ECX,dword ptr [ESI + 0x44]      ; 0051969f
    MOV dword ptr [ESP],EAX             ; 005196a2
    MOV EAX,[0x0066138c]                ; 005196a5 | g_InfiniteCollapseCost+4
    MOV dword ptr [ESP + 0x8],EDX       ; 005196aa
    MOV dword ptr [ESP + 0x4],EAX       ; 005196ae
    TEST ECX,ECX                        ; 005196b2
    JLE 0x005196d1                      ; 005196b4
        ;   XREF to: 005196d1 (CONDITIONAL_JUMP)  ; LAB_005196d1
    XOR EDI,EDI                         ; 005196b6
    MOV EDX,dword ptr [ESI + 0x48]      ; 005196b8
        ;   Label: LAB_005196b8
    ADD EDX,EDI                         ; 005196bb
    CMP dword ptr [EDX + 0x14],0x0      ; 005196bd
    JZ 0x005196dc                       ; 005196c1
        ;   XREF to: 005196dc (CONDITIONAL_JUMP)  ; LAB_005196dc
    INC EBX                             ; 005196c3
        ;   Label: LAB_005196c3
    MOV EAX,dword ptr [ESI + 0x44]      ; 005196c4
    ADD EDI,0xf0                        ; 005196c7
    CMP EBX,EAX                         ; 005196cd
    JL 0x005196b8                       ; 005196cf
        ;   XREF to: 005196b8 (CONDITIONAL_JUMP)  ; LAB_005196b8
    MOV EAX,dword ptr [ESP + 0x8]       ; 005196d1
        ;   Label: LAB_005196d1
    MOV ESP,EBP                         ; 005196d5
    POP EBP                             ; 005196d7
    POP EDI                             ; 005196d8
    POP ESI                             ; 005196d9
    POP EBX                             ; 005196da
    RET                                 ; 005196db
    CMP dword ptr [EDX + 0x20],0x0      ; 005196dc
        ;   Label: LAB_005196dc
    JZ 0x005196ec                       ; 005196e0
        ;   XREF to: 005196ec (CONDITIONAL_JUMP)  ; LAB_005196ec
    PUSH EBX                            ; 005196e2
    PUSH ESI                            ; 005196e3
    CALL shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 ; 005196e4
        ;   XREF to: 00518910 (UNCONDITIONAL_CALL)  ; void shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910(CLodMesh * this_ptr, int edge_index)
    ADD ESP,0x8                         ; 005196e9
    MOV EDX,dword ptr [ESI + 0x48]      ; 005196ec
        ;   Label: LAB_005196ec
    ADD EDX,EDI                         ; 005196ef
    FLD double ptr [EDX + 0x8]          ; 005196f1
    FCOMP double ptr [ESP]              ; 005196f4
    FNSTSW AX                           ; 005196f7
    SAHF                                ; 005196f9
    JNC 0x005196c3                      ; 005196fa
        ;   XREF to: 005196c3 (CONDITIONAL_JUMP)  ; LAB_005196c3
    MOV EAX,dword ptr [EDX + 0x8]       ; 005196fc
    MOV dword ptr [ESP],EAX             ; 005196ff
    MOV EAX,dword ptr [EDX + 0xc]       ; 00519702
    MOV dword ptr [ESP + 0x8],EBX       ; 00519705
    MOV dword ptr [ESP + 0x4],EAX       ; 00519709
    JMP 0x005196c3                      ; 0051970d
        ;   XREF to: 005196c3 (UNCONDITIONAL_JUMP)  ; LAB_005196c3


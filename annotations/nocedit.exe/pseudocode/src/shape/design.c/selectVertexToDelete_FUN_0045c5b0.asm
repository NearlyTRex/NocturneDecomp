; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_selectVertexToDelete_FUN_0045c5b0(void)
;
; Local Variables:
; char[20]         Stack[-0x30]:20  local_30
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045c854
;
; Referenced Globals:
;   TerminatedCString s_Point_to_delete_0061b336
;   int INT_016263f8
;   int INT_016263fc
;   int g_ModelCount
;   int g_CurrentModelIndex
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;   undefined4 g_LoadedVertices[0].u
;   undefined4 g_LoadedVertices[0].v
;   int g_PolygonCount
;   undefined4 g_ModelPolygonData[0].vertex_indices_count
;   undefined4 g_ModelPolygonData[0].vertex_indices[0]
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c5b0
        ;   Label: shape_design.c_selectVertexToDelete_FUN_0045c5b0
    PUSH ESI                            ; 0045c5b1
    PUSH EDI                            ; 0045c5b2
    PUSH EBP                            ; 0045c5b3
    MOV EBP,ESP                         ; 0045c5b4
    SUB ESP,0x20                        ; 0045c5b6
    MOV ECX,0x61b336                    ; 0045c5bc | = "Point to delete : "
    PUSH ECX                            ; 0045c5c1 | = "Point to delete : "
    PUSH 0xb                            ; 0045c5c2
    PUSH 0x0                            ; 0045c5c4
    PUSH 0x13                           ; 0045c5c6
    LEA ECX,[EBP + -0x20]               ; 0045c5c8
    PUSH ECX                            ; 0045c5cb
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045c5cc
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045c5d1
    MOV dword ptr [EBP + -0x8],0xffffffff ; 0045c5d4
    LEA EDI,[EBP + -0x20]               ; 0045c5db
    SUB ECX,ECX                         ; 0045c5de
    DEC ECX                             ; 0045c5e0
    XOR EAX,EAX                         ; 0045c5e1
    SCASB.REPNE ES:EDI                  ; 0045c5e3
    NOT ECX                             ; 0045c5e5
    DEC ECX                             ; 0045c5e7
    TEST ECX,ECX                        ; 0045c5e8
    JZ 0x0045c5fb                       ; 0045c5ea
        ;   XREF to: 0045c5fb (CONDITIONAL_JUMP)  ; LAB_0045c5fb
    LEA EAX,[EBP + -0x20]               ; 0045c5ec
    PUSH EAX                            ; 0045c5ef
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0045c5f0
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0045c5f5
    MOV dword ptr [EBP + -0x8],EAX      ; 0045c5f8
    CMP dword ptr [EBP + -0x8],0x0      ; 0045c5fb
        ;   Label: LAB_0045c5fb
    JL 0x0045c60c                       ; 0045c5ff
        ;   XREF to: 0045c60c (CONDITIONAL_JUMP)  ; LAB_0045c60c
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c601
    CMP EAX,dword ptr [0x01626408]      ; 0045c604 | g_VertexCount
    JL 0x0045c60e                       ; 0045c60a
        ;   XREF to: 0045c60e (CONDITIONAL_JUMP)  ; LAB_0045c60e
    JMP 0x0045c64b                      ; 0045c60c
        ;   XREF to: 0045c64b (UNCONDITIONAL_JUMP)  ; LAB_0045c64b
        ;   Label: LAB_0045c60c
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045c60e
        ;   Label: LAB_0045c60e
    MOV dword ptr [EBP + -0x4],EAX      ; 0045c611
    JMP 0x0045c61c                      ; 0045c614
        ;   XREF to: 0045c61c (UNCONDITIONAL_JUMP)  ; LAB_0045c61c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045c616
        ;   Label: LAB_0045c616
    INC dword ptr [EBP + -0x4]          ; 0045c619
    MOV EAX,[0x01626408]                ; 0045c61c | g_VertexCount
        ;   Label: LAB_0045c61c
    DEC EAX                             ; 0045c621
    CMP EAX,dword ptr [EBP + -0x4]      ; 0045c622
    JLE 0x0045c645                      ; 0045c625
        ;   XREF to: 0045c645 (CONDITIONAL_JUMP)  ; LAB_0045c645
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045c627
    INC EAX                             ; 0045c62a
    IMUL EAX,EAX,0x14                   ; 0045c62b
    IMUL ESI,dword ptr [EBP + -0x4],0x14 ; 0045c62e
    LEA EDI,[ESI + 0x162640c]           ; 0045c632 | INT_016263f8
    LEA ESI,[EAX + 0x162640c]           ; 0045c638 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0045c63e | INT_016263f8 | g_LoadedVertices
    MOVSD ES:EDI,ESI                    ; 0045c63f | INT_016263fc | g_LoadedVertices[0].vertex.y
    MOVSD ES:EDI,ESI                    ; 0045c640 | g_ModelCount | g_LoadedVertices[0].vertex.z
    MOVSD ES:EDI,ESI                    ; 0045c641 | g_CurrentModelIndex | g_LoadedVertices[0].u
    MOVSD ES:EDI,ESI                    ; 0045c642 | g_VertexCount | g_LoadedVertices[0].v
    JMP 0x0045c616                      ; 0045c643
        ;   XREF to: 0045c616 (UNCONDITIONAL_JUMP)  ; LAB_0045c616
    DEC dword ptr [0x01626408]          ; 0045c645 | g_VertexCount
        ;   Label: LAB_0045c645
    MOV dword ptr [EBP + -0x4],0x0      ; 0045c64b
        ;   Label: LAB_0045c64b
    JMP 0x0045c65a                      ; 0045c652
        ;   XREF to: 0045c65a (UNCONDITIONAL_JUMP)  ; LAB_0045c65a
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045c654
        ;   Label: LAB_0045c654
    INC dword ptr [EBP + -0x4]          ; 0045c657
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045c65a
        ;   Label: LAB_0045c65a
    CMP EAX,dword ptr [0x016e990c]      ; 0045c65d | g_PolygonCount
    JGE 0x0045c6b9                      ; 0045c663
        ;   XREF to: 0045c6b9 (CONDITIONAL_JUMP)  ; LAB_0045c6b9
    MOV dword ptr [EBP + -0xc],0x0      ; 0045c665
    JMP 0x0045c674                      ; 0045c66c
        ;   XREF to: 0045c674 (UNCONDITIONAL_JUMP)  ; LAB_0045c674
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c66e
        ;   Label: LAB_0045c66e
    INC dword ptr [EBP + -0xc]          ; 0045c671
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0045c674
        ;   Label: LAB_0045c674
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c67b
    CMP EAX,dword ptr [EDX + 0x16e99b4] ; 0045c67e | g_ModelPolygonData[0].vertex_indices_count
    JGE 0x0045c6b7                      ; 0045c684
        ;   XREF to: 0045c6b7 (CONDITIONAL_JUMP)  ; LAB_0045c6b7
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0045c686
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c68d
    SHL EAX,0x2                         ; 0045c690
    ADD EAX,EDX                         ; 0045c693
    MOV EAX,dword ptr [EAX + 0x16e99c8] ; 0045c695 | g_ModelPolygonData[0].vertex_indices[0]
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045c69b
    JL 0x0045c6b5                       ; 0045c69e
        ;   XREF to: 0045c6b5 (CONDITIONAL_JUMP)  ; LAB_0045c6b5
    IMUL EDX,dword ptr [EBP + -0x4],0x184 ; 0045c6a0
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045c6a7
    SHL EAX,0x2                         ; 0045c6aa
    ADD EAX,EDX                         ; 0045c6ad
    DEC dword ptr [EAX + 0x16e99c8]     ; 0045c6af | g_ModelPolygonData[0].vertex_indices[0]
    JMP 0x0045c66e                      ; 0045c6b5
        ;   XREF to: 0045c66e (UNCONDITIONAL_JUMP)  ; LAB_0045c66e
        ;   Label: LAB_0045c6b5
    JMP 0x0045c654                      ; 0045c6b7
        ;   XREF to: 0045c654 (UNCONDITIONAL_JUMP)  ; LAB_0045c654
        ;   Label: LAB_0045c6b7
    MOV ESP,EBP                         ; 0045c6b9
        ;   Label: LAB_0045c6b9
    POP EBP                             ; 0045c6bb
    POP EDI                             ; 0045c6bc
    POP ESI                             ; 0045c6bd
    POP EBX                             ; 0045c6be
    RET                                 ; 0045c6bf


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_selectVertexToMove_FUN_0045c530(void)
;
; Local Variables:
; char[20]         Stack[-0x28]:20  local_28
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045c869
;
; Referenced Globals:
;   TerminatedCString s_Point_to_move_0061b325
;   int g_VertexCount
;   int g_PointEditorMode
;   int g_SelectedPointIndex
;
; Called Functions:
;   crt_stdlib.c_atoi_FUN_005ffef0
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045c530
        ;   Label: shape_design.c_selectVertexToMove_FUN_0045c530
    PUSH ESI                            ; 0045c531
    PUSH EDI                            ; 0045c532
    PUSH EBP                            ; 0045c533
    MOV EBP,ESP                         ; 0045c534
    SUB ESP,0x18                        ; 0045c536
    MOV ECX,0x61b325                    ; 0045c53c | = "Point to move : "
    PUSH ECX                            ; 0045c541 | = "Point to move : "
    PUSH 0xb                            ; 0045c542
    PUSH 0x0                            ; 0045c544
    PUSH 0x13                           ; 0045c546
    LEA ECX,[EBP + -0x18]               ; 0045c548
    PUSH ECX                            ; 0045c54b
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 0045c54c
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 0045c551
    MOV dword ptr [EBP + -0x4],0xffffffff ; 0045c554
    LEA EDI,[EBP + -0x18]               ; 0045c55b
    SUB ECX,ECX                         ; 0045c55e
    DEC ECX                             ; 0045c560
    XOR EAX,EAX                         ; 0045c561
    SCASB.REPNE ES:EDI                  ; 0045c563
    NOT ECX                             ; 0045c565
    DEC ECX                             ; 0045c567
    TEST ECX,ECX                        ; 0045c568
    JZ 0x0045c57b                       ; 0045c56a
        ;   XREF to: 0045c57b (CONDITIONAL_JUMP)  ; LAB_0045c57b
    LEA EAX,[EBP + -0x18]               ; 0045c56c
    PUSH EAX                            ; 0045c56f
    CALL crt_stdlib.c_atoi_FUN_005ffef0 ; 0045c570
        ;   XREF to: 005ffef0 (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_atoi_FUN_005ffef0(char * string_ptr)
    ADD ESP,0x4                         ; 0045c575
    MOV dword ptr [EBP + -0x4],EAX      ; 0045c578
    CMP dword ptr [EBP + -0x4],0x0      ; 0045c57b
        ;   Label: LAB_0045c57b
    JL 0x0045c58c                       ; 0045c57f
        ;   XREF to: 0045c58c (CONDITIONAL_JUMP)  ; LAB_0045c58c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045c581
    CMP EAX,dword ptr [0x01626408]      ; 0045c584 | g_VertexCount
    JL 0x0045c58e                       ; 0045c58a
        ;   XREF to: 0045c58e (CONDITIONAL_JUMP)  ; LAB_0045c58e
    JMP 0x0045c5a0                      ; 0045c58c
        ;   XREF to: 0045c5a0 (UNCONDITIONAL_JUMP)  ; LAB_0045c5a0
        ;   Label: LAB_0045c58c
    MOV dword ptr [0x01e528b0],0x1      ; 0045c58e | g_PointEditorMode
        ;   Label: LAB_0045c58e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0045c598
    MOV [0x01e528b4],EAX                ; 0045c59b | g_SelectedPointIndex
    MOV ESP,EBP                         ; 0045c5a0
        ;   Label: LAB_0045c5a0
    POP EBP                             ; 0045c5a2
    POP EDI                             ; 0045c5a3
    POP ESI                             ; 0045c5a4
    POP EBX                             ; 0045c5a5
    RET                                 ; 0045c5a6


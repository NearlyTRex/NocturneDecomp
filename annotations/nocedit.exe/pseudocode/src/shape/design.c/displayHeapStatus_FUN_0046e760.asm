; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_displayHeapStatus_FUN_0046e760(int line_number)
;
; Parameters:
; int              Stack[0x4]:4   line_number
;
; Referenced Globals:
;   void* switchdataD_0046e7d8 = 0046e779
;   TerminatedCString s_OK_heap_is_good_0061ded0
;   TerminatedCString s_OK_heap_is_empty_0061dee2
;   TerminatedCString s_ERROR_heap_is_damaged_0061def5
;   TerminatedCString s_ERROR_bad_node_in_heap_0061df0d
;
; Called Functions:
;   crt_watcom.c__heapchk_FUN_00600ad0
;   engine_2d.c_drawText_FUN_00401fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e760
        ;   Label: shape_design.c_displayHeapStatus_FUN_0046e760
    PUSH ESI                            ; 0046e761
    PUSH EDI                            ; 0046e762
    PUSH EBP                            ; 0046e763
    MOV EBP,ESP                         ; 0046e764
    SUB ESP,0x54                        ; 0046e766
    CALL crt_watcom.c__heapchk_FUN_00600ad0 ; 0046e76c
        ;   XREF to: 00600ad0 (UNCONDITIONAL_CALL)  ; undefined crt_watcom.c__heapchk_FUN_00600ad0()
    MOV dword ptr [EBP + -0x4],EAX      ; 0046e771
    JMP 0x0046e7e8                      ; 0046e774
        ;   XREF to: 0046e7e8 (UNCONDITIONAL_JUMP)  ; LAB_0046e7e8
    IMUL EAX,dword ptr [EBP + 0x14],0xb ; 0046e779
        ;   Label: caseD_0
    PUSH EAX                            ; 0046e77d
    PUSH 0x0                            ; 0046e77e
    MOV EAX,0x61ded0                    ; 0046e780 | = "OK - heap is good"
    PUSH EAX                            ; 0046e785 | = "OK - heap is good"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e786
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046e78b
    JMP 0x0046e7fa                      ; 0046e78e
        ;   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)  ; default
    IMUL EAX,dword ptr [EBP + 0x14],0xb ; 0046e790
        ;   Label: caseD_1
    PUSH EAX                            ; 0046e794
    PUSH 0x0                            ; 0046e795
    MOV EAX,0x61dee2                    ; 0046e797 | = "OK - heap is empty"
    PUSH EAX                            ; 0046e79c | = "OK - heap is empty"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e79d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046e7a2
    JMP 0x0046e7fa                      ; 0046e7a5
        ;   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)  ; default
    IMUL EAX,dword ptr [EBP + 0x14],0xb ; 0046e7a7
        ;   Label: caseD_2
    PUSH EAX                            ; 0046e7ab
    PUSH 0x0                            ; 0046e7ac
    MOV EAX,0x61def5                    ; 0046e7ae | = "ERROR - heap is damaged"
    PUSH EAX                            ; 0046e7b3 | = "ERROR - heap is damaged"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e7b4
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046e7b9
    JMP 0x0046e7fa                      ; 0046e7bc
        ;   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)  ; default
    IMUL EAX,dword ptr [EBP + 0x14],0xb ; 0046e7be
        ;   Label: caseD_3
    PUSH EAX                            ; 0046e7c2
    PUSH 0x0                            ; 0046e7c3
    MOV EAX,0x61df0d                    ; 0046e7c5 | = "ERROR - bad node in heap"
    PUSH EAX                            ; 0046e7ca | = "ERROR - bad node in heap"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0046e7cb
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0046e7d0
    JMP 0x0046e7fa                      ; 0046e7d3
        ;   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)  ; default
    JMP 0x0046e7fa                      ; 0046e7d5
        ;   XREF to: 0046e7fa (UNCONDITIONAL_JUMP)  ; default
        ;   Label: LAB_0046e7d5
    CMP dword ptr [EBP + -0x4],0x3      ; 0046e7e8
        ;   Label: LAB_0046e7e8
    JA 0x0046e7d5                       ; 0046e7ec
        ;   XREF to: 0046e7d5 (CONDITIONAL_JUMP)  ; LAB_0046e7d5
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046e7ee
    SHL EAX,0x2                         ; 0046e7f1
    JMP dword ptr [EAX + 0x46e7d8]      ; 0046e7f4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESP,EBP                         ; 0046e7fa
        ;   Label: default
    POP EBP                             ; 0046e7fc
    POP EDI                             ; 0046e7fd
    POP ESI                             ; 0046e7fe
    POP EBX                             ; 0046e7ff
    RET                                 ; 0046e800


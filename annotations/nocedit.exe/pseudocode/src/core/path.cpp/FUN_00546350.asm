; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_path.cpp_FUN_00546350()
;
;
; Referenced Globals:
;   CPathQueueNode[5000] g_PathfindingQueue
;   undefined4 g_PathfindingQueue[0].cost
;   undefined4 g_PathfindingQueue[0].z
;   int g_PathfindingQueueTail
;   char[101][100] g_PathfindingVisited
;   int g_PathfindingNodesExpanded
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546350
        ;   Label: core_path.cpp_FUN_00546350
    MOV ECX,dword ptr [0x030d2850]      ; 00546351 | int g_PathfindingQueueTail
    MOV EDX,dword ptr [ESP + 0x10]      ; 00546357
    LEA EAX,[EDX*0x4 + 0x0]             ; 0054635b
    SUB EAX,EDX                         ; 00546362
    SHL EAX,0x3                         ; 00546364
    ADD EAX,EDX                         ; 00546367
    MOV EDX,dword ptr [ESP + 0x8]       ; 00546369
    SHL EAX,0x2                         ; 0054636d
    ADD EAX,EDX                         ; 00546370
    MOV DL,byte ptr [ESP + 0x14]        ; 00546372
    MOV byte ptr [EAX + 0x30d2858],DL   ; 00546376 | char[101][100] g_PathfindingVisited
    LEA EAX,[ECX*0x4 + 0x0]             ; 0054637c
    MOV EBX,dword ptr [0x030d4fcc]      ; 00546383 | int g_PathfindingNodesExpanded
    SUB EAX,ECX                         ; 00546389
    MOV EDX,dword ptr [ESP + 0x8]       ; 0054638b
    INC EBX                             ; 0054638f
    MOV dword ptr [EAX*0x4 + 0x30c3dec],EDX ; 00546390 | CPathQueueNode[5000] g_PathfindingQueue
    MOV EDX,dword ptr [ESP + 0xc]       ; 00546397
    MOV dword ptr [0x030d4fcc],EBX      ; 0054639b | int g_PathfindingNodesExpanded
    MOV dword ptr [EAX*0x4 + 0x30c3df0],EDX ; 005463a1 | g_PathfindingQueue[0].cost
    MOV EDX,dword ptr [ESP + 0x10]      ; 005463a8
    INC ECX                             ; 005463ac
    MOV dword ptr [EAX*0x4 + 0x30c3df4],EDX ; 005463ad | g_PathfindingQueue[0].z
    CMP ECX,0x1388                      ; 005463b4
    JL 0x005463be                       ; 005463ba | LAB_005463be
        ;   XREF to: 005463be (CONDITIONAL_JUMP)
    XOR ECX,ECX                         ; 005463bc
    MOV dword ptr [0x030d2850],ECX      ; 005463be | int g_PathfindingQueueTail
        ;   Label: LAB_005463be
    POP EBX                             ; 005463c4
    RET                                 ; 005463c5


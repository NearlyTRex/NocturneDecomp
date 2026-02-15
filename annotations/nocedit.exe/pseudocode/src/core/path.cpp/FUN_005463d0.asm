; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_FUN_005463d0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_core_path_cpp_0063e878
;   TerminatedCString s_queuePop_empty_queue_0063e889
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CPathQueueNode[5000] g_PathfindingQueue
;   undefined4 g_PathfindingQueue[0].cost
;   undefined4 g_PathfindingQueue[0].z
;   int g_PathfindingQueueHead
;   int g_PathfindingQueueTail
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005463d0
        ;   Label: core_path.cpp_FUN_005463d0
    MOV EBX,dword ptr [0x030d284c]      ; 005463d1 | g_PathfindingQueueHead
    CMP EBX,dword ptr [0x030d2850]      ; 005463d7 | g_PathfindingQueueTail
    JZ 0x00546428                       ; 005463dd
        ;   XREF to: 00546428 (CONDITIONAL_JUMP)  ; LAB_00546428
    MOV EBX,dword ptr [0x030d284c]      ; 005463df | g_PathfindingQueueHead
        ;   Label: LAB_005463df
    LEA EAX,[EBX*0x4 + 0x0]             ; 005463e5
    SUB EAX,EBX                         ; 005463ec
    MOV ECX,dword ptr [ESP + 0x8]       ; 005463ee
    MOV EDX,dword ptr [EAX*0x4 + 0x30c3dec] ; 005463f2 | g_PathfindingQueue
    MOV dword ptr [ECX],EDX             ; 005463f9
    MOV ECX,dword ptr [ESP + 0xc]       ; 005463fb
    MOV EDX,dword ptr [EAX*0x4 + 0x30c3df0] ; 005463ff | g_PathfindingQueue[0].cost
    MOV dword ptr [ECX],EDX             ; 00546406
    MOV EDX,dword ptr [ESP + 0x10]      ; 00546408
    MOV EAX,dword ptr [EAX*0x4 + 0x30c3df4] ; 0054640c | g_PathfindingQueue[0].z
    INC EBX                             ; 00546413
    MOV dword ptr [EDX],EAX             ; 00546414
    CMP EBX,0x1388                      ; 00546416
    JL 0x00546420                       ; 0054641c
        ;   XREF to: 00546420 (CONDITIONAL_JUMP)  ; LAB_00546420
    XOR EBX,EBX                         ; 0054641e
    MOV dword ptr [0x030d284c],EBX      ; 00546420 | g_PathfindingQueueHead
        ;   Label: LAB_00546420
    POP EBX                             ; 00546426
    RET                                 ; 00546427
    PUSH ESI                            ; 00546428
        ;   Label: LAB_00546428
    MOV ECX,0x63e878                    ; 00546429 | = "..\\core\\path.cpp"
    MOV ESI,0xdf                        ; 0054642e
    PUSH 0x63e889                       ; 00546433 | = "queuePop - empty queue?!"
    MOV dword ptr [0x02f0ca48],ECX      ; 00546438 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0054643e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00546444
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00546449
    POP ESI                             ; 0054644c
    JMP 0x005463df                      ; 0054644d
        ;   XREF to: 005463df (UNCONDITIONAL_JUMP)  ; LAB_005463df


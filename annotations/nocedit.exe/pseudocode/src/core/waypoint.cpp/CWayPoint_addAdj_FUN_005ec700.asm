; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_waypoint_cpp_CWayPoint_addAdj_FUN_005ec700(CWayPoint *this_ptr,CWayPoint *target)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; CWayPoint *      Stack[0x8]:4   target
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_rebuildConnectivity_FUN_005ec4f0 at 005ec5b2
;
; Referenced Globals:
;   TerminatedCString s_core_waypoint_cpp_00657634
;   TerminatedCString s_CWayPoint_addAdj_too_man_00657649
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_waypoint.cpp_CWayPoint_cleanupAdjacency_FUN_005ec830
;   core_waypoint.cpp_CWayPoint_removeAllAdjTo_FUN_005ec640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec700
        ;   Label: core_waypoint.cpp_CWayPoint_addAdj_FUN_005ec700
    PUSH ESI                            ; 005ec701
    SUB ESP,0x10                        ; 005ec702
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005ec705
    MOV ESI,dword ptr [ESP + 0x20]      ; 005ec709
    PUSH EBX                            ; 005ec70d
    CALL core_waypoint.cpp_CWayPoint_cleanupAdjacency_FUN_005ec830 ; 005ec70e
        ;   XREF to: 005ec830 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_CWayPoint_cleanupAdjacency_FUN_005ec830(CWayPoint * this_ptr)
    ADD ESP,0x4                         ; 005ec713
    PUSH ESI                            ; 005ec716
    PUSH EBX                            ; 005ec717
    CALL core_waypoint.cpp_CWayPoint_removeAllAdjTo_FUN_005ec640 ; 005ec718
        ;   XREF to: 005ec640 (UNCONDITIONAL_CALL)  ; void core_waypoint.cpp_CWayPoint_removeAllAdjTo_FUN_005ec640(CWayPoint * this_ptr, CWayPoint * target)
    MOV EDX,dword ptr [EBX + 0x370]     ; 005ec71d
    ADD ESP,0x8                         ; 005ec723
    CMP EDX,0x3c                        ; 005ec726
    JGE 0x005ec77d                      ; 005ec729
        ;   XREF to: 005ec77d (CONDITIONAL_JUMP)  ; LAB_005ec77d
    MOV EAX,dword ptr [EBX + 0x370]     ; 005ec72b
        ;   Label: LAB_005ec72b
    LEA EDX,[EBX + 0x20]                ; 005ec731
    MOV dword ptr [EBX + EAX*0x8 + 0x374],ESI ; 005ec734
    LEA EAX,[ESI + 0x20]                ; 005ec73b
    FLD float ptr [EDX]                 ; 005ec73e
    FSUB float ptr [EAX]                ; 005ec740
    FMUL ST0                            ; 005ec742
    FLD float ptr [EDX + 0x4]           ; 005ec744
    FSUB float ptr [EAX + 0x4]          ; 005ec747
    FMUL ST0                            ; 005ec74a
    FLD float ptr [EDX + 0x8]           ; 005ec74c
    FXCH                                ; 005ec74f
    FADDP ST2,ST0                       ; 005ec751
    FSUB float ptr [EAX + 0x8]          ; 005ec753
    FMUL ST0                            ; 005ec756
    FADDP                               ; 005ec758
    FSQRT                               ; 005ec75a
    MOV EAX,dword ptr [EBX + 0x370]     ; 005ec75c
    FSTP float ptr [ESP + 0x8]          ; 005ec762
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ec766
    MOV dword ptr [EBX + EAX*0x8 + 0x378],EDX ; 005ec76a
    INC dword ptr [EBX + 0x370]         ; 005ec771
    ADD ESP,0x10                        ; 005ec777
    POP ESI                             ; 005ec77a
    POP EBX                             ; 005ec77b
    RET                                 ; 005ec77c
    PUSH EDI                            ; 005ec77d
        ;   Label: LAB_005ec77d
    MOV ECX,0x657634                    ; 005ec77e | = "..\\core\\waypoint.cpp"
    MOV EDI,0x188                       ; 005ec783
    PUSH 0x657649                       ; 005ec788 | = "CWayPoint::addAdj - too many adjacent..."
    MOV dword ptr [0x02f0ca48],ECX      ; 005ec78d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005ec793 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ec799
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ec79e
    POP EDI                             ; 005ec7a1
    JMP 0x005ec72b                      ; 005ec7a2
        ;   XREF to: 005ec72b (UNCONDITIONAL_JUMP)  ; LAB_005ec72b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_waypoint_cpp_CWayPoint_removeAdj_FUN_005ec7b0(void)
;
;
; XREF[2]:
;   core_waypoint.cpp_CallWayPoint_removeAdj_FUN_005ec640 at 005ec675
;   core_waypoint.cpp_FUN_005ec830 at 005ec861
;
; Referenced Globals:
;   TerminatedCString s_core_waypoint_cpp_0065767a
;   TerminatedCString s_CWayPoint_removeAdj_inva_0065768f
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_string.c_memmove_FUN_005fe5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec7b0
        ;   Label: core_waypoint.cpp_CWayPoint_removeAdj_FUN_005ec7b0
    PUSH ESI                            ; 005ec7b1
    PUSH EBP                            ; 005ec7b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005ec7b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005ec7b7
    TEST ESI,ESI                        ; 005ec7bb
    JL 0x005ec7fb                       ; 005ec7bd
        ;   XREF to: 005ec7fb (CONDITIONAL_JUMP)  ; LAB_005ec7fb
    CMP ESI,dword ptr [EBX + 0x370]     ; 005ec7bf
    JGE 0x005ec7fb                      ; 005ec7c5
        ;   XREF to: 005ec7fb (CONDITIONAL_JUMP)  ; LAB_005ec7fb
    MOV EBP,dword ptr [EBX + 0x370]     ; 005ec7c7
        ;   Label: LAB_005ec7c7
    DEC EBP                             ; 005ec7cd
    MOV EAX,EBP                         ; 005ec7ce
    SUB EAX,ESI                         ; 005ec7d0
    SHL EAX,0x3                         ; 005ec7d2
    PUSH EAX                            ; 005ec7d5
    LEA EAX,[ESI*0x8 + 0x0]             ; 005ec7d6
    ADD EBX,0x374                       ; 005ec7dd
    LEA ESI,[EAX + 0x8]                 ; 005ec7e3
    ADD ESI,EBX                         ; 005ec7e6
    PUSH ESI                            ; 005ec7e8
    ADD EAX,EBX                         ; 005ec7e9
    PUSH EAX                            ; 005ec7eb
    MOV dword ptr [EBX + -0x4],EBP      ; 005ec7ec
    CALL crt_string.c_memmove_FUN_005fe5e0 ; 005ec7ef
        ;   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005fe5e0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 005ec7f4
    POP EBP                             ; 005ec7f7
    POP ESI                             ; 005ec7f8
    POP EBX                             ; 005ec7f9
    RET                                 ; 005ec7fa
    PUSH EDI                            ; 005ec7fb
        ;   Label: LAB_005ec7fb
    MOV ECX,0x65767a                    ; 005ec7fc | = "..\\core\\waypoint.cpp"
    MOV EDI,0x18f                       ; 005ec801
    PUSH 0x65768f                       ; 005ec806 | = "CWayPoint::removeAdj - invalid index"
    MOV dword ptr [0x02f0ca48],ECX      ; 005ec80b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005ec811 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005ec817
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005ec81c
    POP EDI                             ; 005ec81f
    JMP 0x005ec7c7                      ; 005ec820
        ;   XREF to: 005ec7c7 (UNCONDITIONAL_JUMP)  ; LAB_005ec7c7


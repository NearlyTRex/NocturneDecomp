; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_process_FUN_0056e230(CTrigger *this_ptr,float delta_time)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0056e220 = 0056e2f0
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e230
        ;   Label: core_trigger.cpp_CTrigger_process_FUN_0056e230
    PUSH ESI                            ; 0056e231
    PUSH EDI                            ; 0056e232
    PUSH EBP                            ; 0056e233
    MOV EBP,ESP                         ; 0056e234
    SUB ESP,0xe0                        ; 0056e236
    AND ESP,0xfffffff8                  ; 0056e23c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e23f
    XOR EDX,EDX                         ; 0056e242
    MOV dword ptr [EAX + 0x300],EDX     ; 0056e244
    MOV EAX,dword ptr [EAX + 0x174]     ; 0056e24a
    MOV dword ptr [ESP + 0xcc],EDX      ; 0056e250
    CMP EAX,0x9                         ; 0056e257
    JA 0x0056e2db                       ; 0056e25a
        ;   XREF to: 0056e2db (CONDITIONAL_JUMP)  ; LAB_0056e2db
    JMP dword ptr [EAX*0x4 + 0x56e1f8]  ; 0056e260
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e2db
        ;   Label: LAB_0056e2db
    MOV EAX,dword ptr [EAX + 0x15c]     ; 0056e2de
    CMP EAX,0x3                         ; 0056e2e4
    JA 0x0056e30c                       ; 0056e2e7
        ;   XREF to: 0056e30c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x56e220]  ; 0056e2e9 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0xcc]      ; 0056e2f0
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 0056e2f7
    JZ 0x0056e817                       ; 0056e2f9
        ;   XREF to: 0056e817 (CONDITIONAL_JUMP)  ; LAB_0056e817
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e2ff
        ;   Label: LAB_0056e2ff
    MOV dword ptr [EAX + 0x16c],0x1     ; 0056e302
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056e30c
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0056e30f
    MOV EBX,dword ptr [EDX + 0x16c]     ; 0056e316
    MOV dword ptr [EDX + 0x2ec],EAX     ; 0056e31c
    TEST EBX,EBX                        ; 0056e322
    JZ 0x0056e881                       ; 0056e324
        ;   XREF to: 0056e881 (CONDITIONAL_JUMP)  ; LAB_0056e881
    LEA EAX,[EDX + 0x224]               ; 0056e32a
    PUSH EAX                            ; 0056e330
    MOV EDI,dword ptr [0x005fba60]      ; 0056e331 | DAT_005fba60
    PUSH EDI                            ; 0056e337
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 0056e338
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0056e33d
    MOV ESP,EBP                         ; 0056e340
    POP EBP                             ; 0056e342
    POP EDI                             ; 0056e343
    POP ESI                             ; 0056e344
    POP EBX                             ; 0056e345
    RET                                 ; 0056e346
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e817
        ;   Label: LAB_0056e817
    CMP dword ptr [EAX + 0x15c],0x0     ; 0056e81a
    JNZ 0x0056e30c                      ; 0056e821
        ;   XREF to: 0056e30c (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x16c],EDX     ; 0056e827
    JMP 0x0056e30c                      ; 0056e82d
        ;   XREF to: 0056e30c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e832
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0x2ec],0x0     ; 0056e835
    JNZ 0x0056e84c                      ; 0056e83c
        ;   XREF to: 0056e84c (CONDITIONAL_JUMP)  ; LAB_0056e84c
    CMP dword ptr [ESP + 0xcc],0x0      ; 0056e83e
    JNZ 0x0056e2ff                      ; 0056e846
        ;   XREF to: 0056e2ff (CONDITIONAL_JUMP)  ; LAB_0056e2ff
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e84c
        ;   Label: LAB_0056e84c
    MOV dword ptr [EAX + 0x16c],0x0     ; 0056e84f
    JMP 0x0056e30c                      ; 0056e859
        ;   XREF to: 0056e30c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e85e
        ;   Label: caseD_3
    MOV EBX,dword ptr [EAX + 0x2ec]     ; 0056e861
    CMP EBX,0x1                         ; 0056e867
    JNZ 0x0056e84c                      ; 0056e86a
        ;   XREF to: 0056e84c (CONDITIONAL_JUMP)  ; LAB_0056e84c
    CMP dword ptr [ESP + 0xcc],0x0      ; 0056e86c
    JNZ 0x0056e84c                      ; 0056e874
        ;   XREF to: 0056e84c (CONDITIONAL_JUMP)  ; LAB_0056e84c
    MOV dword ptr [EAX + 0x16c],EBX     ; 0056e876
    JMP 0x0056e30c                      ; 0056e87c
        ;   XREF to: 0056e30c (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EDX + 0x288]               ; 0056e881
        ;   Label: LAB_0056e881
    PUSH EAX                            ; 0056e887
    MOV ESI,dword ptr [0x005fba60]      ; 0056e888 | DAT_005fba60
    PUSH ESI                            ; 0056e88e
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 0056e88f
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0056e894
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056e897
    MOV dword ptr [EAX + 0x300],EBX     ; 0056e89a
    MOV ESP,EBP                         ; 0056e8a0
    POP EBP                             ; 0056e8a2
    POP EDI                             ; 0056e8a3
    POP ESI                             ; 0056e8a4
    POP EBX                             ; 0056e8a5
    RET                                 ; 0056e8a6


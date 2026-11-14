; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_process_FUN_005779d0(CTrigger *this_ptr,float delta_time)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_005779bc = 00577a90
;   undefined4 DAT_006141f0
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005779d0
        ;   Label: core_trigger.cpp_CTrigger_process_FUN_005779d0
    PUSH ESI                            ; 005779d1
    PUSH EDI                            ; 005779d2
    PUSH EBP                            ; 005779d3
    MOV EBP,ESP                         ; 005779d4
    SUB ESP,0xe0                        ; 005779d6
    AND ESP,0xfffffff8                  ; 005779dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005779df
    XOR EDX,EDX                         ; 005779e2
    MOV dword ptr [EAX + 0x45c],EDX     ; 005779e4
    MOV EAX,dword ptr [EAX + 0x2d0]     ; 005779ea
    MOV dword ptr [ESP + 0xcc],EDX      ; 005779f0
    CMP EAX,0x9                         ; 005779f7
    JA 0x00577a7b                       ; 005779fa
        ;   XREF to: 00577a7b (CONDITIONAL_JUMP)  ; LAB_00577a7b
    JMP dword ptr [EAX*0x4 + 0x577994]  ; 00577a00
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577a7b
        ;   Label: LAB_00577a7b
    MOV EAX,dword ptr [EAX + 0x2b8]     ; 00577a7e
    CMP EAX,0x3                         ; 00577a84
    JA 0x00577aac                       ; 00577a87
        ;   XREF to: 00577aac (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5779bc]  ; 00577a89 | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0xcc]      ; 00577a90
        ;   Label: caseD_0
    TEST EDX,EDX                        ; 00577a97
    JZ 0x00577fb5                       ; 00577a99
        ;   XREF to: 00577fb5 (CONDITIONAL_JUMP)  ; LAB_00577fb5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577a9f
        ;   Label: LAB_00577a9f
    MOV dword ptr [EAX + 0x2c8],0x1     ; 00577aa2
    MOV EDX,dword ptr [EBP + 0x14]      ; 00577aac
        ;   Label: default
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00577aaf
    MOV EBX,dword ptr [EDX + 0x2c8]     ; 00577ab6
    MOV dword ptr [EDX + 0x448],EAX     ; 00577abc
    TEST EBX,EBX                        ; 00577ac2
    JZ 0x0057801f                       ; 00577ac4
        ;   XREF to: 0057801f (CONDITIONAL_JUMP)  ; LAB_0057801f
    LEA EAX,[EDX + 0x380]               ; 00577aca
    PUSH EAX                            ; 00577ad0
    MOV EDI,dword ptr [0x006141f0]      ; 00577ad1 | DAT_006141f0
    PUSH EDI                            ; 00577ad7
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 00577ad8
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00577add
    MOV ESP,EBP                         ; 00577ae0
    POP EBP                             ; 00577ae2
    POP EDI                             ; 00577ae3
    POP ESI                             ; 00577ae4
    POP EBX                             ; 00577ae5
    RET                                 ; 00577ae6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577fb5
        ;   Label: LAB_00577fb5
    CMP dword ptr [EAX + 0x2b8],0x0     ; 00577fb8
    JNZ 0x00577aac                      ; 00577fbf
        ;   XREF to: 00577aac (CONDITIONAL_JUMP)  ; default
    MOV dword ptr [EAX + 0x2c8],EDX     ; 00577fc5
    JMP 0x00577aac                      ; 00577fcb
        ;   XREF to: 00577aac (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577fd0
        ;   Label: caseD_2
    CMP dword ptr [EAX + 0x448],0x0     ; 00577fd3
    JNZ 0x00577fea                      ; 00577fda
        ;   XREF to: 00577fea (CONDITIONAL_JUMP)  ; LAB_00577fea
    CMP dword ptr [ESP + 0xcc],0x0      ; 00577fdc
    JNZ 0x00577a9f                      ; 00577fe4
        ;   XREF to: 00577a9f (CONDITIONAL_JUMP)  ; LAB_00577a9f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577fea
        ;   Label: LAB_00577fea
    MOV dword ptr [EAX + 0x2c8],0x0     ; 00577fed
    JMP 0x00577aac                      ; 00577ff7
        ;   XREF to: 00577aac (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00577ffc
        ;   Label: caseD_3
    MOV EBX,dword ptr [EAX + 0x448]     ; 00577fff
    CMP EBX,0x1                         ; 00578005
    JNZ 0x00577fea                      ; 00578008
        ;   XREF to: 00577fea (CONDITIONAL_JUMP)  ; LAB_00577fea
    CMP dword ptr [ESP + 0xcc],0x0      ; 0057800a
    JNZ 0x00577fea                      ; 00578012
        ;   XREF to: 00577fea (CONDITIONAL_JUMP)  ; LAB_00577fea
    MOV dword ptr [EAX + 0x2c8],EBX     ; 00578014
    JMP 0x00577aac                      ; 0057801a
        ;   XREF to: 00577aac (UNCONDITIONAL_JUMP)  ; default
    LEA EAX,[EDX + 0x3e4]               ; 0057801f
        ;   Label: LAB_0057801f
    PUSH EAX                            ; 00578025
    MOV ESI,dword ptr [0x006141f0]      ; 00578026 | DAT_006141f0
    PUSH ESI                            ; 0057802c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 0057802d
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00578032
    MOV EAX,dword ptr [EBP + 0x14]      ; 00578035
    MOV dword ptr [EAX + 0x45c],EBX     ; 00578038
    MOV ESP,EBP                         ; 0057803e
    POP EBP                             ; 00578040
    POP EDI                             ; 00578041
    POP ESI                             ; 00578042
    POP EBX                             ; 00578043
    RET                                 ; 00578044


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_executeCommandString_FUN_00489510(CEventList *this_ptr,char *command_string)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   command_string
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
;
; XREF[2]:
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0 at 00489503
;   core_event.cpp_CEventList_validateCommands_FUN_0048e3e0 at 0048e401
;
; Referenced Globals:
;   undefined4 DAT_005d2ff5
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_0061ed94
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01c3dd0c
;   undefined4 DAT_01c3dd10
;
; Called Functions:
;   core_event.cpp_FUN_00489670
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489510
        ;   Label: core_event.cpp_CEventList_executeCommandString_FUN_00489510
    PUSH ESI                            ; 00489511
    SUB ESP,0x64                        ; 00489512
    MOV ESI,dword ptr [ESP + 0x70]      ; 00489515
    MOV EBX,dword ptr [ESP + 0x74]      ; 00489519
    MOV EDX,EBX                         ; 0048951d
        ;   Label: LAB_0048951d
    MOV AL,byte ptr [EDX]               ; 0048951f
        ;   Label: LAB_0048951f
    INC AL                              ; 00489521
    AND EAX,0xff                        ; 00489523
    TEST byte ptr [EAX + 0x61ed94],0x2  ; 00489528 | DAT_0061ed94
    JZ 0x00489534                       ; 0048952f
        ;   XREF to: 00489534 (CONDITIONAL_JUMP)  ; LAB_00489534
    INC EDX                             ; 00489531
    JMP 0x0048951f                      ; 00489532
        ;   XREF to: 0048951f (UNCONDITIONAL_JUMP)  ; LAB_0048951f
    MOV CL,byte ptr [EDX]               ; 00489534
        ;   Label: LAB_00489534
    MOV EBX,EDX                         ; 00489536
    TEST CL,CL                          ; 00489538
    JZ 0x004895bd                       ; 0048953a
        ;   XREF to: 004895bd (CONDITIONAL_JUMP)  ; LAB_004895bd
    MOV EAX,ESP                         ; 00489540
    CMP CL,0x3b                         ; 00489542
    JZ 0x00489571                       ; 00489545
        ;   XREF to: 00489571 (CONDITIONAL_JUMP)  ; LAB_00489571
        ;   Label: LAB_00489545
    MOV DL,byte ptr [EBX]               ; 00489547
    MOV byte ptr [EAX],DL               ; 00489549
    INC EAX                             ; 0048954b
    MOV DH,byte ptr [EBX + 0x1]         ; 0048954c
    INC EBX                             ; 0048954f
    TEST DH,DH                          ; 00489550
    JNZ 0x00489574                      ; 00489552
        ;   XREF to: 00489574 (CONDITIONAL_JUMP)  ; LAB_00489574
    MOV EDX,ESP                         ; 00489554
        ;   Label: LAB_00489554
    CMP EAX,EDX                         ; 00489556
    JBE 0x00489579                      ; 00489558
        ;   XREF to: 00489579 (CONDITIONAL_JUMP)  ; LAB_00489579
    MOV DL,byte ptr [EAX + -0x1]        ; 0048955a
    INC DL                              ; 0048955d
    AND EDX,0xff                        ; 0048955f
    TEST byte ptr [EDX + 0x61ed94],0x2  ; 00489565 | DAT_0061ed94
    JZ 0x00489579                       ; 0048956c
        ;   XREF to: 00489579 (CONDITIONAL_JUMP)  ; LAB_00489579
    DEC EAX                             ; 0048956e
    JMP 0x00489554                      ; 0048956f
        ;   XREF to: 00489554 (UNCONDITIONAL_JUMP)  ; LAB_00489554
    INC EBX                             ; 00489571
        ;   Label: LAB_00489571
    JMP 0x00489554                      ; 00489572
        ;   XREF to: 00489554 (UNCONDITIONAL_JUMP)  ; LAB_00489554
    CMP byte ptr [EBX],0x3b             ; 00489574
        ;   Label: LAB_00489574
    JMP 0x00489545                      ; 00489577
        ;   XREF to: 00489545 (UNCONDITIONAL_JUMP)  ; LAB_00489545
    MOV EDX,ESP                         ; 00489579
        ;   Label: LAB_00489579
    CMP EAX,EDX                         ; 0048957b
    JBE 0x0048951d                      ; 0048957d
        ;   XREF to: 0048951d (CONDITIONAL_JUMP)  ; LAB_0048951d
    PUSH EDX                            ; 0048957f
    PUSH ESI                            ; 00489580
    MOV byte ptr [EAX],0x0              ; 00489581
    CALL core_event.cpp_FUN_00489670    ; 00489584
        ;   XREF to: 00489670 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_FUN_00489670()
    ADD ESP,0x8                         ; 00489589
    TEST EAX,EAX                        ; 0048958c
    JNZ 0x0048951d                      ; 0048958e
        ;   XREF to: 0048951d (CONDITIONAL_JUMP)  ; LAB_0048951d
    CMP dword ptr [0x01c3dd0c],0x0      ; 00489590 | DAT_01c3dd0c
    JZ 0x0048959f                       ; 00489597
        ;   XREF to: 0048959f (CONDITIONAL_JUMP)  ; LAB_0048959f
    ADD ESP,0x64                        ; 00489599
    POP ESI                             ; 0048959c
    POP EBX                             ; 0048959d
    RET                                 ; 0048959e
    PUSH 0x1c3dd10                      ; 0048959f | DAT_01c3dd10
        ;   Label: LAB_0048959f
    PUSH 0x5d2ff5                       ; 004895a4 | DAT_005d2ff5
    MOV ECX,dword ptr [0x00609ed0]      ; 004895a9 | g_CConsolePtr
    PUSH ECX                            ; 004895af | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004895b0
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 004895b5
    JMP 0x0048951d                      ; 004895b8
        ;   XREF to: 0048951d (UNCONDITIONAL_JUMP)  ; LAB_0048951d
    MOV EAX,0x1                         ; 004895bd
        ;   Label: LAB_004895bd
    ADD ESP,0x64                        ; 004895c2
    POP ESI                             ; 004895c5
    POP EBX                             ; 004895c6
    RET                                 ; 004895c7


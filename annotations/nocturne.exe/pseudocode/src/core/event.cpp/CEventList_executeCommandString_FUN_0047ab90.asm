; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_CEventList_executeCommandString_FUN_0047ab90(CEventList *this_ptr,char *command_string)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   command_string
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
;
; XREF[2]:
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70 at 0047ab83
;   core_event.cpp_CEventList_validateCommands_FUN_0047dcd0 at 0047dcf1
;
; Referenced Globals:
;   TerminatedCString s_s_0057f57d
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   undefined4 DAT_005c168c
;   CConsole g_CConsole_0077ad0c
;   undefined4 DAT_01c08b5c
;   undefined4 DAT_01c08b60
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ab90
        ;   Label: core_event.cpp_CEventList_executeCommandString_FUN_0047ab90
    PUSH ESI                            ; 0047ab91
    SUB ESP,0x64                        ; 0047ab92
    MOV ESI,dword ptr [ESP + 0x70]      ; 0047ab95
    MOV EBX,dword ptr [ESP + 0x74]      ; 0047ab99
    MOV EDX,EBX                         ; 0047ab9d
        ;   Label: LAB_0047ab9d
    MOV AL,byte ptr [EDX]               ; 0047ab9f
        ;   Label: LAB_0047ab9f
    INC AL                              ; 0047aba1
    AND EAX,0xff                        ; 0047aba3
    TEST byte ptr [EAX + 0x5c168c],0x2  ; 0047aba8 | DAT_005c168c
    JZ 0x0047abb4                       ; 0047abaf
        ;   XREF to: 0047abb4 (CONDITIONAL_JUMP)  ; LAB_0047abb4
    INC EDX                             ; 0047abb1
    JMP 0x0047ab9f                      ; 0047abb2
        ;   XREF to: 0047ab9f (UNCONDITIONAL_JUMP)  ; LAB_0047ab9f
    MOV CL,byte ptr [EDX]               ; 0047abb4
        ;   Label: LAB_0047abb4
    MOV EBX,EDX                         ; 0047abb6
    TEST CL,CL                          ; 0047abb8
    JZ 0x0047ac3d                       ; 0047abba
        ;   XREF to: 0047ac3d (CONDITIONAL_JUMP)  ; LAB_0047ac3d
    MOV EAX,ESP                         ; 0047abc0
    CMP CL,0x3b                         ; 0047abc2
    JZ 0x0047abf1                       ; 0047abc5
        ;   XREF to: 0047abf1 (CONDITIONAL_JUMP)  ; LAB_0047abf1
        ;   Label: LAB_0047abc5
    MOV DL,byte ptr [EBX]               ; 0047abc7
    MOV byte ptr [EAX],DL               ; 0047abc9
    INC EAX                             ; 0047abcb
    MOV DH,byte ptr [EBX + 0x1]         ; 0047abcc
    INC EBX                             ; 0047abcf
    TEST DH,DH                          ; 0047abd0
    JNZ 0x0047abf4                      ; 0047abd2
        ;   XREF to: 0047abf4 (CONDITIONAL_JUMP)  ; LAB_0047abf4
    MOV EDX,ESP                         ; 0047abd4
        ;   Label: LAB_0047abd4
    CMP EAX,EDX                         ; 0047abd6
    JBE 0x0047abf9                      ; 0047abd8
        ;   XREF to: 0047abf9 (CONDITIONAL_JUMP)  ; LAB_0047abf9
    MOV DL,byte ptr [EAX + -0x1]        ; 0047abda
    INC DL                              ; 0047abdd
    AND EDX,0xff                        ; 0047abdf
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047abe5 | DAT_005c168c
    JZ 0x0047abf9                       ; 0047abec
        ;   XREF to: 0047abf9 (CONDITIONAL_JUMP)  ; LAB_0047abf9
    DEC EAX                             ; 0047abee
    JMP 0x0047abd4                      ; 0047abef
        ;   XREF to: 0047abd4 (UNCONDITIONAL_JUMP)  ; LAB_0047abd4
    INC EBX                             ; 0047abf1
        ;   Label: LAB_0047abf1
    JMP 0x0047abd4                      ; 0047abf2
        ;   XREF to: 0047abd4 (UNCONDITIONAL_JUMP)  ; LAB_0047abd4
    CMP byte ptr [EBX],0x3b             ; 0047abf4
        ;   Label: LAB_0047abf4
    JMP 0x0047abc5                      ; 0047abf7
        ;   XREF to: 0047abc5 (UNCONDITIONAL_JUMP)  ; LAB_0047abc5
    MOV EDX,ESP                         ; 0047abf9
        ;   Label: LAB_0047abf9
    CMP EAX,EDX                         ; 0047abfb
    JBE 0x0047ab9d                      ; 0047abfd
        ;   XREF to: 0047ab9d (CONDITIONAL_JUMP)  ; LAB_0047ab9d
    PUSH EDX                            ; 0047abff
    PUSH ESI                            ; 0047ac00
    MOV byte ptr [EAX],0x0              ; 0047ac01
    CALL core_event.cpp_CEventList_executeCommand_FUN_0047ac50 ; 0047ac04
        ;   XREF to: 0047ac50 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommand_FUN_0047ac50(CEventList * this_ptr, char * command_buffer)
    ADD ESP,0x8                         ; 0047ac09
    TEST EAX,EAX                        ; 0047ac0c
    JNZ 0x0047ab9d                      ; 0047ac0e
        ;   XREF to: 0047ab9d (CONDITIONAL_JUMP)  ; LAB_0047ab9d
    CMP dword ptr [0x01c08b5c],0x0      ; 0047ac10 | DAT_01c08b5c
    JZ 0x0047ac1f                       ; 0047ac17
        ;   XREF to: 0047ac1f (CONDITIONAL_JUMP)  ; LAB_0047ac1f
    ADD ESP,0x64                        ; 0047ac19
    POP ESI                             ; 0047ac1c
    POP EBX                             ; 0047ac1d
    RET                                 ; 0047ac1e
    PUSH 0x1c08b60                      ; 0047ac1f | DAT_01c08b60
        ;   Label: LAB_0047ac1f
    PUSH 0x57f57d                       ; 0047ac24 | = "%s\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0047ac29 | g_CConsole_PTR_005ad350
    PUSH ECX                            ; 0047ac2f | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0047ac30
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0047ac35
    JMP 0x0047ab9d                      ; 0047ac38
        ;   XREF to: 0047ab9d (UNCONDITIONAL_JUMP)  ; LAB_0047ab9d
    MOV EAX,0x1                         ; 0047ac3d
        ;   Label: LAB_0047ac3d
    ADD ESP,0x64                        ; 0047ac42
    POP ESI                             ; 0047ac45
    POP EBX                             ; 0047ac46
    RET                                 ; 0047ac47


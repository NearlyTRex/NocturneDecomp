; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_event.cpp_CEventList_FUN_004aac00(CEventList * this_ptr)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x6c]:1  local_6c
; undefined1       Stack[-0x6b]:1  local_6b
;
; XREF[2]:
;   core_event.cpp_CEventList_FUN_004aabe0 at 004aabf3
;   core_event.cpp_CEventList_FUN_004add40 at 004add61
;
; Referenced Globals:
;   TerminatedCString s_s_00624603
;   CConsole* g_CConsolePtr = 0083b1a4
;   char[256] g_CharacterClassificationTable
;   CConsole g_ConsolePtr
;   undefined4 DAT_02d0a45c
;   undefined1 DAT_02d0a460
;
; Called Functions:
;   core_event.cpp_CEventList_FUN_004aacc0
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aac00
        ;   Label: core_event.cpp_CEventList_FUN_004aac00
    PUSH ESI                            ; 004aac01
    SUB ESP,0x64                        ; 004aac02
    MOV ESI,dword ptr [ESP + 0x70]      ; 004aac05
    MOV EBX,dword ptr [ESP + 0x74]      ; 004aac09
    MOV EDX,EBX                         ; 004aac0d
        ;   Label: LAB_004aac0d
    MOV AL,byte ptr [EDX]               ; 004aac0f
        ;   Label: LAB_004aac0f
    INC AL                              ; 004aac11
    AND EAX,0xff                        ; 004aac13
    TEST byte ptr [EAX + 0x6849c4],0x2  ; 004aac18 | char[256] g_CharacterClassificationTable
    JZ 0x004aac24                       ; 004aac1f | LAB_004aac24
        ;   XREF to: 004aac24 (CONDITIONAL_JUMP)
    INC EDX                             ; 004aac21
    JMP 0x004aac0f                      ; 004aac22 | LAB_004aac0f
        ;   XREF to: 004aac0f (UNCONDITIONAL_JUMP)
    MOV CL,byte ptr [EDX]               ; 004aac24
        ;   Label: LAB_004aac24
    MOV EBX,EDX                         ; 004aac26
    TEST CL,CL                          ; 004aac28
    JZ 0x004aacad                       ; 004aac2a | LAB_004aacad
        ;   XREF to: 004aacad (CONDITIONAL_JUMP)
    MOV EAX,ESP                         ; 004aac30
    CMP CL,0x3b                         ; 004aac32
    JZ 0x004aac61                       ; 004aac35 | LAB_004aac61
        ;   Label: LAB_004aac35
        ;   XREF to: 004aac61 (CONDITIONAL_JUMP)
    MOV DL,byte ptr [EBX]               ; 004aac37
    MOV byte ptr [EAX],DL               ; 004aac39
    INC EAX                             ; 004aac3b
    MOV DH,byte ptr [EBX + 0x1]         ; 004aac3c
    INC EBX                             ; 004aac3f
    TEST DH,DH                          ; 004aac40
    JNZ 0x004aac64                      ; 004aac42 | LAB_004aac64
        ;   XREF to: 004aac64 (CONDITIONAL_JUMP)
    MOV EDX,ESP                         ; 004aac44
        ;   Label: LAB_004aac44
    CMP EAX,EDX                         ; 004aac46
    JBE 0x004aac69                      ; 004aac48 | LAB_004aac69
        ;   XREF to: 004aac69 (CONDITIONAL_JUMP)
    MOV DL,byte ptr [EAX + -0x1]        ; 004aac4a
    INC DL                              ; 004aac4d
    AND EDX,0xff                        ; 004aac4f
    TEST byte ptr [EDX + 0x6849c4],0x2  ; 004aac55 | char[256] g_CharacterClassificationTable
    JZ 0x004aac69                       ; 004aac5c | LAB_004aac69
        ;   XREF to: 004aac69 (CONDITIONAL_JUMP)
    DEC EAX                             ; 004aac5e
    JMP 0x004aac44                      ; 004aac5f | LAB_004aac44
        ;   XREF to: 004aac44 (UNCONDITIONAL_JUMP)
    INC EBX                             ; 004aac61
        ;   Label: LAB_004aac61
    JMP 0x004aac44                      ; 004aac62 | LAB_004aac44
        ;   XREF to: 004aac44 (UNCONDITIONAL_JUMP)
    CMP byte ptr [EBX],0x3b             ; 004aac64
        ;   Label: LAB_004aac64
    JMP 0x004aac35                      ; 004aac67 | LAB_004aac35
        ;   XREF to: 004aac35 (UNCONDITIONAL_JUMP)
    MOV EDX,ESP                         ; 004aac69
        ;   Label: LAB_004aac69
    CMP EAX,EDX                         ; 004aac6b
    JBE 0x004aac0d                      ; 004aac6d | LAB_004aac0d
        ;   XREF to: 004aac0d (CONDITIONAL_JUMP)
    PUSH EDX                            ; 004aac6f
    PUSH ESI                            ; 004aac70
    MOV byte ptr [EAX],0x0              ; 004aac71
    CALL core_event.cpp_CEventList_FUN_004aacc0 ; 004aac74 | CDemonActor * core_event.cpp_CEventList_FUN_004aacc0(CEventList * this_ptr)
        ;   XREF to: 004aacc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004aac79
    TEST EAX,EAX                        ; 004aac7c
    JNZ 0x004aac0d                      ; 004aac7e | LAB_004aac0d
        ;   XREF to: 004aac0d (CONDITIONAL_JUMP)
    CMP dword ptr [0x02d0a45c],0x0      ; 004aac80 | undefined4 DAT_02d0a45c
    JZ 0x004aac8f                       ; 004aac87 | LAB_004aac8f
        ;   XREF to: 004aac8f (CONDITIONAL_JUMP)
    ADD ESP,0x64                        ; 004aac89
    POP ESI                             ; 004aac8c
    POP EBX                             ; 004aac8d
    RET                                 ; 004aac8e
    PUSH 0x2d0a460                      ; 004aac8f | undefined1 DAT_02d0a460
        ;   Label: LAB_004aac8f
    PUSH 0x624603                       ; 004aac94 | = "%s\n" | s_s_00624603 = %s

    MOV ECX,dword ptr [0x0066e8e0]      ; 004aac99 | CConsole g_ConsolePtr | CConsole * g_CConsolePtr
    PUSH ECX                            ; 004aac9f | CConsole g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004aaca0 | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004aaca5
    JMP 0x004aac0d                      ; 004aaca8 | LAB_004aac0d
        ;   XREF to: 004aac0d (UNCONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004aacad
        ;   Label: LAB_004aacad
    ADD ESP,0x64                        ; 004aacb2
    POP ESI                             ; 004aacb5
    POP EBX                             ; 004aacb6
    RET                                 ; 004aacb7


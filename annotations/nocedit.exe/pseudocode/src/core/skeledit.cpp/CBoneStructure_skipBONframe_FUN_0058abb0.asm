; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0(CBoneStructure * this_ptr)
;
; Parameters:
; CBoneStructure * Stack[0x8]:4   this_ptr
;
; XREF[1]:
;   core_skeledit.cpp_FUN_00592690 at 005953fa
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064a490
;   TerminatedCString s_CBoneStructure_skipBONfr_0064a4a5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH 0x18                           ; 0058abb0
        ;   Label: core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 0058abb5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH EBX                            ; 0058abba
    PUSH ESI                            ; 0058abbb
    PUSH EDI                            ; 0058abbc
    PUSH EBP                            ; 0058abbd
    MOV EBP,dword ptr [ESP + 0x18]      ; 0058abbe
    MOV ESI,EBP                         ; 0058abc2
    XOR EDI,EDI                         ; 0058abc4
    MOV EAX,dword ptr [ESP + 0x14]      ; 0058abc6
        ;   Label: LAB_0058abc6
    MOV EAX,dword ptr [EAX]             ; 0058abca
    SHL EAX,0x2                         ; 0058abcc
    CMP EDI,EAX                         ; 0058abcf
    JGE 0x0058abf2                      ; 0058abd1
        ;   XREF to: 0058abf2 (CONDITIONAL_JUMP)  ; LAB_0058abf2
    MOV EBX,0x1                         ; 0058abd3
    PUSH ESI                            ; 0058abd8
        ;   Label: LAB_0058abd8
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 0058abd9
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
    ADD ESP,0x4                         ; 0058abde
    TEST EAX,EAX                        ; 0058abe1
    JL 0x0058abef                       ; 0058abe3
        ;   XREF to: 0058abef (CONDITIONAL_JUMP)  ; LAB_0058abef
    CMP EAX,0xa                         ; 0058abe5
    JNZ 0x0058abd8                      ; 0058abe8
        ;   XREF to: 0058abd8 (CONDITIONAL_JUMP)  ; LAB_0058abd8
    DEC EBX                             ; 0058abea
    TEST EBX,EBX                        ; 0058abeb
    JG 0x0058abd8                       ; 0058abed
        ;   XREF to: 0058abd8 (CONDITIONAL_JUMP)  ; LAB_0058abd8
    INC EDI                             ; 0058abef
        ;   Label: LAB_0058abef
    JMP 0x0058abc6                      ; 0058abf0
        ;   XREF to: 0058abc6 (UNCONDITIONAL_JUMP)  ; LAB_0058abc6
    TEST byte ptr [EBP + 0xc],0x20      ; 0058abf2
        ;   Label: LAB_0058abf2
    JNZ 0x0058abfd                      ; 0058abf6
        ;   XREF to: 0058abfd (CONDITIONAL_JUMP)  ; LAB_0058abfd
    POP EBP                             ; 0058abf8
    POP EDI                             ; 0058abf9
    POP ESI                             ; 0058abfa
    POP EBX                             ; 0058abfb
    RET                                 ; 0058abfc
    MOV EDX,0x64a490                    ; 0058abfd | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058abfd
    MOV ECX,0x34a                       ; 0058ac02
    PUSH 0x64a4a5                       ; 0058ac07 | = "CBoneStructure::skipBONframe - error ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0058ac0c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0058ac12 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058ac18
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058ac1d
    POP EBP                             ; 0058ac20
    POP EDI                             ; 0058ac21
    POP ESI                             ; 0058ac22
    POP EBX                             ; 0058ac23
    RET                                 ; 0058ac24


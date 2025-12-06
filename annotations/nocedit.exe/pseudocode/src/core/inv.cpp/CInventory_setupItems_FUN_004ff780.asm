; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_inv.cpp_CInventory_setupItems_FUN_004ff780(CInventory * this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_hero.cpp_CHero_FUN_004f2540 at 004f256e
;
; Referenced Globals:
;   TerminatedCString s_core_inv_cpp_006309a1
;   TerminatedCString s_CInventory_setupItems_we_006309b1
;   TerminatedCString s_core_inv_cpp_006309f1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ff780
        ;   Label: core_inv.cpp_CInventory_setupItems_FUN_004ff780
    PUSH ESI                            ; 004ff781
    PUSH EDI                            ; 004ff782
    PUSH EBP                            ; 004ff783
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ff784
    CMP dword ptr [EDI + 0x450],0x0     ; 004ff788
    JNZ 0x004ff7d5                      ; 004ff78f | LAB_004ff7d5
        ;   XREF to: 004ff7d5 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [EDI + 0x8]       ; 004ff791
        ;   Label: LAB_004ff791
    XOR ESI,ESI                         ; 004ff794
    TEST EBP,EBP                        ; 004ff796
    JLE 0x004ff7d0                      ; 004ff798 | LAB_004ff7d0
        ;   XREF to: 004ff7d0 (CONDITIONAL_JUMP)
    MOV EBX,EDI                         ; 004ff79a
    PUSH 0x573                          ; 004ff79c
        ;   Label: LAB_004ff79c
    PUSH 0x6309f1                       ; 004ff7a1 | = "..\\core\\inv.cpp" | s_core_inv_cpp_006309f1 = ..\core\inv.cpp
    MOV EAX,dword ptr [EBX + 0xc]       ; 004ff7a6
    PUSH EAX                            ; 004ff7a9
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 004ff7aa | void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004ff7af
    MOV EAX,dword ptr [EBX + 0xc]       ; 004ff7b2
    PUSH EAX                            ; 004ff7b5
    MOV EDX,dword ptr [EAX + 0x154]     ; 004ff7b6
    ADD EBX,0x4                         ; 004ff7bc
    INC ESI                             ; 004ff7bf
    CALL dword ptr [EDX]                ; 004ff7c0
    MOV EDX,dword ptr [EDI + 0x8]       ; 004ff7c2
    ADD ESP,0x4                         ; 004ff7c5
    CMP ESI,EDX                         ; 004ff7c8
    JL 0x004ff79c                       ; 004ff7ca | LAB_004ff79c
        ;   XREF to: 004ff79c (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 004ff7cc
    POP EBP                             ; 004ff7d0
        ;   Label: LAB_004ff7d0
    POP EDI                             ; 004ff7d1
    POP ESI                             ; 004ff7d2
    POP EBX                             ; 004ff7d3
    RET                                 ; 004ff7d4
    MOV ECX,0x6309a1                    ; 004ff7d5 | = "..\\core\\inv.cpp" | s_core_inv_cpp_006309a1 = ..\core\inv.cpp
        ;   Label: LAB_004ff7d5
    MOV EBX,0x56e                       ; 004ff7da
    PUSH 0x6309b1                       ; 004ff7df | = "CInventory::setupItems - we should ow..." | s_CInventory_setupItems_we_006309b1 = CInventory::setupItems - we should own the items at this point!
    MOV dword ptr [0x02f0ca48],ECX      ; 004ff7e4 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004ff7ea | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004ff7f0 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004ff7f5
    JMP 0x004ff791                      ; 004ff7f8 | LAB_004ff791
        ;   XREF to: 004ff791 (UNCONDITIONAL_JUMP)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_cloth.cpp_CClothList_load_FUN_0043bfa0(CClothList * this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_succubus.cpp_CSuccubus_FUN_005c6b60 at 005c6bd2
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_00618562
;   TerminatedCString s_core_cloth_cpp_00618574
;   TerminatedCString s_core_cloth_cpp_00618586
;   TerminatedCString s_CClothList_load_out_of_m_00618598
;   char* g_CurrentDebugFilename = 0067d200
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
;   core_cloth.cpp_CCloth_load_FUN_00438cf0
;   core_cloth.cpp_FUN_00438ba0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bfa0
        ;   Label: core_cloth.cpp_CClothList_load_FUN_0043bfa0
    PUSH ESI                            ; 0043bfa1
    PUSH EDI                            ; 0043bfa2
    PUSH EBP                            ; 0043bfa3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0043bfa4
    MOV EDX,dword ptr [EBP]             ; 0043bfa8
    XOR ESI,ESI                         ; 0043bfab
    TEST EDX,EDX                        ; 0043bfad
    JLE 0x0043c051                      ; 0043bfaf
        ;   XREF to: 0043c051 (CONDITIONAL_JUMP)  ; LAB_0043c051
    LEA EDI,[EBP + 0x4]                 ; 0043bfb5
    MOV EBX,EBP                         ; 0043bfb8
    MOV ECX,0x5a7                       ; 0043bfba
        ;   Label: LAB_0043bfba
    MOV EDX,0x618562                    ; 0043bfbf | = "..\\core\\cloth.cpp"
    MOV EAX,dword ptr [EBX + 0x194]     ; 0043bfc4
    MOV dword ptr [0x02f0d944],ECX      ; 0043bfca | g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDX      ; 0043bfd0 | g_CurrentDebugFilename
    TEST EAX,EAX                        ; 0043bfd6
    JNZ 0x0043c056                      ; 0043bfd8
        ;   XREF to: 0043c056 (CONDITIONAL_JUMP)  ; LAB_0043c056
    PUSH 0x5a8                          ; 0043bfde
        ;   Label: LAB_0043bfde
    PUSH 0x618574                       ; 0043bfe3 | = "..\\core\\cloth.cpp"
    PUSH 0x3fe70                        ; 0043bfe8
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 0043bfed
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 0043bff2
    TEST EAX,EAX                        ; 0043bff5
    JZ 0x0043c002                       ; 0043bff7
        ;   XREF to: 0043c002 (CONDITIONAL_JUMP)  ; LAB_0043c002
    PUSH EAX                            ; 0043bff9
    CALL core_cloth.cpp_FUN_00438ba0    ; 0043bffa
        ;   XREF to: 00438ba0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_00438ba0()
    ADD ESP,0x4                         ; 0043bfff
    MOV dword ptr [EBX + 0x194],EAX     ; 0043c002
        ;   Label: LAB_0043c002
    TEST EAX,EAX                        ; 0043c008
    JNZ 0x0043c02f                      ; 0043c00a
        ;   XREF to: 0043c02f (CONDITIONAL_JUMP)  ; LAB_0043c02f
    MOV EDX,0x618586                    ; 0043c00c | = "..\\core\\cloth.cpp"
    MOV ECX,0x5a9                       ; 0043c011
    PUSH 0x618598                       ; 0043c016 | = "CClothList::load - out of memory for ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0043c01b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0043c021 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043c027
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043c02c
    PUSH EDI                            ; 0043c02f
        ;   Label: LAB_0043c02f
    MOV ECX,dword ptr [EBX + 0x194]     ; 0043c030
    PUSH ECX                            ; 0043c036
    ADD EBX,0x4                         ; 0043c037
    INC ESI                             ; 0043c03a
    CALL core_cloth.cpp_CCloth_load_FUN_00438cf0 ; 0043c03b
        ;   XREF to: 00438cf0 (UNCONDITIONAL_CALL)  ; int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
    ADD EDI,0x28                        ; 0043c040
    MOV EAX,dword ptr [EBP]             ; 0043c043
    ADD ESP,0x8                         ; 0043c046
    CMP ESI,EAX                         ; 0043c049
    JL 0x0043bfba                       ; 0043c04b
        ;   XREF to: 0043bfba (CONDITIONAL_JUMP)  ; LAB_0043bfba
    POP EBP                             ; 0043c051
        ;   Label: LAB_0043c051
    POP EDI                             ; 0043c052
    POP ESI                             ; 0043c053
    POP EBX                             ; 0043c054
    RET                                 ; 0043c055
    PUSH 0x0                            ; 0043c056
        ;   Label: LAB_0043c056
    PUSH EAX                            ; 0043c058
    CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00 ; 0043c059
        ;   XREF to: 00438c00 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00()
    ADD ESP,0x8                         ; 0043c05e
    PUSH EAX                            ; 0043c061
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0043c062
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 0043c067
    JMP 0x0043bfde                      ; 0043c06a
        ;   XREF to: 0043bfde (UNCONDITIONAL_JUMP)  ; LAB_0043bfde


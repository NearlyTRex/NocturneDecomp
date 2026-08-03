; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead *header,char *filename,int line_number)
;
; Parameters:
; SMemHead *       Stack[0x4]:4   header
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   line_number
;
; XREF[3]:
;   shape_memdbg.cpp_checkAllMemory_FUN_0050efe0 at 0050eff8
;   shape_memdbg.cpp_debugFree_FUN_0050f460 at 0050f4df
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540 at 0050f5d2
;
; Referenced Globals:
;   TerminatedCString s_shape_memdbg_cpp_00635e5a
;   TerminatedCString s_Head_memory_corruption_d_00635e6e
;   TerminatedCString s_shape_memdbg_cpp_00635ef8
;   TerminatedCString s_Tail_memory_corruption_d_00635f0c
;   TerminatedCString s_shape_memdbg_cpp_00635f95
;   TerminatedCString s_List_memory_corruption_d_00635fa9
;   TerminatedCString s_none_00636540
;   char* g_MemCheckLastFile = 00636540
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   SMemHead* g_MemoryListHead
;   int g_MemCheckLastLine
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050f020
        ;   Label: shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
    PUSH ESI                            ; 0050f021
    PUSH EDI                            ; 0050f022
    PUSH EBP                            ; 0050f023
    MOV EBP,ESP                         ; 0050f024
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050f026
    MOV EDI,dword ptr [EBP + 0x18]      ; 0050f029
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0050f02c
    CMP dword ptr [EBX + 0x24],0xdeadbeef ; 0050f02f
    JNZ 0x0050f0ed                      ; 0050f036
        ;   XREF to: 0050f0ed (CONDITIONAL_JUMP)  ; LAB_0050f0ed
    LEA EAX,[EBX + 0x28]                ; 0050f03c
        ;   Label: LAB_0050f03c
    MOV EDX,dword ptr [EBX + 0x8]       ; 0050f03f
    CMP dword ptr [EDX + EAX*0x1],0xbeefdead ; 0050f042
    JZ 0x0050f08a                       ; 0050f049
        ;   XREF to: 0050f08a (CONDITIONAL_JUMP)  ; LAB_0050f08a
    MOV dword ptr [0x02f0ca48],0x635ef8 ; 0050f04b | g_CurrentFilename | = "..\\shape\\memdbg.cpp"
    MOV EDX,dword ptr [0x02f0d940]      ; 0050f055 | g_MemCheckLastLine
    MOV ECX,0xb2                        ; 0050f05b
    PUSH EDX                            ; 0050f060
    MOV dword ptr [0x02f0ca4c],ECX      ; 0050f061 | g_CurrentLineNumber
    MOV ECX,dword ptr [0x0067d1fc]      ; 0050f067 | g_MemCheckLastFile
    PUSH ECX                            ; 0050f06d | = "(none)"
    PUSH ESI                            ; 0050f06e
    PUSH EDI                            ; 0050f06f
    MOV EDX,dword ptr [EBX + 0x20]      ; 0050f070
    PUSH EDX                            ; 0050f073
    LEA EDX,[EBX + 0xc]                 ; 0050f074
    PUSH EDX                            ; 0050f077
    PUSH EAX                            ; 0050f078
    MOV ECX,dword ptr [EBX + 0x8]       ; 0050f079
    PUSH ECX                            ; 0050f07c
    PUSH 0x635f0c                       ; 0050f07d | = "Tail memory corruption detected in %d..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050f082
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x24                        ; 0050f087
    MOV EAX,dword ptr [EBX]             ; 0050f08a
        ;   Label: LAB_0050f08a
    TEST EAX,EAX                        ; 0050f08c
    JNZ 0x0050f138                      ; 0050f08e
        ;   XREF to: 0050f138 (CONDITIONAL_JUMP)  ; LAB_0050f138
    CMP EBX,dword ptr [0x02f0d938]      ; 0050f094 | g_MemoryListHead
    JZ 0x0050f0dd                       ; 0050f09a
        ;   XREF to: 0050f0dd (CONDITIONAL_JUMP)  ; LAB_0050f0dd
    MOV ECX,dword ptr [0x02f0d940]      ; 0050f09c | g_MemCheckLastLine
        ;   Label: LAB_0050f09c
    MOV EAX,0x635f95                    ; 0050f0a2 | = "..\\shape\\memdbg.cpp"
    PUSH ECX                            ; 0050f0a7
    MOV [0x02f0ca48],EAX                ; 0050f0a8 | g_CurrentFilename
    MOV EAX,[0x0067d1fc]                ; 0050f0ad | g_MemCheckLastFile
    PUSH EAX                            ; 0050f0b2 | = "(none)"
    PUSH ESI                            ; 0050f0b3
    MOV EDX,0xb8                        ; 0050f0b4
    PUSH EDI                            ; 0050f0b9
    MOV dword ptr [0x02f0ca4c],EDX      ; 0050f0ba | g_CurrentLineNumber
    MOV EDX,dword ptr [EBX + 0x20]      ; 0050f0c0
    PUSH EDX                            ; 0050f0c3
    LEA EAX,[EBX + 0xc]                 ; 0050f0c4
    PUSH EAX                            ; 0050f0c7
    LEA EAX,[EBX + 0x28]                ; 0050f0c8
    PUSH EAX                            ; 0050f0cb
    MOV ECX,dword ptr [EBX + 0x8]       ; 0050f0cc
    PUSH ECX                            ; 0050f0cf
    PUSH 0x635fa9                       ; 0050f0d0 | = "List memory corruption detected in %d..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050f0d5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x24                        ; 0050f0da
    MOV EAX,dword ptr [EBX + 0x4]       ; 0050f0dd
        ;   Label: LAB_0050f0dd
    TEST EAX,EAX                        ; 0050f0e0
    JZ 0x0050f0e8                       ; 0050f0e2
        ;   XREF to: 0050f0e8 (CONDITIONAL_JUMP)  ; LAB_0050f0e8
    CMP EBX,dword ptr [EAX]             ; 0050f0e4
    JNZ 0x0050f09c                      ; 0050f0e6
        ;   XREF to: 0050f09c (CONDITIONAL_JUMP)  ; LAB_0050f09c
    POP EBP                             ; 0050f0e8
        ;   Label: LAB_0050f0e8
    POP EDI                             ; 0050f0e9
    POP ESI                             ; 0050f0ea
    POP EBX                             ; 0050f0eb
    RET                                 ; 0050f0ec
    MOV EDX,dword ptr [0x02f0d940]      ; 0050f0ed | g_MemCheckLastLine
        ;   Label: LAB_0050f0ed
    MOV ECX,0x635e5a                    ; 0050f0f3 | = "..\\shape\\memdbg.cpp"
    PUSH EDX                            ; 0050f0f8
    MOV dword ptr [0x02f0ca48],ECX      ; 0050f0f9 | g_CurrentFilename
    MOV ECX,dword ptr [0x0067d1fc]      ; 0050f0ff | = "(none)" | g_MemCheckLastFile
    PUSH ECX                            ; 0050f105 | = "(none)"
    PUSH ESI                            ; 0050f106
    MOV EAX,0xaf                        ; 0050f107
    PUSH EDI                            ; 0050f10c
    MOV [0x02f0ca4c],EAX                ; 0050f10d | g_CurrentLineNumber
    MOV EAX,dword ptr [EBX + 0x20]      ; 0050f112
    PUSH EAX                            ; 0050f115
    LEA EAX,[EBX + 0xc]                 ; 0050f116
    PUSH EAX                            ; 0050f119
    LEA EAX,[EBX + 0x28]                ; 0050f11a
    PUSH EAX                            ; 0050f11d
    MOV EDX,dword ptr [EBX + 0x8]       ; 0050f11e
    PUSH EDX                            ; 0050f121
    PUSH 0x635e6e                       ; 0050f122 | = "Head memory corruption detected in %d..."
    MOV byte ptr [EBX + 0x1f],0x0       ; 0050f127
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0050f12b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x24                        ; 0050f130
    JMP 0x0050f03c                      ; 0050f133
        ;   XREF to: 0050f03c (UNCONDITIONAL_JUMP)  ; LAB_0050f03c
    CMP EBX,dword ptr [EAX + 0x4]       ; 0050f138
        ;   Label: LAB_0050f138
    JNZ 0x0050f09c                      ; 0050f13b
        ;   XREF to: 0050f09c (CONDITIONAL_JUMP)  ; LAB_0050f09c
    JMP 0x0050f0dd                      ; 0050f141
        ;   XREF to: 0050f0dd (UNCONDITIONAL_JUMP)  ; LAB_0050f0dd


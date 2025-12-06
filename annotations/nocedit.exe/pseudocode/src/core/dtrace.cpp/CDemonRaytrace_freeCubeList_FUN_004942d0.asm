; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace * this_ptr)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240 at 00494246
;   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 at 00494d7c
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_006225df
;   TerminatedCString s_core_dtrace_cpp_006225f2
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_dtor_FUN_00482160
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;   shape_memdbg.cpp_debugFree_FUN_0050f460
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004942d0
        ;   Label: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
    PUSH EBP                            ; 004942d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004942d2
    CMP dword ptr [ESI + 0x4c],0x0      ; 004942d6
    JZ 0x0049436c                       ; 004942da | LAB_0049436c
        ;   XREF to: 0049436c (CONDITIONAL_JUMP)
    PUSH EDI                            ; 004942e0
    PUSH EBX                            ; 004942e1
    XOR EDI,EDI                         ; 004942e2
    XOR EBP,EBP                         ; 004942e4
    MOV ECX,dword ptr [ESI + 0x44]      ; 004942e6
        ;   Label: LAB_004942e6
    MOV EBX,dword ptr [ESI + 0x40]      ; 004942e9
    IMUL EBX,ECX                        ; 004942ec
    MOV EAX,dword ptr [ESI + 0x48]      ; 004942ef
    IMUL EAX,EBX                        ; 004942f2
    CMP EBP,EAX                         ; 004942f5
    JGE 0x00494354                      ; 004942f7 | LAB_00494354
        ;   XREF to: 00494354 (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESI + 0x4c]      ; 004942f9
    ADD EBX,EDI                         ; 004942fc
    MOV dword ptr [EBX],0x0             ; 004942fe
    MOV dword ptr [EBX + 0x4],0x0       ; 00494304
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049430b
    MOV dword ptr [EBX + 0x54],0x0      ; 0049430e
    TEST EAX,EAX                        ; 00494315
    JNZ 0x00494326                      ; 00494317 | LAB_00494326
        ;   XREF to: 00494326 (CONDITIONAL_JUMP)
    ADD EDI,0x58                        ; 00494319
        ;   Label: LAB_00494319
    INC EBP                             ; 0049431c
    MOV dword ptr [EBX + 0xc],0x0       ; 0049431d
    JMP 0x004942e6                      ; 00494324 | LAB_004942e6
        ;   XREF to: 004942e6 (UNCONDITIONAL_JUMP)
    MOV ECX,0x9c                        ; 00494326
        ;   Label: LAB_00494326
    MOV EDX,0x6225df                    ; 0049432b | = "..\\core\\dtrace.cpp" | s_core_dtrace_cpp_006225df = ..\core\dtrace.cpp
    MOV dword ptr [0x02f0d944],ECX      ; 00494330 | int g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],EDX      ; 00494336 | char * g_CurrentDebugFilename
    JZ 0x00494319                       ; 0049433c | LAB_00494319
        ;   XREF to: 00494319 (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 0049433e
    PUSH EAX                            ; 00494340
    CALL core_dpart.cpp_CDemonPart_dtor_FUN_00482160 ; 00494341 | CDemonPart * core_dpart.cpp_CDemonPart_dtor_FUN_00482160(CDemonPart * this_ptr)
        ;   XREF to: 00482160 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00494346
    PUSH EAX                            ; 00494349
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 0049434a | void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0049434f
    JMP 0x00494319                      ; 00494352 | LAB_00494319
        ;   XREF to: 00494319 (UNCONDITIONAL_JUMP)
    PUSH 0xa0                           ; 00494354
        ;   Label: LAB_00494354
    PUSH 0x6225f2                       ; 00494359 | = "..\\core\\dtrace.cpp" | s_core_dtrace_cpp_006225f2 = ..\core\dtrace.cpp
    MOV EBX,dword ptr [ESI + 0x4c]      ; 0049435e
    PUSH EBX                            ; 00494361
    CALL shape_memdbg.cpp_debugFree_FUN_0050f460 ; 00494362 | void shape_memdbg.cpp_debugFree_FUN_0050f460(void * ptr, char * filename, int line_number)
        ;   XREF to: 0050f460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00494367
    POP EBX                             ; 0049436a
    POP EDI                             ; 0049436b
    MOV dword ptr [ESI + 0x4c],0x0      ; 0049436c
        ;   Label: LAB_0049436c
    POP EBP                             ; 00494373
    POP ESI                             ; 00494374
    RET                                 ; 00494375


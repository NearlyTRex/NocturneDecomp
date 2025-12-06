; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dlight.cpp_getRestoreMemory_FUN_00472950(int pixel_count)
;
; Parameters:
; int              Stack[0x4]:4   pixel_count
;
; XREF[1]:
;   core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0 at 004729ed
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061eefc
;   TerminatedCString s_getRestoreMemory_Need_mo_0061ef0f
;   uchar[6291656] g_ShadowRestoreBuffer
;   uint g_ShadowRestoreAllocator
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00472950
        ;   Label: core_dlight.cpp_getRestoreMemory_FUN_00472950
    MOV EAX,0x300064                    ; 00472951
    SUB EAX,dword ptr [ESP + 0x8]       ; 00472956
    MOV ECX,dword ptr [0x026a580c]      ; 0047295a | uint g_ShadowRestoreAllocator
    SUB EAX,0x4                         ; 00472960
    CMP EAX,ECX                         ; 00472963
    JC 0x0047298f                       ; 00472965 | LAB_0047298f
        ;   XREF to: 0047298f (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x8]       ; 00472967
        ;   Label: LAB_00472967
    MOV EAX,[0x026a580c]                ; 0047296b | uint g_ShadowRestoreAllocator
    MOV EDI,dword ptr [0x026a580c]      ; 00472970 | uint g_ShadowRestoreAllocator
    ADD EAX,EAX                         ; 00472976
    ADD EDX,0x8                         ; 00472978
    ADD EAX,0x20a5744                   ; 0047297b | uchar[6291656] g_ShadowRestoreBuffer
    ADD EDI,EDX                         ; 00472980
    ADD EAX,0x10                        ; 00472982
    MOV dword ptr [0x026a580c],EDI      ; 00472985 | uint g_ShadowRestoreAllocator
    AND AL,0xf0                         ; 0047298b
    POP EDI                             ; 0047298d
    RET                                 ; 0047298e
    PUSH ESI                            ; 0047298f
        ;   Label: LAB_0047298f
    PUSH EBX                            ; 00472990
    MOV EBX,0x61eefc                    ; 00472991 | = "..\\core\\dlight.cpp" | s_core_dlight_cpp_0061eefc = ..\core\dlight.cpp
    MOV ESI,0xa3                        ; 00472996
    PUSH 0x61ef0f                       ; 0047299b | = "getRestoreMemory - Need more static m..." | s_getRestoreMemory_Need_mo_0061ef0f = getRestoreMemory - Need more static memory
    MOV dword ptr [0x02f0ca48],EBX      ; 004729a0 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 004729a6 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004729ac | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004729b1
    POP EBX                             ; 004729b4
    POP ESI                             ; 004729b5
    JMP 0x00472967                      ; 004729b6 | LAB_00472967
        ;   XREF to: 00472967 (UNCONDITIONAL_JUMP)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0(CDemonLight * this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_0056ae50 at 0056b5da
;
; Referenced Globals:
;   TerminatedCString s_core_dlight_cpp_0061ef3a
;   TerminatedCString s_CDemonLight_allocMasterZ_0061ef4d
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dlight.cpp_getRestoreMemory_FUN_00472950
;   core_event.cpp_FUN_004b1a78
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004729d0
        ;   Label: core_dlight.cpp_CDemonLight_allocMasterZBuffer_FUN_004729d0
    PUSH EBP                            ; 004729d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004729d2
    CMP dword ptr [EBX + 0x164],0x0     ; 004729d6
    JNZ 0x00472a21                      ; 004729dd | LAB_00472a21
        ;   XREF to: 00472a21 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 004729df
        ;   Label: LAB_004729df
    IMUL EAX,dword ptr [EBX + 0x1cc4]   ; 004729e5
    PUSH EAX                            ; 004729ec
    CALL core_dlight.cpp_getRestoreMemory_FUN_00472950 ; 004729ed | int core_dlight.cpp_getRestoreMemory_FUN_00472950(int pixel_count)
        ;   XREF to: 00472950 (UNCONDITIONAL_CALL)
    MOV dword ptr [EBX + 0x2f9c],EAX    ; 004729f2
    MOV EBP,dword ptr [EBX + 0x1cc4]    ; 004729f8
    MOV EAX,dword ptr [EBX + 0x1cc0]    ; 004729fe
    IMUL EAX,EBP                        ; 00472a04
    ADD ESP,0x4                         ; 00472a07
    ADD EAX,EAX                         ; 00472a0a
    PUSH EAX                            ; 00472a0c
    MOV EDX,dword ptr [EBX + 0x2f94]    ; 00472a0d
    MOV ECX,dword ptr [EBX + 0x2f9c]    ; 00472a13
    CALL core_event.cpp_FUN_004b1a78    ; 00472a19 | void core_event.cpp_FUN_004b1a78()
        ;   XREF to: 004b1a78 (UNCONDITIONAL_CALL)
    POP EBP                             ; 00472a1e
    POP EBX                             ; 00472a1f
    RET                                 ; 00472a20
    PUSH ESI                            ; 00472a21
        ;   Label: LAB_00472a21
    MOV ECX,0x61ef3a                    ; 00472a22 | = "..\\core\\dlight.cpp" | s_core_dlight_cpp_0061ef3a = ..\core\dlight.cpp
    MOV ESI,0xcd                        ; 00472a27
    PUSH 0x61ef4d                       ; 00472a2c | = "CDemonLight::allocMasterZBuffer - We ..." | s_CDemonLight_allocMasterZ_0061ef4d = CDemonLight::allocMasterZBuffer - We already have one!
    MOV dword ptr [0x02f0ca48],ECX      ; 00472a31 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00472a37 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00472a3d | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00472a42
    POP ESI                             ; 00472a45
    JMP 0x004729df                      ; 00472a46 | LAB_004729df
        ;   XREF to: 004729df (UNCONDITIONAL_JUMP)


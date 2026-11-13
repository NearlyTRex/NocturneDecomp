; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_0048e3e0(CEventList *this_ptr,char *commands)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   commands
;
; XREF[2]:
;   core_game.cpp_FUN_004b90d0 at 004b9e76
;   core_script.cpp_CScript_step_FUN_00522350 at 00523d07
;
; Referenced Globals:
;   undefined4 DAT_01c3dd0c
;   undefined4 DAT_01c3dd10
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommandString_FUN_00489510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e3e0
        ;   Label: core_event.cpp_CEventList_validateCommands_FUN_0048e3e0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0048e3e1
    CMP byte ptr [EAX],0x0              ; 0048e3e5
    JNZ 0x0048e3ee                      ; 0048e3e8
        ;   XREF to: 0048e3ee (CONDITIONAL_JUMP)  ; LAB_0048e3ee
    XOR EAX,EAX                         ; 0048e3ea
        ;   Label: LAB_0048e3ea
    POP EBX                             ; 0048e3ec
    RET                                 ; 0048e3ed
    PUSH EAX                            ; 0048e3ee
        ;   Label: LAB_0048e3ee
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048e3ef
    MOV EDX,0x1                         ; 0048e3f3
    PUSH ECX                            ; 0048e3f8
    XOR EBX,EBX                         ; 0048e3f9
    MOV dword ptr [0x01c3dd0c],EDX      ; 0048e3fb | DAT_01c3dd0c
    CALL core_event.cpp_CEventList_executeCommandString_FUN_00489510 ; 0048e401
        ;   XREF to: 00489510 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommandString_FUN_00489510(CEventList * this_ptr, char * command_string)
    ADD ESP,0x8                         ; 0048e406
    MOV dword ptr [0x01c3dd0c],EBX      ; 0048e409 | DAT_01c3dd0c
    TEST EAX,EAX                        ; 0048e40f
    JNZ 0x0048e3ea                      ; 0048e411
        ;   XREF to: 0048e3ea (CONDITIONAL_JUMP)  ; LAB_0048e3ea
    MOV EAX,0x1c3dd10                   ; 0048e413 | DAT_01c3dd10
    POP EBX                             ; 0048e418
    RET                                 ; 0048e419


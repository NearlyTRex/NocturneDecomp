; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl core_event_cpp_CEventList_validateCommands_FUN_004add40(CEventList *this_ptr,char *commands)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   commands
;
; XREF[3]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f9de
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004df21d
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055bb91
;
; Referenced Globals:
;   int g_EventDryRun
;   char[256] g_EventErrorMessageBuffer
;
; Called Functions:
;   core_event.cpp_CEventList_executeCommandString_FUN_004aac00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004add40
        ;   Label: core_event.cpp_CEventList_validateCommands_FUN_004add40
    MOV EAX,dword ptr [ESP + 0xc]       ; 004add41
    CMP byte ptr [EAX],0x0              ; 004add45
    JNZ 0x004add4e                      ; 004add48
        ;   XREF to: 004add4e (CONDITIONAL_JUMP)  ; LAB_004add4e
    XOR EAX,EAX                         ; 004add4a
        ;   Label: LAB_004add4a
    POP EBX                             ; 004add4c
    RET                                 ; 004add4d
    PUSH EAX                            ; 004add4e
        ;   Label: LAB_004add4e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004add4f
    MOV EDX,0x1                         ; 004add53
    PUSH ECX                            ; 004add58
    XOR EBX,EBX                         ; 004add59
    MOV dword ptr [0x02d0a45c],EDX      ; 004add5b | g_EventDryRun
    CALL core_event.cpp_CEventList_executeCommandString_FUN_004aac00 ; 004add61
        ;   XREF to: 004aac00 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommandString_FUN_004aac00(CEventList * this_ptr, char * command_string)
    ADD ESP,0x8                         ; 004add66
    MOV dword ptr [0x02d0a45c],EBX      ; 004add69 | g_EventDryRun
    TEST EAX,EAX                        ; 004add6f
    JNZ 0x004add4a                      ; 004add71
        ;   XREF to: 004add4a (CONDITIONAL_JUMP)  ; LAB_004add4a
    MOV EAX,0x2d0a460                   ; 004add73 | g_EventErrorMessageBuffer
    POP EBX                             ; 004add78
    RET                                 ; 004add79


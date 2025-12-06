; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList * this_ptr, int property_type, char * property_name, void * data_ptr, void * callback_or_extra)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   property_type
; char *           Stack[0xc]:4   property_name
; void *           Stack[0x10]:4   data_ptr
; void *           Stack[0x14]:4   callback_or_extra
;
; XREF[21]:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160 at 0040e178
;   core_actor.cpp_CActorPropertyList_FUN_0040e1a0 at 0040e1b8
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0 at 0040e1f8
;   core_actor.cpp_CActorPropertyList_FUN_0040e220 at 0040e238
;   core_actor.cpp_CActorPropertyList_FUN_0040e260 at 0040e278
;   core_actor.cpp_CActorPropertyList_FUN_0040e290 at 0040e2a8
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0 at 0040e2e4
;   core_actor.cpp_CActorPropertyList_FUN_0040e300 at 0040e314
;   core_actor.cpp_CActorPropertyList_FUN_0040e330 at 0040e344
;   core_actor.cpp_CActorPropertyList_FUN_0040e350 at 0040e36d
;   ... and 11 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00614471
;   TerminatedCString s_CActorPropertyList_snag__00614483
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e6c0
        ;   Label: core_actor.cpp_CActorPropertyList_snag_FUN_0040e6c0
    PUSH ESI                            ; 0040e6c1
    PUSH EDI                            ; 0040e6c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e6c3
    CMP dword ptr [EBX + 0x4],0x28      ; 0040e6c7
    JG 0x0040e73e                       ; 0040e6cb | LAB_0040e73e
        ;   XREF to: 0040e73e (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EBX + 0x4]       ; 0040e6cd
        ;   Label: LAB_0040e6cd
    MOV EAX,EDX                         ; 0040e6d0
    SHL EAX,0x4                         ; 0040e6d2
    SUB EAX,EDX                         ; 0040e6d5
    MOV ESI,dword ptr [ESP + 0x18]      ; 0040e6d7
    SHL EAX,0x2                         ; 0040e6db
    MOV EDI,dword ptr [EBX + 0x4]       ; 0040e6de
    SUB EAX,EDX                         ; 0040e6e1
    INC EDI                             ; 0040e6e3
    SHL EAX,0x2                         ; 0040e6e4
    LEA EDX,[EBX + 0x8]                 ; 0040e6e7
    MOV dword ptr [EBX + 0x4],EDI       ; 0040e6ea
    ADD EDX,EAX                         ; 0040e6ed
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040e6ef
    LEA EDI,[EDX + 0x4]                 ; 0040e6f3
    MOV dword ptr [EDX],EAX             ; 0040e6f6
    PUSH EDI                            ; 0040e6f8
    MOV AL,byte ptr [ESI]               ; 0040e6f9
        ;   Label: LAB_0040e6f9
    MOV byte ptr [EDI],AL               ; 0040e6fb
    CMP AL,0x0                          ; 0040e6fd
    JZ 0x0040e711                       ; 0040e6ff | LAB_0040e711
        ;   XREF to: 0040e711 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e701
    ADD ESI,0x2                         ; 0040e704
    MOV byte ptr [EDI + 0x1],AL         ; 0040e707
    ADD EDI,0x2                         ; 0040e70a
    CMP AL,0x0                          ; 0040e70d
    JNZ 0x0040e6f9                      ; 0040e70f | LAB_0040e6f9
        ;   XREF to: 0040e6f9 (CONDITIONAL_JUMP)
    POP EDI                             ; 0040e711
        ;   Label: LAB_0040e711
    MOV dword ptr [EDX + 0x58],0x0      ; 0040e712
    MOV dword ptr [EDX + 0x54],0x1      ; 0040e719
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040e720
    MOV byte ptr [EDX + 0x84],0x0       ; 0040e724
    MOV dword ptr [EDX + 0x68],EAX      ; 0040e72b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0040e72e
    MOV dword ptr [EDX + 0xe8],EAX      ; 0040e732
    MOV EAX,EDX                         ; 0040e738
    POP EDI                             ; 0040e73a
    POP ESI                             ; 0040e73b
    POP EBX                             ; 0040e73c
    RET                                 ; 0040e73d
    MOV ECX,0x614471                    ; 0040e73e | = "..\\core\\actor.cpp" | s_core_actor_cpp_00614471 = ..\core\actor.cpp
        ;   Label: LAB_0040e73e
    MOV ESI,0xec7                       ; 0040e743
    PUSH 0x614483                       ; 0040e748 | = "CActorPropertyList::snag - Too many a..." | s_CActorPropertyList_snag__00614483 = CActorPropertyList::snag - Too many actor properties!
    MOV dword ptr [0x02f0ca48],ECX      ; 0040e74d | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0040e753 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040e759 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040e75e
    JMP 0x0040e6cd                      ; 0040e761 | LAB_0040e6cd
        ;   XREF to: 0040e6cd (UNCONDITIONAL_JUMP)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CActorProperty * __cdecl core_actor_cpp_CActorPropertyList_snag_FUN_0040e6c0(CActorPropertyList *this_ptr,EActorPropertyType property_type,char *property_name,void *data_ptr,CActorPropertyValidatorFunc *callback)
;
; Parameters:
; CActorPropertyList * Stack[0x4]:4   this_ptr
; EActorPropertyType Stack[0x8]:4   property_type
; char *           Stack[0xc]:4   property_name
; void *           Stack[0x10]:4   data_ptr
; CActorPropertyValidatorFunc * Stack[0x14]:4   callback
;
; XREF[21]:
;   core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670 at 0040e680
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 at 0040e344
;   core_actor.cpp_CActorPropertyList_addButton_FUN_0040e480 at 0040e494
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 at 0040e36d
;   core_actor.cpp_CActorPropertyList_addClothList_FUN_0040e500 at 0040e569
;   core_actor.cpp_CActorPropertyList_addEnumPair_FUN_0040e640 at 0040e654
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 at 0040e474
;   core_actor.cpp_CActorPropertyList_addFile_FUN_0040e3e0 at 0040e3f6
;   core_actor.cpp_CActorPropertyList_addFlags_FUN_0040e6a0 at 0040e6b4
;   core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0 at 0040e1b8
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
    JG 0x0040e73e                       ; 0040e6cb
        ;   XREF to: 0040e73e (CONDITIONAL_JUMP)  ; LAB_0040e73e
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
    JZ 0x0040e711                       ; 0040e6ff
        ;   XREF to: 0040e711 (CONDITIONAL_JUMP)  ; LAB_0040e711
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e701
    ADD ESI,0x2                         ; 0040e704
    MOV byte ptr [EDI + 0x1],AL         ; 0040e707
    ADD EDI,0x2                         ; 0040e70a
    CMP AL,0x0                          ; 0040e70d
    JNZ 0x0040e6f9                      ; 0040e70f
        ;   XREF to: 0040e6f9 (CONDITIONAL_JUMP)  ; LAB_0040e6f9
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
    MOV ECX,0x614471                    ; 0040e73e | = "..\\core\\actor.cpp"
        ;   Label: LAB_0040e73e
    MOV ESI,0xec7                       ; 0040e743
    PUSH 0x614483                       ; 0040e748 | = "CActorPropertyList::snag - Too many a..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0040e74d | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0040e753 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040e759
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0040e75e
    JMP 0x0040e6cd                      ; 0040e761
        ;   XREF to: 0040e6cd (UNCONDITIONAL_JUMP)  ; LAB_0040e6cd


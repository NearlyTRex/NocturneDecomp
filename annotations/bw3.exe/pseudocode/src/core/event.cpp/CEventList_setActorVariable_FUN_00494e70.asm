; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00494e70(CEventList *this_ptr,char *var_name,CDemonActor *actor)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   var_name
; CDemonActor *    Stack[0xc]:4   actor
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052cdfb
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005bffc7
;   TerminatedCString s_Tried_to_assign_actor_va_005bffd9
;   TerminatedCString s_core_event_cpp_005c0017
;   TerminatedCString s_CEventList_setActorVaria_005c0029
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_FUN_00408870
;   core_event.cpp_CEventList_findActorVariable_FUN_004950c0
;   core_main.c_FUN_004e4330
;   crt_string.c_memmove_FUN_005a54c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494e70
        ;   Label: core_event.cpp_CEventList_setActorVariable_FUN_00494e70
    PUSH ESI                            ; 00494e71
    PUSH EDI                            ; 00494e72
    PUSH EBP                            ; 00494e73
    SUB ESP,0x8                         ; 00494e74
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00494e77
    MOV EDI,dword ptr [ESP + 0x20]      ; 00494e7b
    MOV EBP,dword ptr [ESP + 0x24]      ; 00494e7f
    TEST EBP,EBP                        ; 00494e83
    JZ 0x00494ebb                       ; 00494e85
        ;   XREF to: 00494ebb (CONDITIONAL_JUMP)  ; LAB_00494ebb
    CMP byte ptr [EBP],0x0              ; 00494e87
    JNZ 0x00494ebb                      ; 00494e8b
        ;   XREF to: 00494ebb (CONDITIONAL_JUMP)  ; LAB_00494ebb
    MOV EDX,0x5bffc7                    ; 00494e8d | = "..\\core\\event.cpp"
    MOV ECX,0xf34                       ; 00494e92
    PUSH EBP                            ; 00494e97
    MOV dword ptr [0x01d71de0],EDX      ; 00494e98 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00494e9e | DAT_01d71de4
    CALL core_actor.cpp_FUN_00408870    ; 00494ea4
        ;   XREF to: 00408870 (UNCONDITIONAL_CALL)  ; char * core_actor.cpp_FUN_00408870(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00494ea9
    PUSH EAX                            ; 00494eac
    PUSH EDI                            ; 00494ead
    PUSH 0x5bffd9                       ; 00494eae | = "Tried to assign actor var %s an actor..."
    CALL core_main.c_FUN_004e4330       ; 00494eb3
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0xc                         ; 00494eb8
    PUSH EDI                            ; 00494ebb
        ;   Label: LAB_00494ebb
    PUSH EBX                            ; 00494ebc
    CALL core_event.cpp_CEventList_findActorVariable_FUN_004950c0 ; 00494ebd
        ;   XREF to: 004950c0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findActorVariable_FUN_004950c0(CEventList * this_ptr, char * name)
    MOV ESI,EAX                         ; 00494ec2
    ADD ESP,0x8                         ; 00494ec4
    TEST EAX,EAX                        ; 00494ec7
    JL 0x00494f3f                       ; 00494ec9
        ;   XREF to: 00494f3f (CONDITIONAL_JUMP)  ; LAB_00494f3f
    LEA EAX,[EBX + 0x37da]              ; 00494ecb
    MOV dword ptr [ESP],EAX             ; 00494ed1
    MOV EAX,ESI                         ; 00494ed4
    ADD EAX,EAX                         ; 00494ed6
    MOV EDX,EAX                         ; 00494ed8
    SHL EAX,0x4                         ; 00494eda
    SUB EAX,EDX                         ; 00494edd
    MOV EDX,dword ptr [ESP]             ; 00494edf
    ADD EDX,EAX                         ; 00494ee2
    LEA ECX,[EBX + 0x34ec]              ; 00494ee4
    MOV dword ptr [ESP + 0x4],EDX       ; 00494eea
    LEA EDX,[ECX + EAX*0x1]             ; 00494eee
    TEST EBP,EBP                        ; 00494ef1
    JZ 0x00494fe9                       ; 00494ef3
        ;   XREF to: 00494fe9 (CONDITIONAL_JUMP)  ; LAB_00494fe9
    MOV ESI,EDI                         ; 00494ef9
    MOV EDI,EDX                         ; 00494efb
    PUSH EDI                            ; 00494efd
    MOV AL,byte ptr [ESI]               ; 00494efe
        ;   Label: LAB_00494efe
    MOV byte ptr [EDI],AL               ; 00494f00
    CMP AL,0x0                          ; 00494f02
    JZ 0x00494f16                       ; 00494f04
        ;   XREF to: 00494f16 (CONDITIONAL_JUMP)  ; LAB_00494f16
    MOV AL,byte ptr [ESI + 0x1]         ; 00494f06
    ADD ESI,0x2                         ; 00494f09
    MOV byte ptr [EDI + 0x1],AL         ; 00494f0c
    ADD EDI,0x2                         ; 00494f0f
    CMP AL,0x0                          ; 00494f12
    JNZ 0x00494efe                      ; 00494f14
        ;   XREF to: 00494efe (CONDITIONAL_JUMP)  ; LAB_00494efe
    POP EDI                             ; 00494f16
        ;   Label: LAB_00494f16
    MOV EDI,dword ptr [ESP + 0x4]       ; 00494f17
    MOV ESI,EBP                         ; 00494f1b
    PUSH EDI                            ; 00494f1d
    MOV AL,byte ptr [ESI]               ; 00494f1e
        ;   Label: LAB_00494f1e
    MOV byte ptr [EDI],AL               ; 00494f20
    CMP AL,0x0                          ; 00494f22
    JZ 0x00494f36                       ; 00494f24
        ;   XREF to: 00494f36 (CONDITIONAL_JUMP)  ; LAB_00494f36
    MOV AL,byte ptr [ESI + 0x1]         ; 00494f26
    ADD ESI,0x2                         ; 00494f29
    MOV byte ptr [EDI + 0x1],AL         ; 00494f2c
    ADD EDI,0x2                         ; 00494f2f
    CMP AL,0x0                          ; 00494f32
    JNZ 0x00494f1e                      ; 00494f34
        ;   XREF to: 00494f1e (CONDITIONAL_JUMP)  ; LAB_00494f1e
    POP EDI                             ; 00494f36
        ;   Label: LAB_00494f36
    ADD ESP,0x8                         ; 00494f37
        ;   Label: LAB_00494f37
    POP EBP                             ; 00494f3a
    POP EDI                             ; 00494f3b
    POP ESI                             ; 00494f3c
    POP EBX                             ; 00494f3d
    RET                                 ; 00494f3e
    TEST EBP,EBP                        ; 00494f3f
        ;   Label: LAB_00494f3f
    JZ 0x00494f37                       ; 00494f41
        ;   XREF to: 00494f37 (CONDITIONAL_JUMP)  ; LAB_00494f37
    CMP dword ptr [EBX + 0x34e8],0x19   ; 00494f43
    JL 0x00494f71                       ; 00494f4a
        ;   XREF to: 00494f71 (CONDITIONAL_JUMP)  ; LAB_00494f71
    PUSH 0x19                           ; 00494f4c
    MOV ECX,0x5c0017                    ; 00494f4e | = "..\\core\\event.cpp"
    MOV ESI,0xf41                       ; 00494f53
    PUSH 0x5c0029                       ; 00494f58 | = "CEventList::setActorVariable - alread..."
    MOV dword ptr [0x01d71de0],ECX      ; 00494f5d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00494f63 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00494f69
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 00494f6e
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00494f71
        ;   Label: LAB_00494f71
    ADD EAX,EAX                         ; 00494f77
    MOV EDX,EAX                         ; 00494f79
    SHL EAX,0x4                         ; 00494f7b
    SUB EAX,EDX                         ; 00494f7e
    MOV EDX,EAX                         ; 00494f80
    LEA EAX,[EBX + 0x34ec]              ; 00494f82
    ADD EAX,EDX                         ; 00494f88
    MOV ESI,EDI                         ; 00494f8a
    MOV EDI,EAX                         ; 00494f8c
    PUSH EDI                            ; 00494f8e
    MOV AL,byte ptr [ESI]               ; 00494f8f
        ;   Label: LAB_00494f8f
    MOV byte ptr [EDI],AL               ; 00494f91
    CMP AL,0x0                          ; 00494f93
    JZ 0x00494fa7                       ; 00494f95
        ;   XREF to: 00494fa7 (CONDITIONAL_JUMP)  ; LAB_00494fa7
    MOV AL,byte ptr [ESI + 0x1]         ; 00494f97
    ADD ESI,0x2                         ; 00494f9a
    MOV byte ptr [EDI + 0x1],AL         ; 00494f9d
    ADD EDI,0x2                         ; 00494fa0
    CMP AL,0x0                          ; 00494fa3
    JNZ 0x00494f8f                      ; 00494fa5
        ;   XREF to: 00494f8f (CONDITIONAL_JUMP)  ; LAB_00494f8f
    POP EDI                             ; 00494fa7
        ;   Label: LAB_00494fa7
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00494fa8
    ADD EAX,EAX                         ; 00494fae
    MOV EDX,EAX                         ; 00494fb0
    SHL EAX,0x4                         ; 00494fb2
    LEA EDI,[EBX + 0x37da]              ; 00494fb5
    SUB EAX,EDX                         ; 00494fbb
    MOV ESI,EBP                         ; 00494fbd
    ADD EDI,EAX                         ; 00494fbf
    PUSH EDI                            ; 00494fc1
    MOV AL,byte ptr [ESI]               ; 00494fc2
        ;   Label: LAB_00494fc2
    MOV byte ptr [EDI],AL               ; 00494fc4
    CMP AL,0x0                          ; 00494fc6
    JZ 0x00494fda                       ; 00494fc8
        ;   XREF to: 00494fda (CONDITIONAL_JUMP)  ; LAB_00494fda
    MOV AL,byte ptr [ESI + 0x1]         ; 00494fca
    ADD ESI,0x2                         ; 00494fcd
    MOV byte ptr [EDI + 0x1],AL         ; 00494fd0
    ADD EDI,0x2                         ; 00494fd3
    CMP AL,0x0                          ; 00494fd6
    JNZ 0x00494fc2                      ; 00494fd8
        ;   XREF to: 00494fc2 (CONDITIONAL_JUMP)  ; LAB_00494fc2
    POP EDI                             ; 00494fda
        ;   Label: LAB_00494fda
    INC dword ptr [EBX + 0x34e8]        ; 00494fdb
    ADD ESP,0x8                         ; 00494fe1
    POP EBP                             ; 00494fe4
    POP EDI                             ; 00494fe5
    POP ESI                             ; 00494fe6
    POP EBX                             ; 00494fe7
    RET                                 ; 00494fe8
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 00494fe9
        ;   Label: LAB_00494fe9
    DEC EDI                             ; 00494fef
    MOV EAX,EDI                         ; 00494ff0
    SUB EAX,ESI                         ; 00494ff2
    ADD EAX,EAX                         ; 00494ff4
    MOV dword ptr [EBX + 0x34e8],EDI    ; 00494ff6
    MOV EDI,EAX                         ; 00494ffc
    SHL EAX,0x4                         ; 00494ffe
    SUB EAX,EDI                         ; 00495001
    PUSH EAX                            ; 00495003
    LEA EAX,[ESI + 0x1]                 ; 00495004
    ADD EAX,EAX                         ; 00495007
    MOV EDI,EAX                         ; 00495009
    SHL EAX,0x4                         ; 0049500b
    SUB EAX,EDI                         ; 0049500e
    ADD ECX,EAX                         ; 00495010
    PUSH ECX                            ; 00495012
    PUSH EDX                            ; 00495013
    MOV EDI,EAX                         ; 00495014
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00495016
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 0049501b
    SUB EAX,ESI                         ; 00495021
    ADD EAX,EAX                         ; 00495023
    MOV EDX,EAX                         ; 00495025
    SHL EAX,0x4                         ; 00495027
    ADD ESP,0xc                         ; 0049502a
    SUB EAX,EDX                         ; 0049502d
    MOV EBP,dword ptr [ESP]             ; 0049502f
    PUSH EAX                            ; 00495032
    ADD EDI,EBP                         ; 00495033
    PUSH EDI                            ; 00495035
    MOV EAX,dword ptr [ESP + 0xc]       ; 00495036
    PUSH EAX                            ; 0049503a
    CALL crt_string.c_memmove_FUN_005a54c0 ; 0049503b
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00495040
    ADD ESP,0x8                         ; 00495043
    POP EBP                             ; 00495046
    POP EDI                             ; 00495047
    POP ESI                             ; 00495048
    POP EBX                             ; 00495049
    RET                                 ; 0049504a


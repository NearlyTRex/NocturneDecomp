; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_lever_cpp_CLever_process_FUN_004e1d70(CLever *this_ptr,float delta_time)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005dbf3a
;   undefined4 DAT_005dbf42
;   undefined4 DAT_005dbf4a
;   undefined4 DAT_006141f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CLeverClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;   core_lever.cpp_CLever_setState_FUN_004e1f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1d70
        ;   Label: core_lever.cpp_CLever_process_FUN_004e1d70
    PUSH ESI                            ; 004e1d71
    PUSH EDI                            ; 004e1d72
    PUSH EBP                            ; 004e1d73
    SUB ESP,0x8                         ; 004e1d74
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e1d77
    CMP dword ptr [EBX + 0x574],0x0     ; 004e1d7b
    JZ 0x004e1ef4                       ; 004e1d82
        ;   XREF to: 004e1ef4 (CONDITIONAL_JUMP)  ; LAB_004e1ef4
    FLD float ptr [EBX + 0x438]         ; 004e1d88
    FCOMP float ptr [EBX + 0x578]       ; 004e1d8e
    FNSTSW AX                           ; 004e1d94
    SAHF                                ; 004e1d96
    JNC 0x004e1e4d                      ; 004e1d97
        ;   XREF to: 004e1e4d (CONDITIONAL_JUMP)  ; LAB_004e1e4d
    FLD float ptr [ESP + 0x20]          ; 004e1d9d
    FMUL double ptr [0x005dbf3a]        ; 004e1da1 | DAT_005dbf3a
    FADD float ptr [EBX + 0x438]        ; 004e1da7
    FST float ptr [EBX + 0x438]         ; 004e1dad
    FCOMP float ptr [EBX + 0x578]       ; 004e1db3
    FNSTSW AX                           ; 004e1db9
    SAHF                                ; 004e1dbb
    JBE 0x004e1e05                      ; 004e1dbc
        ;   XREF to: 004e1e05 (CONDITIONAL_JUMP)  ; LAB_004e1e05
    MOV dword ptr [EBX + 0x574],0x0     ; 004e1dbe
    FLD float ptr [EBX + 0x578]         ; 004e1dc8
    MOV EDI,dword ptr [EBX + 0x568]     ; 004e1dce
    FSTP float ptr [EBX + 0x438]        ; 004e1dd4
    TEST EDI,EDI                        ; 004e1dda
    JZ 0x004e1e05                       ; 004e1ddc
        ;   XREF to: 004e1e05 (CONDITIONAL_JUMP)  ; LAB_004e1e05
    FLD float ptr [EBX + 0x438]         ; 004e1dde
    FCOMP double ptr [0x005dbf4a]       ; 004e1de4 | DAT_005dbf4a
    FNSTSW AX                           ; 004e1dea
    SAHF                                ; 004e1dec
    JBE 0x004e1e05                      ; 004e1ded
        ;   XREF to: 004e1e05 (CONDITIONAL_JUMP)  ; LAB_004e1e05
    LEA EAX,[EBX + 0x43c]               ; 004e1def
    PUSH EAX                            ; 004e1df5
    MOV EBP,dword ptr [0x006141f0]      ; 004e1df6 | DAT_006141f0
    PUSH EBP                            ; 004e1dfc
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004e1dfd
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
        ;   Label: LAB_004e1dfd
    ADD ESP,0x8                         ; 004e1e02
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004e1e05
        ;   Label: LAB_004e1e05
    TEST EAX,EAX                        ; 004e1e0b
    JNZ 0x004e1eba                      ; 004e1e0d
        ;   XREF to: 004e1eba (CONDITIONAL_JUMP)  ; LAB_004e1eba
    XOR ESI,ESI                         ; 004e1e13
        ;   Label: LAB_004e1e13
    XOR EDI,EDI                         ; 004e1e15
    MOV EAX,[0x0061b5a8]                ; 004e1e17 | g_CDemonSetPtr
        ;   Label: LAB_004e1e17
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 004e1e1c
    JGE 0x004e1ef4                      ; 004e1e22
        ;   XREF to: 004e1ef4 (CONDITIONAL_JUMP)  ; LAB_004e1ef4
    MOV EBP,dword ptr [0x01d03500]      ; 004e1e28 | g_CLeverClassInfo.name_hash
    PUSH EBP                            ; 004e1e2e
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004e1e2f
    PUSH EDX                            ; 004e1e36
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004e1e37
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004e1e3c
    TEST EAX,EAX                        ; 004e1e3f
    JNZ 0x004e1ece                      ; 004e1e41
        ;   XREF to: 004e1ece (CONDITIONAL_JUMP)  ; LAB_004e1ece
    INC EDI                             ; 004e1e47
        ;   Label: LAB_004e1e47
    ADD ESI,0x4                         ; 004e1e48
    JMP 0x004e1e17                      ; 004e1e4b
        ;   XREF to: 004e1e17 (UNCONDITIONAL_JUMP)  ; LAB_004e1e17
    FLD float ptr [ESP + 0x20]          ; 004e1e4d
        ;   Label: LAB_004e1e4d
    FMUL double ptr [0x005dbf3a]        ; 004e1e51 | DAT_005dbf3a
    FSUBR float ptr [EBX + 0x438]       ; 004e1e57
    FST float ptr [EBX + 0x438]         ; 004e1e5d
    FCOMP float ptr [EBX + 0x578]       ; 004e1e63
    FNSTSW AX                           ; 004e1e69
    SAHF                                ; 004e1e6b
    JNC 0x004e1e05                      ; 004e1e6c
        ;   XREF to: 004e1e05 (CONDITIONAL_JUMP)  ; LAB_004e1e05
    MOV dword ptr [EBX + 0x574],0x0     ; 004e1e6e
    FLD float ptr [EBX + 0x578]         ; 004e1e78
    MOV ECX,dword ptr [EBX + 0x568]     ; 004e1e7e
    FSTP float ptr [EBX + 0x438]        ; 004e1e84
    TEST ECX,ECX                        ; 004e1e8a
    JZ 0x004e1e05                       ; 004e1e8c
        ;   XREF to: 004e1e05 (CONDITIONAL_JUMP)  ; LAB_004e1e05
    FLD float ptr [EBX + 0x438]         ; 004e1e92
    FCOMP double ptr [0x005dbf42]       ; 004e1e98 | DAT_005dbf42
    FNSTSW AX                           ; 004e1e9e
    SAHF                                ; 004e1ea0
    JNC 0x004e1e05                      ; 004e1ea1
        ;   XREF to: 004e1e05 (CONDITIONAL_JUMP)  ; LAB_004e1e05
    LEA EAX,[EBX + 0x4a0]               ; 004e1ea7
    PUSH EAX                            ; 004e1ead
    MOV ESI,dword ptr [0x006141f0]      ; 004e1eae | DAT_006141f0
    PUSH ESI                            ; 004e1eb4
    JMP 0x004e1dfd                      ; 004e1eb5
        ;   XREF to: 004e1dfd (UNCONDITIONAL_JUMP)  ; LAB_004e1dfd
    PUSH dword ptr [EBX + 0x438]        ; 004e1eba
        ;   Label: LAB_004e1eba
    PUSH EAX                            ; 004e1ec0
    CALL core_lever.cpp_CLever_setState_FUN_004e1f70 ; 004e1ec1
        ;   XREF to: 004e1f70 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_CLever_setState_FUN_004e1f70(CLever * this_ptr, float new_state)
    ADD ESP,0x8                         ; 004e1ec6
    JMP 0x004e1e13                      ; 004e1ec9
        ;   XREF to: 004e1e13 (UNCONDITIONAL_JUMP)  ; LAB_004e1e13
    MOV ECX,dword ptr [EAX + 0x56c]     ; 004e1ece
        ;   Label: LAB_004e1ece
    CMP EBX,ECX                         ; 004e1ed4
    JNZ 0x004e1e47                      ; 004e1ed6
        ;   XREF to: 004e1e47 (CONDITIONAL_JUMP)  ; LAB_004e1e47
    PUSH dword ptr [ECX + 0x438]        ; 004e1edc
    PUSH EAX                            ; 004e1ee2
    CALL core_lever.cpp_CLever_setState_FUN_004e1f70 ; 004e1ee3
        ;   XREF to: 004e1f70 (UNCONDITIONAL_CALL)  ; void core_lever.cpp_CLever_setState_FUN_004e1f70(CLever * this_ptr, float new_state)
    ADD ESP,0x8                         ; 004e1ee8
    INC EDI                             ; 004e1eeb
    ADD ESI,0x4                         ; 004e1eec
    JMP 0x004e1e17                      ; 004e1eef
        ;   XREF to: 004e1e17 (UNCONDITIONAL_JUMP)  ; LAB_004e1e17
    CMP dword ptr [EBX + 0x568],0x0     ; 004e1ef4
        ;   Label: LAB_004e1ef4
    JNZ 0x004e1f47                      ; 004e1efb
        ;   XREF to: 004e1f47 (CONDITIONAL_JUMP)  ; LAB_004e1f47
    FLD float ptr [EBX + 0x438]         ; 004e1efd
    FCOMP double ptr [0x005dbf42]       ; 004e1f03 | DAT_005dbf42
    FNSTSW AX                           ; 004e1f09
    SAHF                                ; 004e1f0b
    JNC 0x004e1f2d                      ; 004e1f0c
        ;   XREF to: 004e1f2d (CONDITIONAL_JUMP)  ; LAB_004e1f2d
    CMP byte ptr [EBX + 0x4a0],0x0      ; 004e1f0e
    JZ 0x004e1f2d                       ; 004e1f15
        ;   XREF to: 004e1f2d (CONDITIONAL_JUMP)  ; LAB_004e1f2d
    LEA EAX,[EBX + 0x4a0]               ; 004e1f17
    PUSH EAX                            ; 004e1f1d
    MOV EDI,dword ptr [0x006141f0]      ; 004e1f1e | DAT_006141f0
    PUSH EDI                            ; 004e1f24
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004e1f25
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004e1f2a
    FLD float ptr [EBX + 0x438]         ; 004e1f2d
        ;   Label: LAB_004e1f2d
    FCOMP double ptr [0x005dbf4a]       ; 004e1f33 | DAT_005dbf4a
    FNSTSW AX                           ; 004e1f39
    SAHF                                ; 004e1f3b
    JBE 0x004e1f47                      ; 004e1f3c
        ;   XREF to: 004e1f47 (CONDITIONAL_JUMP)  ; LAB_004e1f47
    CMP byte ptr [EBX + 0x43c],0x0      ; 004e1f3e
    JNZ 0x004e1f4f                      ; 004e1f45
        ;   XREF to: 004e1f4f (CONDITIONAL_JUMP)  ; LAB_004e1f4f
    ADD ESP,0x8                         ; 004e1f47
        ;   Label: LAB_004e1f47
    POP EBP                             ; 004e1f4a
    POP EDI                             ; 004e1f4b
    POP ESI                             ; 004e1f4c
    POP EBX                             ; 004e1f4d
    RET                                 ; 004e1f4e
    ADD EBX,0x43c                       ; 004e1f4f
        ;   Label: LAB_004e1f4f
    PUSH EBX                            ; 004e1f55
    MOV EBP,dword ptr [0x006141f0]      ; 004e1f56 | DAT_006141f0
    PUSH EBP                            ; 004e1f5c
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004e1f5d
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004e1f62
    ADD ESP,0x8                         ; 004e1f65
    POP EBP                             ; 004e1f68
    POP EDI                             ; 004e1f69
    POP ESI                             ; 004e1f6a
    POP EBX                             ; 004e1f6b
    RET                                 ; 004e1f6c


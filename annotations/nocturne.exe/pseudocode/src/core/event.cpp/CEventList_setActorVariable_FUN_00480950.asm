; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_event_cpp_CEventList_setActorVariable_FUN_00480950(int param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00500e8a
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00580b77
;   TerminatedCString s_Tried_to_assign_actor_va_00580b89
;   TerminatedCString s_core_event_cpp_00580bc7
;   TerminatedCString s_CEventList_setActorVaria_00580bd9
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0
;   core_event.cpp_CEventList_findActorVariable_FUN_00480ba0
;   core_main.c_FUN_004c8440
;   crt_string.c_memmove_FUN_00566170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00480950
        ;   Label: core_event.cpp_CEventList_setActorVariable_FUN_00480950
    PUSH ESI                            ; 00480951
    PUSH EDI                            ; 00480952
    PUSH EBP                            ; 00480953
    SUB ESP,0x8                         ; 00480954
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00480957
    MOV EDI,dword ptr [ESP + 0x20]      ; 0048095b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0048095f
    TEST EBP,EBP                        ; 00480963
    JZ 0x0048099b                       ; 00480965
        ;   XREF to: 0048099b (CONDITIONAL_JUMP)  ; LAB_0048099b
    CMP byte ptr [EBP],0x0              ; 00480967
    JNZ 0x0048099b                      ; 0048096b
        ;   XREF to: 0048099b (CONDITIONAL_JUMP)  ; LAB_0048099b
    MOV EDX,0x580b77                    ; 0048096d | = "..\\core\\event.cpp"
    MOV ECX,0xb2b                       ; 00480972
    PUSH EBP                            ; 00480977
    MOV dword ptr [0x01cc4800],EDX      ; 00480978 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0048097e | INT_01cc4804
    CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0 ; 00480984
        ;   XREF to: 00409fa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_getActorClassName_FUN_00409fa0()
    ADD ESP,0x4                         ; 00480989
    PUSH EAX                            ; 0048098c
    PUSH EDI                            ; 0048098d
    PUSH 0x580b89                       ; 0048098e | = "Tried to assign actor var %s an actor..."
    CALL core_main.c_FUN_004c8440       ; 00480993
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0xc                         ; 00480998
    PUSH EDI                            ; 0048099b
        ;   Label: LAB_0048099b
    PUSH EBX                            ; 0048099c
    CALL core_event.cpp_CEventList_findActorVariable_FUN_00480ba0 ; 0048099d
        ;   XREF to: 00480ba0 (UNCONDITIONAL_CALL)  ; undefined core_event.cpp_CEventList_findActorVariable_FUN_00480ba0()
    MOV ESI,EAX                         ; 004809a2
    ADD ESP,0x8                         ; 004809a4
    TEST EAX,EAX                        ; 004809a7
    JL 0x00480a1f                       ; 004809a9
        ;   XREF to: 00480a1f (CONDITIONAL_JUMP)  ; LAB_00480a1f
    LEA EAX,[EBX + 0x37da]              ; 004809ab
    MOV dword ptr [ESP],EAX             ; 004809b1
    MOV EAX,ESI                         ; 004809b4
    ADD EAX,EAX                         ; 004809b6
    MOV EDX,EAX                         ; 004809b8
    SHL EAX,0x4                         ; 004809ba
    SUB EAX,EDX                         ; 004809bd
    MOV EDX,dword ptr [ESP]             ; 004809bf
    ADD EDX,EAX                         ; 004809c2
    LEA ECX,[EBX + 0x34ec]              ; 004809c4
    MOV dword ptr [ESP + 0x4],EDX       ; 004809ca
    LEA EDX,[ECX + EAX*0x1]             ; 004809ce
    TEST EBP,EBP                        ; 004809d1
    JZ 0x00480ac9                       ; 004809d3
        ;   XREF to: 00480ac9 (CONDITIONAL_JUMP)  ; LAB_00480ac9
    MOV ESI,EDI                         ; 004809d9
    MOV EDI,EDX                         ; 004809db
    PUSH EDI                            ; 004809dd
    MOV AL,byte ptr [ESI]               ; 004809de
        ;   Label: LAB_004809de
    MOV byte ptr [EDI],AL               ; 004809e0
    CMP AL,0x0                          ; 004809e2
    JZ 0x004809f6                       ; 004809e4
        ;   XREF to: 004809f6 (CONDITIONAL_JUMP)  ; LAB_004809f6
    MOV AL,byte ptr [ESI + 0x1]         ; 004809e6
    ADD ESI,0x2                         ; 004809e9
    MOV byte ptr [EDI + 0x1],AL         ; 004809ec
    ADD EDI,0x2                         ; 004809ef
    CMP AL,0x0                          ; 004809f2
    JNZ 0x004809de                      ; 004809f4
        ;   XREF to: 004809de (CONDITIONAL_JUMP)  ; LAB_004809de
    POP EDI                             ; 004809f6
        ;   Label: LAB_004809f6
    MOV EDI,dword ptr [ESP + 0x4]       ; 004809f7
    MOV ESI,EBP                         ; 004809fb
    PUSH EDI                            ; 004809fd
    MOV AL,byte ptr [ESI]               ; 004809fe
        ;   Label: LAB_004809fe
    MOV byte ptr [EDI],AL               ; 00480a00
    CMP AL,0x0                          ; 00480a02
    JZ 0x00480a16                       ; 00480a04
        ;   XREF to: 00480a16 (CONDITIONAL_JUMP)  ; LAB_00480a16
    MOV AL,byte ptr [ESI + 0x1]         ; 00480a06
    ADD ESI,0x2                         ; 00480a09
    MOV byte ptr [EDI + 0x1],AL         ; 00480a0c
    ADD EDI,0x2                         ; 00480a0f
    CMP AL,0x0                          ; 00480a12
    JNZ 0x004809fe                      ; 00480a14
        ;   XREF to: 004809fe (CONDITIONAL_JUMP)  ; LAB_004809fe
    POP EDI                             ; 00480a16
        ;   Label: LAB_00480a16
    ADD ESP,0x8                         ; 00480a17
        ;   Label: LAB_00480a17
    POP EBP                             ; 00480a1a
    POP EDI                             ; 00480a1b
    POP ESI                             ; 00480a1c
    POP EBX                             ; 00480a1d
    RET                                 ; 00480a1e
    TEST EBP,EBP                        ; 00480a1f
        ;   Label: LAB_00480a1f
    JZ 0x00480a17                       ; 00480a21
        ;   XREF to: 00480a17 (CONDITIONAL_JUMP)  ; LAB_00480a17
    CMP dword ptr [EBX + 0x34e8],0x19   ; 00480a23
    JL 0x00480a51                       ; 00480a2a
        ;   XREF to: 00480a51 (CONDITIONAL_JUMP)  ; LAB_00480a51
    PUSH 0x19                           ; 00480a2c
    MOV ECX,0x580bc7                    ; 00480a2e | = "..\\core\\event.cpp"
    MOV ESI,0xb38                       ; 00480a33
    PUSH 0x580bd9                       ; 00480a38 | = "CEventList::setActorVariable - alread..."
    MOV dword ptr [0x01cc4800],ECX      ; 00480a3d | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00480a43 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00480a49
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 00480a4e
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00480a51
        ;   Label: LAB_00480a51
    ADD EAX,EAX                         ; 00480a57
    MOV EDX,EAX                         ; 00480a59
    SHL EAX,0x4                         ; 00480a5b
    SUB EAX,EDX                         ; 00480a5e
    MOV EDX,EAX                         ; 00480a60
    LEA EAX,[EBX + 0x34ec]              ; 00480a62
    ADD EAX,EDX                         ; 00480a68
    MOV ESI,EDI                         ; 00480a6a
    MOV EDI,EAX                         ; 00480a6c
    PUSH EDI                            ; 00480a6e
    MOV AL,byte ptr [ESI]               ; 00480a6f
        ;   Label: LAB_00480a6f
    MOV byte ptr [EDI],AL               ; 00480a71
    CMP AL,0x0                          ; 00480a73
    JZ 0x00480a87                       ; 00480a75
        ;   XREF to: 00480a87 (CONDITIONAL_JUMP)  ; LAB_00480a87
    MOV AL,byte ptr [ESI + 0x1]         ; 00480a77
    ADD ESI,0x2                         ; 00480a7a
    MOV byte ptr [EDI + 0x1],AL         ; 00480a7d
    ADD EDI,0x2                         ; 00480a80
    CMP AL,0x0                          ; 00480a83
    JNZ 0x00480a6f                      ; 00480a85
        ;   XREF to: 00480a6f (CONDITIONAL_JUMP)  ; LAB_00480a6f
    POP EDI                             ; 00480a87
        ;   Label: LAB_00480a87
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00480a88
    ADD EAX,EAX                         ; 00480a8e
    MOV EDX,EAX                         ; 00480a90
    SHL EAX,0x4                         ; 00480a92
    LEA EDI,[EBX + 0x37da]              ; 00480a95
    SUB EAX,EDX                         ; 00480a9b
    MOV ESI,EBP                         ; 00480a9d
    ADD EDI,EAX                         ; 00480a9f
    PUSH EDI                            ; 00480aa1
    MOV AL,byte ptr [ESI]               ; 00480aa2
        ;   Label: LAB_00480aa2
    MOV byte ptr [EDI],AL               ; 00480aa4
    CMP AL,0x0                          ; 00480aa6
    JZ 0x00480aba                       ; 00480aa8
        ;   XREF to: 00480aba (CONDITIONAL_JUMP)  ; LAB_00480aba
    MOV AL,byte ptr [ESI + 0x1]         ; 00480aaa
    ADD ESI,0x2                         ; 00480aad
    MOV byte ptr [EDI + 0x1],AL         ; 00480ab0
    ADD EDI,0x2                         ; 00480ab3
    CMP AL,0x0                          ; 00480ab6
    JNZ 0x00480aa2                      ; 00480ab8
        ;   XREF to: 00480aa2 (CONDITIONAL_JUMP)  ; LAB_00480aa2
    POP EDI                             ; 00480aba
        ;   Label: LAB_00480aba
    INC dword ptr [EBX + 0x34e8]        ; 00480abb
    ADD ESP,0x8                         ; 00480ac1
    POP EBP                             ; 00480ac4
    POP EDI                             ; 00480ac5
    POP ESI                             ; 00480ac6
    POP EBX                             ; 00480ac7
    RET                                 ; 00480ac8
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 00480ac9
        ;   Label: LAB_00480ac9
    DEC EDI                             ; 00480acf
    MOV EAX,EDI                         ; 00480ad0
    SUB EAX,ESI                         ; 00480ad2
    ADD EAX,EAX                         ; 00480ad4
    MOV dword ptr [EBX + 0x34e8],EDI    ; 00480ad6
    MOV EDI,EAX                         ; 00480adc
    SHL EAX,0x4                         ; 00480ade
    SUB EAX,EDI                         ; 00480ae1
    PUSH EAX                            ; 00480ae3
    LEA EAX,[ESI + 0x1]                 ; 00480ae4
    ADD EAX,EAX                         ; 00480ae7
    MOV EDI,EAX                         ; 00480ae9
    SHL EAX,0x4                         ; 00480aeb
    SUB EAX,EDI                         ; 00480aee
    ADD ECX,EAX                         ; 00480af0
    PUSH ECX                            ; 00480af2
    PUSH EDX                            ; 00480af3
    MOV EDI,EAX                         ; 00480af4
    CALL crt_string.c_memmove_FUN_00566170 ; 00480af6
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00480afb
    SUB EAX,ESI                         ; 00480b01
    ADD EAX,EAX                         ; 00480b03
    MOV EDX,EAX                         ; 00480b05
    SHL EAX,0x4                         ; 00480b07
    ADD ESP,0xc                         ; 00480b0a
    SUB EAX,EDX                         ; 00480b0d
    MOV EBP,dword ptr [ESP]             ; 00480b0f
    PUSH EAX                            ; 00480b12
    ADD EDI,EBP                         ; 00480b13
    PUSH EDI                            ; 00480b15
    MOV EAX,dword ptr [ESP + 0xc]       ; 00480b16
    PUSH EAX                            ; 00480b1a
    CALL crt_string.c_memmove_FUN_00566170 ; 00480b1b
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; undefined crt_string.c_memmove_FUN_00566170()
    ADD ESP,0xc                         ; 00480b20
    ADD ESP,0x8                         ; 00480b23
    POP EBP                             ; 00480b26
    POP EDI                             ; 00480b27
    POP ESI                             ; 00480b28
    POP EBX                             ; 00480b29
    RET                                 ; 00480b2a


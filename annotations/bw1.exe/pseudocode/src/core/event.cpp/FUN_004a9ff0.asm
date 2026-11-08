; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a9ff0(int param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00544460 at 0054770b
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_005dec8b
;   TerminatedCString s_Tried_to_assign_actor_va_005dec9d
;   TerminatedCString s_core_event_cpp_005decdb
;   TerminatedCString s_CEventList_setActorVaria_005deced
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00408830
;   FUN_004aa240
;   FUN_005030e0
;   FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9ff0
        ;   Label: FUN_004a9ff0
    PUSH ESI                            ; 004a9ff1
    PUSH EDI                            ; 004a9ff2
    PUSH EBP                            ; 004a9ff3
    SUB ESP,0x8                         ; 004a9ff4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004a9ff7
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a9ffb
    MOV EBP,dword ptr [ESP + 0x24]      ; 004a9fff
    TEST EBP,EBP                        ; 004aa003
    JZ 0x004aa03b                       ; 004aa005
        ;   XREF to: 004aa03b (CONDITIONAL_JUMP)  ; LAB_004aa03b
    CMP byte ptr [EBP],0x0              ; 004aa007
    JNZ 0x004aa03b                      ; 004aa00b
        ;   XREF to: 004aa03b (CONDITIONAL_JUMP)  ; LAB_004aa03b
    MOV EDX,0x5dec8b                    ; 004aa00d | = "..\\core\\event.cpp"
    MOV ECX,0xe82                       ; 004aa012
    PUSH EBP                            ; 004aa017
    MOV dword ptr [0x01d1d400],EDX      ; 004aa018 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 004aa01e | DAT_01d1d404
    CALL FUN_00408830                   ; 004aa024
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 004aa029
    PUSH EAX                            ; 004aa02c
    PUSH EDI                            ; 004aa02d
    PUSH 0x5dec9d                       ; 004aa02e | = "Tried to assign actor var %s an actor..."
    CALL FUN_005030e0                   ; 004aa033
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0xc                         ; 004aa038
    PUSH EDI                            ; 004aa03b
        ;   Label: LAB_004aa03b
    PUSH EBX                            ; 004aa03c
    CALL FUN_004aa240                   ; 004aa03d
        ;   XREF to: 004aa240 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa240()
    MOV ESI,EAX                         ; 004aa042
    ADD ESP,0x8                         ; 004aa044
    TEST EAX,EAX                        ; 004aa047
    JL 0x004aa0bf                       ; 004aa049
        ;   XREF to: 004aa0bf (CONDITIONAL_JUMP)  ; LAB_004aa0bf
    LEA EAX,[EBX + 0x37da]              ; 004aa04b
    MOV dword ptr [ESP],EAX             ; 004aa051
    MOV EAX,ESI                         ; 004aa054
    ADD EAX,EAX                         ; 004aa056
    MOV EDX,EAX                         ; 004aa058
    SHL EAX,0x4                         ; 004aa05a
    SUB EAX,EDX                         ; 004aa05d
    MOV EDX,dword ptr [ESP]             ; 004aa05f
    ADD EDX,EAX                         ; 004aa062
    LEA ECX,[EBX + 0x34ec]              ; 004aa064
    MOV dword ptr [ESP + 0x4],EDX       ; 004aa06a
    LEA EDX,[ECX + EAX*0x1]             ; 004aa06e
    TEST EBP,EBP                        ; 004aa071
    JZ 0x004aa169                       ; 004aa073
        ;   XREF to: 004aa169 (CONDITIONAL_JUMP)  ; LAB_004aa169
    MOV ESI,EDI                         ; 004aa079
    MOV EDI,EDX                         ; 004aa07b
    PUSH EDI                            ; 004aa07d
    MOV AL,byte ptr [ESI]               ; 004aa07e
        ;   Label: LAB_004aa07e
    MOV byte ptr [EDI],AL               ; 004aa080
    CMP AL,0x0                          ; 004aa082
    JZ 0x004aa096                       ; 004aa084
        ;   XREF to: 004aa096 (CONDITIONAL_JUMP)  ; LAB_004aa096
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa086
    ADD ESI,0x2                         ; 004aa089
    MOV byte ptr [EDI + 0x1],AL         ; 004aa08c
    ADD EDI,0x2                         ; 004aa08f
    CMP AL,0x0                          ; 004aa092
    JNZ 0x004aa07e                      ; 004aa094
        ;   XREF to: 004aa07e (CONDITIONAL_JUMP)  ; LAB_004aa07e
    POP EDI                             ; 004aa096
        ;   Label: LAB_004aa096
    MOV EDI,dword ptr [ESP + 0x4]       ; 004aa097
    MOV ESI,EBP                         ; 004aa09b
    PUSH EDI                            ; 004aa09d
    MOV AL,byte ptr [ESI]               ; 004aa09e
        ;   Label: LAB_004aa09e
    MOV byte ptr [EDI],AL               ; 004aa0a0
    CMP AL,0x0                          ; 004aa0a2
    JZ 0x004aa0b6                       ; 004aa0a4
        ;   XREF to: 004aa0b6 (CONDITIONAL_JUMP)  ; LAB_004aa0b6
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa0a6
    ADD ESI,0x2                         ; 004aa0a9
    MOV byte ptr [EDI + 0x1],AL         ; 004aa0ac
    ADD EDI,0x2                         ; 004aa0af
    CMP AL,0x0                          ; 004aa0b2
    JNZ 0x004aa09e                      ; 004aa0b4
        ;   XREF to: 004aa09e (CONDITIONAL_JUMP)  ; LAB_004aa09e
    POP EDI                             ; 004aa0b6
        ;   Label: LAB_004aa0b6
    ADD ESP,0x8                         ; 004aa0b7
        ;   Label: LAB_004aa0b7
    POP EBP                             ; 004aa0ba
    POP EDI                             ; 004aa0bb
    POP ESI                             ; 004aa0bc
    POP EBX                             ; 004aa0bd
    RET                                 ; 004aa0be
    TEST EBP,EBP                        ; 004aa0bf
        ;   Label: LAB_004aa0bf
    JZ 0x004aa0b7                       ; 004aa0c1
        ;   XREF to: 004aa0b7 (CONDITIONAL_JUMP)  ; LAB_004aa0b7
    CMP dword ptr [EBX + 0x34e8],0x19   ; 004aa0c3
    JL 0x004aa0f1                       ; 004aa0ca
        ;   XREF to: 004aa0f1 (CONDITIONAL_JUMP)  ; LAB_004aa0f1
    PUSH 0x19                           ; 004aa0cc
    MOV ECX,0x5decdb                    ; 004aa0ce | = "..\\core\\event.cpp"
    MOV ESI,0xe8f                       ; 004aa0d3
    PUSH 0x5deced                       ; 004aa0d8 | = "CEventList::setActorVariable - alread..."
    MOV dword ptr [0x01d1d400],ECX      ; 004aa0dd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 004aa0e3 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004aa0e9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 004aa0ee
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004aa0f1
        ;   Label: LAB_004aa0f1
    ADD EAX,EAX                         ; 004aa0f7
    MOV EDX,EAX                         ; 004aa0f9
    SHL EAX,0x4                         ; 004aa0fb
    SUB EAX,EDX                         ; 004aa0fe
    MOV EDX,EAX                         ; 004aa100
    LEA EAX,[EBX + 0x34ec]              ; 004aa102
    ADD EAX,EDX                         ; 004aa108
    MOV ESI,EDI                         ; 004aa10a
    MOV EDI,EAX                         ; 004aa10c
    PUSH EDI                            ; 004aa10e
    MOV AL,byte ptr [ESI]               ; 004aa10f
        ;   Label: LAB_004aa10f
    MOV byte ptr [EDI],AL               ; 004aa111
    CMP AL,0x0                          ; 004aa113
    JZ 0x004aa127                       ; 004aa115
        ;   XREF to: 004aa127 (CONDITIONAL_JUMP)  ; LAB_004aa127
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa117
    ADD ESI,0x2                         ; 004aa11a
    MOV byte ptr [EDI + 0x1],AL         ; 004aa11d
    ADD EDI,0x2                         ; 004aa120
    CMP AL,0x0                          ; 004aa123
    JNZ 0x004aa10f                      ; 004aa125
        ;   XREF to: 004aa10f (CONDITIONAL_JUMP)  ; LAB_004aa10f
    POP EDI                             ; 004aa127
        ;   Label: LAB_004aa127
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004aa128
    ADD EAX,EAX                         ; 004aa12e
    MOV EDX,EAX                         ; 004aa130
    SHL EAX,0x4                         ; 004aa132
    LEA EDI,[EBX + 0x37da]              ; 004aa135
    SUB EAX,EDX                         ; 004aa13b
    MOV ESI,EBP                         ; 004aa13d
    ADD EDI,EAX                         ; 004aa13f
    PUSH EDI                            ; 004aa141
    MOV AL,byte ptr [ESI]               ; 004aa142
        ;   Label: LAB_004aa142
    MOV byte ptr [EDI],AL               ; 004aa144
    CMP AL,0x0                          ; 004aa146
    JZ 0x004aa15a                       ; 004aa148
        ;   XREF to: 004aa15a (CONDITIONAL_JUMP)  ; LAB_004aa15a
    MOV AL,byte ptr [ESI + 0x1]         ; 004aa14a
    ADD ESI,0x2                         ; 004aa14d
    MOV byte ptr [EDI + 0x1],AL         ; 004aa150
    ADD EDI,0x2                         ; 004aa153
    CMP AL,0x0                          ; 004aa156
    JNZ 0x004aa142                      ; 004aa158
        ;   XREF to: 004aa142 (CONDITIONAL_JUMP)  ; LAB_004aa142
    POP EDI                             ; 004aa15a
        ;   Label: LAB_004aa15a
    INC dword ptr [EBX + 0x34e8]        ; 004aa15b
    ADD ESP,0x8                         ; 004aa161
    POP EBP                             ; 004aa164
    POP EDI                             ; 004aa165
    POP ESI                             ; 004aa166
    POP EBX                             ; 004aa167
    RET                                 ; 004aa168
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 004aa169
        ;   Label: LAB_004aa169
    DEC EDI                             ; 004aa16f
    MOV EAX,EDI                         ; 004aa170
    SUB EAX,ESI                         ; 004aa172
    ADD EAX,EAX                         ; 004aa174
    MOV dword ptr [EBX + 0x34e8],EDI    ; 004aa176
    MOV EDI,EAX                         ; 004aa17c
    SHL EAX,0x4                         ; 004aa17e
    SUB EAX,EDI                         ; 004aa181
    PUSH EAX                            ; 004aa183
    LEA EAX,[ESI + 0x1]                 ; 004aa184
    ADD EAX,EAX                         ; 004aa187
    MOV EDI,EAX                         ; 004aa189
    SHL EAX,0x4                         ; 004aa18b
    SUB EAX,EDI                         ; 004aa18e
    ADD ECX,EAX                         ; 004aa190
    PUSH ECX                            ; 004aa192
    PUSH EDX                            ; 004aa193
    MOV EDI,EAX                         ; 004aa194
    CALL FUN_005c25d0                   ; 004aa196
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004aa19b
    SUB EAX,ESI                         ; 004aa1a1
    ADD EAX,EAX                         ; 004aa1a3
    MOV EDX,EAX                         ; 004aa1a5
    SHL EAX,0x4                         ; 004aa1a7
    ADD ESP,0xc                         ; 004aa1aa
    SUB EAX,EDX                         ; 004aa1ad
    MOV EBP,dword ptr [ESP]             ; 004aa1af
    PUSH EAX                            ; 004aa1b2
    ADD EDI,EBP                         ; 004aa1b3
    PUSH EDI                            ; 004aa1b5
    MOV EAX,dword ptr [ESP + 0xc]       ; 004aa1b6
    PUSH EAX                            ; 004aa1ba
    CALL FUN_005c25d0                   ; 004aa1bb
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c25d0()
    ADD ESP,0xc                         ; 004aa1c0
    ADD ESP,0x8                         ; 004aa1c3
    POP EBP                             ; 004aa1c6
    POP EDI                             ; 004aa1c7
    POP ESI                             ; 004aa1c8
    POP EBX                             ; 004aa1c9
    RET                                 ; 004aa1ca


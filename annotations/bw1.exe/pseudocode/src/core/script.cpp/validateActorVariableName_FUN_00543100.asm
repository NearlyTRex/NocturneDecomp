; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_validateActorVariableName_FUN_00543100(char *variable_name)
;
; Parameters:
; char *           Stack[0x4]:4   variable_name
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_00544460 at 005476a7
;   core_script.cpp_getActor_FUN_005433c0 at 005433e4
;
; Referenced Globals:
;   undefined4 s_Actor_variable_name_must_005edf16+1
;   TerminatedCString s_Actor_variable_name_s_is_005edf3f
;   TerminatedCString s_Actor_variable_name_s_is_005edf64
;   undefined4 DAT_00626114
;
; Called Functions:
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543100
        ;   Label: core_script.cpp_validateActorVariableName_FUN_00543100
    PUSH ESI                            ; 00543101
    PUSH EDI                            ; 00543102
    MOV ESI,dword ptr [ESP + 0x10]      ; 00543103
    CMP byte ptr [ESI],0x40             ; 00543107
    JNZ 0x0054313a                      ; 0054310a
        ;   XREF to: 0054313a (CONDITIONAL_JUMP)  ; LAB_0054313a
    MOV EDI,ESI                         ; 0054310c
    SUB ECX,ECX                         ; 0054310e
    DEC ECX                             ; 00543110
    XOR EAX,EAX                         ; 00543111
    SCASB.REPNE ES:EDI                  ; 00543113
    NOT ECX                             ; 00543115
    DEC ECX                             ; 00543117
    CMP ECX,0x1e                        ; 00543118
    JA 0x00543152                       ; 0054311b
        ;   XREF to: 00543152 (CONDITIONAL_JUMP)  ; LAB_00543152
    MOV EDX,0x1                         ; 0054311d
    LEA EAX,[ESI + EDX*0x1]             ; 00543122
    MOV BL,byte ptr [EAX]               ; 00543125
        ;   Label: LAB_00543125
    XOR ECX,ECX                         ; 00543127
    INC BL                              ; 00543129
    MOV CL,BL                           ; 0054312b
    TEST byte ptr [ECX + 0x626114],0xe0 ; 0054312d | DAT_00626114
    JZ 0x00543167                       ; 00543134
        ;   XREF to: 00543167 (CONDITIONAL_JUMP)  ; LAB_00543167
    INC EDX                             ; 00543136
        ;   Label: LAB_00543136
    INC EAX                             ; 00543137
    JMP 0x00543125                      ; 00543138
        ;   XREF to: 00543125 (UNCONDITIONAL_JUMP)  ; LAB_00543125
    PUSH 0x5edf17                       ; 0054313a | s_Actor_variable_name_must_005edf16+1
        ;   Label: LAB_0054313a
    PUSH 0x1e810b0                      ; 0054313f
    CALL crt_unknown.c_FUN_005bfb40     ; 00543144
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x8                         ; 00543149
    XOR EAX,EAX                         ; 0054314c
        ;   Label: LAB_0054314c
    POP EDI                             ; 0054314e
    POP ESI                             ; 0054314f
    POP EBX                             ; 00543150
    RET                                 ; 00543151
    PUSH ESI                            ; 00543152
        ;   Label: LAB_00543152
    PUSH 0x5edf3f                       ; 00543153 | = "Actor variable name \"%s\" is too long"
    PUSH 0x1e810b0                      ; 00543158
    CALL crt_unknown.c_FUN_005bfb40     ; 0054315d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00543162
    JMP 0x0054314c                      ; 00543165
        ;   XREF to: 0054314c (UNCONDITIONAL_JUMP)  ; LAB_0054314c
    MOV BH,byte ptr [EAX]               ; 00543167
        ;   Label: LAB_00543167
    CMP BH,0x5f                         ; 00543169
    JZ 0x00543136                       ; 0054316c
        ;   XREF to: 00543136 (CONDITIONAL_JUMP)  ; LAB_00543136
    CMP EDX,0x1                         ; 0054316e
    JZ 0x00543180                       ; 00543171
        ;   XREF to: 00543180 (CONDITIONAL_JUMP)  ; LAB_00543180
    TEST BH,BH                          ; 00543173
    JNZ 0x00543180                      ; 00543175
        ;   XREF to: 00543180 (CONDITIONAL_JUMP)  ; LAB_00543180
    MOV EAX,0x1                         ; 00543177
    POP EDI                             ; 0054317c
    POP ESI                             ; 0054317d
    POP EBX                             ; 0054317e
    RET                                 ; 0054317f
    PUSH ESI                            ; 00543180
        ;   Label: LAB_00543180
    PUSH 0x5edf64                       ; 00543181 | = "Actor variable name \"%s\" is not valid"
    PUSH 0x1e810b0                      ; 00543186
    CALL crt_unknown.c_FUN_005bfb40     ; 0054318b
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 00543190
    XOR EAX,EAX                         ; 00543193
    POP EDI                             ; 00543195
    POP ESI                             ; 00543196
    POP EBX                             ; 00543197
    RET                                 ; 00543198


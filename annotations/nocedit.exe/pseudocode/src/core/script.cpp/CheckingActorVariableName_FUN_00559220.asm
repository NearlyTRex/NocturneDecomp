; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_script_cpp_CheckingActorVariableName_FUN_00559220(void)
;
;
; XREF[2]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c3ac
;   core_script.cpp_GetDemonActor_FUN_005594e0 at 00559504
;
; Referenced Globals:
;   TerminatedCString s_Actor_variable_name_must_006414a8
;   TerminatedCString s_Actor_variable_name_s_is_006414d0
;   TerminatedCString s_Actor_variable_name_s_is_006414f5
;   char[256] g_CharacterClassificationTable
;   undefined1 DAT_0310eca0
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559220
        ;   Label: core_script.cpp_CheckingActorVariableName_FUN_00559220
    PUSH ESI                            ; 00559221
    PUSH EDI                            ; 00559222
    MOV ESI,dword ptr [ESP + 0x10]      ; 00559223
    CMP byte ptr [ESI],0x40             ; 00559227
    JNZ 0x0055925a                      ; 0055922a
        ;   XREF to: 0055925a (CONDITIONAL_JUMP)  ; LAB_0055925a
    MOV EDI,ESI                         ; 0055922c
    SUB ECX,ECX                         ; 0055922e
    DEC ECX                             ; 00559230
    XOR EAX,EAX                         ; 00559231
    SCASB.REPNE ES:EDI                  ; 00559233
    NOT ECX                             ; 00559235
    DEC ECX                             ; 00559237
    CMP ECX,0x1e                        ; 00559238
    JA 0x00559272                       ; 0055923b
        ;   XREF to: 00559272 (CONDITIONAL_JUMP)  ; LAB_00559272
    MOV EDX,0x1                         ; 0055923d
    LEA EAX,[ESI + EDX*0x1]             ; 00559242
    MOV BL,byte ptr [EAX]               ; 00559245
        ;   Label: LAB_00559245
    XOR ECX,ECX                         ; 00559247
    INC BL                              ; 00559249
    MOV CL,BL                           ; 0055924b
    TEST byte ptr [ECX + 0x6849c4],0xe0 ; 0055924d | g_CharacterClassificationTable
    JZ 0x00559287                       ; 00559254
        ;   XREF to: 00559287 (CONDITIONAL_JUMP)  ; LAB_00559287
    INC EDX                             ; 00559256
        ;   Label: LAB_00559256
    INC EAX                             ; 00559257
    JMP 0x00559245                      ; 00559258
        ;   XREF to: 00559245 (UNCONDITIONAL_JUMP)  ; LAB_00559245
    PUSH 0x6414a8                       ; 0055925a | = "Actor variable name must begin with '@'"
        ;   Label: LAB_0055925a
    PUSH 0x310eca0                      ; 0055925f | DAT_0310eca0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00559264
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x8                         ; 00559269
    XOR EAX,EAX                         ; 0055926c
        ;   Label: LAB_0055926c
    POP EDI                             ; 0055926e
    POP ESI                             ; 0055926f
    POP EBX                             ; 00559270
    RET                                 ; 00559271
    PUSH ESI                            ; 00559272
        ;   Label: LAB_00559272
    PUSH 0x6414d0                       ; 00559273 | = "Actor variable name \"%s\" is too long"
    PUSH 0x310eca0                      ; 00559278 | DAT_0310eca0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 0055927d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00559282
    JMP 0x0055926c                      ; 00559285
        ;   XREF to: 0055926c (UNCONDITIONAL_JUMP)  ; LAB_0055926c
    MOV BH,byte ptr [EAX]               ; 00559287
        ;   Label: LAB_00559287
    CMP BH,0x5f                         ; 00559289
    JZ 0x00559256                       ; 0055928c
        ;   XREF to: 00559256 (CONDITIONAL_JUMP)  ; LAB_00559256
    CMP EDX,0x1                         ; 0055928e
    JZ 0x005592a0                       ; 00559291
        ;   XREF to: 005592a0 (CONDITIONAL_JUMP)  ; LAB_005592a0
    TEST BH,BH                          ; 00559293
    JNZ 0x005592a0                      ; 00559295
        ;   XREF to: 005592a0 (CONDITIONAL_JUMP)  ; LAB_005592a0
    MOV EAX,0x1                         ; 00559297
    POP EDI                             ; 0055929c
    POP ESI                             ; 0055929d
    POP EBX                             ; 0055929e
    RET                                 ; 0055929f
    PUSH ESI                            ; 005592a0
        ;   Label: LAB_005592a0
    PUSH 0x6414f5                       ; 005592a1 | = "Actor variable name \"%s\" is not valid"
    PUSH 0x310eca0                      ; 005592a6 | DAT_0310eca0
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005592ab
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005592b0
    XOR EAX,EAX                         ; 005592b3
    POP EDI                             ; 005592b5
    POP ESI                             ; 005592b6
    POP EBX                             ; 005592b7
    RET                                 ; 005592b8


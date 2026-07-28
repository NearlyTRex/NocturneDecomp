; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sound_cpp_FUN_0052d030(undefined4 param_1,char *param_2,char *param_3)
;
;
; XREF[2]:
;   core_dracbrid.cpp_FUN_0045ab40 at 0045afea
;   core_sound.cpp_playSfxInternal_FUN_0052d120 at 0052d522
;
; Referenced Globals:
;   undefined4 DAT_02dc9610
;   undefined4 DAT_02dc9620
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_0056488c
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;   shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d030
        ;   Label: core_sound.cpp_FUN_0052d030
    PUSH ESI                            ; 0052d031
    PUSH EDI                            ; 0052d032
    PUSH EBP                            ; 0052d033
    MOV EAX,dword ptr [ESP + 0x18]      ; 0052d034
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0052d038
    XOR EDX,EDX                         ; 0052d03c
    XOR EBX,EBX                         ; 0052d03e
    MOV dword ptr [0x02dc9620],EDX      ; 0052d040 | DAT_02dc9620
    MOV byte ptr [EAX],0x0              ; 0052d046
    MOV EAX,[0x02dc9610]                ; 0052d049 | DAT_02dc9610
        ;   Label: LAB_0052d049
    CMP EBX,EAX                         ; 0052d04e
    JL 0x0052d064                       ; 0052d050
        ;   XREF to: 0052d064 (CONDITIONAL_JUMP)  ; LAB_0052d064
    CMP dword ptr [0x02dc9620],0x1      ; 0052d052 | DAT_02dc9620
        ;   Label: LAB_0052d052
    JGE 0x0052d0d1                      ; 0052d059
        ;   XREF to: 0052d0d1 (CONDITIONAL_JUMP)  ; LAB_0052d0d1
    POP EBP                             ; 0052d05f
    POP EDI                             ; 0052d060
    POP ESI                             ; 0052d061
    POP EBX                             ; 0052d062
    RET                                 ; 0052d063
    PUSH 0x0                            ; 0052d064
        ;   Label: LAB_0052d064
    PUSH EBX                            ; 0052d066
    PUSH 0x2dc9610                      ; 0052d067 | DAT_02dc9610
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 0052d06c
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00474080(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0052d071
    PUSH EAX                            ; 0052d074
    PUSH EBP                            ; 0052d075
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004775b0 ; 0052d076
        ;   XREF to: 004775b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004775b0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0052d07b
    TEST EAX,EAX                        ; 0052d07e
    JZ 0x0052d0cb                       ; 0052d080
        ;   XREF to: 0052d0cb (CONDITIONAL_JUMP)  ; LAB_0052d0cb
    PUSH EBX                            ; 0052d082
    PUSH 0x2dc9610                      ; 0052d083 | DAT_02dc9610
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 0052d088
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00474080(CStrList * this_ptr, int index)
    IMUL EDI,dword ptr [0x02dc9620],0x28 ; 0052d08d | DAT_02dc9620
    ADD ESP,0x8                         ; 0052d094
    MOV ESI,EAX                         ; 0052d097
    ADD EDI,0x2dc9628                   ; 0052d099
    PUSH EDI                            ; 0052d09f
    MOV AL,byte ptr [ESI]               ; 0052d0a0
        ;   Label: LAB_0052d0a0
    MOV byte ptr [EDI],AL               ; 0052d0a2
    CMP AL,0x0                          ; 0052d0a4
    JZ 0x0052d0b8                       ; 0052d0a6
        ;   XREF to: 0052d0b8 (CONDITIONAL_JUMP)  ; LAB_0052d0b8
    MOV AL,byte ptr [ESI + 0x1]         ; 0052d0a8
    ADD ESI,0x2                         ; 0052d0ab
    MOV byte ptr [EDI + 0x1],AL         ; 0052d0ae
    ADD EDI,0x2                         ; 0052d0b1
    CMP AL,0x0                          ; 0052d0b4
    JNZ 0x0052d0a0                      ; 0052d0b6
        ;   XREF to: 0052d0a0 (CONDITIONAL_JUMP)  ; LAB_0052d0a0
    POP EDI                             ; 0052d0b8
        ;   Label: LAB_0052d0b8
    MOV ESI,dword ptr [0x02dc9620]      ; 0052d0b9 | DAT_02dc9620
    INC ESI                             ; 0052d0bf
    MOV dword ptr [0x02dc9620],ESI      ; 0052d0c0 | DAT_02dc9620
    CMP ESI,0x28                        ; 0052d0c6
    JGE 0x0052d052                      ; 0052d0c9
        ;   XREF to: 0052d052 (CONDITIONAL_JUMP)  ; LAB_0052d052
    INC EBX                             ; 0052d0cb
        ;   Label: LAB_0052d0cb
    JMP 0x0052d049                      ; 0052d0cc
        ;   XREF to: 0052d049 (UNCONDITIONAL_JUMP)  ; LAB_0052d049
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0052d0d1
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
        ;   Label: LAB_0052d0d1
    MOV EDX,EAX                         ; 0052d0d6
    MOV ECX,dword ptr [0x02dc9620]      ; 0052d0d8 | DAT_02dc9620
    SAR EDX,0x1f                        ; 0052d0de
    IDIV ECX                            ; 0052d0e1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052d0e3
    ADD EAX,EDX                         ; 0052d0ea
    MOV ESI,0x2dc9628                   ; 0052d0ec
    SHL EAX,0x3                         ; 0052d0f1
    MOV EDI,dword ptr [ESP + 0x18]      ; 0052d0f4
    ADD ESI,EAX                         ; 0052d0f8
    PUSH EDI                            ; 0052d0fa
    MOV AL,byte ptr [ESI]               ; 0052d0fb
        ;   Label: LAB_0052d0fb
    MOV byte ptr [EDI],AL               ; 0052d0fd
    CMP AL,0x0                          ; 0052d0ff
    JZ 0x0052d113                       ; 0052d101
        ;   XREF to: 0052d113 (CONDITIONAL_JUMP)  ; LAB_0052d113
    MOV AL,byte ptr [ESI + 0x1]         ; 0052d103
    ADD ESI,0x2                         ; 0052d106
    MOV byte ptr [EDI + 0x1],AL         ; 0052d109
    ADD EDI,0x2                         ; 0052d10c
    CMP AL,0x0                          ; 0052d10f
    JNZ 0x0052d0fb                      ; 0052d111
        ;   XREF to: 0052d0fb (CONDITIONAL_JUMP)  ; LAB_0052d0fb
    POP EDI                             ; 0052d113
        ;   Label: LAB_0052d113
    POP EBP                             ; 0052d114
    POP EDI                             ; 0052d115
    POP ESI                             ; 0052d116
    POP EBX                             ; 0052d117
    RET                                 ; 0052d118


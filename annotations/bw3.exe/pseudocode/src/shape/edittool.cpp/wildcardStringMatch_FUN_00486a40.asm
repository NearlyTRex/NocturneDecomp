; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_edittool_cpp_wildcardStringMatch_FUN_00486a40(char *pattern,char *target_string,int case_sensitive)
;
; Parameters:
; char *           Stack[0x4]:4   pattern
; char *           Stack[0x8]:4   target_string
; int              Stack[0xc]:4   case_sensitive
;
; XREF[8]:
;   core_charactr.cpp_FUN_004348b0 at 0043493f
;   core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c6c80 at 004c6d3f
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052e932
;   core_sound.cpp_FUN_0055ef30 at 0055ef76
;   core_sound.cpp_filterSoundFilesByPattern_FUN_0055e810 at 0055e842
;   core_trigger.cpp_CTrigger_acceptsDamageFrom_FUN_0056ede0 at 0056ee15
;   engine_pod.cpp_CPod_getNextSearchResult_FUN_005148b0 at 00514958
;   shape_edittool.cpp_FUN_00482ea0 at 00482fbd
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005a35a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486a40
        ;   Label: shape_edittool.cpp_wildcardStringMatch_FUN_00486a40
    PUSH ESI                            ; 00486a41
    PUSH EDI                            ; 00486a42
    PUSH EBP                            ; 00486a43
    MOV EAX,dword ptr [ESP + 0x14]      ; 00486a44
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00486a48
    MOV EBX,dword ptr [ESP + 0x18]      ; 00486a4c
    MOV DL,byte ptr [EAX]               ; 00486a50
    MOV ESI,EAX                         ; 00486a52
    TEST DL,DL                          ; 00486a54
    JZ 0x00486a75                       ; 00486a56
        ;   XREF to: 00486a75 (CONDITIONAL_JUMP)  ; LAB_00486a75
    MOV AL,byte ptr [ESI]               ; 00486a58
        ;   Label: LAB_00486a58
    CMP AL,0x2a                         ; 00486a5a
    JNC 0x00486ada                      ; 00486a5c
        ;   XREF to: 00486ada (CONDITIONAL_JUMP)  ; LAB_00486ada
    TEST EBP,EBP                        ; 00486a62
        ;   Label: LAB_00486a62
    JZ 0x00486ab3                       ; 00486a64
        ;   XREF to: 00486ab3 (CONDITIONAL_JUMP)  ; LAB_00486ab3
    MOV AL,byte ptr [ESI]               ; 00486a66
    CMP AL,byte ptr [EBX]               ; 00486a68
    JNZ 0x00486aac                      ; 00486a6a
        ;   XREF to: 00486aac (CONDITIONAL_JUMP)  ; LAB_00486aac
    INC EBX                             ; 00486a6c
        ;   Label: LAB_00486a6c
    MOV DH,byte ptr [ESI + 0x1]         ; 00486a6d
    INC ESI                             ; 00486a70
    TEST DH,DH                          ; 00486a71
    JNZ 0x00486a58                      ; 00486a73
        ;   XREF to: 00486a58 (CONDITIONAL_JUMP)  ; LAB_00486a58
    CMP byte ptr [EBX],0x0              ; 00486a75
        ;   Label: LAB_00486a75
    SETZ AL                             ; 00486a78
    AND EAX,0xff                        ; 00486a7b
    POP EBP                             ; 00486a80
        ;   Label: LAB_00486a80
    POP EDI                             ; 00486a81
    POP ESI                             ; 00486a82
    POP EBX                             ; 00486a83
    RET                                 ; 00486a84
    INC ESI                             ; 00486a85
        ;   Label: LAB_00486a85
    PUSH EBP                            ; 00486a86
        ;   Label: LAB_00486a86
    PUSH EBX                            ; 00486a87
    PUSH ESI                            ; 00486a88
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00486a40 ; 00486a89
        ;   XREF to: 00486a40 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00486a40(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 00486a8e
    TEST EAX,EAX                        ; 00486a91
    JNZ 0x00486a9d                      ; 00486a93
        ;   XREF to: 00486a9d (CONDITIONAL_JUMP)  ; LAB_00486a9d
    CMP byte ptr [EBX],0x0              ; 00486a95
    JZ 0x00486a80                       ; 00486a98
        ;   XREF to: 00486a80 (CONDITIONAL_JUMP)  ; LAB_00486a80
    INC EBX                             ; 00486a9a
    JMP 0x00486a86                      ; 00486a9b
        ;   XREF to: 00486a86 (UNCONDITIONAL_JUMP)  ; LAB_00486a86
    MOV EAX,0x1                         ; 00486a9d
        ;   Label: LAB_00486a9d
    POP EBP                             ; 00486aa2
    POP EDI                             ; 00486aa3
    POP ESI                             ; 00486aa4
    POP EBX                             ; 00486aa5
    RET                                 ; 00486aa6
    CMP byte ptr [EBX],0x0              ; 00486aa7
        ;   Label: LAB_00486aa7
    JNZ 0x00486a6c                      ; 00486aaa
        ;   XREF to: 00486a6c (CONDITIONAL_JUMP)  ; LAB_00486a6c
    XOR EAX,EAX                         ; 00486aac
        ;   Label: LAB_00486aac
    POP EBP                             ; 00486aae
    POP EDI                             ; 00486aaf
    POP ESI                             ; 00486ab0
    POP EBX                             ; 00486ab1
    RET                                 ; 00486ab2
    XOR EAX,EAX                         ; 00486ab3
        ;   Label: LAB_00486ab3
    MOV AL,byte ptr [ESI]               ; 00486ab5
    PUSH EAX                            ; 00486ab7
    CALL crt_ctype.c_tolower_FUN_005a35a0 ; 00486ab8
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005a35a0(int character)
    MOV EDI,EAX                         ; 00486abd
    XOR EAX,EAX                         ; 00486abf
    ADD ESP,0x4                         ; 00486ac1
    MOV AL,byte ptr [EBX]               ; 00486ac4
    PUSH EAX                            ; 00486ac6
    CALL crt_ctype.c_tolower_FUN_005a35a0 ; 00486ac7
        ;   XREF to: 005a35a0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c_tolower_FUN_005a35a0(int character)
    ADD ESP,0x4                         ; 00486acc
    CMP EDI,EAX                         ; 00486acf
    JZ 0x00486a6c                       ; 00486ad1
        ;   XREF to: 00486a6c (CONDITIONAL_JUMP)  ; LAB_00486a6c
    XOR EAX,EAX                         ; 00486ad3
    POP EBP                             ; 00486ad5
    POP EDI                             ; 00486ad6
    POP ESI                             ; 00486ad7
    POP EBX                             ; 00486ad8
    RET                                 ; 00486ad9
    JBE 0x00486a85                      ; 00486ada
        ;   XREF to: 00486a85 (CONDITIONAL_JUMP)  ; LAB_00486a85
        ;   Label: LAB_00486ada
    CMP AL,0x3f                         ; 00486adc
    JZ 0x00486aa7                       ; 00486ade
        ;   XREF to: 00486aa7 (CONDITIONAL_JUMP)  ; LAB_00486aa7
    JMP 0x00486a62                      ; 00486ae0
        ;   XREF to: 00486a62 (UNCONDITIONAL_JUMP)  ; LAB_00486a62


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
;
; Parameters:
; char *           Stack[0x4]:4   pattern
; char *           Stack[0x8]:4   target_string
; int              Stack[0xc]:4   case_sensitive
;
; XREF[11]:
;   core_charactr.cpp_CCharacter_FUN_0042e050 at 0042e14e
;   core_msnedit.cpp_DeleteActors_FUN_0053df90 at 0053e13a
;   core_msnedit.cpp_FUN_005379e0 at 00537cdf
;   core_msnedit.cpp_HideActors_FUN_0053dcf0 at 0053ded2
;   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 at 0053d135
;   core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0 at 005b1f16
;   core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0 at 005b1802
;   core_trigger.cpp_CTrigger_process_FUN_005dfac0 at 005dfff3
;   core_trigger.cpp_FUN_005e0ac0 at 005e0af0
;   engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50 at 004b40db
;   ... and 1 more
;
; Called Functions:
;   crt_ctype.c_tolower_FUN_005feb30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6e20
        ;   Label: shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
    PUSH ESI                            ; 004a6e21
    PUSH EDI                            ; 004a6e22
    PUSH EBP                            ; 004a6e23
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a6e24
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a6e28
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a6e2c
    MOV DL,byte ptr [EAX]               ; 004a6e30
    MOV ESI,EAX                         ; 004a6e32
    TEST DL,DL                          ; 004a6e34
    JZ 0x004a6e55                       ; 004a6e36 | LAB_004a6e55
        ;   XREF to: 004a6e55 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI]               ; 004a6e38
        ;   Label: LAB_004a6e38
    CMP AL,0x2a                         ; 004a6e3a
    JNC 0x004a6eba                      ; 004a6e3c | LAB_004a6eba
        ;   XREF to: 004a6eba (CONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 004a6e42
        ;   Label: LAB_004a6e42
    JZ 0x004a6e93                       ; 004a6e44 | LAB_004a6e93
        ;   XREF to: 004a6e93 (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI]               ; 004a6e46
    CMP AL,byte ptr [EBX]               ; 004a6e48
    JNZ 0x004a6e8c                      ; 004a6e4a | LAB_004a6e8c
        ;   XREF to: 004a6e8c (CONDITIONAL_JUMP)
    INC EBX                             ; 004a6e4c
        ;   Label: LAB_004a6e4c
    MOV DH,byte ptr [ESI + 0x1]         ; 004a6e4d
    INC ESI                             ; 004a6e50
    TEST DH,DH                          ; 004a6e51
    JNZ 0x004a6e38                      ; 004a6e53 | LAB_004a6e38
        ;   XREF to: 004a6e38 (CONDITIONAL_JUMP)
    CMP byte ptr [EBX],0x0              ; 004a6e55
        ;   Label: LAB_004a6e55
    SETZ AL                             ; 004a6e58
    AND EAX,0xff                        ; 004a6e5b
    POP EBP                             ; 004a6e60
        ;   Label: LAB_004a6e60
    POP EDI                             ; 004a6e61
    POP ESI                             ; 004a6e62
    POP EBX                             ; 004a6e63
    RET                                 ; 004a6e64
    INC ESI                             ; 004a6e65
        ;   Label: LAB_004a6e65
    PUSH EBP                            ; 004a6e66
        ;   Label: LAB_004a6e66
    PUSH EBX                            ; 004a6e67
    PUSH ESI                            ; 004a6e68
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 004a6e69 | int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004a6e6e
    TEST EAX,EAX                        ; 004a6e71
    JNZ 0x004a6e7d                      ; 004a6e73 | LAB_004a6e7d
        ;   XREF to: 004a6e7d (CONDITIONAL_JUMP)
    CMP byte ptr [EBX],0x0              ; 004a6e75
    JZ 0x004a6e60                       ; 004a6e78 | LAB_004a6e60
        ;   XREF to: 004a6e60 (CONDITIONAL_JUMP)
    INC EBX                             ; 004a6e7a
    JMP 0x004a6e66                      ; 004a6e7b | LAB_004a6e66
        ;   XREF to: 004a6e66 (UNCONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004a6e7d
        ;   Label: LAB_004a6e7d
    POP EBP                             ; 004a6e82
    POP EDI                             ; 004a6e83
    POP ESI                             ; 004a6e84
    POP EBX                             ; 004a6e85
    RET                                 ; 004a6e86
    CMP byte ptr [EBX],0x0              ; 004a6e87
        ;   Label: LAB_004a6e87
    JNZ 0x004a6e4c                      ; 004a6e8a | LAB_004a6e4c
        ;   XREF to: 004a6e4c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004a6e8c
        ;   Label: LAB_004a6e8c
    POP EBP                             ; 004a6e8e
    POP EDI                             ; 004a6e8f
    POP ESI                             ; 004a6e90
    POP EBX                             ; 004a6e91
    RET                                 ; 004a6e92
    XOR EAX,EAX                         ; 004a6e93
        ;   Label: LAB_004a6e93
    MOV AL,byte ptr [ESI]               ; 004a6e95
    PUSH EAX                            ; 004a6e97
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 004a6e98 | int crt_ctype.c_tolower_FUN_005feb30(int character)
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)
    MOV EDI,EAX                         ; 004a6e9d
    XOR EAX,EAX                         ; 004a6e9f
    ADD ESP,0x4                         ; 004a6ea1
    MOV AL,byte ptr [EBX]               ; 004a6ea4
    PUSH EAX                            ; 004a6ea6
    CALL crt_ctype.c_tolower_FUN_005feb30 ; 004a6ea7 | int crt_ctype.c_tolower_FUN_005feb30(int character)
        ;   XREF to: 005feb30 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004a6eac
    CMP EDI,EAX                         ; 004a6eaf
    JZ 0x004a6e4c                       ; 004a6eb1 | LAB_004a6e4c
        ;   XREF to: 004a6e4c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004a6eb3
    POP EBP                             ; 004a6eb5
    POP EDI                             ; 004a6eb6
    POP ESI                             ; 004a6eb7
    POP EBX                             ; 004a6eb8
    RET                                 ; 004a6eb9
    JBE 0x004a6e65                      ; 004a6eba | LAB_004a6e65
        ;   Label: LAB_004a6eba
        ;   XREF to: 004a6e65 (CONDITIONAL_JUMP)
    CMP AL,0x3f                         ; 004a6ebc
    JZ 0x004a6e87                       ; 004a6ebe | LAB_004a6e87
        ;   XREF to: 004a6e87 (CONDITIONAL_JUMP)
    JMP 0x004a6e42                      ; 004a6ec0 | LAB_004a6e42
        ;   XREF to: 004a6e42 (UNCONDITIONAL_JUMP)


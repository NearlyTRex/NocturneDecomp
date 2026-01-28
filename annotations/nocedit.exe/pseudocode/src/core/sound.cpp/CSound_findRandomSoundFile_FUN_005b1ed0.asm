; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sound_cpp_CSound_findRandomSoundFile_FUN_005b1ed0 (CSound *this_ptr,char *out_result,char *wildcard_pattern)
;
; Parameters:
; CSound *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   out_result
; char *           Stack[0xc]:4   wildcard_pattern
;
; XREF[1]:
;   core_sound.cpp_playSfxInternal_FUN_005b1fd0 at 005b2401
;
; Referenced Globals:
;   CStrList g_SoundFileList
;   int g_SoundMatchCount
;   char[40][40] g_SoundMatchedFilenames
;   undefined4 DAT_03f6b141
;   undefined4 DAT_03f6b142
;   undefined4 DAT_03f6b143
;
; Called Functions:
;   crt_stdlib.c_rand_FUN_005feb5c
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1ed0
        ;   Label: core_sound.cpp_CSound_findRandomSoundFile_FUN_005b1ed0
    PUSH ESI                            ; 005b1ed1
    PUSH EDI                            ; 005b1ed2
    PUSH EBP                            ; 005b1ed3
    MOV EAX,dword ptr [ESP + 0x18]      ; 005b1ed4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005b1ed8
    XOR EDX,EDX                         ; 005b1edc
    XOR EBX,EBX                         ; 005b1ede
    MOV dword ptr [0x03f6b138],EDX      ; 005b1ee0 | g_SoundMatchCount
    MOV byte ptr [EAX],0x0              ; 005b1ee6
    MOV EAX,[0x03f6b128]                ; 005b1ee9 | g_SoundFileList
        ;   Label: LAB_005b1ee9
    CMP EBX,EAX                         ; 005b1eee
    JL 0x005b1f04                       ; 005b1ef0
        ;   XREF to: 005b1f04 (CONDITIONAL_JUMP)  ; LAB_005b1f04
    CMP dword ptr [0x03f6b138],0x1      ; 005b1ef2 | g_SoundMatchCount
        ;   Label: LAB_005b1ef2
    JGE 0x005b1f81                      ; 005b1ef9
        ;   XREF to: 005b1f81 (CONDITIONAL_JUMP)  ; LAB_005b1f81
    POP EBP                             ; 005b1eff
    POP EDI                             ; 005b1f00
    POP ESI                             ; 005b1f01
    POP EBX                             ; 005b1f02
    RET                                 ; 005b1f03
    PUSH 0x0                            ; 005b1f04
        ;   Label: LAB_005b1f04
    PUSH EBX                            ; 005b1f06
    PUSH 0x3f6b128                      ; 005b1f07 | g_SoundFileList
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005b1f0c
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005b1f11
    PUSH EAX                            ; 005b1f14
    PUSH EBP                            ; 005b1f15
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 005b1f16
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 005b1f1b
    TEST EAX,EAX                        ; 005b1f1e
    JZ 0x005b1f7b                       ; 005b1f20
        ;   XREF to: 005b1f7b (CONDITIONAL_JUMP)  ; LAB_005b1f7b
    PUSH EBX                            ; 005b1f22
    PUSH 0x3f6b128                      ; 005b1f23 | g_SoundFileList
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005b1f28
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    MOV EDI,dword ptr [0x03f6b138]      ; 005b1f2d | g_SoundMatchCount
    MOV ESI,EAX                         ; 005b1f33
    LEA EAX,[EDI*0x4 + 0x0]             ; 005b1f35
    ADD EAX,EDI                         ; 005b1f3c
    MOV EDI,0x3f6b140                   ; 005b1f3e | g_SoundMatchedFilenames
    SHL EAX,0x3                         ; 005b1f43
    ADD ESP,0x8                         ; 005b1f46
    ADD EDI,EAX                         ; 005b1f49
    PUSH EDI                            ; 005b1f4b | g_SoundMatchedFilenames
    MOV AL,byte ptr [ESI]               ; 005b1f4c
        ;   Label: LAB_005b1f4c
    MOV byte ptr [EDI],AL               ; 005b1f4e | g_SoundMatchedFilenames | DAT_03f6b142
    CMP AL,0x0                          ; 005b1f50
    JZ 0x005b1f64                       ; 005b1f52
        ;   XREF to: 005b1f64 (CONDITIONAL_JUMP)  ; LAB_005b1f64
    MOV AL,byte ptr [ESI + 0x1]         ; 005b1f54
    ADD ESI,0x2                         ; 005b1f57
    MOV byte ptr [EDI + 0x1],AL         ; 005b1f5a | DAT_03f6b141 | DAT_03f6b143
    ADD EDI,0x2                         ; 005b1f5d
    CMP AL,0x0                          ; 005b1f60
    JNZ 0x005b1f4c                      ; 005b1f62
        ;   XREF to: 005b1f4c (CONDITIONAL_JUMP)  ; LAB_005b1f4c
    POP EDI                             ; 005b1f64
        ;   Label: LAB_005b1f64
    MOV ECX,dword ptr [0x03f6b138]      ; 005b1f65 | g_SoundMatchCount
    INC ECX                             ; 005b1f6b
    MOV dword ptr [0x03f6b138],ECX      ; 005b1f6c | g_SoundMatchCount
    CMP ECX,0x28                        ; 005b1f72
    JGE 0x005b1ef2                      ; 005b1f75
        ;   XREF to: 005b1ef2 (CONDITIONAL_JUMP)  ; LAB_005b1ef2
    INC EBX                             ; 005b1f7b
        ;   Label: LAB_005b1f7b
    JMP 0x005b1ee9                      ; 005b1f7c
        ;   XREF to: 005b1ee9 (UNCONDITIONAL_JUMP)  ; LAB_005b1ee9
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 005b1f81
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_005b1f81
    MOV EDX,EAX                         ; 005b1f86
    MOV EBP,dword ptr [0x03f6b138]      ; 005b1f88 | g_SoundMatchCount
    SAR EDX,0x1f                        ; 005b1f8e
    IDIV EBP                            ; 005b1f91
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b1f93
    ADD EAX,EDX                         ; 005b1f9a
    MOV ESI,0x3f6b140                   ; 005b1f9c | g_SoundMatchedFilenames
    SHL EAX,0x3                         ; 005b1fa1
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b1fa4
    ADD ESI,EAX                         ; 005b1fa8
    PUSH EDI                            ; 005b1faa
    MOV AL,byte ptr [ESI]               ; 005b1fab | g_SoundMatchedFilenames | DAT_03f6b142
        ;   Label: LAB_005b1fab
    MOV byte ptr [EDI],AL               ; 005b1fad
    CMP AL,0x0                          ; 005b1faf
    JZ 0x005b1fc3                       ; 005b1fb1
        ;   XREF to: 005b1fc3 (CONDITIONAL_JUMP)  ; LAB_005b1fc3
    MOV AL,byte ptr [ESI + 0x1]         ; 005b1fb3 | DAT_03f6b141 | DAT_03f6b143
    ADD ESI,0x2                         ; 005b1fb6
    MOV byte ptr [EDI + 0x1],AL         ; 005b1fb9
    ADD EDI,0x2                         ; 005b1fbc
    CMP AL,0x0                          ; 005b1fbf
    JNZ 0x005b1fab                      ; 005b1fc1
        ;   XREF to: 005b1fab (CONDITIONAL_JUMP)  ; LAB_005b1fab
    POP EDI                             ; 005b1fc3
        ;   Label: LAB_005b1fc3
    POP EBP                             ; 005b1fc4
    POP EDI                             ; 005b1fc5
    POP ESI                             ; 005b1fc6
    POP EBX                             ; 005b1fc7
    RET                                 ; 005b1fc8


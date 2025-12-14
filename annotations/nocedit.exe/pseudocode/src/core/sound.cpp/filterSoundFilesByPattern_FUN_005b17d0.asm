; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0(char * wildcard_pattern)
;
; Parameters:
; char *           Stack[0x4]:4   wildcard_pattern
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
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
;   shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b17d0
        ;   Label: core_sound.cpp_filterSoundFilesByPattern_FUN_005b17d0
    PUSH ESI                            ; 005b17d1
    PUSH EDI                            ; 005b17d2
    PUSH EBP                            ; 005b17d3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005b17d4
    XOR EDX,EDX                         ; 005b17d8
    XOR EBX,EBX                         ; 005b17da
    MOV dword ptr [0x03f6b138],EDX      ; 005b17dc | g_SoundMatchCount
    MOV EAX,[0x03f6b128]                ; 005b17e2 | g_SoundFileList
    CMP EBX,EAX                         ; 005b17e7
    JL 0x005b17f0                       ; 005b17e9
        ;   XREF to: 005b17f0 (CONDITIONAL_JUMP)  ; LAB_005b17f0
    POP EBP                             ; 005b17eb
        ;   Label: LAB_005b17eb
    POP EDI                             ; 005b17ec
    POP ESI                             ; 005b17ed
    POP EBX                             ; 005b17ee
    RET                                 ; 005b17ef
    PUSH 0x0                            ; 005b17f0
        ;   Label: LAB_005b17f0
    PUSH EBX                            ; 005b17f2
    PUSH 0x3f6b128                      ; 005b17f3 | g_SoundFileList
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005b17f8
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 005b17fd
    PUSH EAX                            ; 005b1800
    PUSH EBP                            ; 005b1801
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20 ; 005b1802
        ;   XREF to: 004a6e20 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004a6e20(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 005b1807
    TEST EAX,EAX                        ; 005b180a
    JZ 0x005b1857                       ; 005b180c
        ;   XREF to: 005b1857 (CONDITIONAL_JUMP)  ; LAB_005b1857
    PUSH EBX                            ; 005b180e
    PUSH 0x3f6b128                      ; 005b180f | g_SoundFileList
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70 ; 005b1814
        ;   XREF to: 004a2f70 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70(CStrList * this_ptr, int index)
    IMUL EDI,dword ptr [0x03f6b138],0x28 ; 005b1819 | g_SoundMatchCount
    ADD ESP,0x8                         ; 005b1820
    MOV ESI,EAX                         ; 005b1823
    ADD EDI,0x3f6b140                   ; 005b1825 | g_SoundMatchedFilenames
    PUSH EDI                            ; 005b182b | g_SoundMatchedFilenames
    MOV AL,byte ptr [ESI]               ; 005b182c
        ;   Label: LAB_005b182c
    MOV byte ptr [EDI],AL               ; 005b182e | g_SoundMatchedFilenames | DAT_03f6b142
    CMP AL,0x0                          ; 005b1830
    JZ 0x005b1844                       ; 005b1832
        ;   XREF to: 005b1844 (CONDITIONAL_JUMP)  ; LAB_005b1844
    MOV AL,byte ptr [ESI + 0x1]         ; 005b1834
    ADD ESI,0x2                         ; 005b1837
    MOV byte ptr [EDI + 0x1],AL         ; 005b183a | DAT_03f6b141 | DAT_03f6b143
    ADD EDI,0x2                         ; 005b183d
    CMP AL,0x0                          ; 005b1840
    JNZ 0x005b182c                      ; 005b1842
        ;   XREF to: 005b182c (CONDITIONAL_JUMP)  ; LAB_005b182c
    POP EDI                             ; 005b1844
        ;   Label: LAB_005b1844
    MOV ESI,dword ptr [0x03f6b138]      ; 005b1845 | g_SoundMatchCount
    INC ESI                             ; 005b184b
    MOV dword ptr [0x03f6b138],ESI      ; 005b184c | g_SoundMatchCount
    CMP ESI,0x28                        ; 005b1852
    JGE 0x005b17eb                      ; 005b1855
        ;   XREF to: 005b17eb (CONDITIONAL_JUMP)  ; LAB_005b17eb
    INC EBX                             ; 005b1857
        ;   Label: LAB_005b1857
    MOV EAX,[0x03f6b128]                ; 005b1858 | g_SoundFileList
    CMP EBX,EAX                         ; 005b185d
    JL 0x005b17f0                       ; 005b185f
        ;   XREF to: 005b17f0 (CONDITIONAL_JUMP)  ; LAB_005b17f0
    POP EBP                             ; 005b1861
    POP EDI                             ; 005b1862
    POP ESI                             ; 005b1863
    POP EBX                             ; 005b1864
    RET                                 ; 005b1865


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_00558cb0(char *wildcard_pattern)
;
; Parameters:
; char *           Stack[0x4]:4   wildcard_pattern
;
; Referenced Globals:
;   CStrList g_CStrListInstance
;   undefined4 DAT_0264b460
;
; Called Functions:
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00481240
;   shape_edittool.cpp_wildcardStringMatch_FUN_00485840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558cb0
        ;   Label: core_sound.cpp_filterSoundFilesByPattern_FUN_00558cb0
    PUSH ESI                            ; 00558cb1
    PUSH EDI                            ; 00558cb2
    PUSH EBP                            ; 00558cb3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00558cb4
    XOR EDX,EDX                         ; 00558cb8
    XOR EBX,EBX                         ; 00558cba
    MOV dword ptr [0x0264b460],EDX      ; 00558cbc | DAT_0264b460
    MOV EAX,[0x0264b450]                ; 00558cc2 | g_CStrListInstance
    CMP EBX,EAX                         ; 00558cc7
    JL 0x00558cd0                       ; 00558cc9
        ;   XREF to: 00558cd0 (CONDITIONAL_JUMP)  ; LAB_00558cd0
    POP EBP                             ; 00558ccb
        ;   Label: LAB_00558ccb
    POP EDI                             ; 00558ccc
    POP ESI                             ; 00558ccd
    POP EBX                             ; 00558cce
    RET                                 ; 00558ccf
    PUSH 0x0                            ; 00558cd0
        ;   Label: LAB_00558cd0
    PUSH EBX                            ; 00558cd2
    PUSH 0x264b450                      ; 00558cd3
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00558cd8
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 00558cdd
    PUSH EAX                            ; 00558ce0
    PUSH EBP                            ; 00558ce1
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_00485840 ; 00558ce2
        ;   XREF to: 00485840 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_00485840(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 00558ce7
    TEST EAX,EAX                        ; 00558cea
    JZ 0x00558d37                       ; 00558cec
        ;   XREF to: 00558d37 (CONDITIONAL_JUMP)  ; LAB_00558d37
    PUSH EBX                            ; 00558cee
    PUSH 0x264b450                      ; 00558cef
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00481240 ; 00558cf4
        ;   XREF to: 00481240 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00481240(CStrList * this_ptr, int index)
    IMUL EDI,dword ptr [0x0264b460],0x28 ; 00558cf9 | DAT_0264b460
    ADD ESP,0x8                         ; 00558d00
    MOV ESI,EAX                         ; 00558d03
    ADD EDI,0x264b468                   ; 00558d05
    PUSH EDI                            ; 00558d0b
    MOV AL,byte ptr [ESI]               ; 00558d0c
        ;   Label: LAB_00558d0c
    MOV byte ptr [EDI],AL               ; 00558d0e
    CMP AL,0x0                          ; 00558d10
    JZ 0x00558d24                       ; 00558d12
        ;   XREF to: 00558d24 (CONDITIONAL_JUMP)  ; LAB_00558d24
    MOV AL,byte ptr [ESI + 0x1]         ; 00558d14
    ADD ESI,0x2                         ; 00558d17
    MOV byte ptr [EDI + 0x1],AL         ; 00558d1a
    ADD EDI,0x2                         ; 00558d1d
    CMP AL,0x0                          ; 00558d20
    JNZ 0x00558d0c                      ; 00558d22
        ;   XREF to: 00558d0c (CONDITIONAL_JUMP)  ; LAB_00558d0c
    POP EDI                             ; 00558d24
        ;   Label: LAB_00558d24
    MOV ESI,dword ptr [0x0264b460]      ; 00558d25 | DAT_0264b460
    INC ESI                             ; 00558d2b
    MOV dword ptr [0x0264b460],ESI      ; 00558d2c | DAT_0264b460
    CMP ESI,0x28                        ; 00558d32
    JGE 0x00558ccb                      ; 00558d35
        ;   XREF to: 00558ccb (CONDITIONAL_JUMP)  ; LAB_00558ccb
    INC EBX                             ; 00558d37
        ;   Label: LAB_00558d37
    MOV EAX,[0x0264b450]                ; 00558d38 | g_CStrListInstance
    CMP EBX,EAX                         ; 00558d3d
    JL 0x00558cd0                       ; 00558d3f
        ;   XREF to: 00558cd0 (CONDITIONAL_JUMP)  ; LAB_00558cd0
    POP EBP                             ; 00558d41
    POP EDI                             ; 00558d42
    POP ESI                             ; 00558d43
    POP EBX                             ; 00558d44
    RET                                 ; 00558d45


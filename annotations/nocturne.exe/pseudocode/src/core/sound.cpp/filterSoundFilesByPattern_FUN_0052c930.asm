; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_0052c930(char *wildcard_pattern)
;
; Parameters:
; char *           Stack[0x4]:4   wildcard_pattern
;
; Referenced Globals:
;   CStrList g_CStrList_02dc9610
;   undefined4 DAT_02dc9620
;
; Called Functions:
;   shape_edittool.cpp_CStrList_getStringAt_FUN_00474080
;   shape_edittool.cpp_wildcardStringMatch_FUN_004775b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c930
        ;   Label: core_sound.cpp_filterSoundFilesByPattern_FUN_0052c930
    PUSH ESI                            ; 0052c931
    PUSH EDI                            ; 0052c932
    PUSH EBP                            ; 0052c933
    MOV EBP,dword ptr [ESP + 0x14]      ; 0052c934
    XOR EDX,EDX                         ; 0052c938
    XOR EBX,EBX                         ; 0052c93a
    MOV dword ptr [0x02dc9620],EDX      ; 0052c93c | DAT_02dc9620
    MOV EAX,[0x02dc9610]                ; 0052c942 | g_CStrList_02dc9610
    CMP EBX,EAX                         ; 0052c947
    JL 0x0052c950                       ; 0052c949
        ;   XREF to: 0052c950 (CONDITIONAL_JUMP)  ; LAB_0052c950
    POP EBP                             ; 0052c94b
        ;   Label: LAB_0052c94b
    POP EDI                             ; 0052c94c
    POP ESI                             ; 0052c94d
    POP EBX                             ; 0052c94e
    RET                                 ; 0052c94f
    PUSH 0x0                            ; 0052c950
        ;   Label: LAB_0052c950
    PUSH EBX                            ; 0052c952
    PUSH 0x2dc9610                      ; 0052c953
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 0052c958
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00474080(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0052c95d
    PUSH EAX                            ; 0052c960
    PUSH EBP                            ; 0052c961
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_004775b0 ; 0052c962
        ;   XREF to: 004775b0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_004775b0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0052c967
    TEST EAX,EAX                        ; 0052c96a
    JZ 0x0052c9b7                       ; 0052c96c
        ;   XREF to: 0052c9b7 (CONDITIONAL_JUMP)  ; LAB_0052c9b7
    PUSH EBX                            ; 0052c96e
    PUSH 0x2dc9610                      ; 0052c96f
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_00474080 ; 0052c974
        ;   XREF to: 00474080 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_00474080(CStrList * this_ptr, int index)
    IMUL EDI,dword ptr [0x02dc9620],0x28 ; 0052c979 | DAT_02dc9620
    ADD ESP,0x8                         ; 0052c980
    MOV ESI,EAX                         ; 0052c983
    ADD EDI,0x2dc9628                   ; 0052c985
    PUSH EDI                            ; 0052c98b
    MOV AL,byte ptr [ESI]               ; 0052c98c
        ;   Label: LAB_0052c98c
    MOV byte ptr [EDI],AL               ; 0052c98e
    CMP AL,0x0                          ; 0052c990
    JZ 0x0052c9a4                       ; 0052c992
        ;   XREF to: 0052c9a4 (CONDITIONAL_JUMP)  ; LAB_0052c9a4
    MOV AL,byte ptr [ESI + 0x1]         ; 0052c994
    ADD ESI,0x2                         ; 0052c997
    MOV byte ptr [EDI + 0x1],AL         ; 0052c99a
    ADD EDI,0x2                         ; 0052c99d
    CMP AL,0x0                          ; 0052c9a0
    JNZ 0x0052c98c                      ; 0052c9a2
        ;   XREF to: 0052c98c (CONDITIONAL_JUMP)  ; LAB_0052c98c
    POP EDI                             ; 0052c9a4
        ;   Label: LAB_0052c9a4
    MOV ESI,dword ptr [0x02dc9620]      ; 0052c9a5 | DAT_02dc9620
    INC ESI                             ; 0052c9ab
    MOV dword ptr [0x02dc9620],ESI      ; 0052c9ac | DAT_02dc9620
    CMP ESI,0x28                        ; 0052c9b2
    JGE 0x0052c94b                      ; 0052c9b5
        ;   XREF to: 0052c94b (CONDITIONAL_JUMP)  ; LAB_0052c94b
    INC EBX                             ; 0052c9b7
        ;   Label: LAB_0052c9b7
    MOV EAX,[0x02dc9610]                ; 0052c9b8 | g_CStrList_02dc9610
    CMP EBX,EAX                         ; 0052c9bd
    JL 0x0052c950                       ; 0052c9bf
        ;   XREF to: 0052c950 (CONDITIONAL_JUMP)  ; LAB_0052c950
    POP EBP                             ; 0052c9c1
    POP EDI                             ; 0052c9c2
    POP ESI                             ; 0052c9c3
    POP EBX                             ; 0052c9c4
    RET                                 ; 0052c9c5


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sound_cpp_filterSoundFilesByPattern_FUN_0057b6e0(char *wildcard_pattern)
;
; Parameters:
; char *           Stack[0x4]:4   wildcard_pattern
;
; Referenced Globals:
;   CStrList g_CStrListInstance
;   undefined4 DAT_02c82c30
;
; Called Functions:
;   shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0
;   shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b6e0
        ;   Label: core_sound.cpp_filterSoundFilesByPattern_FUN_0057b6e0
    PUSH ESI                            ; 0057b6e1
    PUSH EDI                            ; 0057b6e2
    PUSH EBP                            ; 0057b6e3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0057b6e4
    XOR EDX,EDX                         ; 0057b6e8
    XOR EBX,EBX                         ; 0057b6ea
    MOV dword ptr [0x02c82c30],EDX      ; 0057b6ec | DAT_02c82c30
    MOV EAX,[0x02c82c20]                ; 0057b6f2 | g_CStrListInstance
    CMP EBX,EAX                         ; 0057b6f7
    JL 0x0057b700                       ; 0057b6f9
        ;   XREF to: 0057b700 (CONDITIONAL_JUMP)  ; LAB_0057b700
    POP EBP                             ; 0057b6fb
        ;   Label: LAB_0057b6fb
    POP EDI                             ; 0057b6fc
    POP ESI                             ; 0057b6fd
    POP EBX                             ; 0057b6fe
    RET                                 ; 0057b6ff
    PUSH 0x0                            ; 0057b700
        ;   Label: LAB_0057b700
    PUSH EBX                            ; 0057b702
    PUSH 0x2c82c20                      ; 0057b703
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 0057b708
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    ADD ESP,0x8                         ; 0057b70d
    PUSH EAX                            ; 0057b710
    PUSH EBP                            ; 0057b711
    CALL shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0 ; 0057b712
        ;   XREF to: 0049dea0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_wildcardStringMatch_FUN_0049dea0(char * pattern, char * target_string, int case_sensitive)
    ADD ESP,0xc                         ; 0057b717
    TEST EAX,EAX                        ; 0057b71a
    JZ 0x0057b767                       ; 0057b71c
        ;   XREF to: 0057b767 (CONDITIONAL_JUMP)  ; LAB_0057b767
    PUSH EBX                            ; 0057b71e
    PUSH 0x2c82c20                      ; 0057b71f
    CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0 ; 0057b724
        ;   XREF to: 004998a0 (UNCONDITIONAL_CALL)  ; char * shape_edittool.cpp_CStrList_getStringAt_FUN_004998a0(CStrList * this_ptr, int index)
    IMUL EDI,dword ptr [0x02c82c30],0x28 ; 0057b729 | DAT_02c82c30
    ADD ESP,0x8                         ; 0057b730
    MOV ESI,EAX                         ; 0057b733
    ADD EDI,0x2c82c38                   ; 0057b735
    PUSH EDI                            ; 0057b73b
    MOV AL,byte ptr [ESI]               ; 0057b73c
        ;   Label: LAB_0057b73c
    MOV byte ptr [EDI],AL               ; 0057b73e
    CMP AL,0x0                          ; 0057b740
    JZ 0x0057b754                       ; 0057b742
        ;   XREF to: 0057b754 (CONDITIONAL_JUMP)  ; LAB_0057b754
    MOV AL,byte ptr [ESI + 0x1]         ; 0057b744
    ADD ESI,0x2                         ; 0057b747
    MOV byte ptr [EDI + 0x1],AL         ; 0057b74a
    ADD EDI,0x2                         ; 0057b74d
    CMP AL,0x0                          ; 0057b750
    JNZ 0x0057b73c                      ; 0057b752
        ;   XREF to: 0057b73c (CONDITIONAL_JUMP)  ; LAB_0057b73c
    POP EDI                             ; 0057b754
        ;   Label: LAB_0057b754
    MOV ESI,dword ptr [0x02c82c30]      ; 0057b755 | DAT_02c82c30
    INC ESI                             ; 0057b75b
    MOV dword ptr [0x02c82c30],ESI      ; 0057b75c | DAT_02c82c30
    CMP ESI,0x28                        ; 0057b762
    JGE 0x0057b6fb                      ; 0057b765
        ;   XREF to: 0057b6fb (CONDITIONAL_JUMP)  ; LAB_0057b6fb
    INC EBX                             ; 0057b767
        ;   Label: LAB_0057b767
    MOV EAX,[0x02c82c20]                ; 0057b768 | g_CStrListInstance
    CMP EBX,EAX                         ; 0057b76d
    JL 0x0057b700                       ; 0057b76f
        ;   XREF to: 0057b700 (CONDITIONAL_JUMP)  ; LAB_0057b700
    POP EBP                             ; 0057b771
    POP EDI                             ; 0057b772
    POP ESI                             ; 0057b773
    POP EBX                             ; 0057b774
    RET                                 ; 0057b775


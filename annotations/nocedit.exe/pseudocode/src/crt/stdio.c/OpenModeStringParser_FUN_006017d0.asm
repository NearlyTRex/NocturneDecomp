; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_stdio.c_OpenModeStringParser_FUN_006017d0(char * mode_string, char * output_flags)
;
; Parameters:
; char *           Stack[0x4]:4   mode_string
; char *           Stack[0x8]:4   output_flags
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_stdio.c_fopenThreadSafe_FUN_00601b14 at 00601b27
;   crt_stdio.c_fopenWithFlags_FUN_00601a20 at 00601a2e
;
; Referenced Globals:
;   undefined4 DAT_00684ed0
;   undefined4 DAT_00685280
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_00602790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006017d0
        ;   Label: crt_stdio.c_OpenModeStringParser_FUN_006017d0
    PUSH ESI                            ; 006017d1
    PUSH EDI                            ; 006017d2
    PUSH EBP                            ; 006017d3
    SUB ESP,0x4                         ; 006017d4
    MOV ECX,dword ptr [ESP + 0x18]      ; 006017d7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 006017db
    MOV EDX,0x1                         ; 006017df
    XOR EBX,EBX                         ; 006017e4
    XOR EDI,EDI                         ; 006017e6
    XOR EBP,EBP                         ; 006017e8
    MOV dword ptr [ESP],EBX             ; 006017ea
    TEST ESI,ESI                        ; 006017ed
    JZ 0x006017ff                       ; 006017ef | LAB_006017ff
        ;   XREF to: 006017ff (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [0x00685280]      ; 006017f1 | undefined4 DAT_00685280
    JNZ 0x006017fd                      ; 006017f7 | LAB_006017fd
        ;   XREF to: 006017fd (CONDITIONAL_JUMP)
    MOV dword ptr [ESI],EDX             ; 006017f9
    JMP 0x006017ff                      ; 006017fb | LAB_006017ff
        ;   XREF to: 006017ff (UNCONDITIONAL_JUMP)
    MOV dword ptr [ESI],EBX             ; 006017fd
        ;   Label: LAB_006017fd
    MOV AL,byte ptr [ECX]               ; 006017ff
        ;   Label: LAB_006017ff
    CMP AL,0x72                         ; 00601801
    JC 0x0060180d                       ; 00601803 | LAB_0060180d
        ;   XREF to: 0060180d (CONDITIONAL_JUMP)
    JBE 0x00601813                      ; 00601805 | LAB_00601813
        ;   XREF to: 00601813 (CONDITIONAL_JUMP)
    CMP AL,0x77                         ; 00601807
    JZ 0x00601818                       ; 00601809 | LAB_00601818
        ;   XREF to: 00601818 (CONDITIONAL_JUMP)
    JMP 0x00601822                      ; 0060180b | LAB_00601822
        ;   XREF to: 00601822 (UNCONDITIONAL_JUMP)
    CMP AL,0x61                         ; 0060180d
        ;   Label: LAB_0060180d
    JZ 0x0060181d                       ; 0060180f | LAB_0060181d
        ;   XREF to: 0060181d (CONDITIONAL_JUMP)
    JMP 0x00601822                      ; 00601811 | LAB_00601822
        ;   XREF to: 00601822 (UNCONDITIONAL_JUMP)
    OR BL,0x1                           ; 00601813
        ;   Label: LAB_00601813
    JMP 0x00601833                      ; 00601816 | LAB_00601833
        ;   XREF to: 00601833 (UNCONDITIONAL_JUMP)
    OR BL,0x2                           ; 00601818
        ;   Label: LAB_00601818
    JMP 0x00601833                      ; 0060181b | LAB_00601833
        ;   XREF to: 00601833 (UNCONDITIONAL_JUMP)
    OR BL,0x82                          ; 0060181d
        ;   Label: LAB_0060181d
    JMP 0x00601833                      ; 00601820 | LAB_00601833
        ;   XREF to: 00601833 (UNCONDITIONAL_JUMP)
    PUSH 0x9                            ; 00601822
        ;   Label: LAB_00601822
    CALL crt_errno.c_setErrno_FUN_00602790 ; 00601824 | void crt_errno.c_setErrno_FUN_00602790(int error_code)
        ;   XREF to: 00602790 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00601829
    XOR EDX,EDX                         ; 0060182c
    JMP 0x00601902                      ; 0060182e | LAB_00601902
        ;   XREF to: 00601902 (UNCONDITIONAL_JUMP)
    MOV AH,byte ptr [ECX + 0x1]         ; 00601833
        ;   Label: LAB_00601833
    INC ECX                             ; 00601836
    TEST AH,AH                          ; 00601837
    JZ 0x006018ed                       ; 00601839 | LAB_006018ed
        ;   XREF to: 006018ed (CONDITIONAL_JUMP)
    TEST EDX,EDX                        ; 0060183f
        ;   Label: LAB_0060183f
    JZ 0x006018ed                       ; 00601841 | LAB_006018ed
        ;   XREF to: 006018ed (CONDITIONAL_JUMP)
    MOV AL,byte ptr [ECX]               ; 00601847
    CMP AL,0x63                         ; 00601849
    JC 0x0060186a                       ; 0060184b | LAB_0060186a
        ;   XREF to: 0060186a (CONDITIONAL_JUMP)
    JBE 0x006018b8                      ; 0060184d | LAB_006018b8
        ;   XREF to: 006018b8 (CONDITIONAL_JUMP)
    CMP AL,0x6e                         ; 00601853
    JC 0x006018e1                       ; 00601855 | LAB_006018e1
        ;   XREF to: 006018e1 (CONDITIONAL_JUMP)
    JBE 0x006018cd                      ; 0060185b | LAB_006018cd
        ;   XREF to: 006018cd (CONDITIONAL_JUMP)
    CMP AL,0x74                         ; 00601861
    JZ 0x00601897                       ; 00601863 | LAB_00601897
        ;   XREF to: 00601897 (CONDITIONAL_JUMP)
    JMP 0x006018e1                      ; 00601865 | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    CMP AL,0x2b                         ; 0060186a
        ;   Label: LAB_0060186a
    JC 0x006018e1                       ; 0060186c | LAB_006018e1
        ;   XREF to: 006018e1 (CONDITIONAL_JUMP)
    JBE 0x0060187d                      ; 00601872 | LAB_0060187d
        ;   XREF to: 0060187d (CONDITIONAL_JUMP)
    CMP AL,0x62                         ; 00601874
    JZ 0x006018a6                       ; 00601876 | LAB_006018a6
        ;   XREF to: 006018a6 (CONDITIONAL_JUMP)
    JMP 0x006018e1                      ; 00601878 | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    CMP dword ptr [ESP],0x0             ; 0060187d
        ;   Label: LAB_0060187d
    JZ 0x0060188a                       ; 00601881 | LAB_0060188a
        ;   XREF to: 0060188a (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00601883
    JMP 0x006018e1                      ; 00601885 | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0060188a
        ;   Label: LAB_0060188a
    OR BL,0x3                           ; 0060188f
    MOV dword ptr [ESP],EAX             ; 00601892
    JMP 0x006018e1                      ; 00601895 | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 00601897
        ;   Label: LAB_00601897
    JZ 0x0060189f                       ; 00601899 | LAB_0060189f
        ;   XREF to: 0060189f (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0060189b
    JMP 0x006018e1                      ; 0060189d | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    MOV EDI,0x1                         ; 0060189f
        ;   Label: LAB_0060189f
    JMP 0x006018e1                      ; 006018a4 | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 006018a6
        ;   Label: LAB_006018a6
    JZ 0x006018ae                       ; 006018a8 | LAB_006018ae
        ;   XREF to: 006018ae (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 006018aa
    JMP 0x006018e1                      ; 006018ac | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    MOV EDI,0x1                         ; 006018ae
        ;   Label: LAB_006018ae
    OR BL,0x40                          ; 006018b3
    JMP 0x006018e1                      ; 006018b6 | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 006018b8
        ;   Label: LAB_006018b8
    JZ 0x006018c0                       ; 006018ba | LAB_006018c0
        ;   XREF to: 006018c0 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 006018bc
    JMP 0x006018e1                      ; 006018be | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    MOV AL,byte ptr [ESI]               ; 006018c0
        ;   Label: LAB_006018c0
    OR AL,0x1                           ; 006018c2
    MOV EBP,0x1                         ; 006018c4
    MOV byte ptr [ESI],AL               ; 006018c9
    JMP 0x006018e1                      ; 006018cb | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    TEST EBP,EBP                        ; 006018cd
        ;   Label: LAB_006018cd
    JZ 0x006018d5                       ; 006018cf | LAB_006018d5
        ;   XREF to: 006018d5 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 006018d1
    JMP 0x006018e1                      ; 006018d3 | LAB_006018e1
        ;   XREF to: 006018e1 (UNCONDITIONAL_JUMP)
    MOV AH,byte ptr [ESI]               ; 006018d5
        ;   Label: LAB_006018d5
    AND AH,0xfe                         ; 006018d7
    MOV EBP,0x1                         ; 006018da
    MOV byte ptr [ESI],AH               ; 006018df
    MOV AL,byte ptr [ECX + 0x1]         ; 006018e1
        ;   Label: LAB_006018e1
    INC ECX                             ; 006018e4
    TEST AL,AL                          ; 006018e5
    JNZ 0x0060183f                      ; 006018e7 | LAB_0060183f
        ;   XREF to: 0060183f (CONDITIONAL_JUMP)
    TEST EDI,EDI                        ; 006018ed
        ;   Label: LAB_006018ed
    JNZ 0x00601900                      ; 006018ef | LAB_00601900
        ;   XREF to: 00601900 (CONDITIONAL_JUMP)
    CMP dword ptr [0x00684ed0],0x200    ; 006018f1 | undefined4 DAT_00684ed0
    JNZ 0x00601900                      ; 006018fb | LAB_00601900
        ;   XREF to: 00601900 (CONDITIONAL_JUMP)
    OR BL,0x40                          ; 006018fd
    MOV EDX,EBX                         ; 00601900
        ;   Label: LAB_00601900
    MOV EAX,EDX                         ; 00601902
        ;   Label: LAB_00601902
    ADD ESP,0x4                         ; 00601904
    POP EBP                             ; 00601907
    POP EDI                             ; 00601908
    POP ESI                             ; 00601909
    POP EBX                             ; 0060190a
    RET                                 ; 0060190b


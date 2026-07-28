; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 __cdecl crt_io_c_getTempDirectory_FUN_005687bc(void)
;
;
; XREF[1]:
;   crt_unknown.c__tempnam_FUN_005633fc at 00563412
;
; Referenced Globals:
;   TerminatedCString s_TMP_00598b30
;   TerminatedCString s_TEMP_00598b34
;   void* PTR_s_TMP_005c1b10 = 00598b30
;   undefined1* PTR_s_TEMP_005c1b14 = 00598b34
;   undefined1 DAT_005c1b23
;   undefined1 DAT_005c1b24
;   undefined1 DAT_005c1b25
;   undefined1 DAT_005c1b26
;   undefined1 DAT_005c1b27
;
; Called Functions:
;   crt_env.c_getenv_FUN_00566e10
;   crt_stdlib.c__fullpath_FUN_00565d00
;   crt_watcom.c_getcwd_FUN_0056c5f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005687bc
        ;   Label: crt_io.c_getTempDirectory_FUN_005687bc
    PUSH ESI                            ; 005687bd
    PUSH EDI                            ; 005687be
    CMP byte ptr [0x005c1b24],0x0       ; 005687bf | DAT_005c1b24
    JNZ 0x00568881                      ; 005687c6
        ;   XREF to: 00568881 (CONDITIONAL_JUMP)  ; LAB_00568881
    MOV EBX,0x5c1b10                    ; 005687cc | PTR_s_TMP_005c1b10
    JMP 0x00568814                      ; 005687d1
        ;   XREF to: 00568814 (UNCONDITIONAL_JUMP)  ; LAB_00568814
    PUSH EDX                            ; 005687d3 | = "TMP"
        ;   Label: LAB_005687d3
    CALL crt_env.c_getenv_FUN_00566e10  ; 005687d4
        ;   XREF to: 00566e10 (UNCONDITIONAL_CALL)  ; char * crt_env.c_getenv_FUN_00566e10(char * name)
    MOV EDX,EAX                         ; 005687d9
    ADD ESP,0x4                         ; 005687db
    TEST EAX,EAX                        ; 005687de
    JZ 0x00568811                       ; 005687e0
        ;   XREF to: 00568811 (CONDITIONAL_JUMP)  ; LAB_00568811
    MOV EDI,EAX                         ; 005687e2
    PUSH ES                             ; 005687e4
    MOV AX,DS                           ; 005687e5
    MOV ES,AX                           ; 005687e7
    SUB ECX,ECX                         ; 005687e9
    DEC ECX                             ; 005687eb
    XOR EAX,EAX                         ; 005687ec
    SCASB.REPNE ES:EDI                  ; 005687ee
    NOT ECX                             ; 005687f0
    DEC ECX                             ; 005687f2
    POP ES                              ; 005687f3
    CMP ECX,0x103                       ; 005687f4
    JA 0x00568811                       ; 005687fa
        ;   XREF to: 00568811 (CONDITIONAL_JUMP)  ; LAB_00568811
    PUSH 0x103                          ; 005687fc
    PUSH EDX                            ; 00568801
    PUSH 0x5c1b24                       ; 00568802 | DAT_005c1b24
    CALL crt_stdlib.c__fullpath_FUN_00565d00 ; 00568807
        ;   XREF to: 00565d00 (UNCONDITIONAL_CALL)  ; char * crt_stdlib.c__fullpath_FUN_00565d00(char * buffer, char * path, SIZE_T buffer_size)
    ADD ESP,0xc                         ; 0056880c
    JMP 0x0056881b                      ; 0056880f
        ;   XREF to: 0056881b (UNCONDITIONAL_JUMP)  ; LAB_0056881b
    ADD EBX,0x4                         ; 00568811
        ;   Label: LAB_00568811
    MOV EDX,dword ptr [EBX]             ; 00568814 | PTR_s_TMP_005c1b10 | PTR_s_TEMP_005c1b14
        ;   Label: LAB_00568814
    CMP byte ptr [EDX],0x0              ; 00568816 | = "TMP" | s_TEMP_00598b34
    JNZ 0x005687d3                      ; 00568819
        ;   XREF to: 005687d3 (CONDITIONAL_JUMP)  ; LAB_005687d3
    CMP byte ptr [0x005c1b24],0x0       ; 0056881b | DAT_005c1b24
        ;   Label: LAB_0056881b
    JNZ 0x00568851                      ; 00568822
        ;   XREF to: 00568851 (CONDITIONAL_JUMP)  ; LAB_00568851
    PUSH 0x0                            ; 00568824
    PUSH 0x0                            ; 00568826
    CALL crt_watcom.c_getcwd_FUN_0056c5f0 ; 00568828
        ;   XREF to: 0056c5f0 (UNCONDITIONAL_CALL)  ; char * crt_watcom.c_getcwd_FUN_0056c5f0(char * buffer, SIZE_T size)
    ADD ESP,0x8                         ; 0056882d
    MOV EDI,0x5c1b24                    ; 00568830 | DAT_005c1b24
    MOV ESI,EAX                         ; 00568835
    PUSH EDI                            ; 00568837 | DAT_005c1b24
    MOV AL,byte ptr [ESI]               ; 00568838
        ;   Label: LAB_00568838
    MOV byte ptr [EDI],AL               ; 0056883a | DAT_005c1b24 | DAT_005c1b26
    CMP AL,0x0                          ; 0056883c
    JZ 0x00568850                       ; 0056883e
        ;   XREF to: 00568850 (CONDITIONAL_JUMP)  ; LAB_00568850
    MOV AL,byte ptr [ESI + 0x1]         ; 00568840
    ADD ESI,0x2                         ; 00568843
    MOV byte ptr [EDI + 0x1],AL         ; 00568846 | DAT_005c1b25 | DAT_005c1b27
    ADD EDI,0x2                         ; 00568849
    CMP AL,0x0                          ; 0056884c
    JNZ 0x00568838                      ; 0056884e
        ;   XREF to: 00568838 (CONDITIONAL_JUMP)  ; LAB_00568838
    POP EDI                             ; 00568850
        ;   Label: LAB_00568850
    MOV EDI,0x5c1b24                    ; 00568851 | DAT_005c1b24
        ;   Label: LAB_00568851
    PUSH ES                             ; 00568856
    MOV AX,DS                           ; 00568857
    MOV ES,AX                           ; 00568859
    SUB ECX,ECX                         ; 0056885b
    DEC ECX                             ; 0056885d
    XOR EAX,EAX                         ; 0056885e
    SCASB.REPNE ES:EDI                  ; 00568860 | DAT_005c1b24 | DAT_005c1b25
    NOT ECX                             ; 00568862
    DEC ECX                             ; 00568864
    POP ES                              ; 00568865
    LEA EDX,[ECX + -0x1]                ; 00568866
    ADD EDX,0x5c1b24                    ; 00568869 | DAT_005c1b24
    MOV AL,byte ptr [EDX]               ; 0056886f | DAT_005c1b23 | DAT_005c1b24
    CMP AL,0x5c                         ; 00568871
    JZ 0x00568881                       ; 00568873
        ;   XREF to: 00568881 (CONDITIONAL_JUMP)  ; LAB_00568881
    CMP AL,0x2f                         ; 00568875
    JZ 0x00568881                       ; 00568877
        ;   XREF to: 00568881 (CONDITIONAL_JUMP)  ; LAB_00568881
    INC EDX                             ; 00568879
    MOV byte ptr [EDX],0x5c             ; 0056887a | DAT_005c1b24 | DAT_005c1b25
    INC EDX                             ; 0056887d
    MOV byte ptr [EDX],0x0              ; 0056887e | DAT_005c1b25 | DAT_005c1b26
    MOV EAX,0x5c1b24                    ; 00568881 | DAT_005c1b24
        ;   Label: LAB_00568881
    POP EDI                             ; 00568886
    POP ESI                             ; 00568887
    POP EBX                             ; 00568888
    RET                                 ; 00568889


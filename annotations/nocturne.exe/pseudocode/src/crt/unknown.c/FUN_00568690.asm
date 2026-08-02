; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * crt_unknown_c_FUN_00568690(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00598b50
;   undefined1 DAT_005c1a9c
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;
; Called Functions:
;   crt_errno.c__errno_FUN_0056f1a0
;   crt_errno.c_setErrno_FUN_00568e80
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fopen_FUN_0056568c
;   crt_stdio.c_rename_FUN_00566f00
;   crt_thread.c_GetTLS_FUN_005671dc
;   crt_unknown.c__tempnam_FUN_005633fc
;   crt_unknown.c_FUN_0056f170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568690
        ;   Label: crt_unknown.c_FUN_00568690
    PUSH ESI                            ; 00568691
    PUSH EDI                            ; 00568692
    PUSH EBP                            ; 00568693
    SUB ESP,0x228                       ; 00568694
    CALL dword ptr [0x005c1abc]         ; 0056869a | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
    MOV EBP,dword ptr [EAX + 0x4]       ; 005686a0
    XOR EDI,EDI                         ; 005686a3
    PUSH EDI                            ; 005686a5
        ;   Label: LAB_005686a5
    LEA EAX,[ESP + 0x118]               ; 005686a6
    PUSH EAX                            ; 005686ad
    CALL crt_unknown.c__tempnam_FUN_005633fc ; 005686ae
        ;   XREF to: 005633fc (UNCONDITIONAL_CALL)  ; void crt_unknown.c__tempnam_FUN_005633fc(char * buffer, int file_handle)
    ADD ESP,0x8                         ; 005686b3
    PUSH 0x2                            ; 005686b6
    LEA EAX,[ESP + 0x118]               ; 005686b8
    PUSH EAX                            ; 005686bf
    INC EDI                             ; 005686c0
    CALL crt_unknown.c_FUN_0056f170     ; 005686c1
        ;   XREF to: 0056f170 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f170()
    ADD ESP,0x8                         ; 005686c6
    TEST EAX,EAX                        ; 005686c9
    JZ 0x005686a5                       ; 005686cb
        ;   XREF to: 005686a5 (CONDITIONAL_JUMP)  ; LAB_005686a5
    PUSH 0x598b50                       ; 005686cd | DAT_00598b50
    LEA EAX,[ESP + 0x118]               ; 005686d2
    PUSH EAX                            ; 005686d9
    CALL crt_stdio.c_fopen_FUN_0056568c ; 005686da
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    ADD ESP,0x8                         ; 005686df
    TEST EAX,EAX                        ; 005686e2
    JNZ 0x00568701                      ; 005686e4
        ;   XREF to: 00568701 (CONDITIONAL_JUMP)  ; LAB_00568701
    CALL crt_errno.c__errno_FUN_0056f1a0 ; 005686e6
        ;   XREF to: 0056f1a0 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_0056f1a0()
    CMP dword ptr [EAX],0xb             ; 005686eb
    JZ 0x005686fa                       ; 005686ee
        ;   XREF to: 005686fa (CONDITIONAL_JUMP)  ; LAB_005686fa
    CALL crt_errno.c__errno_FUN_0056f1a0 ; 005686f0
        ;   XREF to: 0056f1a0 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_0056f1a0()
    CMP dword ptr [EAX],0x6             ; 005686f5
    JNZ 0x005686a5                      ; 005686f8
        ;   XREF to: 005686a5 (CONDITIONAL_JUMP)  ; LAB_005686a5
    XOR EAX,EAX                         ; 005686fa
        ;   Label: LAB_005686fa
    JMP 0x005687b1                      ; 005686fc
        ;   XREF to: 005687b1 (UNCONDITIONAL_JUMP)  ; LAB_005687b1
    PUSH EAX                            ; 00568701
        ;   Label: LAB_00568701
    XOR EBX,EBX                         ; 00568702
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00568704
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fclose_FUN_00563380(_FILE * file_handle)
    MOV BL,byte ptr [0x005c1a9c]        ; 00568709 | DAT_005c1a9c
    ADD ESP,0x4                         ; 0056870f
    PUSH EBX                            ; 00568712
        ;   Label: LAB_00568712
    LEA EAX,[ESP + 0x4]                 ; 00568713
    PUSH EAX                            ; 00568717
    CALL crt_unknown.c__tempnam_FUN_005633fc ; 00568718
        ;   XREF to: 005633fc (UNCONDITIONAL_CALL)  ; void crt_unknown.c__tempnam_FUN_005633fc(char * buffer, int file_handle)
    ADD ESP,0x8                         ; 0056871d
    MOV EAX,ESP                         ; 00568720
    PUSH EAX                            ; 00568722
    LEA EAX,[ESP + 0x118]               ; 00568723
    PUSH EAX                            ; 0056872a
    CALL crt_stdio.c_rename_FUN_00566f00 ; 0056872b
        ;   XREF to: 00566f00 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_rename_FUN_00566f00(char * old_filename, char * new_filename)
    ADD ESP,0x8                         ; 00568730
    TEST EAX,EAX                        ; 00568733
    JNZ 0x00568791                      ; 00568735
        ;   XREF to: 00568791 (CONDITIONAL_JUMP)  ; LAB_00568791
    PUSH 0x598b50                       ; 00568737 | DAT_00598b50
    LEA EAX,[ESP + 0x4]                 ; 0056873c
    PUSH EAX                            ; 00568740
    CALL crt_stdio.c_fopen_FUN_0056568c ; 00568741
        ;   XREF to: 0056568c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_0056568c(char * filename, char * mode)
    MOV ESI,EAX                         ; 00568746
    ADD ESP,0x8                         ; 00568748
    TEST EAX,EAX                        ; 0056874b
    JZ 0x0056877a                       ; 0056874d
        ;   XREF to: 0056877a (CONDITIONAL_JUMP)  ; LAB_0056877a
    MOV AH,byte ptr [EAX + 0xd]         ; 0056874f
    OR AH,0x8                           ; 00568752
    MOV byte ptr [ESI + 0xd],AH         ; 00568755
    MOV EAX,dword ptr [ESI + 0x8]       ; 00568758
    PUSH EBP                            ; 0056875b
    MOV byte ptr [0x005c1a9c],BL        ; 0056875c | DAT_005c1a9c
    MOV byte ptr [EAX + 0x14],BL        ; 00568762
    CALL crt_errno.c_setErrno_FUN_00568e80 ; 00568765
        ;   XREF to: 00568e80 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_00568e80(int error_code)
    ADD ESP,0x4                         ; 0056876a
    MOV EAX,ESI                         ; 0056876d
    ADD ESP,0x228                       ; 0056876f
    POP EBP                             ; 00568775
    POP EDI                             ; 00568776
    POP ESI                             ; 00568777
    POP EBX                             ; 00568778
    RET                                 ; 00568779
    CALL crt_errno.c__errno_FUN_0056f1a0 ; 0056877a
        ;   XREF to: 0056f1a0 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_0056f1a0()
        ;   Label: LAB_0056877a
    CMP dword ptr [EAX],0xb             ; 0056877f
    JNZ 0x00568791                      ; 00568782
        ;   XREF to: 00568791 (CONDITIONAL_JUMP)  ; LAB_00568791
    XOR EAX,EAX                         ; 00568784
    ADD ESP,0x228                       ; 00568786
    POP EBP                             ; 0056878c
    POP EDI                             ; 0056878d
    POP ESI                             ; 0056878e
    POP EBX                             ; 0056878f
    RET                                 ; 00568790
    PUSH 0x2                            ; 00568791
        ;   Label: LAB_00568791
    LEA EAX,[ESP + 0x118]               ; 00568793
    PUSH EAX                            ; 0056879a
    INC EBX                             ; 0056879b
    CALL crt_unknown.c_FUN_0056f170     ; 0056879c
        ;   XREF to: 0056f170 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056f170()
    ADD ESP,0x8                         ; 005687a1
    TEST EAX,EAX                        ; 005687a4
    JNZ 0x005686a5                      ; 005687a6
        ;   XREF to: 005686a5 (CONDITIONAL_JUMP)  ; LAB_005686a5
    JMP 0x00568712                      ; 005687ac
        ;   XREF to: 00568712 (UNCONDITIONAL_JUMP)  ; LAB_00568712
    ADD ESP,0x228                       ; 005687b1
        ;   Label: LAB_005687b1
    POP EBP                             ; 005687b7
    POP EDI                             ; 005687b8
    POP ESI                             ; 005687b9
    POP EBX                             ; 005687ba
    RET                                 ; 005687bb


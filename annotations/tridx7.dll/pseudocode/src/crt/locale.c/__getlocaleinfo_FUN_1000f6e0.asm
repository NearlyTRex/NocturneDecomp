; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_locale_c___getlocaleinfo_FUN_1000f6e0(int type,LCID lcid,LCTYPE lc_type,void *out)
;
; Parameters:
; int              Stack[0x4]:4   type
; LCID             Stack[0x8]:4   lcid
; LCTYPE           Stack[0xc]:4   lc_type
; void *           Stack[0x10]:4   out
; Local Variables:
; undefined        Stack[-0x80]:1  local_80
;
; XREF[3]:
;   crt_locale.c___get_lc_monetary_FUN_1000ddc0 at 1000dde8
;   crt_time.c___get_lc_time_FUN_1000d3a0 at 1000d3d1
;   crt_time.c__maketimefmt_FUN_1000d960 at 1000d983
;
; Referenced Globals:
;   void* PTR_DAT_10017480 = 1001748a
;   undefined4 DAT_1001748a
;   undefined4 DAT_10017690
;   undefined1 DAT_10240798
;   undefined1 DAT_1024079a
;   undefined4 DAT_102407a0
;   void* PTR_GetLastError_102421c8 = 00242418
;
; Called Functions:
;   crt_ctype.c__isctype_FUN_10009ac0
;   crt_heap.c_free_FUN_10005b30
;   crt_heap.c_malloc_FUN_10008830
;   crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0
;   crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0
;   crt_string.c__strncpy_FUN_1000a9f0
;   GetLastError
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 1000f6e0
        ;   Label: crt_locale.c___getlocaleinfo_FUN_1000f6e0
    SUB ESP,0x80                        ; 1000f6e4
    CMP EAX,0x1                         ; 1000f6ea
    PUSH EBX                            ; 1000f6ed
    PUSH ESI                            ; 1000f6ee
    PUSH EDI                            ; 1000f6ef
    PUSH EBP                            ; 1000f6f0
    JNZ 0x1000f7d4                      ; 1000f6f1
        ;   XREF to: 1000f7d4 (CONDITIONAL_JUMP)  ; LAB_1000f7d4
    LEA EDI,[ESP + 0x10]                ; 1000f6f7
    XOR EBX,EBX                         ; 1000f6fb
    LEA EAX,[ESP + 0x10]                ; 1000f6fd
    PUSH EBX                            ; 1000f701
    MOV ECX,dword ptr [ESP + 0xa0]      ; 1000f702
    PUSH 0x80                           ; 1000f709
    MOV ESI,dword ptr [ESP + 0xa0]      ; 1000f70e
    PUSH EAX                            ; 1000f715
    PUSH ECX                            ; 1000f716
    PUSH ESI                            ; 1000f717
    CALL crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0 ; 1000f718
        ;   XREF to: 1000fad0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0(LCID lcid, LCTYPE lc_type, LPSTR dest, int cch, ...)
    ADD ESP,0x14                        ; 1000f71d
    TEST EAX,EAX                        ; 1000f720
    JNZ 0x1000f77a                      ; 1000f722
        ;   XREF to: 1000f77a (CONDITIONAL_JUMP)  ; LAB_1000f77a
    CALL dword ptr [0x102421c8]         ; 1000f724 | PTR_GetLastError_102421c8
    CMP EAX,0x7a                        ; 1000f72a
    JNZ 0x1000f7b7                      ; 1000f72d
        ;   XREF to: 1000f7b7 (CONDITIONAL_JUMP)  ; LAB_1000f7b7
    MOV EAX,dword ptr [ESP + 0x9c]      ; 1000f733
    PUSH EBX                            ; 1000f73a
    PUSH EBX                            ; 1000f73b
    PUSH EBX                            ; 1000f73c
    PUSH EAX                            ; 1000f73d
    PUSH ESI                            ; 1000f73e
    CALL crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0 ; 1000f73f
        ;   XREF to: 1000fad0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0(LCID lcid, LCTYPE lc_type, LPSTR dest, int cch, ...)
    ADD ESP,0x14                        ; 1000f744
    MOV EBP,EAX                         ; 1000f747
    CMP EBP,EBX                         ; 1000f749
    JZ 0x1000f7b7                       ; 1000f74b
        ;   XREF to: 1000f7b7 (CONDITIONAL_JUMP)  ; LAB_1000f7b7
    PUSH EBP                            ; 1000f74d
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000f74e
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    ADD ESP,0x4                         ; 1000f753
    MOV EDI,EAX                         ; 1000f756
    CMP EDI,EBX                         ; 1000f758
    JZ 0x1000f7b7                       ; 1000f75a
        ;   XREF to: 1000f7b7 (CONDITIONAL_JUMP)  ; LAB_1000f7b7
    MOV EBX,0x1                         ; 1000f75c
    PUSH 0x0                            ; 1000f761
    MOV EAX,dword ptr [ESP + 0xa0]      ; 1000f763
    PUSH EBP                            ; 1000f76a
    PUSH EDI                            ; 1000f76b
    PUSH EAX                            ; 1000f76c
    PUSH ESI                            ; 1000f76d
    CALL crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0 ; 1000f76e
        ;   XREF to: 1000fad0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtGetLocaleInfoA_FUN_1000fad0(LCID lcid, LCTYPE lc_type, LPSTR dest, int cch, ...)
    ADD ESP,0x14                        ; 1000f773
    TEST EAX,EAX                        ; 1000f776
    JZ 0x1000f7b7                       ; 1000f778
        ;   XREF to: 1000f7b7 (CONDITIONAL_JUMP)  ; LAB_1000f7b7
    PUSH EAX                            ; 1000f77a
        ;   Label: LAB_1000f77a
    MOV EBP,EAX                         ; 1000f77b
    CALL crt_heap.c_malloc_FUN_10008830 ; 1000f77d
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; void * crt_heap.c_malloc_FUN_10008830(size_t size)
    MOV ESI,dword ptr [ESP + 0xa4]      ; 1000f782
    ADD ESP,0x4                         ; 1000f789
    TEST EAX,EAX                        ; 1000f78c
    MOV dword ptr [ESI],EAX             ; 1000f78e
    JZ 0x1000f7b7                       ; 1000f790
        ;   XREF to: 1000f7b7 (CONDITIONAL_JUMP)  ; LAB_1000f7b7
    PUSH EBP                            ; 1000f792
    PUSH EDI                            ; 1000f793
    PUSH EAX                            ; 1000f794
    CALL crt_string.c__strncpy_FUN_1000a9f0 ; 1000f795
        ;   XREF to: 1000a9f0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_1000a9f0(char * dest, char * source, size_t count)
    ADD ESP,0xc                         ; 1000f79a
    TEST EBX,EBX                        ; 1000f79d
    JZ 0x1000f7aa                       ; 1000f79f
        ;   XREF to: 1000f7aa (CONDITIONAL_JUMP)  ; LAB_1000f7aa
    PUSH EDI                            ; 1000f7a1
    CALL crt_heap.c_free_FUN_10005b30   ; 1000f7a2
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000f7a7
    XOR EAX,EAX                         ; 1000f7aa
        ;   Label: LAB_1000f7aa
    POP EBP                             ; 1000f7ac
    POP EDI                             ; 1000f7ad
    POP ESI                             ; 1000f7ae
    POP EBX                             ; 1000f7af
    ADD ESP,0x80                        ; 1000f7b0
    RET                                 ; 1000f7b6
    TEST EBX,EBX                        ; 1000f7b7
        ;   Label: LAB_1000f7b7
    JZ 0x1000f7c4                       ; 1000f7b9
        ;   XREF to: 1000f7c4 (CONDITIONAL_JUMP)  ; LAB_1000f7c4
    PUSH EDI                            ; 1000f7bb
    CALL crt_heap.c_free_FUN_10005b30   ; 1000f7bc
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 1000f7c1
    MOV EAX,0xffffffff                  ; 1000f7c4
        ;   Label: LAB_1000f7c4
    POP EBP                             ; 1000f7c9
    POP EDI                             ; 1000f7ca
    POP ESI                             ; 1000f7cb
    POP EBX                             ; 1000f7cc
    ADD ESP,0x80                        ; 1000f7cd
    RET                                 ; 1000f7d3
    TEST EAX,EAX                        ; 1000f7d4
        ;   Label: LAB_1000f7d4
    JNZ 0x1000f886                      ; 1000f7d6
        ;   XREF to: 1000f886 (CONDITIONAL_JUMP)  ; LAB_1000f886
    MOV EAX,dword ptr [ESP + 0x9c]      ; 1000f7dc
    PUSH 0x0                            ; 1000f7e3
    MOV ESI,dword ptr [ESP + 0x9c]      ; 1000f7e5
    PUSH 0x4                            ; 1000f7ec
    PUSH 0x10240798                     ; 1000f7ee | DAT_10240798
    PUSH EAX                            ; 1000f7f3
    PUSH ESI                            ; 1000f7f4
    CALL crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0 ; 1000f7f5
        ;   XREF to: 1000f9a0 (UNCONDITIONAL_CALL)  ; int crt_locale.c___crtGetLocaleInfoW_FUN_1000f9a0(LCID lcid, LCTYPE lc_type, LPWSTR dest, int cch, ...)
    ADD ESP,0x14                        ; 1000f7fa
    TEST EAX,EAX                        ; 1000f7fd
    JNZ 0x1000f811                      ; 1000f7ff
        ;   XREF to: 1000f811 (CONDITIONAL_JUMP)  ; LAB_1000f811
    MOV EAX,0xffffffff                  ; 1000f801
    POP EBP                             ; 1000f806
    POP EDI                             ; 1000f807
    POP ESI                             ; 1000f808
    POP EBX                             ; 1000f809
    ADD ESP,0x80                        ; 1000f80a
    RET                                 ; 1000f810
    MOV ESI,dword ptr [ESP + 0xa0]      ; 1000f811
        ;   Label: LAB_1000f811
    MOV EDI,0x10240798                  ; 1000f818 | DAT_10240798
    MOV EBX,0x1                         ; 1000f81d
    MOV byte ptr [ESI],0x0              ; 1000f822
    MOV AL,byte ptr [EDI]               ; 1000f825 | DAT_10240798 | DAT_1024079a
        ;   Label: LAB_1000f825
    CMP dword ptr [0x10017690],EBX      ; 1000f827 | DAT_10017690
    MOV byte ptr [ESP + 0x10],AL        ; 1000f82d
    JLE 0x1000f846                      ; 1000f831
        ;   XREF to: 1000f846 (CONDITIONAL_JUMP)  ; LAB_1000f846
    PUSH 0x4                            ; 1000f833
    XOR EAX,EAX                         ; 1000f835
    MOV AL,byte ptr [ESP + 0x14]        ; 1000f837
    PUSH EAX                            ; 1000f83b
    CALL crt_ctype.c__isctype_FUN_10009ac0 ; 1000f83c
        ;   XREF to: 10009ac0 (UNCONDITIONAL_CALL)  ; int crt_ctype.c__isctype_FUN_10009ac0(int c, int type)
    ADD ESP,0x8                         ; 1000f841
    JMP 0x1000f859                      ; 1000f844
        ;   XREF to: 1000f859 (UNCONDITIONAL_JUMP)  ; LAB_1000f859
    XOR ECX,ECX                         ; 1000f846
        ;   Label: LAB_1000f846
    MOV EDX,dword ptr [0x10017480]      ; 1000f848 | PTR_DAT_10017480
    MOV CL,AL                           ; 1000f84e
    XOR EAX,EAX                         ; 1000f850
    MOV AX,word ptr [EDX + ECX*0x2]     ; 1000f852 | DAT_1001748a
    AND EAX,0x4                         ; 1000f856
    TEST EAX,EAX                        ; 1000f859
        ;   Label: LAB_1000f859
    JZ 0x1000f879                       ; 1000f85b
        ;   XREF to: 1000f879 (CONDITIONAL_JUMP)  ; LAB_1000f879
    MOV CL,0xa                          ; 1000f85d
    MOV AL,byte ptr [ESI]               ; 1000f85f
    IMUL CL                             ; 1000f861
    MOV CL,byte ptr [ESP + 0x10]        ; 1000f863
    ADD EDI,0x2                         ; 1000f867
    ADD CL,AL                           ; 1000f86a
    SUB CL,0x30                         ; 1000f86c
    CMP EDI,0x102407a0                  ; 1000f86f | DAT_102407a0
    MOV byte ptr [ESI],CL               ; 1000f875
    JC 0x1000f825                       ; 1000f877
        ;   XREF to: 1000f825 (CONDITIONAL_JUMP)  ; LAB_1000f825
    XOR EAX,EAX                         ; 1000f879
        ;   Label: LAB_1000f879
    POP EBP                             ; 1000f87b
    POP EDI                             ; 1000f87c
    POP ESI                             ; 1000f87d
    POP EBX                             ; 1000f87e
    ADD ESP,0x80                        ; 1000f87f
    RET                                 ; 1000f885
    MOV EAX,0xffffffff                  ; 1000f886
        ;   Label: LAB_1000f886
    POP EBP                             ; 1000f88b
    POP EDI                             ; 1000f88c
    POP ESI                             ; 1000f88d
    POP EBX                             ; 1000f88e
    ADD ESP,0x80                        ; 1000f88f
    RET                                 ; 1000f895


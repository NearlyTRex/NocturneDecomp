; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_006107f0()
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0060fb40 at 0060fc24
;
; Referenced Globals:
;   SetEnvironmentVariableA* PTR_SetEnvironmentVariableA_0061161c = 00212160
;   SetEnvironmentVariableW* PTR_SetEnvironmentVariableW_00611620 = 0021217a
;   WORD g_WindowsPlatformVersion = 0x0
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_string.c_wcslen_FUN_0060cd30
;   crt_string.c_wcstombs_FUN_0060c0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006107f0
        ;   Label: crt_unknown.c_FUN_006107f0
    PUSH ESI                            ; 006107f1
    PUSH EDI                            ; 006107f2
    PUSH EBP                            ; 006107f3
    CMP word ptr [0x00685019],0x8000    ; 006107f4 | g_WindowsPlatformVersion
    JNC 0x00610815                      ; 006107fd
        ;   XREF to: 00610815 (CONDITIONAL_JUMP)  ; LAB_00610815
    MOV EDX,dword ptr [ESP + 0x18]      ; 006107ff
    PUSH EDX                            ; 00610803
    MOV EBX,dword ptr [ESP + 0x18]      ; 00610804
    PUSH EBX                            ; 00610808
    CALL dword ptr CS:[0x611620]        ; 00610809 | PTR_SetEnvironmentVariableW_00611620
    POP EBP                             ; 00610810
    POP EDI                             ; 00610811
    POP ESI                             ; 00610812
    POP EBX                             ; 00610813
    RET                                 ; 00610814
    MOV EDX,dword ptr [ESP + 0x14]      ; 00610815
        ;   Label: LAB_00610815
    PUSH EDX                            ; 00610819
    CALL crt_string.c_wcslen_FUN_0060cd30 ; 0061081a
        ;   XREF to: 0060cd30 (UNCONDITIONAL_CALL)  ; ulong crt_string.c_wcslen_FUN_0060cd30(LPWSTR str)
    ADD EAX,EAX                         ; 0061081f
    ADD ESP,0x4                         ; 00610821
    LEA ESI,[EAX + 0x1]                 ; 00610824
    PUSH ESI                            ; 00610827
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 00610828
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EDI,EAX                         ; 0061082d
    ADD ESP,0x4                         ; 0061082f
    MOV EBP,EAX                         ; 00610832
    TEST EAX,EAX                        ; 00610834
    JZ 0x006108ed                       ; 00610836
        ;   XREF to: 006108ed (CONDITIONAL_JUMP)  ; LAB_006108ed
    MOV EBX,dword ptr [ESP + 0x18]      ; 0061083c
    TEST EBX,EBX                        ; 00610840
    JZ 0x00610871                       ; 00610842
        ;   XREF to: 00610871 (CONDITIONAL_JUMP)  ; LAB_00610871
    PUSH EBX                            ; 00610844
    CALL crt_string.c_wcslen_FUN_0060cd30 ; 00610845
        ;   XREF to: 0060cd30 (UNCONDITIONAL_CALL)  ; ulong crt_string.c_wcslen_FUN_0060cd30(LPWSTR str)
    ADD EAX,EAX                         ; 0061084a
    ADD ESP,0x4                         ; 0061084c
    LEA ESI,[EAX + 0x1]                 ; 0061084f
    PUSH ESI                            ; 00610852
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 00610853
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    ADD ESP,0x4                         ; 00610858
    MOV EBX,EAX                         ; 0061085b
    TEST EAX,EAX                        ; 0061085d
    JNZ 0x00610871                      ; 0061085f
        ;   XREF to: 00610871 (CONDITIONAL_JUMP)  ; LAB_00610871
    PUSH EDI                            ; 00610861
    CALL crt_memory.c_free_FUN_00601cd0 ; 00610862
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 00610867
    XOR EAX,EAX                         ; 0061086a
    POP EBP                             ; 0061086c
    POP EDI                             ; 0061086d
    POP ESI                             ; 0061086e
    POP EBX                             ; 0061086f
    RET                                 ; 00610870
    PUSH ESI                            ; 00610871
        ;   Label: LAB_00610871
    MOV EDI,dword ptr [ESP + 0x18]      ; 00610872
    PUSH EDI                            ; 00610876
    PUSH EBP                            ; 00610877
    CALL crt_string.c_wcstombs_FUN_0060c0c0 ; 00610878
        ;   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)  ; int crt_string.c_wcstombs_FUN_0060c0c0(char * dest, wchar_t * src, SIZE_T dest_size)
    ADD ESP,0xc                         ; 0061087d
    CMP EAX,-0x1                        ; 00610880
    JNZ 0x006108a2                      ; 00610883
        ;   XREF to: 006108a2 (CONDITIONAL_JUMP)  ; LAB_006108a2
    PUSH EBP                            ; 00610885
    CALL crt_memory.c_free_FUN_00601cd0 ; 00610886
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0061088b
    TEST EBX,EBX                        ; 0061088e
    JZ 0x0061089b                       ; 00610890
        ;   XREF to: 0061089b (CONDITIONAL_JUMP)  ; LAB_0061089b
    PUSH EBX                            ; 00610892
    CALL crt_memory.c_free_FUN_00601cd0 ; 00610893
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 00610898
    XOR EAX,EAX                         ; 0061089b
        ;   Label: LAB_0061089b
    POP EBP                             ; 0061089d
    POP EDI                             ; 0061089e
    POP ESI                             ; 0061089f
    POP EBX                             ; 006108a0
    RET                                 ; 006108a1
    TEST EBX,EBX                        ; 006108a2
        ;   Label: LAB_006108a2
    JZ 0x006108ca                       ; 006108a4
        ;   XREF to: 006108ca (CONDITIONAL_JUMP)  ; LAB_006108ca
    PUSH ESI                            ; 006108a6
    MOV EAX,dword ptr [ESP + 0x1c]      ; 006108a7
    PUSH EAX                            ; 006108ab
    PUSH EBX                            ; 006108ac
    CALL crt_string.c_wcstombs_FUN_0060c0c0 ; 006108ad
        ;   XREF to: 0060c0c0 (UNCONDITIONAL_CALL)  ; int crt_string.c_wcstombs_FUN_0060c0c0(char * dest, wchar_t * src, SIZE_T dest_size)
    ADD ESP,0xc                         ; 006108b2
    CMP EAX,-0x1                        ; 006108b5
    JNZ 0x006108ca                      ; 006108b8
        ;   XREF to: 006108ca (CONDITIONAL_JUMP)  ; LAB_006108ca
    PUSH EBX                            ; 006108ba
    CALL crt_memory.c_free_FUN_00601cd0 ; 006108bb
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 006108c0
    XOR EAX,EAX                         ; 006108c3
    POP EBP                             ; 006108c5
    POP EDI                             ; 006108c6
    POP ESI                             ; 006108c7
    POP EBX                             ; 006108c8
    RET                                 ; 006108c9
    PUSH EBX                            ; 006108ca
        ;   Label: LAB_006108ca
    PUSH EBP                            ; 006108cb
    CALL dword ptr CS:[0x61161c]        ; 006108cc | PTR_SetEnvironmentVariableA_0061161c
    PUSH EBP                            ; 006108d3
    MOV ESI,EAX                         ; 006108d4
    CALL crt_memory.c_free_FUN_00601cd0 ; 006108d6
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 006108db
    TEST EBX,EBX                        ; 006108de
    JZ 0x006108eb                       ; 006108e0
        ;   XREF to: 006108eb (CONDITIONAL_JUMP)  ; LAB_006108eb
    PUSH EBX                            ; 006108e2
    CALL crt_memory.c_free_FUN_00601cd0 ; 006108e3
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 006108e8
    MOV EAX,ESI                         ; 006108eb
        ;   Label: LAB_006108eb
    POP EBP                             ; 006108ed
        ;   Label: LAB_006108ed
    POP EDI                             ; 006108ee
    POP ESI                             ; 006108ef
    POP EBX                             ; 006108f0
    RET                                 ; 006108f1


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __mtdeletelocks(void)
;
;
; XREF[1]:
;   __mtterm at 10007760
;
; Referenced Globals:
;   undefined4 DAT_10016c78
;   void* PTR_DAT_10016c7c = 10240630
;   void* PTR_DAT_10016c9c = 10240660
;   void* PTR_DAT_10016cac = 10240678
;   void* PTR_DAT_10016cbc = 10240648
;   undefined4 DAT_10240630
;   undefined4 DAT_10240648
;   undefined4 DAT_10240660
;   undefined4 DAT_10240678
;   void* PTR_DeleteCriticalSection_102421b4 = 002423b4
;
; Called Functions:
;   DeleteCriticalSection
;   FUN_10005b30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10005930
        ;   Label: __mtdeletelocks
    PUSH ESI                            ; 10005931
    PUSH EDI                            ; 10005932
    MOV ESI,dword ptr [0x102421b4]      ; 10005933 | PTR_DeleteCriticalSection_102421b4
    XOR EDI,EDI                         ; 10005939
    LEA EBX,[EDI*0x4 + 0x10016c78]      ; 1000593b | DAT_10016c78
        ;   Label: LAB_1000593b
    MOV EAX,dword ptr [EBX]             ; 10005942 | DAT_10016c78 | PTR_DAT_10016c7c
    TEST EAX,EAX                        ; 10005944
    JZ 0x1000596a                       ; 10005946
        ;   XREF to: 1000596a (CONDITIONAL_JUMP)  ; LAB_1000596a
    CMP EDI,0x11                        ; 10005948
    JZ 0x1000596a                       ; 1000594b
        ;   XREF to: 1000596a (CONDITIONAL_JUMP)  ; LAB_1000596a
    CMP EDI,0xd                         ; 1000594d
    JZ 0x1000596a                       ; 10005950
        ;   XREF to: 1000596a (CONDITIONAL_JUMP)  ; LAB_1000596a
    CMP EDI,0x9                         ; 10005952
    JZ 0x1000596a                       ; 10005955
        ;   XREF to: 1000596a (CONDITIONAL_JUMP)  ; LAB_1000596a
    CMP EDI,0x1                         ; 10005957
    JZ 0x1000596a                       ; 1000595a
        ;   XREF to: 1000596a (CONDITIONAL_JUMP)  ; LAB_1000596a
    PUSH EAX                            ; 1000595c | DAT_10240630
    CALL ESI                            ; 1000595d | void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    MOV EAX,dword ptr [EBX]             ; 1000595f | DAT_10016c78
    PUSH EAX                            ; 10005961
    CALL FUN_10005b30                   ; 10005962
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
    ADD ESP,0x4                         ; 10005967
    INC EDI                             ; 1000596a
        ;   Label: LAB_1000596a
    CMP EDI,0x30                        ; 1000596b
    JL 0x1000593b                       ; 1000596e
        ;   XREF to: 1000593b (CONDITIONAL_JUMP)  ; LAB_1000593b
    MOV EAX,[0x10016c9c]                ; 10005970 | PTR_DAT_10016c9c
    PUSH EAX                            ; 10005975 | DAT_10240660
    CALL ESI                            ; 10005976 | void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    MOV EAX,[0x10016cac]                ; 10005978 | PTR_DAT_10016cac
    PUSH EAX                            ; 1000597d | DAT_10240678
    CALL ESI                            ; 1000597e | void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    MOV EAX,[0x10016cbc]                ; 10005980 | PTR_DAT_10016cbc
    PUSH EAX                            ; 10005985 | DAT_10240648
    CALL ESI                            ; 10005986 | void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    MOV EAX,[0x10016c7c]                ; 10005988 | PTR_DAT_10016c7c
    PUSH EAX                            ; 1000598d | DAT_10240630
    CALL ESI                            ; 1000598e | void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    POP EDI                             ; 10005990
    POP ESI                             ; 10005991
    POP EBX                             ; 10005992
    RET                                 ; 10005993


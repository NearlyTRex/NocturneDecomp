; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl DWORD crt_startup.c_GetModuleFileNameCompat_FUN_0060a560(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
;
; Parameters:
; typedef HMODULE HINSTANCE Stack[0x4]:4   hModule
; typedef LPWSTR WCHAR * Stack[0x8]:4   lpFilename
; typedef DWORD ulong Stack[0xc]:4   nSize
;
; XREF[1]:
;   crt_startup.c_initialize_runtime_FUN_0060245c at 00602540
;
; Referenced Globals:
;   GetModuleFileNameA* GetModuleFileNameA = 00211f42
;   GetModuleFileNameW* PTR_GetModuleFileNameW_006115b0 = 00211f58
;   GetVersion* PTR_GetVersion_006115c8 = 00211fca
;   MultiByteToWideChar* PTR_MultiByteToWideChar_006115f4 = 00212092
;
; Called Functions:
;   crt_memory.c_free_FUN_00601cd0
;   crt_memory.c_malloc_FUN_00601bb0
;   crt_string.c_wcslen_FUN_0060cd30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060a560
        ;   Label: crt_startup.c_GetModuleFileNameCompat_FUN_0060a560
    PUSH ESI                            ; 0060a561
    PUSH EDI                            ; 0060a562
    PUSH EBP                            ; 0060a563
    MOV EDI,dword ptr [ESP + 0x14]      ; 0060a564
    MOV ESI,dword ptr [ESP + 0x18]      ; 0060a568
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0060a56c
    CALL dword ptr CS:[0x6115c8]        ; 0060a570 | PTR_GetVersion_006115c8
    SHR EAX,0x10                        ; 0060a577
    AND EAX,0xffff                      ; 0060a57a
    CMP AX,0x8000                       ; 0060a57f
    JNC 0x0060a594                      ; 0060a583
        ;   XREF to: 0060a594 (CONDITIONAL_JUMP)  ; LAB_0060a594
    PUSH EBP                            ; 0060a585
    PUSH ESI                            ; 0060a586
    PUSH EDI                            ; 0060a587
    CALL dword ptr CS:[0x6115b0]        ; 0060a588 | PTR_GetModuleFileNameW_006115b0
    POP EBP                             ; 0060a58f
    POP EDI                             ; 0060a590
    POP ESI                             ; 0060a591
    POP EBX                             ; 0060a592
    RET                                 ; 0060a593
    PUSH 0x208                          ; 0060a594
        ;   Label: LAB_0060a594
    CALL crt_memory.c_malloc_FUN_00601bb0 ; 0060a599
        ;   XREF to: 00601bb0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_00601bb0(ulong size)
    MOV EBX,EAX                         ; 0060a59e
    ADD ESP,0x4                         ; 0060a5a0
    TEST EAX,EAX                        ; 0060a5a3
    JZ 0x0060a5ff                       ; 0060a5a5
        ;   XREF to: 0060a5ff (CONDITIONAL_JUMP)  ; LAB_0060a5ff
    PUSH 0x208                          ; 0060a5a7
    PUSH EAX                            ; 0060a5ac
    PUSH EDI                            ; 0060a5ad
    CALL dword ptr CS:[0x6115ac]        ; 0060a5ae | GetModuleFileNameA
    TEST EAX,EAX                        ; 0060a5b5
    JNZ 0x0060a5c9                      ; 0060a5b7
        ;   XREF to: 0060a5c9 (CONDITIONAL_JUMP)  ; LAB_0060a5c9
    PUSH EBX                            ; 0060a5b9
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060a5ba
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060a5bf
    XOR EAX,EAX                         ; 0060a5c2
    POP EBP                             ; 0060a5c4
    POP EDI                             ; 0060a5c5
    POP ESI                             ; 0060a5c6
    POP EBX                             ; 0060a5c7
    RET                                 ; 0060a5c8
    PUSH EBP                            ; 0060a5c9
        ;   Label: LAB_0060a5c9
    PUSH ESI                            ; 0060a5ca
    PUSH -0x1                           ; 0060a5cb
    PUSH EBX                            ; 0060a5cd
    PUSH 0x1                            ; 0060a5ce
    PUSH 0x1                            ; 0060a5d0
    CALL dword ptr CS:[0x6115f4]        ; 0060a5d2 | PTR_MultiByteToWideChar_006115f4
    PUSH EBX                            ; 0060a5d9
    MOV EDI,EAX                         ; 0060a5da
    CALL crt_memory.c_free_FUN_00601cd0 ; 0060a5dc
        ;   XREF to: 00601cd0 (UNCONDITIONAL_CALL)  ; void crt_memory.c_free_FUN_00601cd0(void * ptr)
    ADD ESP,0x4                         ; 0060a5e1
    TEST EDI,EDI                        ; 0060a5e4
    JNZ 0x0060a5ef                      ; 0060a5e6
        ;   XREF to: 0060a5ef (CONDITIONAL_JUMP)  ; LAB_0060a5ef
    XOR EAX,EAX                         ; 0060a5e8
    POP EBP                             ; 0060a5ea
    POP EDI                             ; 0060a5eb
    POP ESI                             ; 0060a5ec
    POP EBX                             ; 0060a5ed
    RET                                 ; 0060a5ee
    PUSH ESI                            ; 0060a5ef
        ;   Label: LAB_0060a5ef
    MOV word ptr [ESI + EBP*0x2 + -0x2],0x0 ; 0060a5f0
    CALL crt_string.c_wcslen_FUN_0060cd30 ; 0060a5f7
        ;   XREF to: 0060cd30 (UNCONDITIONAL_CALL)  ; ulong crt_string.c_wcslen_FUN_0060cd30(LPWSTR str)
    ADD ESP,0x4                         ; 0060a5fc
    POP EBP                             ; 0060a5ff
        ;   Label: LAB_0060a5ff
    POP EDI                             ; 0060a600
    POP ESI                             ; 0060a601
    POP EBX                             ; 0060a602
    RET                                 ; 0060a603


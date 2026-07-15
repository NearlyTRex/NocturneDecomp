; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c__ioterm_FUN_10007b00(void)
;
;
; XREF[1]:
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0 at 100057ba
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241874
;   undefined4 DAT_10241970
;   void* PTR_DeleteCriticalSection_102421b4 = 002423b4
;
; Called Functions:
;   crt_heap.c_free_FUN_10005b30
;   DeleteCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 10007b00
        ;   Label: crt_startup.c__ioterm_FUN_10007b00
    PUSH ESI                            ; 10007b01
    PUSH EDI                            ; 10007b02
    MOV ESI,0x10241870                  ; 10007b03 | DAT_10241870
    PUSH EBP                            ; 10007b08
    MOV EDI,dword ptr [0x102421b4]      ; 10007b09 | PTR_DeleteCriticalSection_102421b4
    MOV EBX,dword ptr [ESI]             ; 10007b0f | DAT_10241870 | DAT_10241874
        ;   Label: LAB_10007b0f
    TEST EBX,EBX                        ; 10007b11
    JZ 0x10007b45                       ; 10007b13
        ;   XREF to: 10007b45 (CONDITIONAL_JUMP)  ; LAB_10007b45
    LEA EAX,[EBX + 0x480]               ; 10007b15
    CMP EAX,EBX                         ; 10007b1b
    JBE 0x10007b3a                      ; 10007b1d
        ;   XREF to: 10007b3a (CONDITIONAL_JUMP)  ; LAB_10007b3a
    XOR EBP,EBP                         ; 10007b1f
    CMP dword ptr [EBX + 0x8],EBP       ; 10007b21
        ;   Label: LAB_10007b21
    JZ 0x10007b2c                       ; 10007b24
        ;   XREF to: 10007b2c (CONDITIONAL_JUMP)  ; LAB_10007b2c
    LEA EAX,[EBX + 0xc]                 ; 10007b26
    PUSH EAX                            ; 10007b29
    CALL EDI                            ; 10007b2a | void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
    ADD EBX,0x24                        ; 10007b2c
        ;   Label: LAB_10007b2c
    MOV EAX,dword ptr [ESI]             ; 10007b2f | DAT_10241870 | DAT_10241874
    ADD EAX,0x480                       ; 10007b31
    CMP EAX,EBX                         ; 10007b36
    JA 0x10007b21                       ; 10007b38
        ;   XREF to: 10007b21 (CONDITIONAL_JUMP)  ; LAB_10007b21
    MOV EAX,dword ptr [ESI]             ; 10007b3a | DAT_10241870 | DAT_10241874
        ;   Label: LAB_10007b3a
    PUSH EAX                            ; 10007b3c
    CALL crt_heap.c_free_FUN_10005b30   ; 10007b3d
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; void crt_heap.c_free_FUN_10005b30(void * block)
    ADD ESP,0x4                         ; 10007b42
    ADD ESI,0x4                         ; 10007b45
        ;   Label: LAB_10007b45
    CMP ESI,0x10241970                  ; 10007b48 | DAT_10241970
    JC 0x10007b0f                       ; 10007b4e
        ;   XREF to: 10007b0f (CONDITIONAL_JUMP)  ; LAB_10007b0f
    POP EBP                             ; 10007b50
    POP EDI                             ; 10007b51
    POP ESI                             ; 10007b52
    POP EBX                             ; 10007b53
    RET                                 ; 10007b54


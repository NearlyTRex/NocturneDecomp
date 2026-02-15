; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __watcallRegister crt_watcom_c_memavl_FUN_006008f0(void)
;
;
; XREF[1]:
;   shape_design.c_displayMemoryStatus_FUN_0046e6f0 at 0046e6fc
;
; Referenced Globals:
;   Heap* g_MainHeap = 00000000
;   void* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00 = 00602434
;   void* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08 = 00602434
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006008f0
        ;   Label: crt_watcom.c_memavl_FUN_006008f0
    PUSH ESI                            ; 006008f1
    CALL dword ptr [0x00684f00]         ; 006008f2 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
    MOV ESI,dword ptr [0x00684ed4]      ; 006008f8 | g_MainHeap
    XOR EBX,EBX                         ; 006008fe
    TEST ESI,ESI                        ; 00600900
    JZ 0x00600926                       ; 00600902
        ;   XREF to: 00600926 (CONDITIONAL_JUMP)  ; LAB_00600926
    LEA ECX,[ESI + 0x20]                ; 00600904
        ;   Label: LAB_00600904
    MOV EAX,dword ptr [ESI + 0x28]      ; 00600907
    CMP EAX,ECX                         ; 0060090a
    JZ 0x0060091f                       ; 0060090c
        ;   XREF to: 0060091f (CONDITIONAL_JUMP)  ; LAB_0060091f
    MOV EDX,dword ptr [EAX]             ; 0060090e
        ;   Label: LAB_0060090e
    SUB EDX,0x4                         ; 00600910
    AND DL,0xf8                         ; 00600913
    MOV EAX,dword ptr [EAX + 0x8]       ; 00600916
    ADD EBX,EDX                         ; 00600919
    CMP EAX,ECX                         ; 0060091b
    JNZ 0x0060090e                      ; 0060091d
        ;   XREF to: 0060090e (CONDITIONAL_JUMP)  ; LAB_0060090e
    MOV ESI,dword ptr [ESI + 0x8]       ; 0060091f
        ;   Label: LAB_0060091f
    TEST ESI,ESI                        ; 00600922
    JNZ 0x00600904                      ; 00600924
        ;   XREF to: 00600904 (CONDITIONAL_JUMP)  ; LAB_00600904
    CALL dword ptr [0x00684f08]         ; 00600926 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
        ;   Label: LAB_00600926
    MOV EAX,EBX                         ; 0060092c
    POP ESI                             ; 0060092e
    POP EBX                             ; 0060092f
    RET                                 ; 00600930


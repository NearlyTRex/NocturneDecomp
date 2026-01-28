; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown uint crt_watcom_c_memmax_FUN_00600940(void)
;
;
; XREF[1]:
;   shape_design.c_displayMemoryStatus_FUN_0046e6f0 at 0046e727
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

    PUSH EBX                            ; 00600940
        ;   Label: crt_watcom.c_memmax_FUN_00600940
    PUSH ESI                            ; 00600941
    CALL dword ptr [0x00684f00]         ; 00600942 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684f00
    MOV ESI,dword ptr [0x00684ed4]      ; 00600948 | g_MainHeap
    XOR EBX,EBX                         ; 0060094e
    TEST ESI,ESI                        ; 00600950
    JZ 0x0060097a                       ; 00600952
        ;   XREF to: 0060097a (CONDITIONAL_JUMP)  ; LAB_0060097a
    LEA ECX,[ESI + 0x20]                ; 00600954
        ;   Label: LAB_00600954
    MOV EAX,dword ptr [ESI + 0x28]      ; 00600957
    CMP EAX,ECX                         ; 0060095a
    JZ 0x00600973                       ; 0060095c
        ;   XREF to: 00600973 (CONDITIONAL_JUMP)  ; LAB_00600973
    MOV EDX,dword ptr [EAX]             ; 0060095e
        ;   Label: LAB_0060095e
    SUB EDX,0x4                         ; 00600960
    AND DL,0xf8                         ; 00600963
    CMP EDX,EBX                         ; 00600966
    JBE 0x0060096c                      ; 00600968
        ;   XREF to: 0060096c (CONDITIONAL_JUMP)  ; LAB_0060096c
    MOV EBX,EDX                         ; 0060096a
    MOV EAX,dword ptr [EAX + 0x8]       ; 0060096c
        ;   Label: LAB_0060096c
    CMP EAX,ECX                         ; 0060096f
    JNZ 0x0060095e                      ; 00600971
        ;   XREF to: 0060095e (CONDITIONAL_JUMP)  ; LAB_0060095e
    MOV ESI,dword ptr [ESI + 0x8]       ; 00600973
        ;   Label: LAB_00600973
    TEST ESI,ESI                        ; 00600976
    JNZ 0x00600954                      ; 00600978
        ;   XREF to: 00600954 (CONDITIONAL_JUMP)  ; LAB_00600954
    CALL dword ptr [0x00684f08]         ; 0060097a | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684f08
        ;   Label: LAB_0060097a
    MOV EAX,EBX                         ; 00600980
    POP ESI                             ; 00600982
    POP EBX                             ; 00600983
    RET                                 ; 00600984


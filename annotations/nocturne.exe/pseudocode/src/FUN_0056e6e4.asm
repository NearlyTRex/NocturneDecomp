; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e6e4(void)
;
;
; XREF[1]:
;   FUN_00573ed0 at 00573ef2
;
; Referenced Globals:
;   void* PTR_TlsSetValue_005755cc = 001760aa
;   undefined4 DAT_005c1ab8
;   void* PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc = 005671dc
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;   void* PTR_crt_io.c_register_handler_wrapper_FUN_005671e8_005c1ac8 = 005671e8
;   void* PTR_crt_io.c_invalidate_handle_wrapper_FUN_005671f8_005c1acc = 005671f8
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1adc = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae4 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1aec = 005671e4
;   ... and 9 more
;
; Called Functions:
;   FUN_0056e254
;   FUN_00571280
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e6e4
        ;   Label: FUN_0056e6e4
    PUSH ESI                            ; 0056e6e5
    PUSH EDI                            ; 0056e6e6
    PUSH EBP                            ; 0056e6e7
    MOV EDX,0x56e43c                    ; 0056e6e8
    MOV EBX,0x56e458                    ; 0056e6ed
    MOV ECX,0x56e474                    ; 0056e6f2
    MOV ESI,0x56e484                    ; 0056e6f7
    MOV EDI,0x56e41c                    ; 0056e6fc
    MOV EBP,0x56e42c                    ; 0056e701
    MOV EAX,0x56e4ec                    ; 0056e706
    MOV dword ptr [0x005c1ac0],EDX      ; 0056e70b | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    MOV dword ptr [0x005c1ac4],EBX      ; 0056e711 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    MOV dword ptr [0x005c1ac8],ECX      ; 0056e717 | PTR_crt_io.c_register_handler_wrapper_FUN_005671e8_005c1ac8
    MOV dword ptr [0x005c1acc],ESI      ; 0056e71d | PTR_crt_io.c_invalidate_handle_wrapper_FUN_005671f8_005c1acc
    MOV dword ptr [0x005c1ad0],EDI      ; 0056e723 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad0
    MOV dword ptr [0x005c1ad4],EBP      ; 0056e729 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4
    MOV [0x005c1ae8],EAX                ; 0056e72f | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae8
    MOV EDX,0x56e4fc                    ; 0056e734
    MOV EBX,0x56e390                    ; 0056e739
    MOV ECX,0x56e3f4                    ; 0056e73e
    MOV ESI,0x56e37c                    ; 0056e743
    MOV EDI,0x56e4ac                    ; 0056e748
    MOV EBP,0x56e4cc                    ; 0056e74d
    MOV EAX,0x56e4bc                    ; 0056e752
    MOV dword ptr [0x005c1aec],EDX      ; 0056e757 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1aec
    MOV dword ptr [0x005c1f60],EBX      ; 0056e75d | PTR_FUN_005c1f60
    MOV dword ptr [0x005c1f64],ECX      ; 0056e763 | PTR_FUN_005c1f64
    MOV dword ptr [0x005c1f68],ESI      ; 0056e769 | PTR_FUN_005c1f68
    MOV dword ptr [0x005c1ad8],EDI      ; 0056e76f | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8
    MOV dword ptr [0x005c1adc],EBP      ; 0056e775 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1adc
    MOV [0x005c1ae0],EAX                ; 0056e77b | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0
    MOV EDX,0x56e4dc                    ; 0056e780
    MOV EBX,0x1                         ; 0056e785
    MOV ESI,0x56e51c                    ; 0056e78a
    MOV EDI,0x56e6b8                    ; 0056e78f
    MOV dword ptr [0x005c1ae4],EDX      ; 0056e794 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae4
    CALL FUN_0056e254                   ; 0056e79a
        ;   XREF to: 0056e254 (UNCONDITIONAL_CALL)  ; undefined FUN_0056e254()
    MOV ECX,0x56e50c                    ; 0056e79f
    MOV EBP,dword ptr [0x02de4e3c]      ; 0056e7a4 | DAT_02de4e3c
    MOV [0x02de5be0],EAX                ; 0056e7aa | DAT_02de5be0
    MOV dword ptr [0x02de5be4],EBX      ; 0056e7af | DAT_02de5be4
    PUSH EBP                            ; 0056e7b5
    MOV EDX,dword ptr [EBP + 0xda]      ; 0056e7b6
    MOV dword ptr [0x005c1af4],ESI      ; 0056e7bc | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1af4
    PUSH EDX                            ; 0056e7c2
    MOV dword ptr [0x005c1af8],EDI      ; 0056e7c3 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1af8
    MOV dword ptr [0x005c1af0],ECX      ; 0056e7c9 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1af0
    CALL FUN_00571280                   ; 0056e7cf
        ;   XREF to: 00571280 (UNCONDITIONAL_CALL)  ; undefined FUN_00571280()
    ADD ESP,0x8                         ; 0056e7d4
    MOV EBX,dword ptr [0x02de4e3c]      ; 0056e7d7 | DAT_02de4e3c
    PUSH EBX                            ; 0056e7dd
    MOV ECX,dword ptr [0x005c1ab8]      ; 0056e7de | DAT_005c1ab8
    PUSH ECX                            ; 0056e7e4
    MOV ESI,0x56e52c                    ; 0056e7e5
    CALL dword ptr CS:[0x5755cc]        ; 0056e7ea | PTR_TlsSetValue_005755cc
    MOV dword ptr [0x005c1abc],ESI      ; 0056e7f1 | PTR_crt_thread.c_GetTLS_FUN_005671dc_005c1abc
    POP EBP                             ; 0056e7f7
    POP EDI                             ; 0056e7f8
    POP ESI                             ; 0056e7f9
    POP EBX                             ; 0056e7fa
    RET                                 ; 0056e7fb


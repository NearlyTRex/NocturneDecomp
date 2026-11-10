; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005caa60(undefined4 *param_1)
;
;
; XREF[7]:
;   crt_unknown.c_FUN_005caaec at 005caaf1
;   crt_unknown.c_FUN_005cab0c at 005cab1c
;   crt_unknown.c_FUN_005cab7c at 005cab81
;   crt_unknown.c_FUN_005cab9c at 005caba1
;   crt_unknown.c_FUN_005cabbc at 005cabc1
;   crt_unknown.c_FUN_005cabdc at 005cabe1
;   crt_unknown.c_FUN_005cadb4 at 005cae09
;
; Referenced Globals:
;   void* PTR_EnterCriticalSection_005d0540 = 001d0cf8
;   void* PTR_GetCurrentThreadId_005d0590 = 001d0e6a
;   undefined4 DAT_02c9ff30
;
; Called Functions:
;   crt_unknown.c_FUN_005ca924
;   crt_unknown.c_FUN_005caac4
;   EnterCriticalSection
;   GetCurrentThreadId
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005caa60
        ;   Label: crt_unknown.c_FUN_005caa60
    PUSH ESI                            ; 005caa61
    PUSH EDI                            ; 005caa62
    PUSH EBP                            ; 005caa63
    MOV EBX,dword ptr [ESP + 0x14]      ; 005caa64
    CALL dword ptr CS:[0x5d0590]        ; 005caa68 | PTR_GetCurrentThreadId_005d0590
    MOV EDX,dword ptr [EBX + 0x8]       ; 005caa6f
    MOV ESI,EAX                         ; 005caa72
    CMP EAX,EDX                         ; 005caa74
    JZ 0x005caaba                       ; 005caa76
        ;   XREF to: 005caaba (CONDITIONAL_JUMP)  ; LAB_005caaba
    CMP dword ptr [EBX + 0x4],0x0       ; 005caa78
    JNZ 0x005caaad                      ; 005caa7c
        ;   XREF to: 005caaad (CONDITIONAL_JUMP)  ; LAB_005caaad
    PUSH 0x2c9ff30                      ; 005caa7e | DAT_02c9ff30
    CALL crt_unknown.c_FUN_005caa60     ; 005caa83
        ;   XREF to: 005caa60 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caa60()
    MOV EDI,dword ptr [EBX + 0x4]       ; 005caa88
    ADD ESP,0x4                         ; 005caa8b
    TEST EDI,EDI                        ; 005caa8e
    JNZ 0x005caaa0                      ; 005caa90
        ;   XREF to: 005caaa0 (CONDITIONAL_JUMP)  ; LAB_005caaa0
    CALL crt_unknown.c_FUN_005ca924     ; 005caa92
        ;   XREF to: 005ca924 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ca924()
    MOV dword ptr [EBX + 0x4],0x1       ; 005caa97
    MOV dword ptr [EBX],EAX             ; 005caa9e
    PUSH 0x2c9ff30                      ; 005caaa0 | DAT_02c9ff30
        ;   Label: LAB_005caaa0
    CALL crt_unknown.c_FUN_005caac4     ; 005caaa5
        ;   XREF to: 005caac4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005caac4()
    ADD ESP,0x4                         ; 005caaaa
    MOV EBP,dword ptr [EBX]             ; 005caaad
        ;   Label: LAB_005caaad
    PUSH EBP                            ; 005caaaf
    CALL dword ptr CS:[0x5d0540]        ; 005caab0 | PTR_EnterCriticalSection_005d0540
    MOV dword ptr [EBX + 0x8],ESI       ; 005caab7
    INC dword ptr [EBX + 0xc]           ; 005caaba
        ;   Label: LAB_005caaba
    POP EBP                             ; 005caabd
    POP EDI                             ; 005caabe
    POP ESI                             ; 005caabf
    POP EBX                             ; 005caac0
    RET                                 ; 005caac1


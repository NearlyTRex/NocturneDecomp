; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ad8d0(undefined4 *param_1)
;
;
; XREF[1]:
;   FUN_005adc24 at 005adc79
;
; Referenced Globals:
;   void* PTR_EnterCriticalSection_005b353c = 001b3ce6
;   void* PTR_GetCurrentThreadId_005b3590 = 001b3e70
;   undefined4 DAT_02d26180
;
; Called Functions:
;   EnterCriticalSection
;   FUN_005ad794
;   FUN_005ad934
;   GetCurrentThreadId
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad8d0
        ;   Label: FUN_005ad8d0
    PUSH ESI                            ; 005ad8d1
    PUSH EDI                            ; 005ad8d2
    PUSH EBP                            ; 005ad8d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 005ad8d4
    CALL dword ptr CS:[0x5b3590]        ; 005ad8d8 | PTR_GetCurrentThreadId_005b3590
    MOV EDX,dword ptr [EBX + 0x8]       ; 005ad8df
    MOV ESI,EAX                         ; 005ad8e2
    CMP EAX,EDX                         ; 005ad8e4
    JZ 0x005ad92a                       ; 005ad8e6
        ;   XREF to: 005ad92a (CONDITIONAL_JUMP)  ; LAB_005ad92a
    CMP dword ptr [EBX + 0x4],0x0       ; 005ad8e8
    JNZ 0x005ad91d                      ; 005ad8ec
        ;   XREF to: 005ad91d (CONDITIONAL_JUMP)  ; LAB_005ad91d
    PUSH 0x2d26180                      ; 005ad8ee | DAT_02d26180
    CALL FUN_005ad8d0                   ; 005ad8f3
        ;   XREF to: 005ad8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad8d0()
    MOV EDI,dword ptr [EBX + 0x4]       ; 005ad8f8
    ADD ESP,0x4                         ; 005ad8fb
    TEST EDI,EDI                        ; 005ad8fe
    JNZ 0x005ad910                      ; 005ad900
        ;   XREF to: 005ad910 (CONDITIONAL_JUMP)  ; LAB_005ad910
    CALL FUN_005ad794                   ; 005ad902
        ;   XREF to: 005ad794 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad794()
    MOV dword ptr [EBX + 0x4],0x1       ; 005ad907
    MOV dword ptr [EBX],EAX             ; 005ad90e
    PUSH 0x2d26180                      ; 005ad910 | DAT_02d26180
        ;   Label: LAB_005ad910
    CALL FUN_005ad934                   ; 005ad915
        ;   XREF to: 005ad934 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad934()
    ADD ESP,0x4                         ; 005ad91a
    MOV EBP,dword ptr [EBX]             ; 005ad91d
        ;   Label: LAB_005ad91d
    PUSH EBP                            ; 005ad91f
    CALL dword ptr CS:[0x5b353c]        ; 005ad920 | PTR_EnterCriticalSection_005b353c
    MOV dword ptr [EBX + 0x8],ESI       ; 005ad927
    INC dword ptr [EBX + 0xc]           ; 005ad92a
        ;   Label: LAB_005ad92a
    POP EBP                             ; 005ad92d
    POP EDI                             ; 005ad92e
    POP ESI                             ; 005ad92f
    POP EBX                             ; 005ad930
    RET                                 ; 005ad931


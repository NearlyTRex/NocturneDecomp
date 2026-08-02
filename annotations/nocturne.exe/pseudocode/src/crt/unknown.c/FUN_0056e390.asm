; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e390(undefined4 *param_1)
;
;
; XREF[7]:
;   crt_unknown.c_FUN_0056e41c at 0056e421
;   crt_unknown.c_FUN_0056e43c at 0056e44c
;   crt_unknown.c_FUN_0056e4ac at 0056e4b1
;   crt_unknown.c_FUN_0056e4cc at 0056e4d1
;   crt_unknown.c_FUN_0056e4ec at 0056e4f1
;   crt_unknown.c_FUN_0056e50c at 0056e511
;   crt_unknown.c_FUN_0056e6e4 at 0056e739
;
; Referenced Globals:
;   void* PTR_EnterCriticalSection_005754b0 = 00175b72
;   void* PTR_GetCurrentThreadId_00575500 = 00175ce8
;   undefined4 DAT_02de5be0
;
; Called Functions:
;   crt_unknown.c_FUN_0056e254
;   crt_unknown.c_FUN_0056e3f4
;   EnterCriticalSection
;   GetCurrentThreadId
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e390
        ;   Label: crt_unknown.c_FUN_0056e390
    PUSH ESI                            ; 0056e391
    PUSH EDI                            ; 0056e392
    PUSH EBP                            ; 0056e393
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056e394
    CALL dword ptr CS:[0x575500]        ; 0056e398 | PTR_GetCurrentThreadId_00575500
    MOV EDX,dword ptr [EBX + 0x8]       ; 0056e39f
    MOV ESI,EAX                         ; 0056e3a2
    CMP EAX,EDX                         ; 0056e3a4
    JZ 0x0056e3ea                       ; 0056e3a6
        ;   XREF to: 0056e3ea (CONDITIONAL_JUMP)  ; LAB_0056e3ea
    CMP dword ptr [EBX + 0x4],0x0       ; 0056e3a8
    JNZ 0x0056e3dd                      ; 0056e3ac
        ;   XREF to: 0056e3dd (CONDITIONAL_JUMP)  ; LAB_0056e3dd
    PUSH 0x2de5be0                      ; 0056e3ae | DAT_02de5be0
    CALL crt_unknown.c_FUN_0056e390     ; 0056e3b3
        ;   XREF to: 0056e390 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e390()
    MOV EDI,dword ptr [EBX + 0x4]       ; 0056e3b8
    ADD ESP,0x4                         ; 0056e3bb
    TEST EDI,EDI                        ; 0056e3be
    JNZ 0x0056e3d0                      ; 0056e3c0
        ;   XREF to: 0056e3d0 (CONDITIONAL_JUMP)  ; LAB_0056e3d0
    CALL crt_unknown.c_FUN_0056e254     ; 0056e3c2
        ;   XREF to: 0056e254 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e254()
    MOV dword ptr [EBX + 0x4],0x1       ; 0056e3c7
    MOV dword ptr [EBX],EAX             ; 0056e3ce
    PUSH 0x2de5be0                      ; 0056e3d0 | DAT_02de5be0
        ;   Label: LAB_0056e3d0
    CALL crt_unknown.c_FUN_0056e3f4     ; 0056e3d5
        ;   XREF to: 0056e3f4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e3f4()
    ADD ESP,0x4                         ; 0056e3da
    MOV EBP,dword ptr [EBX]             ; 0056e3dd
        ;   Label: LAB_0056e3dd
    PUSH EBP                            ; 0056e3df
    CALL dword ptr CS:[0x5754b0]        ; 0056e3e0 | PTR_EnterCriticalSection_005754b0
    MOV dword ptr [EBX + 0x8],ESI       ; 0056e3e7
    INC dword ptr [EBX + 0xc]           ; 0056e3ea
        ;   Label: LAB_0056e3ea
    POP EBP                             ; 0056e3ed
    POP EDI                             ; 0056e3ee
    POP ESI                             ; 0056e3ef
    POP EBX                             ; 0056e3f0
    RET                                 ; 0056e3f1


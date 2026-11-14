; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * crt_unknown_c_FUN_005c6a20(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c1520 at 005c153e
;
; Referenced Globals:
;   undefined4 DAT_006262d4
;   undefined1 DAT_006262e0
;   undefined4 DAT_006262ee
;   undefined1 DAT_006262fa
;   undefined4 DAT_006264dc
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626610 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626614 = 005c50d4
;   undefined4 DAT_02c9f050
;   undefined4 DAT_02c9f054
;
; Called Functions:
;   crt_errno.c_setErrno_FUN_005c6450
;   crt_memory.c_malloc_FUN_005c08d0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_unknown.c_FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6a20
        ;   Label: crt_unknown.c_FUN_005c6a20
    PUSH ESI                            ; 005c6a21
    PUSH EDI                            ; 005c6a22
    CALL dword ptr [0x00626610]         ; 005c6a23 | PTR_crt_unknown.c_FUN_005c50d4_00626610
    MOV ESI,dword ptr [0x02c9f054]      ; 005c6a29 | DAT_02c9f054
    TEST ESI,ESI                        ; 005c6a2f
    JZ 0x005c6a4c                       ; 005c6a31
        ;   XREF to: 005c6a4c (CONDITIONAL_JUMP)  ; LAB_005c6a4c
    MOV EBX,dword ptr [ESI + 0x4]       ; 005c6a33
    MOV EDI,dword ptr [EBX + 0xc]       ; 005c6a36
    MOV EAX,dword ptr [ESI]             ; 005c6a39
    AND EDI,0x4003                      ; 005c6a3b
    MOV [0x02c9f054],EAX                ; 005c6a41 | DAT_02c9f054
    OR DI,0x3                           ; 005c6a46
    JMP 0x005c6a99                      ; 005c6a4a
        ;   XREF to: 005c6a99 (UNCONDITIONAL_JUMP)  ; LAB_005c6a99
    MOV EBX,0x6262d4                    ; 005c6a4c | DAT_006262d4
        ;   Label: LAB_005c6a4c
    CMP EBX,0x6264dc                    ; 005c6a51 | DAT_006264dc
    JNC 0x005c6a81                      ; 005c6a57
        ;   XREF to: 005c6a81 (CONDITIONAL_JUMP)  ; LAB_005c6a81
    TEST byte ptr [EBX + 0xc],0x3       ; 005c6a59 | DAT_006262e0 | DAT_006262fa
        ;   Label: LAB_005c6a59
    JNZ 0x005c6a76                      ; 005c6a5d
        ;   XREF to: 005c6a76 (CONDITIONAL_JUMP)  ; LAB_005c6a76
    PUSH 0x1d                           ; 005c6a5f
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005c6a61
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005c6a66
    MOV ESI,EAX                         ; 005c6a69
    TEST EAX,EAX                        ; 005c6a6b
    JZ 0x005c6ac8                       ; 005c6a6d
        ;   XREF to: 005c6ac8 (CONDITIONAL_JUMP)  ; LAB_005c6ac8
    MOV EDI,0x3                         ; 005c6a6f
    JMP 0x005c6a99                      ; 005c6a74
        ;   XREF to: 005c6a99 (UNCONDITIONAL_JUMP)  ; LAB_005c6a99
    ADD EBX,0x1a                        ; 005c6a76
        ;   Label: LAB_005c6a76
    CMP EBX,0x6264dc                    ; 005c6a79 | DAT_006264dc
    JC 0x005c6a59                       ; 005c6a7f
        ;   XREF to: 005c6a59 (CONDITIONAL_JUMP)  ; LAB_005c6a59
    PUSH 0x37                           ; 005c6a81
        ;   Label: LAB_005c6a81
    MOV EDI,0x4003                      ; 005c6a83
    CALL crt_memory.c_malloc_FUN_005c08d0 ; 005c6a88
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 005c6a8d
    MOV ESI,EAX                         ; 005c6a90
    TEST EAX,EAX                        ; 005c6a92
    JZ 0x005c6ac8                       ; 005c6a94
        ;   XREF to: 005c6ac8 (CONDITIONAL_JUMP)  ; LAB_005c6ac8
    LEA EBX,[EAX + 0x1d]                ; 005c6a96
    PUSH 0x1a                           ; 005c6a99
        ;   Label: LAB_005c6a99
    PUSH 0x0                            ; 005c6a9b
    PUSH EBX                            ; 005c6a9d | DAT_006262ee
    CALL crt_memory.c_memset_FUN_005bfb70 ; 005c6a9e
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0xc],EDI       ; 005c6aa3
    MOV EAX,[0x02c9f050]                ; 005c6aa6 | DAT_02c9f050
    MOV dword ptr [ESI + 0x4],EBX       ; 005c6aab
    ADD ESP,0xc                         ; 005c6aae
    MOV dword ptr [EBX + 0x8],ESI       ; 005c6ab1
    MOV dword ptr [0x02c9f050],ESI      ; 005c6ab4 | DAT_02c9f050
    MOV dword ptr [ESI],EAX             ; 005c6aba
    CALL dword ptr [0x00626614]         ; 005c6abc | PTR_crt_unknown.c_FUN_005c50d4_00626614
    MOV EAX,EBX                         ; 005c6ac2
    POP EDI                             ; 005c6ac4
    POP ESI                             ; 005c6ac5
    POP EBX                             ; 005c6ac6
    RET                                 ; 005c6ac7
    PUSH 0x5                            ; 005c6ac8
        ;   Label: LAB_005c6ac8
    CALL crt_errno.c_setErrno_FUN_005c6450 ; 005c6aca
        ;   XREF to: 005c6450 (UNCONDITIONAL_CALL)  ; void crt_errno.c_setErrno_FUN_005c6450(int error_code)
    ADD ESP,0x4                         ; 005c6acf
    CALL dword ptr [0x00626614]         ; 005c6ad2 | PTR_crt_unknown.c_FUN_005c50d4_00626614
    XOR EAX,EAX                         ; 005c6ad8
    POP EDI                             ; 005c6ada
    POP ESI                             ; 005c6adb
    POP EBX                             ; 005c6adc
    RET                                 ; 005c6add


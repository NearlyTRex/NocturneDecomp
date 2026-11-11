; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * crt_unknown_c_FUN_005c4a88(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c28fc at 005c2928
;
; Referenced Globals:
;   void* PTR_GetCurrentThreadId_005c8580 = 001c8e42
;   void* PTR_TlsSetValue_005c8658 = 001c9238
;   TerminatedCString s_Unable_to_resize_thread_005f200c
;   TerminatedCString s_Unable_to_resize_thread_005f2034
;   undefined4 DAT_0061f2a0
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d0 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d4 = 005bce04
;   undefined4 DAT_0061f754
;   undefined4 DAT_026810b0
;
; Called Functions:
;   crt_memory.c_calloc_FUN_005b98d0
;   crt_memory.c_realloc_FUN_005b8ce0
;   crt_unknown.c_FUN_005bce04
;   crt_unknown.c_FUN_005c1c20
;   GetCurrentThreadId
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4a88
        ;   Label: crt_unknown.c_FUN_005c4a88
    PUSH ESI                            ; 005c4a89
    PUSH EDI                            ; 005c4a8a
    PUSH EBP                            ; 005c4a8b
    CALL dword ptr [0x0061f2d0]         ; 005c4a8c | PTR_crt_unknown.c_FUN_005bce04_0061f2d0
    CALL dword ptr CS:[0x5c8580]        ; 005c4a92 | PTR_GetCurrentThreadId_005c8580
    MOV EBX,dword ptr [0x026810b0]      ; 005c4a99 | DAT_026810b0
    TEST EBX,EBX                        ; 005c4a9f
    JZ 0x005c4aae                       ; 005c4aa1
        ;   XREF to: 005c4aae (CONDITIONAL_JUMP)  ; LAB_005c4aae
    CMP EAX,dword ptr [EBX + 0x4]       ; 005c4aa3
        ;   Label: LAB_005c4aa3
    JZ 0x005c4aae                       ; 005c4aa6
        ;   XREF to: 005c4aae (CONDITIONAL_JUMP)  ; LAB_005c4aae
    MOV EBX,dword ptr [EBX]             ; 005c4aa8
    TEST EBX,EBX                        ; 005c4aaa
    JNZ 0x005c4aa3                      ; 005c4aac
        ;   XREF to: 005c4aa3 (CONDITIONAL_JUMP)  ; LAB_005c4aa3
    CMP dword ptr [EBX + 0xc],0x0       ; 005c4aae
        ;   Label: LAB_005c4aae
    JZ 0x005c4ade                       ; 005c4ab2
        ;   XREF to: 005c4ade (CONDITIONAL_JUMP)  ; LAB_005c4ade
    MOV EDI,dword ptr [0x0061f754]      ; 005c4ab4 | DAT_0061f754
    PUSH EDI                            ; 005c4aba
    MOV EBP,dword ptr [EBX + 0x8]       ; 005c4abb
    PUSH EBP                            ; 005c4abe
    CALL crt_memory.c_realloc_FUN_005b8ce0 ; 005c4abf
        ;   XREF to: 005b8ce0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005b8ce0(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005c4ac4
    MOV EBP,EAX                         ; 005c4ac7
    TEST EAX,EAX                        ; 005c4ac9
    JNZ 0x005c4b2c                      ; 005c4acb
        ;   XREF to: 005c4b2c (CONDITIONAL_JUMP)  ; LAB_005c4b2c
    PUSH 0x1                            ; 005c4acd
    PUSH 0x5f200c                       ; 005c4acf | = "Unable to resize thread-specific data..."
    CALL crt_unknown.c_FUN_005c1c20     ; 005c4ad4
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1c20()
    ADD ESP,0x8                         ; 005c4ad9
    JMP 0x005c4b2c                      ; 005c4adc
        ;   XREF to: 005c4b2c (UNCONDITIONAL_JUMP)  ; LAB_005c4b2c
    MOV ESI,dword ptr [0x0061f754]      ; 005c4ade | DAT_0061f754
        ;   Label: LAB_005c4ade
    PUSH ESI                            ; 005c4ae4
    PUSH 0x1                            ; 005c4ae5
    CALL crt_memory.c_calloc_FUN_005b98d0 ; 005c4ae7
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_calloc_FUN_005b98d0()
    ADD ESP,0x8                         ; 005c4aec
    MOV EBP,EAX                         ; 005c4aef
    TEST EAX,EAX                        ; 005c4af1
    JNZ 0x005c4b04                      ; 005c4af3
        ;   XREF to: 005c4b04 (CONDITIONAL_JUMP)  ; LAB_005c4b04
    PUSH 0x1                            ; 005c4af5
    PUSH 0x5f2034                       ; 005c4af7 | = "Unable to resize thread-specific data..."
    CALL crt_unknown.c_FUN_005c1c20     ; 005c4afc
        ;   XREF to: 005c1c20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1c20()
    ADD ESP,0x8                         ; 005c4b01
    MOV ESI,dword ptr [EBX + 0x8]       ; 005c4b04
        ;   Label: LAB_005c4b04
    MOV EDI,EBP                         ; 005c4b07
    MOV ECX,dword ptr [ESI + 0xf0]      ; 005c4b09
    PUSH ES                             ; 005c4b0f
    MOV AX,DS                           ; 005c4b10
    MOV ES,AX                           ; 005c4b12
    PUSH EDI                            ; 005c4b14
    MOV EAX,ECX                         ; 005c4b15
    SHR ECX,0x2                         ; 005c4b17
    MOVSD.REP ES:EDI,ESI                ; 005c4b1a
    MOV CL,AL                           ; 005c4b1c
    AND CL,0x3                          ; 005c4b1e
    MOVSB.REP ES:EDI,ESI                ; 005c4b21
    POP EDI                             ; 005c4b23
    POP ES                              ; 005c4b24
    MOV dword ptr [EBX + 0xc],0x1       ; 005c4b25
    MOV dword ptr [EBX + 0x8],EBP       ; 005c4b2c
        ;   Label: LAB_005c4b2c
    MOV EAX,[0x0061f754]                ; 005c4b2f | DAT_0061f754
    PUSH EBP                            ; 005c4b34
    MOV dword ptr [EBP + 0xf0],EAX      ; 005c4b35
    MOV EAX,[0x0061f2a0]                ; 005c4b3b | DAT_0061f2a0
    MOV byte ptr [EBP + 0x52],0x1       ; 005c4b40
    PUSH EAX                            ; 005c4b44
    MOV byte ptr [EBP + 0x53],0x0       ; 005c4b45
    CALL dword ptr CS:[0x5c8658]        ; 005c4b49 | PTR_TlsSetValue_005c8658
    CALL dword ptr [0x0061f2d4]         ; 005c4b50 | PTR_crt_unknown.c_FUN_005bce04_0061f2d4
    MOV EAX,EBP                         ; 005c4b56
    POP EBP                             ; 005c4b58
    POP EDI                             ; 005c4b59
    POP ESI                             ; 005c4b5a
    POP EBX                             ; 005c4b5b
    RET                                 ; 005c4b5c


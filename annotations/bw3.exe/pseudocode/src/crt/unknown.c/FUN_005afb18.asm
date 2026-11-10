; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * crt_unknown_c_FUN_005afb18(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005ada6c at 005ada98
;
; Referenced Globals:
;   void* PTR_GetCurrentThreadId_005b3590 = 001b3e70
;   void* PTR_TlsSetValue_005b366c = 001b427a
;   TerminatedCString s_Unable_to_resize_thread_005dae70
;   TerminatedCString s_Unable_to_resize_thread_005dae98
;   undefined4 DAT_0060799c
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079cc = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079d0 = 005a7f44
;   undefined4 DAT_00607e78
;   undefined4 DAT_02d261f0
;
; Called Functions:
;   crt_memory.c_realloc_FUN_005a3e50
;   crt_unknown.c_FUN_005a4b20
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005acde0
;   GetCurrentThreadId
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afb18
        ;   Label: crt_unknown.c_FUN_005afb18
    PUSH ESI                            ; 005afb19
    PUSH EDI                            ; 005afb1a
    PUSH EBP                            ; 005afb1b
    CALL dword ptr [0x006079cc]         ; 005afb1c | PTR_crt_unknown.c_FUN_005a7f44_006079cc
    CALL dword ptr CS:[0x5b3590]        ; 005afb22 | PTR_GetCurrentThreadId_005b3590
    MOV EBX,dword ptr [0x02d261f0]      ; 005afb29 | DAT_02d261f0
    TEST EBX,EBX                        ; 005afb2f
    JZ 0x005afb3e                       ; 005afb31
        ;   XREF to: 005afb3e (CONDITIONAL_JUMP)  ; LAB_005afb3e
    CMP EAX,dword ptr [EBX + 0x4]       ; 005afb33
        ;   Label: LAB_005afb33
    JZ 0x005afb3e                       ; 005afb36
        ;   XREF to: 005afb3e (CONDITIONAL_JUMP)  ; LAB_005afb3e
    MOV EBX,dword ptr [EBX]             ; 005afb38
    TEST EBX,EBX                        ; 005afb3a
    JNZ 0x005afb33                      ; 005afb3c
        ;   XREF to: 005afb33 (CONDITIONAL_JUMP)  ; LAB_005afb33
    CMP dword ptr [EBX + 0xc],0x0       ; 005afb3e
        ;   Label: LAB_005afb3e
    JZ 0x005afb6e                       ; 005afb42
        ;   XREF to: 005afb6e (CONDITIONAL_JUMP)  ; LAB_005afb6e
    MOV EDI,dword ptr [0x00607e78]      ; 005afb44 | DAT_00607e78
    PUSH EDI                            ; 005afb4a
    MOV EBP,dword ptr [EBX + 0x8]       ; 005afb4b
    PUSH EBP                            ; 005afb4e
    CALL crt_memory.c_realloc_FUN_005a3e50 ; 005afb4f
        ;   XREF to: 005a3e50 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_realloc_FUN_005a3e50(void * ptr, ulong new_size)
    ADD ESP,0x8                         ; 005afb54
    MOV EBP,EAX                         ; 005afb57
    TEST EAX,EAX                        ; 005afb59
    JNZ 0x005afbbc                      ; 005afb5b
        ;   XREF to: 005afbbc (CONDITIONAL_JUMP)  ; LAB_005afbbc
    PUSH 0x1                            ; 005afb5d
    PUSH 0x5dae70                       ; 005afb5f | = "Unable to resize thread-specific data..."
    CALL crt_unknown.c_FUN_005acde0     ; 005afb64
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acde0()
    ADD ESP,0x8                         ; 005afb69
    JMP 0x005afbbc                      ; 005afb6c
        ;   XREF to: 005afbbc (UNCONDITIONAL_JUMP)  ; LAB_005afbbc
    MOV ESI,dword ptr [0x00607e78]      ; 005afb6e | DAT_00607e78
        ;   Label: LAB_005afb6e
    PUSH ESI                            ; 005afb74
    PUSH 0x1                            ; 005afb75
    CALL crt_unknown.c_FUN_005a4b20     ; 005afb77
        ;   XREF to: 005a4b20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4b20()
    ADD ESP,0x8                         ; 005afb7c
    MOV EBP,EAX                         ; 005afb7f
    TEST EAX,EAX                        ; 005afb81
    JNZ 0x005afb94                      ; 005afb83
        ;   XREF to: 005afb94 (CONDITIONAL_JUMP)  ; LAB_005afb94
    PUSH 0x1                            ; 005afb85
    PUSH 0x5dae98                       ; 005afb87 | = "Unable to resize thread-specific data..."
    CALL crt_unknown.c_FUN_005acde0     ; 005afb8c
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005acde0()
    ADD ESP,0x8                         ; 005afb91
    MOV ESI,dword ptr [EBX + 0x8]       ; 005afb94
        ;   Label: LAB_005afb94
    MOV EDI,EBP                         ; 005afb97
    MOV ECX,dword ptr [ESI + 0xf0]      ; 005afb99
    PUSH ES                             ; 005afb9f
    MOV AX,DS                           ; 005afba0
    MOV ES,AX                           ; 005afba2
    PUSH EDI                            ; 005afba4
    MOV EAX,ECX                         ; 005afba5
    SHR ECX,0x2                         ; 005afba7
    MOVSD.REP ES:EDI,ESI                ; 005afbaa
    MOV CL,AL                           ; 005afbac
    AND CL,0x3                          ; 005afbae
    MOVSB.REP ES:EDI,ESI                ; 005afbb1
    POP EDI                             ; 005afbb3
    POP ES                              ; 005afbb4
    MOV dword ptr [EBX + 0xc],0x1       ; 005afbb5
    MOV dword ptr [EBX + 0x8],EBP       ; 005afbbc
        ;   Label: LAB_005afbbc
    MOV EAX,[0x00607e78]                ; 005afbbf | DAT_00607e78
    PUSH EBP                            ; 005afbc4
    MOV dword ptr [EBP + 0xf0],EAX      ; 005afbc5
    MOV EAX,[0x0060799c]                ; 005afbcb | DAT_0060799c
    MOV byte ptr [EBP + 0x52],0x1       ; 005afbd0
    PUSH EAX                            ; 005afbd4
    MOV byte ptr [EBP + 0x53],0x0       ; 005afbd5
    CALL dword ptr CS:[0x5b366c]        ; 005afbd9 | PTR_TlsSetValue_005b366c
    CALL dword ptr [0x006079d0]         ; 005afbe0 | PTR_crt_unknown.c_FUN_005a7f44_006079d0
    MOV EAX,EBP                         ; 005afbe6
    POP EBP                             ; 005afbe8
    POP EDI                             ; 005afbe9
    POP ESI                             ; 005afbea
    POP EBX                             ; 005afbeb
    RET                                 ; 005afbec


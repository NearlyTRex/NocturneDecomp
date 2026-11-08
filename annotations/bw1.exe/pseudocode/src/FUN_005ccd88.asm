; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005ccd88(void)
;
;
; Referenced Globals:
;   void* PTR_GetCurrentThreadId_005d0590 = 001d0e6a
;   void* PTR_TlsSetValue_005d066c = 001d1274
;   TerminatedCString s_Unable_to_resize_thread_005fb1b4
;   TerminatedCString s_Unable_to_resize_thread_005fb1dc
;   undefined4 DAT_006265f8
;   void* PTR_FUN_00626628 = 005c50d4
;   void* PTR_FUN_0062662c = 005c50d4
;   undefined4 DAT_00626ad4
;   undefined4 DAT_02c9ffa0
;
; Called Functions:
;   FUN_005c10d0
;   FUN_005c1cb0
;   FUN_005c50d4
;   FUN_005c9f70
;   GetCurrentThreadId
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ccd88
        ;   Label: FUN_005ccd88
    PUSH ESI                            ; 005ccd89
    PUSH EDI                            ; 005ccd8a
    PUSH EBP                            ; 005ccd8b
    CALL dword ptr [0x00626628]         ; 005ccd8c | PTR_FUN_00626628
    CALL dword ptr CS:[0x5d0590]        ; 005ccd92 | PTR_GetCurrentThreadId_005d0590
    MOV EBX,dword ptr [0x02c9ffa0]      ; 005ccd99 | DAT_02c9ffa0
    TEST EBX,EBX                        ; 005ccd9f
    JZ 0x005ccdae                       ; 005ccda1
        ;   XREF to: 005ccdae (CONDITIONAL_JUMP)  ; LAB_005ccdae
    CMP EAX,dword ptr [EBX + 0x4]       ; 005ccda3
        ;   Label: LAB_005ccda3
    JZ 0x005ccdae                       ; 005ccda6
        ;   XREF to: 005ccdae (CONDITIONAL_JUMP)  ; LAB_005ccdae
    MOV EBX,dword ptr [EBX]             ; 005ccda8
    TEST EBX,EBX                        ; 005ccdaa
    JNZ 0x005ccda3                      ; 005ccdac
        ;   XREF to: 005ccda3 (CONDITIONAL_JUMP)  ; LAB_005ccda3
    CMP dword ptr [EBX + 0xc],0x0       ; 005ccdae
        ;   Label: LAB_005ccdae
    JZ 0x005ccdde                       ; 005ccdb2
        ;   XREF to: 005ccdde (CONDITIONAL_JUMP)  ; LAB_005ccdde
    MOV EDI,dword ptr [0x00626ad4]      ; 005ccdb4 | DAT_00626ad4
    PUSH EDI                            ; 005ccdba
    MOV EBP,dword ptr [EBX + 0x8]       ; 005ccdbb
    PUSH EBP                            ; 005ccdbe
    CALL FUN_005c10d0                   ; 005ccdbf
        ;   XREF to: 005c10d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c10d0()
    ADD ESP,0x8                         ; 005ccdc4
    MOV EBP,EAX                         ; 005ccdc7
    TEST EAX,EAX                        ; 005ccdc9
    JNZ 0x005cce2c                      ; 005ccdcb
        ;   XREF to: 005cce2c (CONDITIONAL_JUMP)  ; LAB_005cce2c
    PUSH 0x1                            ; 005ccdcd
    PUSH 0x5fb1b4                       ; 005ccdcf | = "Unable to resize thread-specific data..."
    CALL FUN_005c9f70                   ; 005ccdd4
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9f70()
    ADD ESP,0x8                         ; 005ccdd9
    JMP 0x005cce2c                      ; 005ccddc
        ;   XREF to: 005cce2c (UNCONDITIONAL_JUMP)  ; LAB_005cce2c
    MOV ESI,dword ptr [0x00626ad4]      ; 005ccdde | DAT_00626ad4
        ;   Label: LAB_005ccdde
    PUSH ESI                            ; 005ccde4
    PUSH 0x1                            ; 005ccde5
    CALL FUN_005c1cb0                   ; 005ccde7
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1cb0()
    ADD ESP,0x8                         ; 005ccdec
    MOV EBP,EAX                         ; 005ccdef
    TEST EAX,EAX                        ; 005ccdf1
    JNZ 0x005cce04                      ; 005ccdf3
        ;   XREF to: 005cce04 (CONDITIONAL_JUMP)  ; LAB_005cce04
    PUSH 0x1                            ; 005ccdf5
    PUSH 0x5fb1dc                       ; 005ccdf7 | = "Unable to resize thread-specific data..."
    CALL FUN_005c9f70                   ; 005ccdfc
        ;   XREF to: 005c9f70 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9f70()
    ADD ESP,0x8                         ; 005cce01
    MOV ESI,dword ptr [EBX + 0x8]       ; 005cce04
        ;   Label: LAB_005cce04
    MOV EDI,EBP                         ; 005cce07
    MOV ECX,dword ptr [ESI + 0xf0]      ; 005cce09
    PUSH ES                             ; 005cce0f
    MOV AX,DS                           ; 005cce10
    MOV ES,AX                           ; 005cce12
    PUSH EDI                            ; 005cce14
    MOV EAX,ECX                         ; 005cce15
    SHR ECX,0x2                         ; 005cce17
    MOVSD.REP ES:EDI,ESI                ; 005cce1a
    MOV CL,AL                           ; 005cce1c
    AND CL,0x3                          ; 005cce1e
    MOVSB.REP ES:EDI,ESI                ; 005cce21
    POP EDI                             ; 005cce23
    POP ES                              ; 005cce24
    MOV dword ptr [EBX + 0xc],0x1       ; 005cce25
    MOV dword ptr [EBX + 0x8],EBP       ; 005cce2c
        ;   Label: LAB_005cce2c
    MOV EAX,[0x00626ad4]                ; 005cce2f | DAT_00626ad4
    PUSH EBP                            ; 005cce34
    MOV dword ptr [EBP + 0xf0],EAX      ; 005cce35
    MOV EAX,[0x006265f8]                ; 005cce3b | DAT_006265f8
    MOV byte ptr [EBP + 0x52],0x1       ; 005cce40
    PUSH EAX                            ; 005cce44
    MOV byte ptr [EBP + 0x53],0x0       ; 005cce45
    CALL dword ptr CS:[0x5d066c]        ; 005cce49 | PTR_TlsSetValue_005d066c
    CALL dword ptr [0x0062662c]         ; 005cce50 | PTR_FUN_0062662c
    MOV EAX,EBP                         ; 005cce56
    POP EBP                             ; 005cce58
    POP EDI                             ; 005cce59
    POP ESI                             ; 005cce5a
    POP EBX                             ; 005cce5b
    RET                                 ; 005cce5c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c42c7(void)
;
;
; XREF[1]:
;   FUN_005c4290 at 005c42a7
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 005c42c7
        ;   Label: FUN_005c42c7
    JZ 0x005c4332                       ; 005c42c9
        ;   XREF to: 005c4332 (CONDITIONAL_JUMP)  ; LAB_005c4332
    TEST AL,0x1f                        ; 005c42cb
        ;   Label: LAB_005c42cb
    JZ 0x005c42d7                       ; 005c42cd
        ;   XREF to: 005c42d7 (CONDITIONAL_JUMP)  ; LAB_005c42d7
    MOV dword ptr [EAX],EDX             ; 005c42cf
    LEA EAX,[EAX + 0x4]                 ; 005c42d1
    DEC ECX                             ; 005c42d4
    JNZ 0x005c42cb                      ; 005c42d5
        ;   XREF to: 005c42cb (CONDITIONAL_JUMP)  ; LAB_005c42cb
    PUSH ECX                            ; 005c42d7
        ;   Label: LAB_005c42d7
    SHR ECX,0x2                         ; 005c42d8
    JZ 0x005c4317                       ; 005c42db
        ;   XREF to: 005c4317 (CONDITIONAL_JUMP)  ; LAB_005c4317
    DEC ECX                             ; 005c42dd
    JZ 0x005c4309                       ; 005c42de
        ;   XREF to: 005c4309 (CONDITIONAL_JUMP)  ; LAB_005c4309
    MOV dword ptr [EAX],EDX             ; 005c42e0
        ;   Label: LAB_005c42e0
    MOV dword ptr [EAX + 0x4],EDX       ; 005c42e2
    DEC ECX                             ; 005c42e5
    MOV dword ptr [EAX + 0x8],EDX       ; 005c42e6
    MOV dword ptr [EAX + 0xc],EDX       ; 005c42e9
    JZ 0x005c4306                       ; 005c42ec
        ;   XREF to: 005c4306 (CONDITIONAL_JUMP)  ; LAB_005c4306
    CMP byte ptr [EAX + 0x20],DL        ; 005c42ee
    MOV dword ptr [EAX + 0x10],EDX      ; 005c42f1
    MOV dword ptr [EAX + 0x14],EDX      ; 005c42f4
    DEC ECX                             ; 005c42f7
    MOV dword ptr [EAX + 0x18],EDX      ; 005c42f8
    MOV dword ptr [EAX + 0x1c],EDX      ; 005c42fb
    LEA EAX,[EAX + 0x20]                ; 005c42fe
    JNZ 0x005c42e0                      ; 005c4301
        ;   XREF to: 005c42e0 (CONDITIONAL_JUMP)  ; LAB_005c42e0
    LEA EAX,[EAX + -0x10]               ; 005c4303
    LEA EAX,[EAX + 0x10]                ; 005c4306
        ;   Label: LAB_005c4306
    MOV dword ptr [EAX],EDX             ; 005c4309
        ;   Label: LAB_005c4309
    MOV dword ptr [EAX + 0x4],EDX       ; 005c430b
    MOV dword ptr [EAX + 0x8],EDX       ; 005c430e
    MOV dword ptr [EAX + 0xc],EDX       ; 005c4311
    LEA EAX,[EAX + 0x10]                ; 005c4314
    POP ECX                             ; 005c4317
        ;   Label: LAB_005c4317
    AND ECX,0x3                         ; 005c4318
    JZ 0x005c4332                       ; 005c431b
        ;   XREF to: 005c4332 (CONDITIONAL_JUMP)  ; LAB_005c4332
    MOV dword ptr [EAX],EDX             ; 005c431d
    LEA EAX,[EAX + 0x4]                 ; 005c431f
    DEC ECX                             ; 005c4322
    JZ 0x005c4332                       ; 005c4323
        ;   XREF to: 005c4332 (CONDITIONAL_JUMP)  ; LAB_005c4332
    MOV dword ptr [EAX],EDX             ; 005c4325
    LEA EAX,[EAX + 0x4]                 ; 005c4327
    DEC ECX                             ; 005c432a
    JZ 0x005c4332                       ; 005c432b
        ;   XREF to: 005c4332 (CONDITIONAL_JUMP)  ; LAB_005c4332
    MOV dword ptr [EAX],EDX             ; 005c432d
    LEA EAX,[EAX + 0x4]                 ; 005c432f
    RET                                 ; 005c4332
        ;   Label: LAB_005c4332


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a9310(undefined4 *param_1)
;
;
; XREF[7]:
;   crt_stdio.c_fputc_FUN_005a5d70 at 005a5dec
;   crt_stdio.c_fread_FUN_005a3890 at 005a3900
;   crt_stdio.c_fwrite_FUN_005a48e0 at 005a4955
;   crt_stdio.c_ungetc_FUN_005a3480 at 005a3516
;   crt_unknown.c_FUN_005a33b0 at 005a33c2
;   crt_unknown.c_FUN_005a7e50 at 005a7ea9
;   crt_unknown.c_FUN_005b0ee0 at 005b0f07
;
; Called Functions:
;   crt_unknown.c_FUN_005a3650
;   crt_unknown.c_FUN_005aa340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9310
        ;   Label: crt_unknown.c_FUN_005a9310
    PUSH ESI                            ; 005a9311
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a9312
    PUSH EBX                            ; 005a9316
    CALL crt_unknown.c_FUN_005aa340     ; 005a9317
        ;   XREF to: 005aa340 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005aa340()
    MOV EDX,dword ptr [EBX + 0x14]      ; 005a931c
    ADD ESP,0x4                         ; 005a931f
    TEST EDX,EDX                        ; 005a9322
    JNZ 0x005a934c                      ; 005a9324
        ;   XREF to: 005a934c (CONDITIONAL_JUMP)  ; LAB_005a934c
    MOV AH,byte ptr [EBX + 0xd]         ; 005a9326
    TEST AH,0x2                         ; 005a9329
    JZ 0x005a9337                       ; 005a932c
        ;   XREF to: 005a9337 (CONDITIONAL_JUMP)  ; LAB_005a9337
    MOV dword ptr [EBX + 0x14],0x86     ; 005a932e
    JMP 0x005a934c                      ; 005a9335
        ;   XREF to: 005a934c (UNCONDITIONAL_JUMP)  ; LAB_005a934c
    TEST AH,0x4                         ; 005a9337
        ;   Label: LAB_005a9337
    JZ 0x005a9345                       ; 005a933a
        ;   XREF to: 005a9345 (CONDITIONAL_JUMP)  ; LAB_005a9345
    MOV dword ptr [EBX + 0x14],0x1      ; 005a933c
    JMP 0x005a934c                      ; 005a9343
        ;   XREF to: 005a934c (UNCONDITIONAL_JUMP)  ; LAB_005a934c
    MOV dword ptr [EBX + 0x14],0x1000   ; 005a9345
        ;   Label: LAB_005a9345
    MOV ECX,dword ptr [EBX + 0x14]      ; 005a934c
        ;   Label: LAB_005a934c
    PUSH ECX                            ; 005a934f
    CALL crt_unknown.c_FUN_005a3650     ; 005a9350
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    MOV EDX,dword ptr [EBX + 0x8]       ; 005a9355
    MOV dword ptr [EDX + 0x8],EAX       ; 005a9358
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a935b
    MOV ESI,dword ptr [EAX + 0x8]       ; 005a935e
    ADD ESP,0x4                         ; 005a9361
    TEST ESI,ESI                        ; 005a9364
    JNZ 0x005a938b                      ; 005a9366
        ;   XREF to: 005a938b (CONDITIONAL_JUMP)  ; LAB_005a938b
    MOV CL,byte ptr [EBX + 0xd]         ; 005a9368
    AND CL,0xf8                         ; 005a936b
    MOV byte ptr [EBX + 0xd],CL         ; 005a936e
    MOV CH,CL                           ; 005a9371
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a9373
    OR CH,0x4                           ; 005a9376
    LEA EDX,[EBX + 0x18]                ; 005a9379
    MOV byte ptr [EBX + 0xd],CH         ; 005a937c
    MOV dword ptr [EAX + 0x8],EDX       ; 005a937f
    MOV dword ptr [EBX + 0x14],0x1      ; 005a9382
    JMP 0x005a938f                      ; 005a9389
        ;   XREF to: 005a938f (UNCONDITIONAL_JUMP)  ; LAB_005a938f
    OR byte ptr [EBX + 0xc],0x8         ; 005a938b
        ;   Label: LAB_005a938b
    MOV EAX,dword ptr [EBX + 0x8]       ; 005a938f
        ;   Label: LAB_005a938f
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a9392
    MOV dword ptr [EBX + 0x4],0x0       ; 005a9395
    MOV dword ptr [EBX],EAX             ; 005a939c
    POP ESI                             ; 005a939e
    POP EBX                             ; 005a939f
    RET                                 ; 005a93a0


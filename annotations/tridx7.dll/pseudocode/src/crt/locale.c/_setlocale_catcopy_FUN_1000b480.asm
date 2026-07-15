; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_locale_c__setlocale_catcopy_FUN_1000b480(char *dst,char *lc)
;
; Parameters:
; char *           Stack[0x4]:4   dst
; char *           Stack[0x8]:4   lc
;
; XREF[1]:
;   crt_locale.c__expandlocale_FUN_1000b150 at 1000b27d
;
; Referenced Globals:
;   undefined2 DAT_10012764
;   undefined4 DAT_10012768
;
; Called Functions:
;   crt_locale.c__lc_lctostr_FUN_1000b330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000b480
        ;   Label: crt_locale.c__setlocale_catcopy_FUN_1000b480
    MOV ECX,0xffffffff                  ; 1000b481
    PUSH ESI                            ; 1000b486
    SUB EAX,EAX                         ; 1000b487
    PUSH EDI                            ; 1000b489
    PUSH EBP                            ; 1000b48a
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000b48b
    MOV EDI,EBP                         ; 1000b48f
    SCASB.REPNE ES:EDI                  ; 1000b491
    NOT ECX                             ; 1000b493
    SUB EDI,ECX                         ; 1000b495
    MOV EAX,ECX                         ; 1000b497
    SHR ECX,0x2                         ; 1000b499
    MOV ESI,EDI                         ; 1000b49c
    MOV EBX,dword ptr [ESP + 0x14]      ; 1000b49e
    MOV EDI,EBX                         ; 1000b4a2
    MOVSD.REP ES:EDI,ESI                ; 1000b4a4
    MOV ECX,EAX                         ; 1000b4a6
    AND ECX,0x3                         ; 1000b4a8
    MOVSB.REP ES:EDI,ESI                ; 1000b4ab
    LEA EAX,[EBP + 0x40]                ; 1000b4ad
    CMP byte ptr [EAX],0x0              ; 1000b4b0
    JZ 0x1000b4c6                       ; 1000b4b3
        ;   XREF to: 1000b4c6 (CONDITIONAL_JUMP)  ; LAB_1000b4c6
    PUSH EAX                            ; 1000b4b5
    PUSH 0x10012768                     ; 1000b4b6 | DAT_10012768
    PUSH 0x2                            ; 1000b4bb
    PUSH EBX                            ; 1000b4bd
    CALL crt_locale.c__lc_lctostr_FUN_1000b330 ; 1000b4be
        ;   XREF to: 1000b330 (UNCONDITIONAL_CALL)  ; void crt_locale.c__lc_lctostr_FUN_1000b330(char * dst, int count)
    ADD ESP,0x10                        ; 1000b4c3
    ADD EBP,0x80                        ; 1000b4c6
        ;   Label: LAB_1000b4c6
    CMP byte ptr [EBP],0x0              ; 1000b4cc
    JZ 0x1000b4e3                       ; 1000b4d0
        ;   XREF to: 1000b4e3 (CONDITIONAL_JUMP)  ; LAB_1000b4e3
    PUSH EBP                            ; 1000b4d2
    PUSH 0x10012764                     ; 1000b4d3 | DAT_10012764
    PUSH 0x2                            ; 1000b4d8
    PUSH EBX                            ; 1000b4da
    CALL crt_locale.c__lc_lctostr_FUN_1000b330 ; 1000b4db
        ;   XREF to: 1000b330 (UNCONDITIONAL_CALL)  ; void crt_locale.c__lc_lctostr_FUN_1000b330(char * dst, int count)
    ADD ESP,0x10                        ; 1000b4e0
    POP EBP                             ; 1000b4e3
        ;   Label: LAB_1000b4e3
    POP EDI                             ; 1000b4e4
    POP ESI                             ; 1000b4e5
    POP EBX                             ; 1000b4e6
    RET                                 ; 1000b4e7


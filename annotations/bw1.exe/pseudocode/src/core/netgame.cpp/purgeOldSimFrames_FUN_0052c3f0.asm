; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_purgeOldSimFrames_FUN_0052c3f0(int min_sequence)
;
; Parameters:
; int              Stack[0x4]:4   min_sequence
;
; Referenced Globals:
;   undefined4 DAT_01d715a8
;
; Called Functions:
;   crt_string.c_memmove_FUN_005c25d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052c3f0
        ;   Label: core_netgame.cpp_purgeOldSimFrames_FUN_0052c3f0
    PUSH ESI                            ; 0052c3f1
    PUSH EDI                            ; 0052c3f2
    PUSH EBP                            ; 0052c3f3
    MOV EBP,dword ptr [0x01d715a8]      ; 0052c3f4 | DAT_01d715a8
    XOR EBX,EBX                         ; 0052c3fa
    TEST EBP,EBP                        ; 0052c3fc
    JLE 0x0052c421                      ; 0052c3fe
        ;   XREF to: 0052c421 (CONDITIONAL_JUMP)  ; LAB_0052c421
    MOV EDI,0x1d715ac                   ; 0052c400
    XOR ESI,ESI                         ; 0052c405
    ADD EDI,0x6c                        ; 0052c407
    MOV EDX,dword ptr [ESP + 0x14]      ; 0052c40a
        ;   Label: LAB_0052c40a
    CMP EDX,dword ptr [ESI + 0x1d715ac] ; 0052c40e
    JG 0x0052c42c                       ; 0052c414
        ;   XREF to: 0052c42c (CONDITIONAL_JUMP)  ; LAB_0052c42c
    ADD EDI,0x6c                        ; 0052c416
    INC EBX                             ; 0052c419
    ADD ESI,0x6c                        ; 0052c41a
    CMP EBX,EBP                         ; 0052c41d
    JL 0x0052c40a                       ; 0052c41f
        ;   XREF to: 0052c40a (CONDITIONAL_JUMP)  ; LAB_0052c40a
    MOV dword ptr [0x01d715a8],EBP      ; 0052c421 | DAT_01d715a8
        ;   Label: LAB_0052c421
    POP EBP                             ; 0052c427
    POP EDI                             ; 0052c428
    POP ESI                             ; 0052c429
    POP EBX                             ; 0052c42a
    RET                                 ; 0052c42b
    DEC EBP                             ; 0052c42c
        ;   Label: LAB_0052c42c
    MOV EAX,EBP                         ; 0052c42d
    SUB EAX,EBX                         ; 0052c42f
    IMUL EAX,EAX,0x6c                   ; 0052c431
    PUSH EAX                            ; 0052c434
    MOV EAX,0x1d715ac                   ; 0052c435
    PUSH EDI                            ; 0052c43a
    ADD EAX,ESI                         ; 0052c43b
    PUSH EAX                            ; 0052c43d
    MOV dword ptr [0x01d715a8],EBP      ; 0052c43e | DAT_01d715a8
    CALL crt_string.c_memmove_FUN_005c25d0 ; 0052c444
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    MOV EBP,dword ptr [0x01d715a8]      ; 0052c449 | DAT_01d715a8
    ADD ESP,0xc                         ; 0052c44f
    CMP EBX,EBP                         ; 0052c452
    JL 0x0052c40a                       ; 0052c454
        ;   XREF to: 0052c40a (CONDITIONAL_JUMP)  ; LAB_0052c40a
    MOV dword ptr [0x01d715a8],EBP      ; 0052c456 | DAT_01d715a8
    POP EBP                             ; 0052c45c
    POP EDI                             ; 0052c45d
    POP ESI                             ; 0052c45e
    POP EBX                             ; 0052c45f
    RET                                 ; 0052c460


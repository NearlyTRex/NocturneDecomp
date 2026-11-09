; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005a4520(int param_1,int *param_2)
;
;
; XREF[1]:
;   crt_stdio.c_fseek_FUN_005a457c at 005a4652
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4520
        ;   Label: crt_unknown.c_FUN_005a4520
    PUSH ESI                            ; 005a4521
    PUSH EDI                            ; 005a4522
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a4523
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a4527
    CMP EBX,dword ptr [EAX + 0x4]       ; 005a452b
    JG 0x005a455b                       ; 005a452e
        ;   XREF to: 005a455b (CONDITIONAL_JUMP)  ; LAB_005a455b
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a4530
    MOV ECX,dword ptr [EAX]             ; 005a4533
    MOV EDX,dword ptr [EDX + 0x8]       ; 005a4535
    SUB EDX,ECX                         ; 005a4538
    CMP EBX,EDX                         ; 005a453a
    JL 0x005a455b                       ; 005a453c
        ;   XREF to: 005a455b (CONDITIONAL_JUMP)  ; LAB_005a455b
    MOV DL,byte ptr [EAX + 0xc]         ; 005a453e
    MOV ESI,dword ptr [EAX]             ; 005a4541
    MOV EDI,dword ptr [EAX + 0x4]       ; 005a4543
    AND DL,0xef                         ; 005a4546
    ADD ESI,EBX                         ; 005a4549
    MOV byte ptr [EAX + 0xc],DL         ; 005a454b
    SUB EDI,EBX                         ; 005a454e
    MOV dword ptr [EAX],ESI             ; 005a4550
    MOV dword ptr [EAX + 0x4],EDI       ; 005a4552
    XOR EAX,EAX                         ; 005a4555
    POP EDI                             ; 005a4557
    POP ESI                             ; 005a4558
    POP EBX                             ; 005a4559
    RET                                 ; 005a455a
    MOV EAX,0x1                         ; 005a455b
        ;   Label: LAB_005a455b
    POP EDI                             ; 005a4560
    POP ESI                             ; 005a4561
    POP EBX                             ; 005a4562
    RET                                 ; 005a4563


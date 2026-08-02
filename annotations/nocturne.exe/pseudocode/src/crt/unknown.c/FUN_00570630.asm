; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00570630(void)
;
;
; Referenced Globals:
;   undefined4 SUB_00572446
;   undefined4 SUB_0057264c
;   undefined4 SUB_00572809
;   undefined4 SUB_005729a6
;   undefined4 DAT_005c1795
;   undefined4 DAT_005c1d98
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570630
        ;   Label: crt_unknown.c_FUN_00570630
    SUB ESP,0x10                        ; 00570631
    MOV dword ptr [ESP + 0x8],0xc0000000 ; 00570634
    MOV dword ptr [ESP + 0xc],0x4150017e ; 0057063c
    MOV dword ptr [ESP],0x80000000      ; 00570644
    MOV dword ptr [ESP + 0x4],0x4147ffff ; 0057064b
    CMP byte ptr [0x005c1795],0x3       ; 00570653 | DAT_005c1795
    JC 0x005706a5                       ; 0057065a
        ;   XREF to: 005706a5 (CONDITIONAL_JUMP)  ; LAB_005706a5
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057065c
    MOV EDX,dword ptr [ESP + 0xc]       ; 00570660
    MOV EBX,dword ptr [ESP]             ; 00570664
    MOV ECX,dword ptr [ESP + 0x4]       ; 00570667
    CALL 0x00572446                     ; 0057066b
        ;   XREF to: 00572446 (UNCONDITIONAL_CALL)  ; SUB_00572446
    MOV EBX,dword ptr [ESP]             ; 00570670
    MOV ECX,dword ptr [ESP + 0x4]       ; 00570673
    CALL 0x00572809                     ; 00570677
        ;   XREF to: 00572809 (UNCONDITIONAL_CALL)  ; SUB_00572809
    MOV EBX,EAX                         ; 0057067c
    MOV ECX,EDX                         ; 0057067e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00570680
    MOV EDX,dword ptr [ESP + 0xc]       ; 00570684
    CALL 0x0057264c                     ; 00570688
        ;   XREF to: 0057264c (UNCONDITIONAL_CALL)  ; SUB_0057264c
    MOV EBX,0xe2308c3a                  ; 0057068d
    MOV ECX,0x3e45798e                  ; 00570692
    CALL 0x005729a6                     ; 00570697
        ;   XREF to: 005729a6 (UNCONDITIONAL_CALL)  ; SUB_005729a6
    JLE 0x005706a5                      ; 0057069c
        ;   XREF to: 005706a5 (CONDITIONAL_JUMP)  ; LAB_005706a5
    OR byte ptr [0x005c1d98],0x1        ; 0057069e | DAT_005c1d98
    ADD ESP,0x10                        ; 005706a5
        ;   Label: LAB_005706a5
    POP EBX                             ; 005706a8
    RET                                 ; 005706a9


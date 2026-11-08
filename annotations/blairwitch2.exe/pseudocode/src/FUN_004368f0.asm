; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004368f0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004367e0 at 0043687c
;
; Called Functions:
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004368f0
        ;   Label: FUN_004368f0
    PUSH ESI                            ; 004368f1
    PUSH EDI                            ; 004368f2
    PUSH EBP                            ; 004368f3
    SUB ESP,0x4                         ; 004368f4
    MOV EDX,dword ptr [ESP + 0x18]      ; 004368f7
    ADD EDX,0x8                         ; 004368fb
    XOR EBP,EBP                         ; 004368fe
    MOV dword ptr [ESP],EDX             ; 00436900
    LEA EBX,[EDX + 0x50]                ; 00436903
    MOV ECX,dword ptr [ESP + 0x18]      ; 00436906
        ;   Label: LAB_00436906
    MOV ECX,dword ptr [ECX + 0xfb4]     ; 0043690a
    DEC ECX                             ; 00436910
    CMP EBP,ECX                         ; 00436911
    JL 0x00436944                       ; 00436913
        ;   XREF to: 00436944 (CONDITIONAL_JUMP)  ; LAB_00436944
    MOV EDX,dword ptr [ESP + 0x18]      ; 00436915
    MOV EBX,dword ptr [EDX + 0xfb0]     ; 00436919
    LEA EDX,[ECX*0x4 + 0x0]             ; 0043691f
    MOV ESI,dword ptr [ESP]             ; 00436926
    ADD EDX,ECX                         ; 00436929
    PUSH EBX                            ; 0043692b
    SHL EDX,0x4                         ; 0043692c
    PUSH 0x0                            ; 0043692f
    ADD EDX,ESI                         ; 00436931
    PUSH EDX                            ; 00436933
    CALL FUN_005b77c0                   ; 00436934
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 00436939
    ADD ESP,0x4                         ; 0043693c
    POP EBP                             ; 0043693f
    POP EDI                             ; 00436940
    POP ESI                             ; 00436941
    POP EBX                             ; 00436942
    RET                                 ; 00436943
    MOV ECX,dword ptr [ESP + 0x18]      ; 00436944
        ;   Label: LAB_00436944
    MOV ESI,EBX                         ; 00436948
    MOV EDI,EDX                         ; 0043694a
    MOV ECX,dword ptr [ECX + 0xfb0]     ; 0043694c
    INC EBP                             ; 00436952
    PUSH EDI                            ; 00436953
    MOV EAX,ECX                         ; 00436954
    SHR ECX,0x2                         ; 00436956
    MOVSD.REP ES:EDI,ESI                ; 00436959
    MOV CL,AL                           ; 0043695b
    AND CL,0x3                          ; 0043695d
    MOVSB.REP ES:EDI,ESI                ; 00436960
    POP EDI                             ; 00436962
    ADD EDX,0x50                        ; 00436963
    ADD EBX,0x50                        ; 00436966
    JMP 0x00436906                      ; 00436969
        ;   XREF to: 00436906 (UNCONDITIONAL_JUMP)  ; LAB_00436906


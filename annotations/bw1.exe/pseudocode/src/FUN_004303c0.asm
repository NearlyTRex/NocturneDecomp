; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004303c0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004301e0 at 004303aa
;
; Called Functions:
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004303c0
        ;   Label: FUN_004303c0
    PUSH ESI                            ; 004303c1
    PUSH EDI                            ; 004303c2
    PUSH EBP                            ; 004303c3
    SUB ESP,0x4                         ; 004303c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004303c7
    LEA EAX,[EBP + 0x158]               ; 004303cb
    PUSH EAX                            ; 004303d1
    XOR EDI,EDI                         ; 004303d2
    CALL FUN_00569f30                   ; 004303d4
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 004303d9
    MOV EDX,dword ptr [EBP + 0x3120]    ; 004303dc
    MOV dword ptr [ESP],EAX             ; 004303e2
    TEST EDX,EDX                        ; 004303e5
    JLE 0x00430428                      ; 004303e7
        ;   XREF to: 00430428 (CONDITIONAL_JUMP)  ; LAB_00430428
    LEA EBX,[EBP + 0x35dc]              ; 004303e9
    MOV ESI,EBP                         ; 004303ef
    MOV EAX,dword ptr [ESI + 0x312c]    ; 004303f1
        ;   Label: LAB_004303f1
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 004303f7
    JZ 0x00430414                       ; 004303ff
        ;   XREF to: 00430414 (CONDITIONAL_JUMP)  ; LAB_00430414
    IMUL EAX,dword ptr [ESI + 0x3130],0x24 ; 00430401
    ADD EAX,dword ptr [ESP]             ; 00430408
    CMP dword ptr [EAX + 0x1de9c],-0x1  ; 0043040b
    JNZ 0x00430430                      ; 00430412
        ;   XREF to: 00430430 (CONDITIONAL_JUMP)  ; LAB_00430430
    ADD ESI,0x18                        ; 00430414
        ;   Label: LAB_00430414
    INC EDI                             ; 00430417
    MOV ECX,dword ptr [EBP + 0x3120]    ; 00430418
    ADD EBX,0x2a4                       ; 0043041e
    CMP EDI,ECX                         ; 00430424
    JL 0x004303f1                       ; 00430426
        ;   XREF to: 004303f1 (CONDITIONAL_JUMP)  ; LAB_004303f1
    ADD ESP,0x4                         ; 00430428
        ;   Label: LAB_00430428
    POP EBP                             ; 0043042b
    POP EDI                             ; 0043042c
    POP ESI                             ; 0043042d
    POP EBX                             ; 0043042e
    RET                                 ; 0043042f
    PUSH EBX                            ; 00430430
        ;   Label: LAB_00430430
    MOV EAX,dword ptr [EBX + 0x154]     ; 00430431
    CALL dword ptr [EAX + 0x14]         ; 00430437
    ADD ESP,0x4                         ; 0043043a
    JMP 0x00430414                      ; 0043043d
        ;   XREF to: 00430414 (UNCONDITIONAL_JUMP)  ; LAB_00430414


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0046ac20(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   FUN_00497800 at 004987a0
;   FUN_004c52a0 at 004c543a
;   FUN_004c5470 at 004c5609
;   FUN_005862e0 at 00586823
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ac20
        ;   Label: FUN_0046ac20
    PUSH ESI                            ; 0046ac21
    PUSH EDI                            ; 0046ac22
    PUSH EBP                            ; 0046ac23
    SUB ESP,0x4                         ; 0046ac24
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046ac27
    CMP dword ptr [EBX + 0xc],0x0       ; 0046ac2b
    JNZ 0x0046acce                      ; 0046ac2f
        ;   XREF to: 0046acce (CONDITIONAL_JUMP)  ; LAB_0046acce
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046ac35
        ;   Label: LAB_0046ac35
    MOV ECX,0xffffffff                  ; 0046ac39
    XOR EDX,EDX                         ; 0046ac3e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046ac40
    MOV dword ptr [ESP],ECX             ; 0046ac43
    TEST ESI,ESI                        ; 0046ac46
    JLE 0x0046ac80                      ; 0046ac48
        ;   XREF to: 0046ac80 (CONDITIONAL_JUMP)  ; LAB_0046ac80
    XOR ECX,ECX                         ; 0046ac4a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046ac4c
        ;   Label: LAB_0046ac4c
    MOV dword ptr [ECX + 0x1ba5c84],ESI ; 0046ac4f | DAT_01ba5c84 | DAT_01ba5c88
    IMUL ESI,ESI,0x30                   ; 0046ac55
    MOV EDI,dword ptr [EBX]             ; 0046ac58
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046ac5a
    MOV EDI,dword ptr [ESP]             ; 0046ac5e
    ADD ECX,0x4                         ; 0046ac61
    AND EDI,ESI                         ; 0046ac64
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046ac66
    ADD EAX,0xc                         ; 0046ac6a
    INC EDX                             ; 0046ac6d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046ac6e
    MOV dword ptr [ESP],EDI             ; 0046ac71
    CMP EDX,EBP                         ; 0046ac74
    JL 0x0046ac4c                       ; 0046ac76
        ;   XREF to: 0046ac4c (CONDITIONAL_JUMP)  ; LAB_0046ac4c
    LEA EAX,[EAX]                       ; 0046ac78
    MOV EDX,EDX                         ; 0046ac7e
    TEST byte ptr [ESP + 0x3],0x80      ; 0046ac80
        ;   Label: LAB_0046ac80
    JZ 0x0046ac8d                       ; 0046ac85
        ;   XREF to: 0046ac8d (CONDITIONAL_JUMP)  ; LAB_0046ac8d
    TEST byte ptr [ESP],0x1f            ; 0046ac87
    JNZ 0x0046acc6                      ; 0046ac8b
        ;   XREF to: 0046acc6 (CONDITIONAL_JUMP)  ; LAB_0046acc6
    CMP dword ptr [EBX + 0x4],0x0       ; 0046ac8d
        ;   Label: LAB_0046ac8d
    JZ 0x0046ace7                       ; 0046ac91
        ;   XREF to: 0046ace7 (CONDITIONAL_JUMP)  ; LAB_0046ace7
    XOR ESI,ESI                         ; 0046ac93
    MOV ECX,0x46e936                    ; 0046ac95 | LAB_0046e936
    MOV dword ptr [0x01c38b54],ESI      ; 0046ac9a | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ESI      ; 0046aca0 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ECX      ; 0046aca6 | DAT_01c35e6c
    LEA EAX,[EAX]                       ; 0046acac
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046acb0
        ;   Label: LAB_0046acb0
    PUSH 0x1ba5c84                      ; 0046acb4 | DAT_01ba5c84
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046acb9
    PUSH EDX                            ; 0046acbc
    PUSH EBX                            ; 0046acbd
    CALL FUN_00469590                   ; 0046acbe
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; undefined FUN_00469590()
    ADD ESP,0xc                         ; 0046acc3
    ADD ESP,0x4                         ; 0046acc6
        ;   Label: LAB_0046acc6
    POP EBP                             ; 0046acc9
    POP EDI                             ; 0046acca
    POP ESI                             ; 0046accb
    POP EBX                             ; 0046accc
    RET                                 ; 0046accd
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046acce
        ;   Label: LAB_0046acce
    ADD EAX,0x8                         ; 0046acd2
    PUSH EAX                            ; 0046acd5
    CALL FUN_00403970                   ; 0046acd6
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 0046acdb
    TEST EAX,EAX                        ; 0046acde
    JZ 0x0046acc6                       ; 0046ace0
        ;   XREF to: 0046acc6 (CONDITIONAL_JUMP)  ; LAB_0046acc6
    JMP 0x0046ac35                      ; 0046ace2
        ;   XREF to: 0046ac35 (UNCONDITIONAL_JUMP)  ; LAB_0046ac35
    CMP dword ptr [0x006141c0],0x20     ; 0046ace7 | DAT_006141c0
        ;   Label: LAB_0046ace7
    JNZ 0x0046ad59                      ; 0046acee
        ;   XREF to: 0046ad59 (CONDITIONAL_JUMP)  ; LAB_0046ad59
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046acf0 | DAT_01c35e6c | LAB_0055b3b1
    MOV EBP,0x6                         ; 0046acfa
        ;   Label: LAB_0046acfa
    MOV EDI,0x267                       ; 0046acff
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046ad04
    MOV dword ptr [0x01c38b58],EBP      ; 0046ad07 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDI      ; 0046ad0d | DAT_01c38b54
    TEST EAX,EAX                        ; 0046ad13
    JNZ 0x0046acb0                      ; 0046ad15
        ;   XREF to: 0046acb0 (CONDITIONAL_JUMP)  ; LAB_0046acb0
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046ad17
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046ad1b
    XOR ECX,ECX                         ; 0046ad1e
    TEST EDX,EDX                        ; 0046ad20
    JLE 0x0046acb0                      ; 0046ad22
        ;   XREF to: 0046acb0 (CONDITIONAL_JUMP)  ; LAB_0046acb0
    XOR EDX,EDX                         ; 0046ad24
    MOV ESI,dword ptr [EDX + 0x1ba5c84] ; 0046ad26 | DAT_01ba5c84 | DAT_01ba5c88
        ;   Label: LAB_0046ad26
    IMUL ESI,ESI,0x30                   ; 0046ad2c
    MOV EDI,dword ptr [EBX]             ; 0046ad2f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046ad31
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0046ad34
    MOV EDI,dword ptr [EBX]             ; 0046ad38
    ADD EDI,ESI                         ; 0046ad3a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046ad3c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046ad3f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046ad42
    ADD EAX,0xc                         ; 0046ad46
    INC ECX                             ; 0046ad49
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046ad4a
    ADD EDX,0x4                         ; 0046ad4d
    CMP ECX,EBP                         ; 0046ad50
    JL 0x0046ad26                       ; 0046ad52
        ;   XREF to: 0046ad26 (CONDITIONAL_JUMP)  ; LAB_0046ad26
    JMP 0x0046acb0                      ; 0046ad54
        ;   XREF to: 0046acb0 (UNCONDITIONAL_JUMP)  ; LAB_0046acb0
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046ad59 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_0046ad59
    JMP 0x0046acfa                      ; 0046ad63
        ;   XREF to: 0046acfa (UNCONDITIONAL_JUMP)  ; LAB_0046acfa


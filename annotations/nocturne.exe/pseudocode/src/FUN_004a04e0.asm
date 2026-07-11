; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a04e0(int param_1,int param_2,float param_3,int param_4)
;
;
; XREF[1]:
;   FUN_004a0550 at 004a2d85
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a04e0
        ;   Label: FUN_004a04e0
    PUSH ESI                            ; 004a04e1
    PUSH EDI                            ; 004a04e2
    PUSH EBP                            ; 004a04e3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a04e4
    MOV EBP,dword ptr [ESP + 0x20]      ; 004a04e8
    MOV EDX,dword ptr [ESP + 0x14]      ; 004a04ec
    LEA EBX,[EBP*0x4 + 0x0]             ; 004a04f0
    ADD EBX,EDX                         ; 004a04f7
    FLD float ptr [EBX + 0x514]         ; 004a04f9
    FMUL float ptr [ESP + 0x1c]         ; 004a04ff
    FSTP float ptr [EBX + 0x514]        ; 004a0503
    MOV ECX,dword ptr [EDI + 0x28558]   ; 004a0509
    XOR EBX,EBX                         ; 004a050f
    TEST ECX,ECX                        ; 004a0511
    JLE 0x004a052d                      ; 004a0513
        ;   XREF to: 004a052d (CONDITIONAL_JUMP)  ; LAB_004a052d
    MOV ESI,EDI                         ; 004a0515
    CMP EBP,dword ptr [ESI + 0x2857c]   ; 004a0517
        ;   Label: LAB_004a0517
    JZ 0x004a0532                       ; 004a051d
        ;   XREF to: 004a0532 (CONDITIONAL_JUMP)  ; LAB_004a0532
    INC EBX                             ; 004a051f
        ;   Label: LAB_004a051f
    MOV EAX,dword ptr [EDI + 0x28558]   ; 004a0520
    ADD ESI,0x24                        ; 004a0526
    CMP EBX,EAX                         ; 004a0529
    JL 0x004a0517                       ; 004a052b
        ;   XREF to: 004a0517 (CONDITIONAL_JUMP)  ; LAB_004a0517
    POP EBP                             ; 004a052d
        ;   Label: LAB_004a052d
    POP EDI                             ; 004a052e
    POP ESI                             ; 004a052f
    POP EBX                             ; 004a0530
    RET                                 ; 004a0531
    PUSH EBX                            ; 004a0532
        ;   Label: LAB_004a0532
    PUSH dword ptr [ESP + 0x20]         ; 004a0533
    PUSH EDI                            ; 004a0537
    MOV ECX,dword ptr [ESP + 0x20]      ; 004a0538
    PUSH ECX                            ; 004a053c
    CALL FUN_004a04e0                   ; 004a053d
        ;   XREF to: 004a04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a04e0()
    ADD ESP,0x10                        ; 004a0542
    JMP 0x004a051f                      ; 004a0545
        ;   XREF to: 004a051f (UNCONDITIONAL_JUMP)  ; LAB_004a051f


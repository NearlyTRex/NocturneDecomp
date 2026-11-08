; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054bde0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004091b0 at 00409675
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054bde0
        ;   Label: FUN_0054bde0
    PUSH ESI                            ; 0054bde1
    PUSH EDI                            ; 0054bde2
    PUSH EBP                            ; 0054bde3
    SUB ESP,0x194                       ; 0054bde4
    XOR EAX,EAX                         ; 0054bdea
    ADD EAX,0x4                         ; 0054bdec
        ;   Label: LAB_0054bdec
    XOR EDX,EDX                         ; 0054bdef
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0054bdf1
    CMP EAX,0x190                       ; 0054bdf5
    JNZ 0x0054bdec                      ; 0054bdfa
        ;   XREF to: 0054bdec (CONDITIONAL_JUMP)  ; LAB_0054bdec
    MOV EBP,dword ptr [ESP + 0x1ac]     ; 0054bdfc
    MOV ECX,dword ptr [ESP + 0x1a8]     ; 0054be03
    MOV EDX,dword ptr [ESP + 0x1b0]     ; 0054be0a
    SHL EBP,0x2                         ; 0054be11
    LEA EAX,[EDX*0x8 + 0x0]             ; 0054be14
    ADD EBP,ECX                         ; 0054be1b
    ADD EDX,EAX                         ; 0054be1d
    MOV EAX,dword ptr [EBP + 0x7c]      ; 0054be1f
    ADD EDX,EDX                         ; 0054be22
    ADD EAX,EDX                         ; 0054be24
    MOV EDI,EAX                         ; 0054be26
    ADD EAX,0x6                         ; 0054be28
    MOV dword ptr [ESP + 0x190],EAX     ; 0054be2b
    XOR EAX,EAX                         ; 0054be32
        ;   Label: LAB_0054be32
    MOV AX,word ptr [EDI]               ; 0054be34
    IMUL EAX,EAX,0x34                   ; 0054be37
    MOV ESI,dword ptr [EBP + 0x40]      ; 0054be3a
    ADD ESI,EAX                         ; 0054be3d
    XOR ECX,ECX                         ; 0054be3f
    MOV EDX,ESI                         ; 0054be41
    MOV EAX,ESI                         ; 0054be43
    XOR EBX,EBX                         ; 0054be45
        ;   Label: LAB_0054be45
    MOV BL,byte ptr [ESI]               ; 0054be47
    CMP ECX,EBX                         ; 0054be49
    JL 0x0054be8a                       ; 0054be4b
        ;   XREF to: 0054be8a (CONDITIONAL_JUMP)  ; LAB_0054be8a
    MOV EBX,dword ptr [ESP + 0x190]     ; 0054be4d
    ADD EDI,0x2                         ; 0054be54
    CMP EDI,EBX                         ; 0054be57
    JNZ 0x0054be32                      ; 0054be59
        ;   XREF to: 0054be32 (CONDITIONAL_JUMP)  ; LAB_0054be32
    MOV EBX,0x1                         ; 0054be5b
    MOV EDX,0x4                         ; 0054be60
    XOR ECX,ECX                         ; 0054be65
    FLD float ptr [ESP + EDX*0x1]       ; 0054be67
        ;   Label: LAB_0054be67
    FCOMP float ptr [ESP + ECX*0x4]     ; 0054be6a
    FNSTSW AX                           ; 0054be6d
    SAHF                                ; 0054be6f
    JBE 0x0054be74                      ; 0054be70
        ;   XREF to: 0054be74 (CONDITIONAL_JUMP)  ; LAB_0054be74
    MOV ECX,EBX                         ; 0054be72
    INC EBX                             ; 0054be74
        ;   Label: LAB_0054be74
    ADD EDX,0x4                         ; 0054be75
    CMP EBX,0x64                        ; 0054be78
    JL 0x0054be67                       ; 0054be7b
        ;   XREF to: 0054be67 (CONDITIONAL_JUMP)  ; LAB_0054be67
    MOV EAX,ECX                         ; 0054be7d
    ADD ESP,0x194                       ; 0054be7f
    POP EBP                             ; 0054be85
    POP EDI                             ; 0054be86
    POP ESI                             ; 0054be87
    POP EBX                             ; 0054be88
    RET                                 ; 0054be89
    XOR EBX,EBX                         ; 0054be8a
        ;   Label: LAB_0054be8a
    FLD float ptr [EDX + 0x4]           ; 0054be8c
    MOV BL,byte ptr [EAX + 0x1]         ; 0054be8f
    ADD EDX,0x4                         ; 0054be92
    INC EAX                             ; 0054be95
    FADD float ptr [ESP + EBX*0x4]      ; 0054be96
    INC ECX                             ; 0054be99
    FSTP float ptr [ESP + EBX*0x4]      ; 0054be9a
    JMP 0x0054be45                      ; 0054be9d
        ;   XREF to: 0054be45 (UNCONDITIONAL_JUMP)  ; LAB_0054be45


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004459b0(int param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_cow_wav_005b99cd
;   undefined4 DAT_006045f8
;
; Called Functions:
;   FUN_00445730
;   FUN_00489b80
;   FUN_004fc070
;   FUN_004fc0d0
;   FUN_00560af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004459b0
        ;   Label: FUN_004459b0
    PUSH ESI                            ; 004459b1
    PUSH EDI                            ; 004459b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004459b3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004459b7
    PUSH EDI                            ; 004459bb
    PUSH EBX                            ; 004459bc
    CALL FUN_00445730                   ; 004459bd
        ;   XREF to: 00445730 (UNCONDITIONAL_CALL)  ; undefined FUN_00445730()
    FLD float ptr [EDI + 0x4]           ; 004459c2
    ADD ESP,0x8                         ; 004459c5
    FSUBR float ptr [EBX + 0x2538]      ; 004459c8
    LEA ESI,[EBX + 0x158]               ; 004459ce
    FST float ptr [EBX + 0x2538]        ; 004459d4
    FLDZ                                ; 004459da
    FCOMPP                              ; 004459dc
    FNSTSW AX                           ; 004459de
    SAHF                                ; 004459e0
    JNC 0x00445a18                      ; 004459e1
        ;   XREF to: 00445a18 (CONDITIONAL_JUMP)  ; LAB_00445a18
    PUSH 0x1                            ; 004459e3
    PUSH 0x3                            ; 004459e5
    PUSH ESI                            ; 004459e7
        ;   Label: LAB_004459e7
    CALL FUN_004fc0d0                   ; 004459e8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 004459ed
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 004459f0
        ;   Label: LAB_004459f0
    PUSH EDX                            ; 004459f6
    MOV ECX,dword ptr [0x006045f8]      ; 004459f7 | DAT_006045f8
    PUSH ECX                            ; 004459fd
    CALL FUN_00560af0                   ; 004459fe
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; undefined FUN_00560af0()
    ADD ESP,0x8                         ; 00445a03
    TEST EAX,EAX                        ; 00445a06
    JZ 0x00445a3e                       ; 00445a08
        ;   XREF to: 00445a3e (CONDITIONAL_JUMP)  ; LAB_00445a3e
    PUSH EDI                            ; 00445a0a
    PUSH EBX                            ; 00445a0b
    CALL FUN_00489b80                   ; 00445a0c
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00489b80()
    ADD ESP,0x8                         ; 00445a11
    POP EDI                             ; 00445a14
    POP ESI                             ; 00445a15
    POP EBX                             ; 00445a16
    RET                                 ; 00445a17
    PUSH ESI                            ; 00445a18
        ;   Label: LAB_00445a18
    MOV dword ptr [EBX + 0x2538],0x0    ; 00445a19
    CALL FUN_004fc070                   ; 00445a23
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00445a28
    ADD ESP,0x4                         ; 00445a2b
    CMP EAX,0x5                         ; 00445a2e
    JZ 0x004459f0                       ; 00445a31
        ;   XREF to: 004459f0 (CONDITIONAL_JUMP)  ; LAB_004459f0
    CMP EAX,0x4                         ; 00445a33
    JZ 0x004459f0                       ; 00445a36
        ;   XREF to: 004459f0 (CONDITIONAL_JUMP)  ; LAB_004459f0
    PUSH 0x1                            ; 00445a38
    PUSH 0x4                            ; 00445a3a
    JMP 0x004459e7                      ; 00445a3c
        ;   XREF to: 004459e7 (UNCONDITIONAL_JUMP)  ; LAB_004459e7
    PUSH 0x5b99cd                       ; 00445a3e | = "cow?.wav"
        ;   Label: LAB_00445a3e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00445a43
    PUSH EBX                            ; 00445a49
    CALL dword ptr [EAX + 0x2c]         ; 00445a4a
    ADD ESP,0x8                         ; 00445a4d
    MOV dword ptr [EBX + 0xd05c],EAX    ; 00445a50
    PUSH EDI                            ; 00445a56
    PUSH EBX                            ; 00445a57
    CALL FUN_00489b80                   ; 00445a58
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00489b80()
    ADD ESP,0x8                         ; 00445a5d
    POP EDI                             ; 00445a60
    POP ESI                             ; 00445a61
    POP EBX                             ; 00445a62
    RET                                 ; 00445a63


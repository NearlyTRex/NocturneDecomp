; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005abe28(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005abf28 at 005abf5a
;
; Referenced Globals:
;   undefined4 DAT_005e8802
;   undefined4 DAT_005e8804
;   undefined4 DAT_005e881c
;   undefined4 DAT_005e881e
;
; Called Functions:
;   crt_time.c__mktime_FUN_005a4f20
;   crt_unknown.c_FUN_005abdf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abe28
        ;   Label: crt_unknown.c_FUN_005abe28
    PUSH ESI                            ; 005abe29
    PUSH EDI                            ; 005abe2a
    PUSH EBP                            ; 005abe2b
    SUB ESP,0x24                        ; 005abe2c
    MOV EBX,dword ptr [ESP + 0x38]      ; 005abe2f
    MOV EDI,dword ptr [ESP + 0x3c]      ; 005abe33
    MOV EDX,dword ptr [EBX + 0x20]      ; 005abe37
    TEST EDX,EDX                        ; 005abe3a
    JNZ 0x005abf08                      ; 005abe3c
        ;   XREF to: 005abf08 (CONDITIONAL_JUMP)  ; LAB_005abf08
    LEA EAX,[EDI + 0x76c]               ; 005abe42
    PUSH EAX                            ; 005abe48
    CALL crt_unknown.c_FUN_005abdf0     ; 005abe49
        ;   XREF to: 005abdf0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abdf0()
    ADD ESP,0x4                         ; 005abe4e
    TEST EAX,EAX                        ; 005abe51
    JZ 0x005abe68                       ; 005abe53
        ;   XREF to: 005abe68 (CONDITIONAL_JUMP)  ; LAB_005abe68
    MOV EAX,dword ptr [EBX + 0x10]      ; 005abe55
    MOV ESI,dword ptr [EAX*0x2 + 0x5e881e] ; 005abe58 | DAT_005e881e
    MOV EAX,dword ptr [EAX*0x2 + 0x5e881c] ; 005abe5f | DAT_005e881c
    JMP 0x005abe79                      ; 005abe66
        ;   XREF to: 005abe79 (UNCONDITIONAL_JUMP)  ; LAB_005abe79
    MOV EAX,dword ptr [EBX + 0x10]      ; 005abe68
        ;   Label: LAB_005abe68
    MOV ESI,dword ptr [EAX*0x2 + 0x5e8804] ; 005abe6b | DAT_005e8804
    MOV EAX,dword ptr [EAX*0x2 + 0x5e8802] ; 005abe72 | DAT_005e8802
    SAR ESI,0x10                        ; 005abe79
        ;   Label: LAB_005abe79
    SAR EAX,0x10                        ; 005abe7c
    SUB ESI,EAX                         ; 005abe7f
    XOR EBP,EBP                         ; 005abe81
    MOV ECX,0x1                         ; 005abe83
    MOV dword ptr [ESP],EBP             ; 005abe88
    MOV dword ptr [ESP + 0x4],EBP       ; 005abe8b
    MOV dword ptr [ESP + 0x8],EBP       ; 005abe8f
    MOV dword ptr [ESP + 0xc],ECX       ; 005abe93
    MOV EAX,dword ptr [EBX + 0x10]      ; 005abe97
    MOV dword ptr [ESP + 0x10],EAX      ; 005abe9a
    MOV EAX,ESP                         ; 005abe9e
    PUSH EAX                            ; 005abea0
    MOV dword ptr [ESP + 0x18],EDI      ; 005abea1
    MOV dword ptr [ESP + 0x24],EBP      ; 005abea5
    CALL crt_time.c__mktime_FUN_005a4f20 ; 005abea9
        ;   XREF to: 005a4f20 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__mktime_FUN_005a4f20(_tm * timeptr)
    ADD ESP,0x4                         ; 005abeae
    MOV EDX,dword ptr [EBX + 0x18]      ; 005abeb1
    SUB EDX,dword ptr [ESP + 0x18]      ; 005abeb4
    ADD EDX,0x7                         ; 005abeb8
    MOV ECX,0x7                         ; 005abebb
    MOV EAX,EDX                         ; 005abec0
    SAR EDX,0x1f                        ; 005abec2
    IDIV ECX                            ; 005abec5
    MOV EAX,dword ptr [EBX + 0xc]       ; 005abec7
    CMP EAX,0x5                         ; 005abeca
    JNZ 0x005abef0                      ; 005abecd
        ;   XREF to: 005abef0 (CONDITIONAL_JUMP)  ; LAB_005abef0
    LEA EDI,[EAX + -0x1]                ; 005abecf
    LEA ECX,[EDI*0x8 + 0x0]             ; 005abed2
    LEA EAX,[EDX + 0x1]                 ; 005abed9
    SUB ECX,EDI                         ; 005abedc
    ADD EAX,ECX                         ; 005abede
    CMP EAX,ESI                         ; 005abee0
    JLE 0x005abeec                      ; 005abee2
        ;   XREF to: 005abeec (CONDITIONAL_JUMP)  ; LAB_005abeec
    MOV EAX,dword ptr [EBX + 0xc]       ; 005abee4
    SUB EAX,0x2                         ; 005abee7
    JMP 0x005abef1                      ; 005abeea
        ;   XREF to: 005abef1 (UNCONDITIONAL_JUMP)  ; LAB_005abef1
    MOV EAX,EDI                         ; 005abeec
        ;   Label: LAB_005abeec
    JMP 0x005abef1                      ; 005abeee
        ;   XREF to: 005abef1 (UNCONDITIONAL_JUMP)  ; LAB_005abef1
    DEC EAX                             ; 005abef0
        ;   Label: LAB_005abef0
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005abef1
        ;   Label: LAB_005abef1
    ADD EBX,EDX                         ; 005abef5
    MOV EDX,EAX                         ; 005abef7
    SHL EAX,0x3                         ; 005abef9
    SUB EAX,EDX                         ; 005abefc
    ADD EAX,EBX                         ; 005abefe
    ADD ESP,0x24                        ; 005abf00
    POP EBP                             ; 005abf03
    POP EDI                             ; 005abf04
    POP ESI                             ; 005abf05
    POP EBX                             ; 005abf06
    RET                                 ; 005abf07
    CMP EDX,0x1                         ; 005abf08
        ;   Label: LAB_005abf08
    JNZ 0x005abf1a                      ; 005abf0b
        ;   XREF to: 005abf1a (CONDITIONAL_JUMP)  ; LAB_005abf1a
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005abf0d
    SUB EAX,EDX                         ; 005abf10
    ADD ESP,0x24                        ; 005abf12
    POP EBP                             ; 005abf15
    POP EDI                             ; 005abf16
    POP ESI                             ; 005abf17
    POP EBX                             ; 005abf18
    RET                                 ; 005abf19
    MOV EAX,dword ptr [EBX + 0x1c]      ; 005abf1a
        ;   Label: LAB_005abf1a
    ADD ESP,0x24                        ; 005abf1d
    POP EBP                             ; 005abf20
    POP EDI                             ; 005abf21
    POP ESI                             ; 005abf22
    POP EBX                             ; 005abf23
    RET                                 ; 005abf24


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00524a40(int *param_1,int param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[28]:
;   FUN_0042b430 at 0042b445
;   FUN_00433cd0 at 00433d2c
;   FUN_0045c350 at 0045c365
;   FUN_00469550 at 0046993d
;   FUN_0046bde0 at 0046c13d
;   FUN_0046caa0 at 0046cabb
;   FUN_0046e730 at 0046e760
;   FUN_0046ea80 at 0046eb25
;   FUN_004712b0 at 00471318
;   FUN_00475650 at 00475684
;   ... and 18 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524a40
        ;   Label: FUN_00524a40
    PUSH EBP                            ; 00524a41
    MOV EBP,ESP                         ; 00524a42
    SUB ESP,0xc                         ; 00524a44
    AND ESP,0xfffffff8                  ; 00524a47
    MOV EDX,dword ptr [EBP + 0xc]       ; 00524a4a
    MOV EBX,dword ptr [EBP + 0x10]      ; 00524a4d
    FLDZ                                ; 00524a50
    FLD float ptr [EDX + 0x14]          ; 00524a52
    FSTP double ptr [ESP]               ; 00524a55
    FCOMP double ptr [ESP]              ; 00524a58
    FNSTSW AX                           ; 00524a5b
    SAHF                                ; 00524a5d
    JNC 0x00524aad                      ; 00524a5e
        ;   XREF to: 00524aad (CONDITIONAL_JUMP)  ; LAB_00524aad
    MOV ECX,dword ptr [EDX + 0x18]      ; 00524a60
    LEA EAX,[ECX*0x8 + 0x0]             ; 00524a63
    ADD EAX,ECX                         ; 00524a6a
    SHL EAX,0x5                         ; 00524a6c
    MOV ECX,dword ptr [EDX]             ; 00524a6f
    CMP EBX,dword ptr [ECX + EAX*0x1 + 0x1c4c] ; 00524a71
    JZ 0x00524aa4                       ; 00524a78
        ;   XREF to: 00524aa4 (CONDITIONAL_JUMP)  ; LAB_00524aa4
    MOV EDX,dword ptr [EDX + 0x4]       ; 00524a7a
    LEA EAX,[EDX*0x8 + 0x0]             ; 00524a7d
    ADD EAX,EDX                         ; 00524a84
    SHL EAX,0x5                         ; 00524a86
    CMP EBX,dword ptr [ECX + EAX*0x1 + 0x1c4c] ; 00524a89
    JNZ 0x00524ad1                      ; 00524a90
        ;   XREF to: 00524ad1 (CONDITIONAL_JUMP)  ; LAB_00524ad1
    FLD1                                ; 00524a92
    FSUB double ptr [ESP]               ; 00524a94
    FSTP float ptr [ESP + 0x8]          ; 00524a97
    MOV EAX,dword ptr [ESP + 0x8]       ; 00524a9b
        ;   Label: LAB_00524a9b
    MOV ESP,EBP                         ; 00524a9f
    POP EBP                             ; 00524aa1
    POP EBX                             ; 00524aa2
    RET                                 ; 00524aa3
    MOV EAX,dword ptr [EDX + 0x14]      ; 00524aa4
        ;   Label: LAB_00524aa4
    MOV dword ptr [ESP + 0x8],EAX       ; 00524aa7
    JMP 0x00524a9b                      ; 00524aab
        ;   XREF to: 00524a9b (UNCONDITIONAL_JUMP)  ; LAB_00524a9b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00524aad
        ;   Label: LAB_00524aad
    LEA EAX,[ECX*0x8 + 0x0]             ; 00524ab0
    ADD ECX,EAX                         ; 00524ab7
    SHL ECX,0x5                         ; 00524ab9
    MOV EAX,dword ptr [EDX]             ; 00524abc
    CMP EBX,dword ptr [ECX + EAX*0x1 + 0x1c4c] ; 00524abe
    JNZ 0x00524ad1                      ; 00524ac5
        ;   XREF to: 00524ad1 (CONDITIONAL_JUMP)  ; LAB_00524ad1
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00524ac7
    JMP 0x00524a9b                      ; 00524acf
        ;   XREF to: 00524a9b (UNCONDITIONAL_JUMP)  ; LAB_00524a9b
    XOR EAX,EAX                         ; 00524ad1
        ;   Label: LAB_00524ad1
    MOV dword ptr [ESP + 0x8],EAX       ; 00524ad3
    MOV EAX,dword ptr [ESP + 0x8]       ; 00524ad7
    MOV ESP,EBP                         ; 00524adb
    POP EBP                             ; 00524add
    POP EBX                             ; 00524ade
    RET                                 ; 00524adf


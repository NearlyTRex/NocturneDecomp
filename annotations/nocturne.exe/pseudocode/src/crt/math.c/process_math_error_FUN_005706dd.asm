; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double crt_math_c_process_math_error_FUN_005706dd(uint param_1,undefined4 *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined8       Stack[-0x24]:8  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   crt_math.c_math_domain_error_FUN_0056bd22 at 0056bd96
;   crt_math.c_set_math_errno_FUN_005706aa at 005706b9
;
; Referenced Globals:
;   undefined4 DAT_005a4b78
;   undefined4 DAT_005a4b7c
;   undefined4 DAT_005c206c
;
; Called Functions:
;   crt_math.c_report_math_error_FUN_00572a35
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005706dd
        ;   Label: crt_math.c_process_math_error_FUN_005706dd
    MOV EBP,ESP                         ; 005706de
    PUSH EBX                            ; 005706e0
    PUSH ESI                            ; 005706e1
    SUB ESP,0x30                        ; 005706e2
    MOV EDX,dword ptr [EBP + 0x8]       ; 005706e5
    MOV ESI,dword ptr [EBP + 0xc]       ; 005706e8
    MOV ECX,dword ptr [EBP + 0x10]      ; 005706eb
    MOV EAX,dword ptr [ESI]             ; 005706ee
    MOV dword ptr [EBP + -0x30],EAX     ; 005706f0
    MOV EAX,dword ptr [ESI + 0x4]       ; 005706f3
    MOV dword ptr [EBP + -0x2c],EAX     ; 005706f6
    MOV EAX,dword ptr [ECX]             ; 005706f9
    MOV dword ptr [EBP + -0x28],EAX     ; 005706fb
    MOV EAX,dword ptr [ECX + 0x4]       ; 005706fe
    MOV dword ptr [EBP + -0x24],EAX     ; 00570701
    TEST DL,0x40                        ; 00570704
    JZ 0x00570710                       ; 00570707
        ;   XREF to: 00570710 (CONDITIONAL_JUMP)  ; LAB_00570710
    MOV EBX,0x1                         ; 00570709
    JMP 0x0057074a                      ; 0057070e
        ;   XREF to: 0057074a (UNCONDITIONAL_JUMP)  ; LAB_0057074a
    TEST DL,0x80                        ; 00570710
        ;   Label: LAB_00570710
    JZ 0x0057071c                       ; 00570713
        ;   XREF to: 0057071c (CONDITIONAL_JUMP)  ; LAB_0057071c
    MOV EBX,0x2                         ; 00570715
    JMP 0x0057074a                      ; 0057071a
        ;   XREF to: 0057074a (UNCONDITIONAL_JUMP)  ; LAB_0057074a
    TEST DH,0x1                         ; 0057071c
        ;   Label: LAB_0057071c
    JZ 0x00570728                       ; 0057071f
        ;   XREF to: 00570728 (CONDITIONAL_JUMP)  ; LAB_00570728
    MOV EBX,0x3                         ; 00570721
    JMP 0x0057074a                      ; 00570726
        ;   XREF to: 0057074a (UNCONDITIONAL_JUMP)  ; LAB_0057074a
    TEST DH,0x8                         ; 00570728
        ;   Label: LAB_00570728
    JZ 0x00570734                       ; 0057072b
        ;   XREF to: 00570734 (CONDITIONAL_JUMP)  ; LAB_00570734
    MOV EBX,0x4                         ; 0057072d
    JMP 0x0057074a                      ; 00570732
        ;   XREF to: 0057074a (UNCONDITIONAL_JUMP)  ; LAB_0057074a
    TEST DH,0x2                         ; 00570734
        ;   Label: LAB_00570734
    JZ 0x00570740                       ; 00570737
        ;   XREF to: 00570740 (CONDITIONAL_JUMP)  ; LAB_00570740
    MOV EBX,0x6                         ; 00570739
    JMP 0x0057074a                      ; 0057073e
        ;   XREF to: 0057074a (UNCONDITIONAL_JUMP)  ; LAB_0057074a
    TEST DH,0x4                         ; 00570740
        ;   Label: LAB_00570740
    JZ 0x0057074a                       ; 00570743
        ;   XREF to: 0057074a (CONDITIONAL_JUMP)  ; LAB_0057074a
    MOV EBX,0x5                         ; 00570745
    MOV EAX,EDX                         ; 0057074a
        ;   Label: LAB_0057074a
    AND EAX,0x1f                        ; 0057074c
    MOV EAX,dword ptr [EAX*0x4 + 0x5c206c] ; 0057074f | DAT_005c206c
    MOV dword ptr [EBP + -0x38],EBX     ; 00570756
    MOV dword ptr [EBP + -0x34],EAX     ; 00570759
    TEST DH,0x10                        ; 0057075c
    JZ 0x0057076e                       ; 0057075f
        ;   XREF to: 0057076e (CONDITIONAL_JUMP)  ; LAB_0057076e
    FLD double ptr [0x005a4b78]         ; 00570761 | DAT_005a4b78
    FCHS                                ; 00570767
    FSTP double ptr [EBP + -0x20]       ; 00570769
    JMP 0x005707b0                      ; 0057076c
        ;   XREF to: 005707b0 (UNCONDITIONAL_JUMP)  ; LAB_005707b0
    TEST DH,0x20                        ; 0057076e
        ;   Label: LAB_0057076e
    JZ 0x0057077d                       ; 00570771
        ;   XREF to: 0057077d (CONDITIONAL_JUMP)  ; LAB_0057077d
    XOR ECX,ECX                         ; 00570773
    MOV dword ptr [EBP + -0x20],ECX     ; 00570775
    MOV dword ptr [EBP + -0x1c],ECX     ; 00570778
    JMP 0x005707b0                      ; 0057077b
        ;   XREF to: 005707b0 (UNCONDITIONAL_JUMP)  ; LAB_005707b0
    TEST DH,0x40                        ; 0057077d
        ;   Label: LAB_0057077d
    JZ 0x00570791                       ; 00570780
        ;   XREF to: 00570791 (CONDITIONAL_JUMP)  ; LAB_00570791
    XOR EDX,EDX                         ; 00570782
    MOV EBX,0x3ff00000                  ; 00570784
    MOV dword ptr [EBP + -0x20],EDX     ; 00570789
    MOV dword ptr [EBP + -0x1c],EBX     ; 0057078c
    JMP 0x005707b0                      ; 0057078f
        ;   XREF to: 005707b0 (UNCONDITIONAL_JUMP)  ; LAB_005707b0
    TEST DH,0x80                        ; 00570791
        ;   Label: LAB_00570791
    JZ 0x005707a5                       ; 00570794
        ;   XREF to: 005707a5 (CONDITIONAL_JUMP)  ; LAB_005707a5
    MOV EAX,[0x005a4b78]                ; 00570796 | DAT_005a4b78
    MOV dword ptr [EBP + -0x20],EAX     ; 0057079b
    MOV EAX,[0x005a4b7c]                ; 0057079e | DAT_005a4b7c
    JMP 0x005707ad                      ; 005707a3
        ;   XREF to: 005707ad (UNCONDITIONAL_JUMP)  ; LAB_005707ad
    MOV EAX,dword ptr [ECX]             ; 005707a5
        ;   Label: LAB_005707a5
    MOV dword ptr [EBP + -0x20],EAX     ; 005707a7
    MOV EAX,dword ptr [ECX + 0x4]       ; 005707aa
    MOV dword ptr [EBP + -0x1c],EAX     ; 005707ad
        ;   Label: LAB_005707ad
    LEA EAX,[EBP + -0x38]               ; 005707b0
        ;   Label: LAB_005707b0
    PUSH EAX                            ; 005707b3
    CALL crt_math.c_report_math_error_FUN_00572a35 ; 005707b4
        ;   XREF to: 00572a35 (UNCONDITIONAL_CALL)  ; double crt_math.c_report_math_error_FUN_00572a35(MathErrorContext * errorCtx)
    MOV dword ptr [EBP + -0x18],EAX     ; 005707b9
    MOV dword ptr [EBP + -0x14],EDX     ; 005707bc
    ADD ESP,0x4                         ; 005707bf
    MOV EAX,dword ptr [EBP + -0x18]     ; 005707c2
    MOV dword ptr [EBP + -0x10],EAX     ; 005707c5
    MOV EAX,dword ptr [EBP + -0x14]     ; 005707c8
    MOV dword ptr [EBP + -0xc],EAX      ; 005707cb
    MOV EAX,dword ptr [EBP + -0x10]     ; 005707ce
    MOV EDX,dword ptr [EBP + -0xc]      ; 005707d1
    LEA ESP,[EBP + -0x8]                ; 005707d4
    POP ESI                             ; 005707d7
    POP EBX                             ; 005707d8
    POP EBP                             ; 005707d9
    RET                                 ; 005707da


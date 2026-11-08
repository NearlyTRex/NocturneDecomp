; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005a3600(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
; undefined        Stack[-0x8]:1  local_8
;
; XREF[23]:
;   FUN_0040cfa0 at 0040cfe7
;   FUN_0040f2f0 at 0040f33c
;   FUN_00417240 at 00417368
;   FUN_0041f360 at 0041f3ac
;   FUN_00421c90 at 00421d72
;   FUN_00444b70 at 00444d68
;   FUN_00473cd0 at 00473d29
;   FUN_00474400 at 00474484
;   FUN_00477a10 at 00477a2d
;   FUN_00477ac0 at 00477add
;   ... and 13 more
;
; Referenced Globals:
;   undefined4 DAT_005da6b0
;
; Called Functions:
;   FUN_005a5fd6
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a3600
        ;   Label: FUN_005a3600
    MOV EBP,ESP                         ; 005a3601
    PUSH EBX                            ; 005a3603
    SUB ESP,0x10                        ; 005a3604
    LEA EAX,[EBP + -0x14]               ; 005a3607
    PUSH EAX                            ; 005a360a
    MOV EDX,dword ptr [EBP + 0xc]       ; 005a360b
    PUSH EDX                            ; 005a360e
    MOV EBX,dword ptr [EBP + 0x8]       ; 005a360f
    PUSH EBX                            ; 005a3612
    CALL FUN_005a5fd6                   ; 005a3613
        ;   XREF to: 005a5fd6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5fd6()
    MOV dword ptr [EBP + -0xc],EAX      ; 005a3618
    MOV dword ptr [EBP + -0x8],EDX      ; 005a361b
    ADD ESP,0xc                         ; 005a361e
    FLD double ptr [EBP + -0xc]         ; 005a3621
    FLDZ                                ; 005a3624
    FCOMPP                              ; 005a3626
    FNSTSW AX                           ; 005a3628
    SAHF                                ; 005a362a
    JBE 0x005a3639                      ; 005a362b
        ;   XREF to: 005a3639 (CONDITIONAL_JUMP)  ; LAB_005a3639
    FLD double ptr [EBP + -0x14]        ; 005a362d
    FADD double ptr [0x005da6b0]        ; 005a3630 | DAT_005da6b0
    FSTP double ptr [EBP + -0x14]       ; 005a3636
    MOV EAX,dword ptr [EBP + -0x14]     ; 005a3639
        ;   Label: LAB_005a3639
    MOV EDX,dword ptr [EBP + -0x10]     ; 005a363c
    LEA ESP,[EBP + -0x4]                ; 005a363f
    POP EBX                             ; 005a3642
    POP EBP                             ; 005a3643
    RET                                 ; 005a3644


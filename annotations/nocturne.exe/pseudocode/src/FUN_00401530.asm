; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00401530(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_004015a0 at 004015f6
;   FUN_004724e0 at 004725f3
;   FUN_005138e0 at 00513ac9
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01bd2fa0
;   undefined4 DAT_01c00c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401530
        ;   Label: FUN_00401530
    MOV ECX,dword ptr [ESP + 0x8]       ; 00401531
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401535
    MOV EDX,dword ptr [0x005b7624]      ; 00401539 | DAT_005b7624
    SHL EAX,0x2                         ; 0040153f
    CMP EDX,0x8                         ; 00401542
    JZ 0x00401575                       ; 00401545
        ;   XREF to: 00401575 (CONDITIONAL_JUMP)  ; LAB_00401575
    MOV EDX,dword ptr [0x01c00c70]      ; 00401547 | DAT_01c00c70
    MOV EBX,dword ptr [0x005b7624]      ; 0040154d | DAT_005b7624
    AND EDX,0xff                        ; 00401553
    CMP EBX,0x10                        ; 00401559
    JNZ 0x00401585                      ; 0040155c
        ;   XREF to: 00401585 (CONDITIONAL_JUMP)  ; LAB_00401585
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 0040155e | DAT_01bd2fa0
    ADD ECX,ECX                         ; 00401564
    ADD ECX,EAX                         ; 00401566
    MOV AX,word ptr [EDX*0x2 + 0x1bff720] ; 00401568
    MOV word ptr [ECX],AX               ; 00401570
    POP EBX                             ; 00401573
    RET                                 ; 00401574
    MOV EDX,dword ptr [EAX + 0x1bd2fa0] ; 00401575 | DAT_01bd2fa0
        ;   Label: LAB_00401575
    MOV AL,[0x01c00c70]                 ; 0040157b | DAT_01c00c70
    MOV byte ptr [ECX + EDX*0x1],AL     ; 00401580
    POP EBX                             ; 00401583
    RET                                 ; 00401584
    SHL ECX,0x2                         ; 00401585
        ;   Label: LAB_00401585
    MOV EAX,dword ptr [EAX + 0x1bd2fa0] ; 00401588 | DAT_01bd2fa0
    ADD ECX,EAX                         ; 0040158e
    MOV EAX,dword ptr [EDX*0x4 + 0x1bff920] ; 00401590
    MOV dword ptr [ECX],EAX             ; 00401597
    POP EBX                             ; 00401599
    RET                                 ; 0040159a


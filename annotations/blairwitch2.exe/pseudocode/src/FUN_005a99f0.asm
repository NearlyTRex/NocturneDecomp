; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a99f0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f098f
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a99f0
        ;   Label: FUN_005a99f0
    PUSH ESI                            ; 005a99f1
    SUB ESP,0x18                        ; 005a99f2
    MOV ESI,dword ptr [ESP + 0x24]      ; 005a99f5
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a99f9
    FLD float ptr [ESI + 0x113c4]       ; 005a99fd
    FCOMP double ptr [0x005f098f]       ; 005a9a03 | DAT_005f098f
    FNSTSW AX                           ; 005a9a09
    SAHF                                ; 005a9a0b
    JNC 0x005a9a16                      ; 005a9a0c
        ;   XREF to: 005a9a16 (CONDITIONAL_JUMP)  ; LAB_005a9a16
    XOR EAX,EAX                         ; 005a9a0e
    ADD ESP,0x18                        ; 005a9a10
    POP ESI                             ; 005a9a13
    POP EBX                             ; 005a9a14
    RET                                 ; 005a9a15
    PUSH EDI                            ; 005a9a16
        ;   Label: LAB_005a9a16
    MOV EDX,dword ptr [ESI + 0x11850]   ; 005a9a17
    LEA EAX,[EDX*0x4 + 0x0]             ; 005a9a1d
    SUB EAX,EDX                         ; 005a9a24
    MOV EDX,EAX                         ; 005a9a26
    SHL EDX,0x4                         ; 005a9a28
    LEA EAX,[ESI + 0x1134]              ; 005a9a2b
    ADD EAX,EDX                         ; 005a9a31
    PUSH EAX                            ; 005a9a33
    PUSH 0x265370c                      ; 005a9a34 | DAT_0265370c
    LEA ESI,[ESP + 0xc]                 ; 005a9a39
    LEA EDI,[ESP + 0x18]                ; 005a9a3d
    CALL FUN_00591530                   ; 005a9a41
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    LEA ESI,[ESP + 0xc]                 ; 005a9a46
    ADD ESP,0x8                         ; 005a9a4a
    LEA EAX,[ESP + 0x10]                ; 005a9a4d
    MOVSD ES:EDI,ESI                    ; 005a9a51
    MOVSD ES:EDI,ESI                    ; 005a9a52
    MOVSD ES:EDI,ESI                    ; 005a9a53
    CMP EBX,EAX                         ; 005a9a54
    JZ 0x005a9a6c                       ; 005a9a56
        ;   XREF to: 005a9a6c (CONDITIONAL_JUMP)  ; LAB_005a9a6c
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a9a58
    MOV dword ptr [EBX],EAX             ; 005a9a5c
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a9a5e
    MOV dword ptr [EBX + 0x4],EAX       ; 005a9a62
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a9a65
    MOV dword ptr [EBX + 0x8],EAX       ; 005a9a69
    MOV EAX,0x1                         ; 005a9a6c
        ;   Label: LAB_005a9a6c
    POP EDI                             ; 005a9a71
    ADD ESP,0x18                        ; 005a9a72
    POP ESI                             ; 005a9a75
    POP EBX                             ; 005a9a76
    RET                                 ; 005a9a77


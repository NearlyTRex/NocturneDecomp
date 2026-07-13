; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00409ea0(int param_1,uint param_2)
;
;
; XREF[88]:
;   FUN_0040fcf0 at 0040fd6a
;   FUN_0040fdc0 at 0040fdcf
;   FUN_004100f0 at 004100ff
;   FUN_004118c0 at 004118cf
;   FUN_00412000 at 00412026
;   FUN_004132c0 at 0041333a
;   FUN_00414c60 at 00414cda
;   FUN_00414fa0 at 00414faf
;   FUN_00415250 at 004152ca
;   FUN_00415a30 at 00415aba
;   ... and 78 more
;
; Referenced Globals:
;   undefined1* PTR_FUN_005992d4 = 00409fc0
;   undefined4 DAT_005993d0
;
; Called Functions:
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409ea0
        ;   Label: FUN_00409ea0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00409ea1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00409ea5
    TEST AL,0x4                         ; 00409ea9
    JNZ 0x00409ed1                      ; 00409eab
        ;   XREF to: 00409ed1 (CONDITIONAL_JUMP)  ; LAB_00409ed1
    MOV dword ptr [EBX + 0x68],0x495fd67 ; 00409ead
    MOV dword ptr [EBX + 0x14c],0x5992d4 ; 00409eb4 | PTR_FUN_005992d4
    TEST AL,0x2                         ; 00409ebe
    JNZ 0x00409eec                      ; 00409ec0
        ;   XREF to: 00409eec (CONDITIONAL_JUMP)  ; LAB_00409eec
    MOV EAX,EBX                         ; 00409ec2
    POP EBX                             ; 00409ec4
    LEA EAX,[EAX]                       ; 00409ec5
    LEA EDX,[EDX]                       ; 00409ecb
    MOV EBX,EBX                         ; 00409ece
    PUSH 0x5993d0                       ; 00409ed1 | DAT_005993d0
        ;   Label: LAB_00409ed1
    PUSH EBX                            ; 00409ed6
    CALL FUN_0056445f                   ; 00409ed7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00409edc
    PUSH EAX                            ; 00409edf
    CALL FUN_00564486                   ; 00409ee0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00409ee5
    MOV EAX,EBX                         ; 00409ee8
    POP EBX                             ; 00409eea
    RET                                 ; 00409eeb
    PUSH EBX                            ; 00409eec
        ;   Label: LAB_00409eec
    CALL FUN_00564494                   ; 00409eed
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00409ef2
    MOV EAX,EBX                         ; 00409ef5
    POP EBX                             ; 00409ef7
    RET                                 ; 00409ef8


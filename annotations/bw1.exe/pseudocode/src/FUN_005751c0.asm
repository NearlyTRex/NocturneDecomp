; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005751c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[5]:
;   FUN_00575200 at 00575209
;   FUN_00575220 at 00575229
;   FUN_00575240 at 00575249
;   FUN_005760b0 at 00576233
;   FUN_005763b0 at 0057644e
;
; Referenced Globals:
;   undefined4 DAT_006232e8
;   undefined4 DAT_006232ec
;   undefined4 DAT_006232f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005751c0
        ;   Label: FUN_005751c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005751c1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005751c5
    MOV EDX,dword ptr [ESP + 0x10]      ; 005751c9
    TEST EBX,EBX                        ; 005751cd
    JNZ 0x005751e2                      ; 005751cf
        ;   XREF to: 005751e2 (CONDITIONAL_JUMP)  ; LAB_005751e2
    TEST ECX,ECX                        ; 005751d1
        ;   Label: LAB_005751d1
    JZ 0x005751dc                       ; 005751d3
        ;   XREF to: 005751dc (CONDITIONAL_JUMP)  ; LAB_005751dc
    MOV EAX,[0x006232ec]                ; 005751d5 | DAT_006232ec
    MOV dword ptr [ECX],EAX             ; 005751da
    TEST EDX,EDX                        ; 005751dc
        ;   Label: LAB_005751dc
    JNZ 0x005751eb                      ; 005751de
        ;   XREF to: 005751eb (CONDITIONAL_JUMP)  ; LAB_005751eb
    POP EBX                             ; 005751e0
    RET                                 ; 005751e1
    MOV EAX,[0x006232e8]                ; 005751e2 | DAT_006232e8
        ;   Label: LAB_005751e2
    MOV dword ptr [EBX],EAX             ; 005751e7
    JMP 0x005751d1                      ; 005751e9
        ;   XREF to: 005751d1 (UNCONDITIONAL_JUMP)  ; LAB_005751d1
    MOV EAX,[0x006232f0]                ; 005751eb | DAT_006232f0
        ;   Label: LAB_005751eb
    MOV dword ptr [EDX],EAX             ; 005751f0
    POP EBX                             ; 005751f2
    RET                                 ; 005751f3


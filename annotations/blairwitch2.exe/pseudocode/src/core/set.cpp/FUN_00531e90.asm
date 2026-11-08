; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00531e90(undefined4 param_1,int param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[9]:
;   FUN_004159e0 at 00415a00
;   FUN_0041b700 at 0041b78a
;   FUN_0044e720 at 0044e755
;   FUN_004c52a0 at 004c539f
;   FUN_004c5470 at 004c556e
;   FUN_004c5840 at 004c5941
;   FUN_00541990 at 005419af
;   FUN_00587400 at 00587525
;   FUN_005b0fe0 at 005b1004
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_005e59ea
;   TerminatedCString s_CDemonSet_rotateVerticie_005e59fa
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_0046b920
;   FUN_004e4500
;   FUN_00531ca0
;   FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531e90
        ;   Label: FUN_00531e90
    PUSH ESI                            ; 00531e91
    PUSH EDI                            ; 00531e92
    PUSH EBP                            ; 00531e93
    SUB ESP,0x4                         ; 00531e94
    MOV EBP,dword ptr [ESP + 0x20]      ; 00531e97
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00531e9b
    CMP EDX,0x4e20                      ; 00531e9f
    JG 0x00531f1a                       ; 00531ea5
        ;   XREF to: 00531f1a (CONDITIONAL_JUMP)  ; LAB_00531f1a
    PUSH 0x1                            ; 00531eab
        ;   Label: LAB_00531eab
    MOV EDI,dword ptr [0x0060b280]      ; 00531ead | DAT_0060b280
    PUSH EDI                            ; 00531eb3 | DAT_01ba5c50
    CALL FUN_0046b920                   ; 00531eb4
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b920()
    MOV ESI,dword ptr [0x0060b280]      ; 00531eb9 | DAT_0060b280
    ADD ESP,0x8                         ; 00531ebf
    XOR EAX,EAX                         ; 00531ec2
    XOR EDI,EDI                         ; 00531ec4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00531ec6
    MOV dword ptr [ESP],EAX             ; 00531eca
    MOV ESI,dword ptr [ESI]             ; 00531ecd | DAT_01ba5c50
    TEST EDX,EDX                        ; 00531ecf
    JLE 0x00531ef7                      ; 00531ed1
        ;   XREF to: 00531ef7 (CONDITIONAL_JUMP)  ; LAB_00531ef7
    PUSH EBP                            ; 00531ed3
        ;   Label: LAB_00531ed3
    PUSH ESI                            ; 00531ed4
    CALL FUN_0055d723                   ; 00531ed5
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; undefined FUN_0055d723()
    MOV AH,byte ptr [ESI + 0x13]        ; 00531eda
    ADD ESP,0x8                         ; 00531edd
    TEST AH,0x80                        ; 00531ee0
    JNZ 0x00531ee8                      ; 00531ee3
        ;   XREF to: 00531ee8 (CONDITIONAL_JUMP)  ; LAB_00531ee8
    INC dword ptr [ESP]                 ; 00531ee5
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00531ee8
        ;   Label: LAB_00531ee8
    ADD ESI,0x30                        ; 00531eec
    INC EDI                             ; 00531eef
    ADD EBP,0xc                         ; 00531ef0
    CMP EDI,ECX                         ; 00531ef3
    JL 0x00531ed3                       ; 00531ef5
        ;   XREF to: 00531ed3 (CONDITIONAL_JUMP)  ; LAB_00531ed3
    MOV ESI,dword ptr [ESP]             ; 00531ef7
        ;   Label: LAB_00531ef7
    CMP ESI,dword ptr [ESP + 0x1c]      ; 00531efa
    JZ 0x00531f48                       ; 00531efe
        ;   XREF to: 00531f48 (CONDITIONAL_JUMP)  ; LAB_00531f48
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00531f00
        ;   Label: LAB_00531f00
    PUSH EDX                            ; 00531f04
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00531f05
    PUSH ECX                            ; 00531f09
    CALL FUN_00531ca0                   ; 00531f0a
        ;   XREF to: 00531ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00531ca0()
    ADD ESP,0x8                         ; 00531f0f
    ADD ESP,0x4                         ; 00531f12
    POP EBP                             ; 00531f15
    POP EDI                             ; 00531f16
    POP ESI                             ; 00531f17
    POP EBX                             ; 00531f18
    RET                                 ; 00531f19
    PUSH 0x4e20                         ; 00531f1a
        ;   Label: LAB_00531f1a
    PUSH EDX                            ; 00531f1f
    MOV ECX,0x5e59ea                    ; 00531f20 | = "..\\core\\set.cpp"
    MOV EBX,0xe95                       ; 00531f25
    PUSH 0x5e59fa                       ; 00531f2a | = "CDemonSet::rotateVerticies - tried to..."
    MOV dword ptr [0x01d046a0],ECX      ; 00531f2f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00531f35 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00531f3b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0xc                         ; 00531f40
    JMP 0x00531eab                      ; 00531f43
        ;   XREF to: 00531eab (UNCONDITIONAL_JUMP)  ; LAB_00531eab
    PUSH 0x0                            ; 00531f48
        ;   Label: LAB_00531f48
    MOV ESI,dword ptr [0x0060b280]      ; 00531f4a | DAT_0060b280
    PUSH ESI                            ; 00531f50 | DAT_01ba5c50
    CALL FUN_0046b920                   ; 00531f51
        ;   XREF to: 0046b920 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b920()
    ADD ESP,0x8                         ; 00531f56
    JMP 0x00531f00                      ; 00531f59
        ;   XREF to: 00531f00 (UNCONDITIONAL_JUMP)  ; LAB_00531f00


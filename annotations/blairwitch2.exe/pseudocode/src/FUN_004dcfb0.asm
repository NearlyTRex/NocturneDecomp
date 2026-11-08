; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004dcfb0(int param_1,float param_2)
;
;
; XREF[1]:
;   FUN_004e38d0 at 004e38ff
;
; Referenced Globals:
;   undefined4 DAT_007bc85c
;
; Called Functions:
;   FUN_0040c8f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dcfb0
        ;   Label: FUN_004dcfb0
    PUSH ESI                            ; 004dcfb1
    PUSH EDI                            ; 004dcfb2
    PUSH EBP                            ; 004dcfb3
    MOV EBP,ESP                         ; 004dcfb4
    SUB ESP,0x10                        ; 004dcfb6
    AND ESP,0xfffffff8                  ; 004dcfb9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004dcfbc
    FLD float ptr [EBP + 0x18]          ; 004dcfbf
    FLD1                                ; 004dcfc2
    FDIVRP                              ; 004dcfc4
    MOV EDX,dword ptr [EDI + 0x10]      ; 004dcfc6
    XOR EBX,EBX                         ; 004dcfc9
    FSTP float ptr [ESP]                ; 004dcfcb
    TEST EDX,EDX                        ; 004dcfce
    JLE 0x004dcff5                      ; 004dcfd0
        ;   XREF to: 004dcff5 (CONDITIONAL_JUMP)  ; LAB_004dcff5
    MOV ESI,EDI                         ; 004dcfd2
    MOV EAX,[0x007bc85c]                ; 004dcfd4 | DAT_007bc85c
        ;   Label: LAB_004dcfd4
    PUSH EAX                            ; 004dcfd9
    MOV EDX,dword ptr [ESI + 0x14]      ; 004dcfda
    PUSH EDX                            ; 004dcfdd
    CALL FUN_0040c8f0                   ; 004dcfde
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 004dcfe3
    TEST EAX,EAX                        ; 004dcfe6
    JNZ 0x004dd00b                      ; 004dcfe8
        ;   XREF to: 004dd00b (CONDITIONAL_JUMP)  ; LAB_004dd00b
    INC EBX                             ; 004dcfea
        ;   Label: LAB_004dcfea
    MOV ECX,dword ptr [EDI + 0x10]      ; 004dcfeb
    ADD ESI,0x4                         ; 004dcfee
    CMP EBX,ECX                         ; 004dcff1
    JL 0x004dcfd4                       ; 004dcff3
        ;   XREF to: 004dcfd4 (CONDITIONAL_JUMP)  ; LAB_004dcfd4
    FLD float ptr [ESP]                 ; 004dcff5
        ;   Label: LAB_004dcff5
    FLD1                                ; 004dcff8
    FDIVRP                              ; 004dcffa
    FSTP float ptr [ESP + 0xc]          ; 004dcffc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004dd000
    MOV ESP,EBP                         ; 004dd004
    POP EBP                             ; 004dd006
    POP EDI                             ; 004dd007
    POP ESI                             ; 004dd008
    POP EBX                             ; 004dd009
    RET                                 ; 004dd00a
    FLD float ptr [EAX + 0x434]         ; 004dd00b
        ;   Label: LAB_004dd00b
    FLD1                                ; 004dd011
    FDIVRP                              ; 004dd013
    FADD float ptr [ESP]                ; 004dd015
    FSTP float ptr [ESP]                ; 004dd018
    JMP 0x004dcfea                      ; 004dd01b
        ;   XREF to: 004dcfea (UNCONDITIONAL_JUMP)  ; LAB_004dcfea


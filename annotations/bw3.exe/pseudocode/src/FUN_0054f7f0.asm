; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054f7f0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[1]:
;   FUN_0042ff70 at 0042ffa4
;
; Called Functions:
;   FUN_0054afb0
;   FUN_0054e420
;   FUN_0054ea40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f7f0
        ;   Label: FUN_0054f7f0
    PUSH ESI                            ; 0054f7f1
    PUSH EDI                            ; 0054f7f2
    PUSH EBP                            ; 0054f7f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054f7f4
    MOV EAX,dword ptr [ESP + 0x20]      ; 0054f7f8
    CMP EAX,dword ptr [EBX + 0x2320]    ; 0054f7fc
    JNZ 0x0054f841                      ; 0054f802
        ;   XREF to: 0054f841 (CONDITIONAL_JUMP)  ; LAB_0054f841
    LEA EAX,[EBX + 0x2230]              ; 0054f804
        ;   Label: LAB_0054f804
    PUSH EAX                            ; 0054f80a
    LEA EAX,[EBX + 0x2140]              ; 0054f80b
    PUSH EAX                            ; 0054f811
    MOV ECX,dword ptr [EBX + 0x2324]    ; 0054f812
    PUSH ECX                            ; 0054f818
    MOV ESI,dword ptr [EBX + 0x2320]    ; 0054f819
    PUSH ESI                            ; 0054f81f
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0054f820
    PUSH EDI                            ; 0054f824
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0054f825
    PUSH EBP                            ; 0054f829
    PUSH EBX                            ; 0054f82a
    CALL FUN_0054ea40                   ; 0054f82b
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; undefined FUN_0054ea40()
    ADD ESP,0x4                         ; 0054f830
    PUSH EAX                            ; 0054f833
    CALL FUN_0054afb0                   ; 0054f834
        ;   XREF to: 0054afb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054afb0()
    ADD ESP,0x1c                        ; 0054f839
    POP EBP                             ; 0054f83c
    POP EDI                             ; 0054f83d
    POP ESI                             ; 0054f83e
    POP EBX                             ; 0054f83f
    RET                                 ; 0054f840
    PUSH EAX                            ; 0054f841
        ;   Label: LAB_0054f841
    PUSH EBX                            ; 0054f842
    CALL FUN_0054e420                   ; 0054f843
        ;   XREF to: 0054e420 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e420()
    ADD ESP,0x8                         ; 0054f848
    JMP 0x0054f804                      ; 0054f84b
        ;   XREF to: 0054f804 (UNCONDITIONAL_JUMP)  ; LAB_0054f804


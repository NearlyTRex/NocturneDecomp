; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059e7d0(int param_1,float param_2)
;
;
; Called Functions:
;   FUN_0042aa00
;   FUN_0042b2a0
;   FUN_005030c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059e7d0
        ;   Label: FUN_0059e7d0
    PUSH ESI                            ; 0059e7d1
    PUSH EDI                            ; 0059e7d2
    PUSH EBP                            ; 0059e7d3
    MOV EBP,ESP                         ; 0059e7d4
    SUB ESP,0x4                         ; 0059e7d6
    AND ESP,0xfffffff8                  ; 0059e7d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0059e7dc
    LEA EAX,[EBX + 0x2508]              ; 0059e7df
    MOV dword ptr [EAX + 0x8],0x0       ; 0059e7e5
    FLD float ptr [EBP + 0x18]          ; 0059e7ec
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059e7ef
    MOV dword ptr [EAX + 0x4],EDX       ; 0059e7f2
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059e7f5
    MOV dword ptr [EAX],EDX             ; 0059e7f8
    FMUL float ptr [EBX + 0x10a60]      ; 0059e7fa
    LEA EDI,[EBX + 0x2b4]               ; 0059e800
    FSTP float ptr [ESP]                ; 0059e806
    FLD float ptr [ESP]                 ; 0059e809
        ;   Label: LAB_0059e809
    FLDZ                                ; 0059e80c
    FCOMPP                              ; 0059e80e
    FNSTSW AX                           ; 0059e810
    SAHF                                ; 0059e812
    JC 0x0059e846                       ; 0059e813
        ;   XREF to: 0059e846 (CONDITIONAL_JUMP)  ; LAB_0059e846
    FLD float ptr [EBP + 0x18]          ; 0059e815
    FMUL float ptr [EBX + 0x10a60]      ; 0059e818
    FMUL float ptr [EBX + 0x1134c]      ; 0059e81e
    FLD float ptr [EBX + 0x2510]        ; 0059e824
    SUB ESP,0x4                         ; 0059e82a
    FSTP float ptr [EBX + 0x2594]       ; 0059e82d
    FSTP float ptr [ESP]                ; 0059e833
    PUSH EBX                            ; 0059e836
    CALL FUN_0042b2a0                   ; 0059e837
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b2a0()
    ADD ESP,0x8                         ; 0059e83c
    MOV ESP,EBP                         ; 0059e83f
    POP EBP                             ; 0059e841
    POP EDI                             ; 0059e842
    POP ESI                             ; 0059e843
    POP EBX                             ; 0059e844
    RET                                 ; 0059e845
    MOV EAX,ESP                         ; 0059e846
        ;   Label: LAB_0059e846
    PUSH EAX                            ; 0059e848
    PUSH EDI                            ; 0059e849
    CALL FUN_005030c0                   ; 0059e84a
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 0059e84f
    MOV ESI,EAX                         ; 0059e852
    CMP EAX,0x64                        ; 0059e854
    JGE 0x0059e863                      ; 0059e857
        ;   XREF to: 0059e863 (CONDITIONAL_JUMP)  ; LAB_0059e863
    PUSH EAX                            ; 0059e859
    PUSH EBX                            ; 0059e85a
    CALL FUN_0042aa00                   ; 0059e85b
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 0059e860
    CMP ESI,0x64                        ; 0059e863
        ;   Label: LAB_0059e863
    JLE 0x0059e809                      ; 0059e866
        ;   XREF to: 0059e809 (CONDITIONAL_JUMP)  ; LAB_0059e809
    PUSH ESI                            ; 0059e868
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059e869
    PUSH EBX                            ; 0059e86f
    CALL dword ptr [EAX + 0x168]        ; 0059e870
    ADD ESP,0x8                         ; 0059e876
    JMP 0x0059e809                      ; 0059e879
        ;   XREF to: 0059e809 (UNCONDITIONAL_JUMP)  ; LAB_0059e809


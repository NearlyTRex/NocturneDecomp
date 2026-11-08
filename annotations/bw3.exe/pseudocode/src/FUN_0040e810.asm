; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040e810(int param_1)
;
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_00462540
;   FUN_004625a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e810
        ;   Label: FUN_0040e810
    PUSH ESI                            ; 0040e811
    PUSH EDI                            ; 0040e812
    PUSH EBP                            ; 0040e813
    MOV EBP,ESP                         ; 0040e814
    SUB ESP,0x34                        ; 0040e816
    MOV EBX,dword ptr [EBP + 0x14]      ; 0040e819
    PUSH EBX                            ; 0040e81c
    CALL FUN_004087f0                   ; 0040e81d
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 0040e822
    PUSH 0x0                            ; 0040e825
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040e827
    PUSH EBX                            ; 0040e82d
    LEA ESI,[EBP + -0x1c]               ; 0040e82e
    LEA EDI,[EBP + -0x34]               ; 0040e831
    CALL dword ptr [EAX + 0x1c]         ; 0040e834
    MOV ECX,0x6                         ; 0040e837
    ADD ESP,0x4                         ; 0040e83c
    LEA EAX,[EBP + -0x34]               ; 0040e83f
    LEA ESI,[EBP + -0x1c]               ; 0040e842
    PUSH EAX                            ; 0040e845
    MOVSD.REP ES:EDI,ESI                ; 0040e846
    CALL FUN_0041daf0                   ; 0040e848
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 0040e84d
    MOV EDI,EAX                         ; 0040e850
    TEST EAX,EAX                        ; 0040e852
    JNZ 0x0040e868                      ; 0040e854
        ;   XREF to: 0040e868 (CONDITIONAL_JUMP)  ; LAB_0040e868
    PUSH EBX                            ; 0040e856
    CALL FUN_00408830                   ; 0040e857
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0040e85c
    MOV EAX,EDI                         ; 0040e85f
    MOV ESP,EBP                         ; 0040e861
    POP EBP                             ; 0040e863
    POP EDI                             ; 0040e864
    POP ESI                             ; 0040e865
    POP EBX                             ; 0040e866
    RET                                 ; 0040e867
    PUSH -0x1                           ; 0040e868
        ;   Label: LAB_0040e868
    LEA ESI,[EBX + 0x158]               ; 0040e86a
    PUSH ESI                            ; 0040e870
    CALL FUN_004625a0                   ; 0040e871
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625a0()
    MOV EAX,dword ptr [EAX + 0x100]     ; 0040e876
    DEC EAX                             ; 0040e87c
    MOV dword ptr [EBP + -0x4],EAX      ; 0040e87d
    ADD ESP,0x4                         ; 0040e880
    FILD dword ptr [EBP + -0x4]         ; 0040e883
    FMUL float ptr [EBX + 0x31c]        ; 0040e886
    SUB ESP,0x4                         ; 0040e88c
    FSTP float ptr [ESP]                ; 0040e88f
    PUSH ESI                            ; 0040e892
    CALL FUN_00462540                   ; 0040e893
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 0040e898
    PUSH EBX                            ; 0040e89b
    CALL FUN_00408830                   ; 0040e89c
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 0040e8a1
    MOV EAX,EDI                         ; 0040e8a4
    MOV ESP,EBP                         ; 0040e8a6
    POP EBP                             ; 0040e8a8
    POP EDI                             ; 0040e8a9
    POP ESI                             ; 0040e8aa
    POP EBX                             ; 0040e8ab
    RET                                 ; 0040e8ac


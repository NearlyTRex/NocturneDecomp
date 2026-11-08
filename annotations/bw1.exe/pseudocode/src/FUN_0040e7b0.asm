; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040e7b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   FUN_004207b0
;   FUN_004688a0
;   FUN_004837b0
;   FUN_00483850
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e7b0
        ;   Label: FUN_0040e7b0
    SUB ESP,0x30                        ; 0040e7b1
    MOV EBX,dword ptr [ESP + 0x38]      ; 0040e7b4
    CMP dword ptr [EBX + 0x33c],0x0     ; 0040e7b8
    JNZ 0x0040e7c8                      ; 0040e7bf
        ;   XREF to: 0040e7c8 (CONDITIONAL_JUMP)  ; LAB_0040e7c8
    XOR EAX,EAX                         ; 0040e7c1
    ADD ESP,0x30                        ; 0040e7c3
    POP EBX                             ; 0040e7c6
    RET                                 ; 0040e7c7
    PUSH EDI                            ; 0040e7c8
        ;   Label: LAB_0040e7c8
    PUSH ESI                            ; 0040e7c9
    LEA EAX,[EBX + 0x20]                ; 0040e7ca
    PUSH EAX                            ; 0040e7cd
    MOV ECX,dword ptr [0x00612560]      ; 0040e7ce | DAT_00612560
    PUSH ECX                            ; 0040e7d4
    CALL FUN_004837b0                   ; 0040e7d5
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 0040e7da
    PUSH 0x0                            ; 0040e7dd
    LEA EAX,[EBX + 0x30]                ; 0040e7df
    PUSH EAX                            ; 0040e7e2
    MOV ESI,dword ptr [0x00612560]      ; 0040e7e3 | DAT_00612560
    PUSH ESI                            ; 0040e7e9
    CALL FUN_00483850                   ; 0040e7ea
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 0040e7ef
    PUSH 0x0                            ; 0040e7f2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040e7f4
    PUSH EBX                            ; 0040e7fa
    LEA ESI,[ESP + 0x28]                ; 0040e7fb
    LEA EDI,[ESP + 0x10]                ; 0040e7ff
    CALL dword ptr [EAX + 0x1c]         ; 0040e803
    MOV ECX,0x6                         ; 0040e806
    ADD ESP,0x4                         ; 0040e80b
    LEA EAX,[ESP + 0xc]                 ; 0040e80e
    LEA ESI,[ESP + 0x24]                ; 0040e812
    PUSH EAX                            ; 0040e816
    MOVSD.REP ES:EDI,ESI                ; 0040e817
    CALL FUN_004207b0                   ; 0040e819
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 0040e81e
    MOV ESI,EAX                         ; 0040e821
    TEST EAX,EAX                        ; 0040e823
    JZ 0x0040e83a                       ; 0040e825
        ;   XREF to: 0040e83a (CONDITIONAL_JUMP)  ; LAB_0040e83a
    PUSH -0x1                           ; 0040e827
    ADD EBX,0x158                       ; 0040e829
    PUSH 0x0                            ; 0040e82f
    PUSH EBX                            ; 0040e831
    CALL FUN_004688a0                   ; 0040e832
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 0040e837
    MOV EDI,dword ptr [0x00612560]      ; 0040e83a | DAT_00612560
        ;   Label: LAB_0040e83a
    PUSH EDI                            ; 0040e840
    CALL thunk_FUN_005084b0             ; 0040e841
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 0040e846
    MOV EAX,ESI                         ; 0040e849
    POP ESI                             ; 0040e84b
    POP EDI                             ; 0040e84c
    ADD ESP,0x30                        ; 0040e84d
    POP EBX                             ; 0040e850
    RET                                 ; 0040e851


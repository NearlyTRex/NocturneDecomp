; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004bb510(int param_1,undefined4 *param_2)
;
;
; XREF[1]:
;   FUN_004bca60 at 004bcaa2
;
; Called Functions:
;   FUN_004bb570
;   FUN_004bb5f0
;   FUN_004bb6c0
;   FUN_004bbad0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb510
        ;   Label: FUN_004bb510
    PUSH ESI                            ; 004bb511
    MOV EBX,dword ptr [ESP + 0xc]       ; 004bb512
    MOV ESI,dword ptr [ESP + 0x10]      ; 004bb516
    PUSH EBX                            ; 004bb51a
    CALL FUN_004bb570                   ; 004bb51b
        ;   XREF to: 004bb570 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb570()
    ADD ESP,0x4                         ; 004bb520
    MOV EDX,dword ptr [ESI + 0xc]       ; 004bb523
    PUSH EDX                            ; 004bb526
    MOV ECX,dword ptr [ESI + 0x8]       ; 004bb527
    PUSH ECX                            ; 004bb52a
    PUSH EBX                            ; 004bb52b
    CALL FUN_004bbad0                   ; 004bb52c
        ;   XREF to: 004bbad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bbad0()
    ADD ESP,0xc                         ; 004bb531
    TEST EAX,EAX                        ; 004bb534
    JZ 0x004bb562                       ; 004bb536
        ;   XREF to: 004bb562 (CONDITIONAL_JUMP)  ; LAB_004bb562
    PUSH EDI                            ; 004bb538
    MOV EAX,dword ptr [EBX + 0x18]      ; 004bb539
    MOV dword ptr [ESI + 0x4],EAX       ; 004bb53c
    MOV EAX,dword ptr [EBX + 0x14]      ; 004bb53f
    MOV dword ptr [ESI],EAX             ; 004bb542
    MOV EAX,dword ptr [ESI + 0x8]       ; 004bb544
    MOV EDI,dword ptr [EBX + 0x14]      ; 004bb547
    PUSH ESI                            ; 004bb54a
    ADD EDI,EAX                         ; 004bb54b
    PUSH EBX                            ; 004bb54d
    MOV dword ptr [EBX + 0x14],EDI      ; 004bb54e
    CALL FUN_004bb5f0                   ; 004bb551
        ;   XREF to: 004bb5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb5f0()
    MOV EAX,0x1                         ; 004bb556
    ADD ESP,0x8                         ; 004bb55b
    POP EDI                             ; 004bb55e
    POP ESI                             ; 004bb55f
    POP EBX                             ; 004bb560
    RET                                 ; 004bb561
    PUSH EBX                            ; 004bb562
        ;   Label: LAB_004bb562
    CALL FUN_004bb6c0                   ; 004bb563
        ;   XREF to: 004bb6c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb6c0()
    ADD ESP,0x4                         ; 004bb568
    XOR EAX,EAX                         ; 004bb56b
    POP ESI                             ; 004bb56d
    POP EBX                             ; 004bb56e
    RET                                 ; 004bb56f


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e72e0(int param_1)
;
;
; XREF[3]:
;   FUN_004e7220 at 004e7226
;   FUN_004e7240 at 004e7246
;   FUN_0059f3c0 at 0059f3c7
;
; Called Functions:
;   FUN_005960c0
;   FUN_005c0344
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e72e0
        ;   Label: FUN_004e72e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e72e1
    MOV EDX,dword ptr [EBX + 0x24]      ; 004e72e5
    TEST EDX,EDX                        ; 004e72e8
    JNZ 0x004e72fc                      ; 004e72ea
        ;   XREF to: 004e72fc (CONDITIONAL_JUMP)  ; LAB_004e72fc
    MOV EAX,dword ptr [EBX + 0x28]      ; 004e72ec
    TEST EAX,EAX                        ; 004e72ef
    JNZ 0x004e731c                      ; 004e72f1
        ;   XREF to: 004e731c (CONDITIONAL_JUMP)  ; LAB_004e731c
    MOV dword ptr [EBX + 0x28],0x0      ; 004e72f3
    POP EBX                             ; 004e72fa
    RET                                 ; 004e72fb
    PUSH EDX                            ; 004e72fc
        ;   Label: LAB_004e72fc
    CALL FUN_005c09f0                   ; 004e72fd
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 004e7302
    MOV dword ptr [EBX + 0x24],0x0      ; 004e7305
    MOV EAX,dword ptr [EBX + 0x28]      ; 004e730c
    TEST EAX,EAX                        ; 004e730f
    JNZ 0x004e731c                      ; 004e7311
        ;   XREF to: 004e731c (CONDITIONAL_JUMP)  ; LAB_004e731c
    MOV dword ptr [EBX + 0x28],0x0      ; 004e7313
    POP EBX                             ; 004e731a
    RET                                 ; 004e731b
    PUSH 0x0                            ; 004e731c
        ;   Label: LAB_004e731c
    PUSH EAX                            ; 004e731e
    CALL FUN_005960c0                   ; 004e731f
        ;   XREF to: 005960c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005960c0()
    ADD ESP,0x8                         ; 004e7324
    PUSH EAX                            ; 004e7327
    CALL FUN_005c0344                   ; 004e7328
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 004e732d
    MOV dword ptr [EBX + 0x28],0x0      ; 004e7330
    POP EBX                             ; 004e7337
    RET                                 ; 004e7338


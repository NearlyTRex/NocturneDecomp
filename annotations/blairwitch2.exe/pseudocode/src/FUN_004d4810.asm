; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d4810(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006141f0
;
; Called Functions:
;   FUN_00427360
;   FUN_0048e340
;   FUN_005105b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4810
        ;   Label: FUN_004d4810
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4811
    PUSH dword ptr [ESP + 0xc]          ; 004d4815
    PUSH EBX                            ; 004d4819
    CALL FUN_005105b0                   ; 004d481a
        ;   XREF to: 005105b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005105b0()
    ADD ESP,0x8                         ; 004d481f
    LEA EAX,[EBX + 0x24348]             ; 004d4822
    PUSH EAX                            ; 004d4828
    MOV EDX,dword ptr [0x006141f0]      ; 004d4829 | DAT_006141f0
    PUSH EDX                            ; 004d482f
    CALL FUN_0048e340                   ; 004d4830
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 004d4835
    TEST EAX,EAX                        ; 004d4838
    JNZ 0x004d483e                      ; 004d483a
        ;   XREF to: 004d483e (CONDITIONAL_JUMP)  ; LAB_004d483e
    POP EBX                             ; 004d483c
    RET                                 ; 004d483d
    PUSH 0x1                            ; 004d483e
        ;   Label: LAB_004d483e
    PUSH 0xbf800000                     ; 004d4840
    PUSH 0x0                            ; 004d4845
    PUSH EBX                            ; 004d4847
    CALL FUN_00427360                   ; 004d4848
        ;   XREF to: 00427360 (UNCONDITIONAL_CALL)  ; undefined FUN_00427360()
    ADD ESP,0x10                        ; 004d484d
    POP EBX                             ; 004d4850
    RET                                 ; 004d4851


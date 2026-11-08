; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c36c0(undefined4 param_1)
;
; Local Variables:
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[1]:
;   FUN_005be2d0 at 005be2e9
;
; Referenced Globals:
;   void* PTR_WriteConsoleA_005c8674 = 001c92bc
;   void* PTR_FUN_0061f2a8 = 005bce04
;   void* PTR_FUN_0061f2ac = 005bce04
;   undefined4 DAT_0061f414
;   undefined4 DAT_0061f450
;
; Called Functions:
;   FUN_005bce04
;   FUN_005c4dcc
;   WriteConsoleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c36c0
        ;   Label: FUN_005c36c0
    SUB ESP,0x8                         ; 005c36c1
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c36c4
    MOV EDX,dword ptr [0x0061f450]      ; 005c36c8 | DAT_0061f450
    MOV byte ptr [ESP + 0x4],BL         ; 005c36ce
    TEST EDX,EDX                        ; 005c36d2
    JZ 0x005c36ee                       ; 005c36d4
        ;   XREF to: 005c36ee (CONDITIONAL_JUMP)  ; LAB_005c36ee
    PUSH 0x1                            ; 005c36d6
    CALL dword ptr [0x0061f414]         ; 005c36d8 | DAT_0061f414
    ADD ESP,0x4                         ; 005c36de
    PUSH EBX                            ; 005c36e1
    PUSH EAX                            ; 005c36e2
    CALL dword ptr [0x0061f450]         ; 005c36e3 | DAT_0061f450
    ADD ESP,0x8                         ; 005c36e9
    JMP 0x005c371f                      ; 005c36ec
        ;   XREF to: 005c371f (UNCONDITIONAL_JUMP)  ; LAB_005c371f
    PUSH 0x1                            ; 005c36ee
        ;   Label: LAB_005c36ee
    CALL dword ptr [0x0061f2a8]         ; 005c36f0 | PTR_FUN_0061f2a8
    ADD ESP,0x4                         ; 005c36f6
    CALL FUN_005c4dcc                   ; 005c36f9
        ;   XREF to: 005c4dcc (UNCONDITIONAL_CALL)  ; undefined FUN_005c4dcc()
    PUSH 0x0                            ; 005c36fe
    LEA EDX,[ESP + 0x4]                 ; 005c3700
    PUSH EDX                            ; 005c3704
    PUSH 0x1                            ; 005c3705
    LEA EDX,[ESP + 0x10]                ; 005c3707
    PUSH EDX                            ; 005c370b
    PUSH EAX                            ; 005c370c
    CALL dword ptr CS:[0x5c8674]        ; 005c370d | PTR_WriteConsoleA_005c8674
    PUSH 0x1                            ; 005c3714
    CALL dword ptr [0x0061f2ac]         ; 005c3716 | PTR_FUN_0061f2ac
    ADD ESP,0x4                         ; 005c371c
    MOV EAX,EBX                         ; 005c371f
        ;   Label: LAB_005c371f
    ADD ESP,0x8                         ; 005c3721
    POP EBX                             ; 005c3724
    RET                                 ; 005c3725


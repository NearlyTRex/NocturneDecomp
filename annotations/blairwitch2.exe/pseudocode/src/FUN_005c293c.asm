; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005c293c(int param_1)
;
;
; XREF[2]:
;   FUN_005bce2c at 005bce3f
;   FUN_005c29d8 at 005c29ed
;
; Referenced Globals:
;   undefined4 DAT_0061f754
;
; Called Functions:
;   FUN_005b98d0
;   FUN_005c4c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c293c
        ;   Label: FUN_005c293c
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c293d
    TEST EBX,EBX                        ; 005c2941
    JNZ 0x005c296c                      ; 005c2943
        ;   XREF to: 005c296c (CONDITIONAL_JUMP)  ; LAB_005c296c
    MOV EDX,dword ptr [0x0061f754]      ; 005c2945 | DAT_0061f754
    PUSH EDX                            ; 005c294b
    PUSH 0x1                            ; 005c294c
    CALL FUN_005b98d0                   ; 005c294e
        ;   XREF to: 005b98d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b98d0()
    ADD ESP,0x8                         ; 005c2953
    MOV EBX,EAX                         ; 005c2956
    TEST EAX,EAX                        ; 005c2958
    JZ 0x005c296c                       ; 005c295a
        ;   XREF to: 005c296c (CONDITIONAL_JUMP)  ; LAB_005c296c
    MOV EDX,dword ptr [0x0061f754]      ; 005c295c | DAT_0061f754
    MOV byte ptr [EAX + 0x52],0x1       ; 005c2962
    MOV dword ptr [EAX + 0xf0],EDX      ; 005c2966
    PUSH EBX                            ; 005c296c
        ;   Label: LAB_005c296c
    CALL FUN_005c4c80                   ; 005c296d
        ;   XREF to: 005c4c80 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4c80()
    ADD ESP,0x4                         ; 005c2972
    MOV EAX,EBX                         ; 005c2975
    POP EBX                             ; 005c2977
    RET                                 ; 005c2978


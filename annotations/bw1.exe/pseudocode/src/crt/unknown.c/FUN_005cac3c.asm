; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005cac3c(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c50fc at 005c510f
;   crt_unknown.c_FUN_005cacd8 at 005caced
;
; Referenced Globals:
;   undefined4 DAT_00626ad4
;
; Called Functions:
;   crt_memory.c_calloc_FUN_005c1cb0
;   crt_unknown.c_FUN_005ccf80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cac3c
        ;   Label: crt_unknown.c_FUN_005cac3c
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cac3d
    TEST EBX,EBX                        ; 005cac41
    JNZ 0x005cac6c                      ; 005cac43
        ;   XREF to: 005cac6c (CONDITIONAL_JUMP)  ; LAB_005cac6c
    MOV EDX,dword ptr [0x00626ad4]      ; 005cac45 | DAT_00626ad4
    PUSH EDX                            ; 005cac4b
    PUSH 0x1                            ; 005cac4c
    CALL crt_memory.c_calloc_FUN_005c1cb0 ; 005cac4e
        ;   XREF to: 005c1cb0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_calloc_FUN_005c1cb0()
    ADD ESP,0x8                         ; 005cac53
    MOV EBX,EAX                         ; 005cac56
    TEST EAX,EAX                        ; 005cac58
    JZ 0x005cac6c                       ; 005cac5a
        ;   XREF to: 005cac6c (CONDITIONAL_JUMP)  ; LAB_005cac6c
    MOV EDX,dword ptr [0x00626ad4]      ; 005cac5c | DAT_00626ad4
    MOV byte ptr [EAX + 0x52],0x1       ; 005cac62
    MOV dword ptr [EAX + 0xf0],EDX      ; 005cac66
    PUSH EBX                            ; 005cac6c
        ;   Label: LAB_005cac6c
    CALL crt_unknown.c_FUN_005ccf80     ; 005cac6d
        ;   XREF to: 005ccf80 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ccf80()
    ADD ESP,0x4                         ; 005cac72
    MOV EAX,EBX                         ; 005cac75
    POP EBX                             ; 005cac77
    RET                                 ; 005cac78


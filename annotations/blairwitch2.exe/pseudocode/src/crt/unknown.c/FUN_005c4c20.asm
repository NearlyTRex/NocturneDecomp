; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c4c20(void)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d0 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d4 = 005bce04
;   undefined4 DAT_026810b0
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2d0]         ; 005c4c20 | PTR_crt_unknown.c_FUN_005bce04_0061f2d0
        ;   Label: crt_unknown.c_FUN_005c4c20
    MOV EAX,[0x026810b0]                ; 005c4c26 | DAT_026810b0
    TEST EAX,EAX                        ; 005c4c2b
    JZ 0x005c4c3c                       ; 005c4c2d
        ;   XREF to: 005c4c3c (CONDITIONAL_JUMP)  ; LAB_005c4c3c
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c4c2f
        ;   Label: LAB_005c4c2f
    MOV byte ptr [EDX + 0x53],0x1       ; 005c4c32
    MOV EAX,dword ptr [EAX]             ; 005c4c36
    TEST EAX,EAX                        ; 005c4c38
    JNZ 0x005c4c2f                      ; 005c4c3a
        ;   XREF to: 005c4c2f (CONDITIONAL_JUMP)  ; LAB_005c4c2f
    CALL dword ptr [0x0061f2d4]         ; 005c4c3c | PTR_crt_unknown.c_FUN_005bce04_0061f2d4
        ;   Label: LAB_005c4c3c
    RET                                 ; 005c4c42


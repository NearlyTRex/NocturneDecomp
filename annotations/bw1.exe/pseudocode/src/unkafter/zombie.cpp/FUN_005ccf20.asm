; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005ccf20(void)
;
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626628 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_0062662c = 005c50d4
;   undefined4 DAT_02c9ffa0
;
; *****************************************************************************

section .text

    CALL dword ptr [0x00626628]         ; 005ccf20 | PTR_crt_unknown.c_FUN_005c50d4_00626628
        ;   Label: unkafter_zombie.cpp_FUN_005ccf20
    MOV EAX,[0x02c9ffa0]                ; 005ccf26 | DAT_02c9ffa0
    TEST EAX,EAX                        ; 005ccf2b
    JZ 0x005ccf3c                       ; 005ccf2d
        ;   XREF to: 005ccf3c (CONDITIONAL_JUMP)  ; LAB_005ccf3c
    MOV EDX,dword ptr [EAX + 0x8]       ; 005ccf2f
        ;   Label: LAB_005ccf2f
    MOV byte ptr [EDX + 0x53],0x1       ; 005ccf32
    MOV EAX,dword ptr [EAX]             ; 005ccf36
    TEST EAX,EAX                        ; 005ccf38
    JNZ 0x005ccf2f                      ; 005ccf3a
        ;   XREF to: 005ccf2f (CONDITIONAL_JUMP)  ; LAB_005ccf2f
    CALL dword ptr [0x0062662c]         ; 005ccf3c | PTR_crt_unknown.c_FUN_005c50d4_0062662c
        ;   Label: LAB_005ccf3c
    RET                                 ; 005ccf42


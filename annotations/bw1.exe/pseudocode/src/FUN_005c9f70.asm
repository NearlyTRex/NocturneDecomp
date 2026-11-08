; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c9f70(undefined4 param_1,undefined4 param_2)
;
;
; XREF[8]:
;   FUN_005c3148 at 005c3152
;   FUN_005c3197 at 005c31be
;   FUN_005c4f0f at 005c4f16
;   FUN_005c9fa0 at 005c9ff0
;   FUN_005ca4f0 at 005ca4f7
;   FUN_005ca924 at 005ca969
;   FUN_005ccd50 at 005ccd7b
;   FUN_005ccd88 at 005ccdd4
;
; Called Functions:
;   FUN_005c9f30
;   FUN_005ca420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9f70
        ;   Label: FUN_005c9f70
    MOV AX,DS                           ; 005c9f71
    AND EAX,0xffff                      ; 005c9f73
    PUSH EAX                            ; 005c9f78
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c9f79
    PUSH EDX                            ; 005c9f7d
    CALL FUN_005ca420                   ; 005c9f7e
        ;   XREF to: 005ca420 (UNCONDITIONAL_CALL)  ; undefined FUN_005ca420()
    ADD ESP,0x8                         ; 005c9f83
    TEST EAX,EAX                        ; 005c9f86
    JNZ 0x005c9f9c                      ; 005c9f88
        ;   XREF to: 005c9f9c (CONDITIONAL_JUMP)  ; LAB_005c9f9c
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c9f8a
    PUSH EBX                            ; 005c9f8e
    MOV ECX,dword ptr [ESP + 0xc]       ; 005c9f8f
    PUSH ECX                            ; 005c9f93
    CALL FUN_005c9f30                   ; 005c9f94
        ;   XREF to: 005c9f30 (UNCONDITIONAL_CALL)  ; undefined FUN_005c9f30()
    ADD ESP,0x8                         ; 005c9f99
    POP EBX                             ; 005c9f9c
        ;   Label: LAB_005c9f9c
    RET                                 ; 005c9f9d


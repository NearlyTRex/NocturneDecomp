; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00551080(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   FUN_00450c60 at 00453203
;   FUN_00489670 at 0048b339
;   FUN_00563060 at 005656db
;
; Called Functions:
;   FUN_0054d3a0
;   FUN_00551440
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00551080
        ;   Label: FUN_00551080
    PUSH 0x1                            ; 00551083
    MOV EDX,dword ptr [ESP + 0xc]       ; 00551085
    PUSH EDX                            ; 00551089
    CALL FUN_0054d3a0                   ; 0055108a
        ;   XREF to: 0054d3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d3a0()
    ADD ESP,0x8                         ; 0055108f
    TEST EAX,EAX                        ; 00551092
    JNZ 0x0055109a                      ; 00551094
        ;   XREF to: 0055109a (CONDITIONAL_JUMP)  ; LAB_0055109a
    ADD ESP,0x4                         ; 00551096
    RET                                 ; 00551099
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055109a
        ;   Label: LAB_0055109a
    MOV dword ptr [EAX + 0xfc],EDX      ; 0055109e
    MOV EDX,dword ptr [ESP + 0x10]      ; 005510a4
    MOV dword ptr [EAX + 0x100],EDX     ; 005510a8
    MOV EDX,dword ptr [ESP + 0x14]      ; 005510ae
    MOV dword ptr [ESP],EDX             ; 005510b2
    FILD dword ptr [ESP]                ; 005510b5
    FSTP float ptr [EAX + 0x104]        ; 005510b8
    CALL FUN_00551440                   ; 005510be
        ;   XREF to: 00551440 (UNCONDITIONAL_CALL)  ; undefined FUN_00551440()
    MOV EAX,0x1                         ; 005510c3
    ADD ESP,0x4                         ; 005510c8
    RET                                 ; 005510cb


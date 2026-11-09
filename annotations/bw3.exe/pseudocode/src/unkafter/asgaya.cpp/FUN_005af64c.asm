; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_asgaya_cpp_FUN_005af64c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060797d
;   undefined4 DAT_02d25924
;   undefined4 DAT_02d261e0
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;   unkafter_2d.cpp_FUN_005b0bb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005af64c
        ;   Label: unkafter_asgaya.cpp_FUN_005af64c
    PUSH EBP                            ; 005af64d
    CALL unkafter_2d.cpp_FUN_005b0bb0   ; 005af64e
        ;   XREF to: 005b0bb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b0bb0()
    MOV EDX,dword ptr [0x02d25924]      ; 005af653 | DAT_02d25924
    TEST EDX,EDX                        ; 005af659
    JZ 0x005af66e                       ; 005af65b
        ;   XREF to: 005af66e (CONDITIONAL_JUMP)  ; LAB_005af66e
    PUSH EDX                            ; 005af65d
    CALL crt_unknown.c_FUN_005a3770     ; 005af65e
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR ECX,ECX                         ; 005af663
    ADD ESP,0x4                         ; 005af665
    MOV dword ptr [0x02d25924],ECX      ; 005af668 | DAT_02d25924
    MOV ESI,dword ptr [0x02d261e0]      ; 005af66e | DAT_02d261e0
        ;   Label: LAB_005af66e
    TEST ESI,ESI                        ; 005af674
    JZ 0x005af689                       ; 005af676
        ;   XREF to: 005af689 (CONDITIONAL_JUMP)  ; LAB_005af689
    PUSH ESI                            ; 005af678
    CALL crt_unknown.c_FUN_005a3770     ; 005af679
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EBP,EBP                         ; 005af67e
    ADD ESP,0x4                         ; 005af680
    MOV dword ptr [0x02d261e0],EBP      ; 005af683 | DAT_02d261e0
    MOV EAX,[0x0060797d]                ; 005af689 | DAT_0060797d
        ;   Label: LAB_005af689
    TEST EAX,EAX                        ; 005af68e
    JZ 0x005af69a                       ; 005af690
        ;   XREF to: 005af69a (CONDITIONAL_JUMP)  ; LAB_005af69a
    PUSH EAX                            ; 005af692
    CALL dword ptr CS:[0x5b3564]        ; 005af693
    POP EBP                             ; 005af69a
        ;   Label: LAB_005af69a
    POP ESI                             ; 005af69b
    RET                                 ; 005af69c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005ad64c(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a73c8 at 005a7445
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ad64c
        ;   Label: crt_unknown.c_FUN_005ad64c
    MOV DX,word ptr [EAX + 0x8]         ; 005ad650
    AND DH,0x7f                         ; 005ad654
    CMP DX,0x7fff                       ; 005ad657
    JNZ 0x005ad678                      ; 005ad65c
        ;   XREF to: 005ad678 (CONDITIONAL_JUMP)  ; LAB_005ad678
    CMP dword ptr [EAX + 0x4],0x80000000 ; 005ad65e
    JNZ 0x005ad672                      ; 005ad665
        ;   XREF to: 005ad672 (CONDITIONAL_JUMP)  ; LAB_005ad672
    CMP dword ptr [EAX],0x0             ; 005ad667
    JNZ 0x005ad672                      ; 005ad66a
        ;   XREF to: 005ad672 (CONDITIONAL_JUMP)  ; LAB_005ad672
    MOV EAX,0x3                         ; 005ad66c
    RET                                 ; 005ad671
    MOV EAX,0x2                         ; 005ad672
        ;   Label: LAB_005ad672
    RET                                 ; 005ad677
    TEST word ptr [EAX + 0x8],0x7fff    ; 005ad678
        ;   Label: LAB_005ad678
    JNZ 0x005ad694                      ; 005ad67e
        ;   XREF to: 005ad694 (CONDITIONAL_JUMP)  ; LAB_005ad694
    CMP dword ptr [EAX + 0x4],0x0       ; 005ad680
    JNZ 0x005ad68e                      ; 005ad684
        ;   XREF to: 005ad68e (CONDITIONAL_JUMP)  ; LAB_005ad68e
    CMP dword ptr [EAX],0x0             ; 005ad686
    JNZ 0x005ad68e                      ; 005ad689
        ;   XREF to: 005ad68e (CONDITIONAL_JUMP)  ; LAB_005ad68e
    XOR EAX,EAX                         ; 005ad68b
    RET                                 ; 005ad68d
    MOV EAX,0x4                         ; 005ad68e
        ;   Label: LAB_005ad68e
    RET                                 ; 005ad693
    MOV EAX,0x1                         ; 005ad694
        ;   Label: LAB_005ad694
    RET                                 ; 005ad699


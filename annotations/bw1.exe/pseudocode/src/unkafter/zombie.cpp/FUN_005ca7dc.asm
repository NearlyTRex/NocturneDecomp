; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_zombie_cpp_FUN_005ca7dc(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c4558 at 005c45d5
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ca7dc
        ;   Label: unkafter_zombie.cpp_FUN_005ca7dc
    MOV DX,word ptr [EAX + 0x8]         ; 005ca7e0
    AND DH,0x7f                         ; 005ca7e4
    CMP DX,0x7fff                       ; 005ca7e7
    JNZ 0x005ca808                      ; 005ca7ec
        ;   XREF to: 005ca808 (CONDITIONAL_JUMP)  ; LAB_005ca808
    CMP dword ptr [EAX + 0x4],0x80000000 ; 005ca7ee
    JNZ 0x005ca802                      ; 005ca7f5
        ;   XREF to: 005ca802 (CONDITIONAL_JUMP)  ; LAB_005ca802
    CMP dword ptr [EAX],0x0             ; 005ca7f7
    JNZ 0x005ca802                      ; 005ca7fa
        ;   XREF to: 005ca802 (CONDITIONAL_JUMP)  ; LAB_005ca802
    MOV EAX,0x3                         ; 005ca7fc
    RET                                 ; 005ca801
    MOV EAX,0x2                         ; 005ca802
        ;   Label: LAB_005ca802
    RET                                 ; 005ca807
    TEST word ptr [EAX + 0x8],0x7fff    ; 005ca808
        ;   Label: LAB_005ca808
    JNZ 0x005ca824                      ; 005ca80e
        ;   XREF to: 005ca824 (CONDITIONAL_JUMP)  ; LAB_005ca824
    CMP dword ptr [EAX + 0x4],0x0       ; 005ca810
    JNZ 0x005ca81e                      ; 005ca814
        ;   XREF to: 005ca81e (CONDITIONAL_JUMP)  ; LAB_005ca81e
    CMP dword ptr [EAX],0x0             ; 005ca816
    JNZ 0x005ca81e                      ; 005ca819
        ;   XREF to: 005ca81e (CONDITIONAL_JUMP)  ; LAB_005ca81e
    XOR EAX,EAX                         ; 005ca81b
    RET                                 ; 005ca81d
    MOV EAX,0x4                         ; 005ca81e
        ;   Label: LAB_005ca81e
    RET                                 ; 005ca823
    MOV EAX,0x1                         ; 005ca824
        ;   Label: LAB_005ca824
    RET                                 ; 005ca829


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_morph_cpp_FUN_005c24dc(int *param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bc288 at 005bc305
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c24dc
        ;   Label: unkafter_morph.cpp_FUN_005c24dc
    MOV DX,word ptr [EAX + 0x8]         ; 005c24e0
    AND DH,0x7f                         ; 005c24e4
    CMP DX,0x7fff                       ; 005c24e7
    JNZ 0x005c2508                      ; 005c24ec
        ;   XREF to: 005c2508 (CONDITIONAL_JUMP)  ; LAB_005c2508
    CMP dword ptr [EAX + 0x4],0x80000000 ; 005c24ee
    JNZ 0x005c2502                      ; 005c24f5
        ;   XREF to: 005c2502 (CONDITIONAL_JUMP)  ; LAB_005c2502
    CMP dword ptr [EAX],0x0             ; 005c24f7
    JNZ 0x005c2502                      ; 005c24fa
        ;   XREF to: 005c2502 (CONDITIONAL_JUMP)  ; LAB_005c2502
    MOV EAX,0x3                         ; 005c24fc
    RET                                 ; 005c2501
    MOV EAX,0x2                         ; 005c2502
        ;   Label: LAB_005c2502
    RET                                 ; 005c2507
    TEST word ptr [EAX + 0x8],0x7fff    ; 005c2508
        ;   Label: LAB_005c2508
    JNZ 0x005c2524                      ; 005c250e
        ;   XREF to: 005c2524 (CONDITIONAL_JUMP)  ; LAB_005c2524
    CMP dword ptr [EAX + 0x4],0x0       ; 005c2510
    JNZ 0x005c251e                      ; 005c2514
        ;   XREF to: 005c251e (CONDITIONAL_JUMP)  ; LAB_005c251e
    CMP dword ptr [EAX],0x0             ; 005c2516
    JNZ 0x005c251e                      ; 005c2519
        ;   XREF to: 005c251e (CONDITIONAL_JUMP)  ; LAB_005c251e
    XOR EAX,EAX                         ; 005c251b
    RET                                 ; 005c251d
    MOV EAX,0x4                         ; 005c251e
        ;   Label: LAB_005c251e
    RET                                 ; 005c2523
    MOV EAX,0x1                         ; 005c2524
        ;   Label: LAB_005c2524
    RET                                 ; 005c2529


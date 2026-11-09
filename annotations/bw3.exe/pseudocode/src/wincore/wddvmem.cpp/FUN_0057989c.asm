; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void wincore_wddvmem_cpp_FUN_0057989c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b010
;   undefined4 DAT_0072ffac
;   undefined4 DAT_02d0bcf0
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0057989c
        ;   Label: wincore_wddvmem.cpp_FUN_0057989c
    PUSH ESI                            ; 005798a0
    PUSH EBP                            ; 005798a1
    MOV EDX,dword ptr [0x0060b010]      ; 005798a2 | DAT_0060b010
    TEST EDX,EDX                        ; 005798a8
    JNZ 0x005798b9                      ; 005798aa
        ;   XREF to: 005798b9 (CONDITIONAL_JUMP)  ; LAB_005798b9
    MOV ESI,dword ptr [0x02d0bcf0]      ; 005798ac | DAT_02d0bcf0
    TEST ESI,ESI                        ; 005798b2
    JNZ 0x005798d9                      ; 005798b4
        ;   XREF to: 005798d9 (CONDITIONAL_JUMP)  ; LAB_005798d9
    POP EBP                             ; 005798b6
    POP ESI                             ; 005798b7
    RET                                 ; 005798b8
    PUSH EBX                            ; 005798b9
        ;   Label: LAB_005798b9
    PUSH EDX                            ; 005798ba
    CALL crt_unknown.c_FUN_005a3770     ; 005798bb
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EBX,EBX                         ; 005798c0
    ADD ESP,0x4                         ; 005798c2
    MOV dword ptr [0x0060b010],EBX      ; 005798c5 | DAT_0060b010
    POP EBX                             ; 005798cb
    MOV ESI,dword ptr [0x02d0bcf0]      ; 005798cc | DAT_02d0bcf0
    TEST ESI,ESI                        ; 005798d2
    JNZ 0x005798d9                      ; 005798d4
        ;   XREF to: 005798d9 (CONDITIONAL_JUMP)  ; LAB_005798d9
    POP EBP                             ; 005798d6
    POP ESI                             ; 005798d7
    RET                                 ; 005798d8
    PUSH ESI                            ; 005798d9
        ;   Label: LAB_005798d9
    CALL crt_unknown.c_FUN_005a3770     ; 005798da
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    XOR EBP,EBP                         ; 005798df
    ADD ESP,0x4                         ; 005798e1
    MOV dword ptr [0x0072ffac],EBP      ; 005798e4 | DAT_0072ffac
    POP EBP                             ; 005798ea
    POP ESI                             ; 005798eb
    RET                                 ; 005798ec


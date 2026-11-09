; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c0a64(int param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005bce18 at 005bce1d
;   unkafter_morph.cpp_FUN_005c2854 at 005c2871
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2d8 = 005bce04
;   void* PTR_crt_unknown.c_FUN_005bce04_0061f2dc = 005bce04
;   undefined4 DAT_0061f4d8
;   undefined4 DAT_0061f4dc
;
; Called Functions:
;   crt_unknown.c_FUN_005bce04
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0a64
        ;   Label: crt_unknown.c_FUN_005c0a64
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c0a65
    CALL dword ptr [0x0061f2d8]         ; 005c0a69 | PTR_crt_unknown.c_FUN_005bce04_0061f2d8
    TEST EBX,EBX                        ; 005c0a6f
    JLE 0x005c0a88                      ; 005c0a71
        ;   XREF to: 005c0a88 (CONDITIONAL_JUMP)  ; LAB_005c0a88
    CMP EBX,dword ptr [0x0061f4dc]      ; 005c0a73 | DAT_0061f4dc
    JGE 0x005c0a88                      ; 005c0a79
        ;   XREF to: 005c0a88 (CONDITIONAL_JUMP)  ; LAB_005c0a88
    MOV EDX,dword ptr [0x0061f4d8]      ; 005c0a7b | DAT_0061f4d8
    MOV dword ptr [EDX + EBX*0x4],0x0   ; 005c0a81
    CALL dword ptr [0x0061f2dc]         ; 005c0a88 | PTR_crt_unknown.c_FUN_005bce04_0061f2dc
        ;   Label: LAB_005c0a88
    POP EBX                             ; 005c0a8e
    RET                                 ; 005c0a8f


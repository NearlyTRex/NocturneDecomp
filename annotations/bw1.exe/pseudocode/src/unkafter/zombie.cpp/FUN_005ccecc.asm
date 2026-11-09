; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005ccecc(int param_1)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cad34 at 005cad5a
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50d4_00626628 = 005c50d4
;   void* PTR_crt_unknown.c_FUN_005c50d4_0062662c = 005c50d4
;   undefined4 DAT_02c9ffa0
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;   crt_unknown.c_FUN_005c50d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ccecc
        ;   Label: unkafter_zombie.cpp_FUN_005ccecc
    PUSH ESI                            ; 005ccecd
    PUSH EDI                            ; 005ccece
    MOV EDI,dword ptr [ESP + 0x10]      ; 005ccecf
    CALL dword ptr [0x00626628]         ; 005cced3 | PTR_crt_unknown.c_FUN_005c50d4_00626628
    MOV EBX,dword ptr [0x02c9ffa0]      ; 005cced9 | DAT_02c9ffa0
    MOV ESI,0x2c9ffa0                   ; 005ccedf
    TEST EBX,EBX                        ; 005ccee4
    JZ 0x005ccf16                       ; 005ccee6
        ;   XREF to: 005ccf16 (CONDITIONAL_JUMP)  ; LAB_005ccf16
    CMP EDI,dword ptr [EBX + 0x4]       ; 005ccee8
        ;   Label: LAB_005ccee8
    JNZ 0x005ccf0e                      ; 005cceeb
        ;   XREF to: 005ccf0e (CONDITIONAL_JUMP)  ; LAB_005ccf0e
    CMP dword ptr [EBX + 0xc],0x0       ; 005cceed
    JZ 0x005cceff                       ; 005ccef1
        ;   XREF to: 005cceff (CONDITIONAL_JUMP)  ; LAB_005cceff
    MOV EDI,dword ptr [EBX + 0x8]       ; 005ccef3
    PUSH EDI                            ; 005ccef6
    CALL crt_unknown.c_FUN_005c09f0     ; 005ccef7
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005ccefc
    MOV EDI,dword ptr [EBX]             ; 005cceff
        ;   Label: LAB_005cceff
    PUSH EBX                            ; 005ccf01
    MOV dword ptr [ESI],EDI             ; 005ccf02 | DAT_02c9ffa0
    CALL crt_unknown.c_FUN_005c09f0     ; 005ccf04
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 005ccf09
    JMP 0x005ccf16                      ; 005ccf0c
        ;   XREF to: 005ccf16 (UNCONDITIONAL_JUMP)  ; LAB_005ccf16
    MOV ESI,EBX                         ; 005ccf0e
        ;   Label: LAB_005ccf0e
    MOV EBX,dword ptr [EBX]             ; 005ccf10
    TEST EBX,EBX                        ; 005ccf12
    JNZ 0x005ccee8                      ; 005ccf14
        ;   XREF to: 005ccee8 (CONDITIONAL_JUMP)  ; LAB_005ccee8
    CALL dword ptr [0x0062662c]         ; 005ccf16 | PTR_crt_unknown.c_FUN_005c50d4_0062662c
        ;   Label: LAB_005ccf16
    POP EDI                             ; 005ccf1c
    POP ESI                             ; 005ccf1d
    POP EBX                             ; 005ccf1e
    RET                                 ; 005ccf1f


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005bfbd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4)
;
;
; XREF[1]:
;   crt_stdlib.c__qsort_FUN_005bfc68 at 005bfed5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfbd0
        ;   Label: crt_unknown.c_FUN_005bfbd0
    PUSH ESI                            ; 005bfbd1
    PUSH EDI                            ; 005bfbd2
    PUSH ES                             ; 005bfbd3
    PUSH FS                             ; 005bfbd4
    PUSH GS                             ; 005bfbd6
    PUSH EBP                            ; 005bfbd8
    MOV EBP,dword ptr [ESP + 0x20]      ; 005bfbd9
    MOV ESI,dword ptr [ESP + 0x28]      ; 005bfbdd
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005bfbe1
    MOV EDX,dword ptr [ESP + 0x24]      ; 005bfbe5
    PUSH EDX                            ; 005bfbe9
    PUSH EBP                            ; 005bfbea
    CALL EDI                            ; 005bfbeb
    ADD ESP,0x8                         ; 005bfbed
    TEST EAX,EAX                        ; 005bfbf0
    JLE 0x005bfc10                      ; 005bfbf2
        ;   XREF to: 005bfc10 (CONDITIONAL_JUMP)  ; LAB_005bfc10
    PUSH ESI                            ; 005bfbf4
    PUSH EBP                            ; 005bfbf5
    CALL EDI                            ; 005bfbf6
    ADD ESP,0x8                         ; 005bfbf8
    TEST EAX,EAX                        ; 005bfbfb
    JLE 0x005bfc1b                      ; 005bfbfd
        ;   XREF to: 005bfc1b (CONDITIONAL_JUMP)  ; LAB_005bfc1b
    PUSH ESI                            ; 005bfbff
    MOV ECX,dword ptr [ESP + 0x28]      ; 005bfc00
    PUSH ECX                            ; 005bfc04
    CALL EDI                            ; 005bfc05
    ADD ESP,0x8                         ; 005bfc07
    TEST EAX,EAX                        ; 005bfc0a
    JLE 0x005bfc2e                      ; 005bfc0c
        ;   XREF to: 005bfc2e (CONDITIONAL_JUMP)  ; LAB_005bfc2e
    JMP 0x005bfc32                      ; 005bfc0e
        ;   XREF to: 005bfc32 (UNCONDITIONAL_JUMP)  ; LAB_005bfc32
    PUSH ESI                            ; 005bfc10
        ;   Label: LAB_005bfc10
    PUSH EBP                            ; 005bfc11
    CALL EDI                            ; 005bfc12
    ADD ESP,0x8                         ; 005bfc14
    TEST EAX,EAX                        ; 005bfc17
    JL 0x005bfc1f                       ; 005bfc19
        ;   XREF to: 005bfc1f (CONDITIONAL_JUMP)  ; LAB_005bfc1f
    MOV EAX,EBP                         ; 005bfc1b
        ;   Label: LAB_005bfc1b
    JMP 0x005bfc36                      ; 005bfc1d
        ;   XREF to: 005bfc36 (UNCONDITIONAL_JUMP)  ; LAB_005bfc36
    PUSH ESI                            ; 005bfc1f
        ;   Label: LAB_005bfc1f
    MOV EBX,dword ptr [ESP + 0x28]      ; 005bfc20
    PUSH EBX                            ; 005bfc24
    CALL EDI                            ; 005bfc25
    ADD ESP,0x8                         ; 005bfc27
    TEST EAX,EAX                        ; 005bfc2a
    JLE 0x005bfc32                      ; 005bfc2c
        ;   XREF to: 005bfc32 (CONDITIONAL_JUMP)  ; LAB_005bfc32
    MOV EAX,ESI                         ; 005bfc2e
        ;   Label: LAB_005bfc2e
    JMP 0x005bfc36                      ; 005bfc30
        ;   XREF to: 005bfc36 (UNCONDITIONAL_JUMP)  ; LAB_005bfc36
    MOV EAX,dword ptr [ESP + 0x24]      ; 005bfc32
        ;   Label: LAB_005bfc32
    POP EBP                             ; 005bfc36
        ;   Label: LAB_005bfc36
    POP GS                              ; 005bfc37
    POP FS                              ; 005bfc39
    POP ES                              ; 005bfc3b
    POP EDI                             ; 005bfc3c
    POP ESI                             ; 005bfc3d
    POP EBX                             ; 005bfc3e
    RET                                 ; 005bfc3f


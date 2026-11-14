; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005b07f0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b083d at 005b085d
;
; Referenced Globals:
;   undefined4 DAT_005daf55
;   undefined4 DAT_00607ef4
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005a5d70
;   crt_unknown.c_FUN_005b0eb0
;   crt_unknown.c_FUN_005b0ee0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005b07f0
        ;   Label: crt_unknown.c_FUN_005b07f0
    MOV EBP,ESP                         ; 005b07f1
    PUSH EBX                            ; 005b07f3
    PUSH 0x2                            ; 005b07f4
    CALL crt_unknown.c_FUN_005b0eb0     ; 005b07f6
        ;   XREF to: 005b0eb0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0eb0()
    ADD ESP,0x4                         ; 005b07fb
    MOV EBX,EAX                         ; 005b07fe
    PUSH EAX                            ; 005b0800
    MOV EAX,dword ptr [EBP + 0x8]       ; 005b0801
    MOV EDX,dword ptr [EAX*0x4 + 0x607ef4] ; 005b0804 | DAT_00607ef4
    PUSH EDX                            ; 005b080b
    CALL crt_unknown.c_FUN_005b0ee0     ; 005b080c
        ;   XREF to: 005b0ee0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0ee0()
    ADD ESP,0x8                         ; 005b0811
    PUSH EBX                            ; 005b0814
    PUSH 0x5daf55                       ; 005b0815 | DAT_005daf55
    CALL crt_unknown.c_FUN_005b0ee0     ; 005b081a
        ;   XREF to: 005b0ee0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0ee0()
    ADD ESP,0x8                         ; 005b081f
    PUSH EBX                            ; 005b0822
    MOV ECX,dword ptr [EBP + 0xc]       ; 005b0823
    PUSH ECX                            ; 005b0826
    CALL crt_unknown.c_FUN_005b0ee0     ; 005b0827
        ;   XREF to: 005b0ee0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b0ee0()
    ADD ESP,0x8                         ; 005b082c
    PUSH EBX                            ; 005b082f
    PUSH 0xa                            ; 005b0830
    CALL crt_stdio.c_fputc_FUN_005a5d70 ; 005b0832
        ;   XREF to: 005a5d70 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005a5d70(int character, _FILE * file)
    ADD ESP,0x8                         ; 005b0837
    POP EBX                             ; 005b083a
    POP EBP                             ; 005b083b
    RET                                 ; 005b083c


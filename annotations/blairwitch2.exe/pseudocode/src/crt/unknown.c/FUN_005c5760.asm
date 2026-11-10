; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c5760(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c57ad at 005c57cd
;
; Referenced Globals:
;   undefined4 DAT_005f20f1
;   undefined4 DAT_0061f7d0
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005bab40
;   crt_unknown.c_FUN_005c5e20
;   crt_unknown.c_FUN_005c5e50
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c5760
        ;   Label: crt_unknown.c_FUN_005c5760
    MOV EBP,ESP                         ; 005c5761
    PUSH EBX                            ; 005c5763
    PUSH 0x2                            ; 005c5764
    CALL crt_unknown.c_FUN_005c5e20     ; 005c5766
        ;   XREF to: 005c5e20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5e20()
    ADD ESP,0x4                         ; 005c576b
    MOV EBX,EAX                         ; 005c576e
    PUSH EAX                            ; 005c5770
    MOV EAX,dword ptr [EBP + 0x8]       ; 005c5771
    MOV EDX,dword ptr [EAX*0x4 + 0x61f7d0] ; 005c5774 | DAT_0061f7d0
    PUSH EDX                            ; 005c577b
    CALL crt_unknown.c_FUN_005c5e50     ; 005c577c
        ;   XREF to: 005c5e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5e50()
    ADD ESP,0x8                         ; 005c5781
    PUSH EBX                            ; 005c5784
    PUSH 0x5f20f1                       ; 005c5785 | DAT_005f20f1
    CALL crt_unknown.c_FUN_005c5e50     ; 005c578a
        ;   XREF to: 005c5e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5e50()
    ADD ESP,0x8                         ; 005c578f
    PUSH EBX                            ; 005c5792
    MOV ECX,dword ptr [EBP + 0xc]       ; 005c5793
    PUSH ECX                            ; 005c5796
    CALL crt_unknown.c_FUN_005c5e50     ; 005c5797
        ;   XREF to: 005c5e50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c5e50()
    ADD ESP,0x8                         ; 005c579c
    PUSH EBX                            ; 005c579f
    PUSH 0xa                            ; 005c57a0
    CALL crt_stdio.c_fputc_FUN_005bab40 ; 005c57a2
        ;   XREF to: 005bab40 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005bab40()
    ADD ESP,0x8                         ; 005c57a7
    POP EBX                             ; 005c57aa
    POP EBP                             ; 005c57ab
    RET                                 ; 005c57ac


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_00607958()
;
;
; XREF[1]:
;   crt_time.c_determine_dst_status_FUN_006079b4 at 006079de
;
; Called Functions:
;   crt_unknown.c_FUN_00607858
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607958
        ;   Label: crt_unknown.c_FUN_00607958
    PUSH ESI                            ; 00607959
    PUSH EBP                            ; 0060795a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0060795b
    MOV ESI,dword ptr [ESP + 0x14]      ; 0060795f
    CMP dword ptr [EAX + 0x20],0x0      ; 00607963
    JNZ 0x00607984                      ; 00607967
        ;   XREF to: 00607984 (CONDITIONAL_JUMP)  ; LAB_00607984
    CMP dword ptr [ESI + 0x20],0x0      ; 00607969
    JNZ 0x00607984                      ; 0060796d
        ;   XREF to: 00607984 (CONDITIONAL_JUMP)  ; LAB_00607984
    MOV EBX,dword ptr [EAX + 0x10]      ; 0060796f
    MOV ECX,dword ptr [ESI + 0x10]      ; 00607972
    CMP EBX,ECX                         ; 00607975
    JLE 0x00607982                      ; 00607977
        ;   XREF to: 00607982 (CONDITIONAL_JUMP)  ; LAB_00607982
    MOV EAX,0x1                         ; 00607979
    POP EBP                             ; 0060797e
    POP ESI                             ; 0060797f
    POP EBX                             ; 00607980
    RET                                 ; 00607981
    JL 0x006079ab                       ; 00607982
        ;   XREF to: 006079ab (CONDITIONAL_JUMP)  ; LAB_006079ab
        ;   Label: LAB_00607982
    MOV EBP,dword ptr [ESP + 0x18]      ; 00607984
        ;   Label: LAB_00607984
    PUSH EBP                            ; 00607988
    PUSH EAX                            ; 00607989
    CALL crt_unknown.c_FUN_00607858     ; 0060798a
        ;   XREF to: 00607858 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00607858()
    ADD ESP,0x8                         ; 0060798f
    PUSH EBP                            ; 00607992
    PUSH ESI                            ; 00607993
    MOV EBX,EAX                         ; 00607994
    CALL crt_unknown.c_FUN_00607858     ; 00607996
        ;   XREF to: 00607858 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00607858()
    ADD ESP,0x8                         ; 0060799b
    CMP EBX,EAX                         ; 0060799e
    JLE 0x006079ab                      ; 006079a0
        ;   XREF to: 006079ab (CONDITIONAL_JUMP)  ; LAB_006079ab
    MOV EAX,0x1                         ; 006079a2
    POP EBP                             ; 006079a7
    POP ESI                             ; 006079a8
    POP EBX                             ; 006079a9
    RET                                 ; 006079aa
    XOR EAX,EAX                         ; 006079ab
        ;   Label: LAB_006079ab
    POP EBP                             ; 006079ad
    POP ESI                             ; 006079ae
    POP EBX                             ; 006079af
    RET                                 ; 006079b0


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005ae798(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005a9410 at 005a9418
;
; Referenced Globals:
;   void* PTR_GetConsoleMode_005b3580 = 001b3e1c
;   void* PTR_SetConsoleMode_005b3624 = 001b4134
;   undefined4 DAT_0060796c
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a4 = 005a7f44
;   void* PTR_crt_unknown.c_FUN_005a7f44_006079a8 = 005a7f44
;   undefined4 DAT_00607b18
;   undefined4 DAT_00607b4c
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f44
;   crt_unknown.c_FUN_005ae680
;   crt_unknown.c_FUN_005afe50
;   GetConsoleMode
;   SetConsoleMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae798
        ;   Label: crt_unknown.c_FUN_005ae798
    PUSH ESI                            ; 005ae799
    SUB ESP,0x4                         ; 005ae79a
    MOV EAX,[0x0060796c]                ; 005ae79d | DAT_0060796c
    TEST EAX,EAX                        ; 005ae7a2
    JZ 0x005ae7b0                       ; 005ae7a4
        ;   XREF to: 005ae7b0 (CONDITIONAL_JUMP)  ; LAB_005ae7b0
    XOR ESI,ESI                         ; 005ae7a6
    MOV dword ptr [0x0060796c],ESI      ; 005ae7a8 | DAT_0060796c
    JMP 0x005ae81b                      ; 005ae7ae
        ;   XREF to: 005ae81b (UNCONDITIONAL_JUMP)  ; LAB_005ae81b
    CMP dword ptr [0x00607b4c],0x0      ; 005ae7b0 | DAT_00607b4c
        ;   Label: LAB_005ae7b0
    JZ 0x005ae7d1                       ; 005ae7b7
        ;   XREF to: 005ae7d1 (CONDITIONAL_JUMP)  ; LAB_005ae7d1
    PUSH EAX                            ; 005ae7b9
    CALL dword ptr [0x00607b18]         ; 005ae7ba | DAT_00607b18
    ADD ESP,0x4                         ; 005ae7c0
    PUSH EAX                            ; 005ae7c3
    CALL dword ptr [0x00607b4c]         ; 005ae7c4 | DAT_00607b4c
    ADD ESP,0x4                         ; 005ae7ca
    MOV ESI,EAX                         ; 005ae7cd
    JMP 0x005ae819                      ; 005ae7cf
        ;   XREF to: 005ae819 (UNCONDITIONAL_JUMP)  ; LAB_005ae819
    PUSH EAX                            ; 005ae7d1
        ;   Label: LAB_005ae7d1
    CALL dword ptr [0x006079a4]         ; 005ae7d2 | PTR_crt_unknown.c_FUN_005a7f44_006079a4
    ADD ESP,0x4                         ; 005ae7d8
    CALL crt_unknown.c_FUN_005afe50     ; 005ae7db
        ;   XREF to: 005afe50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afe50()
    MOV EBX,EAX                         ; 005ae7e0
    MOV EAX,ESP                         ; 005ae7e2
    PUSH EAX                            ; 005ae7e4
    PUSH EBX                            ; 005ae7e5
    CALL dword ptr CS:[0x5b3580]        ; 005ae7e6 | PTR_GetConsoleMode_005b3580
    PUSH 0x0                            ; 005ae7ed
    PUSH EBX                            ; 005ae7ef
    CALL dword ptr CS:[0x5b3624]        ; 005ae7f0 | PTR_SetConsoleMode_005b3624
    PUSH EBX                            ; 005ae7f7
    CALL crt_unknown.c_FUN_005ae680     ; 005ae7f8
        ;   XREF to: 005ae680 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ae680()
    ADD ESP,0x4                         ; 005ae7fd
    MOV ECX,dword ptr [ESP]             ; 005ae800
    PUSH ECX                            ; 005ae803
    PUSH EBX                            ; 005ae804
    MOV ESI,EAX                         ; 005ae805
    CALL dword ptr CS:[0x5b3624]        ; 005ae807 | PTR_SetConsoleMode_005b3624
    PUSH 0x0                            ; 005ae80e
    CALL dword ptr [0x006079a8]         ; 005ae810 | PTR_crt_unknown.c_FUN_005a7f44_006079a8
    ADD ESP,0x4                         ; 005ae816
    MOV EAX,ESI                         ; 005ae819
        ;   Label: LAB_005ae819
    ADD ESP,0x4                         ; 005ae81b
        ;   Label: LAB_005ae81b
    POP ESI                             ; 005ae81e
    POP EBX                             ; 005ae81f
    RET                                 ; 005ae820


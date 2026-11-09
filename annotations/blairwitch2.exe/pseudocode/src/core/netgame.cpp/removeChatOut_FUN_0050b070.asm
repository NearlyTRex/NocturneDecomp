; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_removeChatOut_FUN_0050b070(int index)
;
; Parameters:
; int              Stack[0x4]:4   index
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d51050
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_string.c_memmove_FUN_005ba1f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b070
        ;   Label: core_netgame.cpp_removeChatOut_FUN_0050b070
    PUSH EDI                            ; 0050b071
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050b072
    TEST EBX,EBX                        ; 0050b076
    JL 0x0050b0db                       ; 0050b078
        ;   XREF to: 0050b0db (CONDITIONAL_JUMP)  ; LAB_0050b0db
    CMP EBX,dword ptr [0x01d51050]      ; 0050b07a | DAT_01d51050
    JGE 0x0050b0db                      ; 0050b080
        ;   XREF to: 0050b0db (CONDITIONAL_JUMP)  ; LAB_0050b0db
    MOV EDI,dword ptr [0x01d51050]      ; 0050b082 | DAT_01d51050
        ;   Label: LAB_0050b082
    DEC EDI                             ; 0050b088
    MOV EDX,EDI                         ; 0050b089
    SUB EDX,EBX                         ; 0050b08b
    MOV EAX,EDX                         ; 0050b08d
    SHL EAX,0x4                         ; 0050b08f
    ADD EAX,EDX                         ; 0050b092
    SHL EAX,0x2                         ; 0050b094
    ADD EAX,EDX                         ; 0050b097
    SHL EAX,0x2                         ; 0050b099
    LEA EDX,[EBX + 0x1]                 ; 0050b09c
    PUSH EAX                            ; 0050b09f
    MOV EAX,EDX                         ; 0050b0a0
    SHL EAX,0x4                         ; 0050b0a2
    ADD EAX,EDX                         ; 0050b0a5
    SHL EAX,0x2                         ; 0050b0a7
    ADD EAX,EDX                         ; 0050b0aa
    SHL EAX,0x2                         ; 0050b0ac
    ADD EAX,0x1d51054                   ; 0050b0af
    PUSH EAX                            ; 0050b0b4
    MOV EAX,EBX                         ; 0050b0b5
    SHL EAX,0x4                         ; 0050b0b7
    ADD EAX,EBX                         ; 0050b0ba
    SHL EAX,0x2                         ; 0050b0bc
    ADD EAX,EBX                         ; 0050b0bf
    SHL EAX,0x2                         ; 0050b0c1
    ADD EAX,0x1d51054                   ; 0050b0c4
    PUSH EAX                            ; 0050b0c9
    MOV dword ptr [0x01d51050],EDI      ; 0050b0ca | DAT_01d51050
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0050b0d0
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 0050b0d5
    POP EDI                             ; 0050b0d8
    POP EBX                             ; 0050b0d9
    RET                                 ; 0050b0da
    PUSH ESI                            ; 0050b0db
        ;   Label: LAB_0050b0db
    MOV ECX,0x5e039d                    ; 0050b0dc
    MOV ESI,0x107                       ; 0050b0e1
    PUSH 0x5e03b1                       ; 0050b0e6
    MOV dword ptr [0x01d046a0],ECX      ; 0050b0eb | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 0050b0f1 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050b0f7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050b0fc
    POP ESI                             ; 0050b0ff
    JMP 0x0050b082                      ; 0050b100
        ;   XREF to: 0050b082 (UNCONDITIONAL_JUMP)  ; LAB_0050b082


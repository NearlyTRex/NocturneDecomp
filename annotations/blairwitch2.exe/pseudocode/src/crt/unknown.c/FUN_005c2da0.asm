; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c2da0(int *param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   crt_unknown.c_FUN_005bd078 at 005bd09e
;   crt_unknown.c_FUN_005c4c80 at 005c4c93
;
; Referenced Globals:
;   void* PTR_VirtualQuery_005c8668 = 001c9280
;   undefined1 DAT_0061f287
;   undefined2 DAT_0061f289
;
; Called Functions:
;   VirtualQuery
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2da0
        ;   Label: crt_unknown.c_FUN_005c2da0
    PUSH ESI                            ; 005c2da1
    SUB ESP,0x20                        ; 005c2da2
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005c2da5
    PUSH 0x1c                           ; 005c2da9
    LEA EAX,[ESP + 0x4]                 ; 005c2dab
    PUSH EAX                            ; 005c2daf
    LEA EAX,[ESP + 0x24]                ; 005c2db0
    PUSH EAX                            ; 005c2db4
    CALL dword ptr CS:[0x5c8668]        ; 005c2db5 | PTR_VirtualQuery_005c8668
    MOV EDX,dword ptr [ESP]             ; 005c2dbc
    ADD EDX,dword ptr [ESP + 0xc]       ; 005c2dbf
    MOV CX,word ptr [0x0061f289]        ; 005c2dc3 | DAT_0061f289
    MOV EAX,dword ptr [ESP + 0x4]       ; 005c2dca
    CMP CX,0x8000                       ; 005c2dce
    JNC 0x005c2ddc                      ; 005c2dd3
        ;   XREF to: 005c2ddc (CONDITIONAL_JUMP)  ; LAB_005c2ddc
    ADD EAX,0x3000                      ; 005c2dd5
    JMP 0x005c2df3                      ; 005c2dda
        ;   XREF to: 005c2df3 (UNCONDITIONAL_JUMP)  ; LAB_005c2df3
    JC 0x005c2dee                       ; 005c2ddc
        ;   XREF to: 005c2dee (CONDITIONAL_JUMP)  ; LAB_005c2dee
        ;   Label: LAB_005c2ddc
    CMP byte ptr [0x0061f287],0x4       ; 005c2dde | DAT_0061f287
    JNC 0x005c2dee                      ; 005c2de5
        ;   XREF to: 005c2dee (CONDITIONAL_JUMP)  ; LAB_005c2dee
    ADD EAX,0x12000                     ; 005c2de7
    JMP 0x005c2df3                      ; 005c2dec
        ;   XREF to: 005c2df3 (UNCONDITIONAL_JUMP)  ; LAB_005c2df3
    ADD EAX,0x13000                     ; 005c2dee
        ;   Label: LAB_005c2dee
    TEST EBX,EBX                        ; 005c2df3
        ;   Label: LAB_005c2df3
    JZ 0x005c2df9                       ; 005c2df5
        ;   XREF to: 005c2df9 (CONDITIONAL_JUMP)  ; LAB_005c2df9
    MOV dword ptr [EBX],EAX             ; 005c2df7
    MOV ESI,dword ptr [ESP + 0x30]      ; 005c2df9
        ;   Label: LAB_005c2df9
    TEST ESI,ESI                        ; 005c2dfd
    JZ 0x005c2e03                       ; 005c2dff
        ;   XREF to: 005c2e03 (CONDITIONAL_JUMP)  ; LAB_005c2e03
    MOV dword ptr [ESI],EDX             ; 005c2e01
    ADD ESP,0x20                        ; 005c2e03
        ;   Label: LAB_005c2e03
    POP ESI                             ; 005c2e06
    POP EBX                             ; 005c2e07
    RET                                 ; 005c2e08


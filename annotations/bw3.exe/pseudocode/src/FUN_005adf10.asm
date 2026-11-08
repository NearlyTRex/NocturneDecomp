; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005adf10(int *param_1,int *param_2)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   FUN_005a81b8 at 005a81de
;   FUN_005afd10 at 005afd23
;
; Referenced Globals:
;   void* PTR_VirtualQuery_005b367c = 001b42c2
;   undefined1 DAT_00607983
;   undefined2 DAT_00607985
;
; Called Functions:
;   VirtualQuery
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005adf10
        ;   Label: FUN_005adf10
    PUSH ESI                            ; 005adf11
    SUB ESP,0x20                        ; 005adf12
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005adf15
    PUSH 0x1c                           ; 005adf19
    LEA EAX,[ESP + 0x4]                 ; 005adf1b
    PUSH EAX                            ; 005adf1f
    LEA EAX,[ESP + 0x24]                ; 005adf20
    PUSH EAX                            ; 005adf24
    CALL dword ptr CS:[0x5b367c]        ; 005adf25 | PTR_VirtualQuery_005b367c
    MOV EDX,dword ptr [ESP]             ; 005adf2c
    ADD EDX,dword ptr [ESP + 0xc]       ; 005adf2f
    MOV CX,word ptr [0x00607985]        ; 005adf33 | DAT_00607985
    MOV EAX,dword ptr [ESP + 0x4]       ; 005adf3a
    CMP CX,0x8000                       ; 005adf3e
    JNC 0x005adf4c                      ; 005adf43
        ;   XREF to: 005adf4c (CONDITIONAL_JUMP)  ; LAB_005adf4c
    ADD EAX,0x3000                      ; 005adf45
    JMP 0x005adf63                      ; 005adf4a
        ;   XREF to: 005adf63 (UNCONDITIONAL_JUMP)  ; LAB_005adf63
    JC 0x005adf5e                       ; 005adf4c
        ;   XREF to: 005adf5e (CONDITIONAL_JUMP)  ; LAB_005adf5e
        ;   Label: LAB_005adf4c
    CMP byte ptr [0x00607983],0x4       ; 005adf4e | DAT_00607983
    JNC 0x005adf5e                      ; 005adf55
        ;   XREF to: 005adf5e (CONDITIONAL_JUMP)  ; LAB_005adf5e
    ADD EAX,0x12000                     ; 005adf57
    JMP 0x005adf63                      ; 005adf5c
        ;   XREF to: 005adf63 (UNCONDITIONAL_JUMP)  ; LAB_005adf63
    ADD EAX,0x13000                     ; 005adf5e
        ;   Label: LAB_005adf5e
    TEST EBX,EBX                        ; 005adf63
        ;   Label: LAB_005adf63
    JZ 0x005adf69                       ; 005adf65
        ;   XREF to: 005adf69 (CONDITIONAL_JUMP)  ; LAB_005adf69
    MOV dword ptr [EBX],EAX             ; 005adf67
    MOV ESI,dword ptr [ESP + 0x30]      ; 005adf69
        ;   Label: LAB_005adf69
    TEST ESI,ESI                        ; 005adf6d
    JZ 0x005adf73                       ; 005adf6f
        ;   XREF to: 005adf73 (CONDITIONAL_JUMP)  ; LAB_005adf73
    MOV dword ptr [ESI],EDX             ; 005adf71
    ADD ESP,0x20                        ; 005adf73
        ;   Label: LAB_005adf73
    POP ESI                             ; 005adf76
    POP EBX                             ; 005adf77
    RET                                 ; 005adf78


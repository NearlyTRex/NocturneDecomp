; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004c1b20(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004c79a0 at 004c79cf
;
; Referenced Globals:
;   undefined4 DAT_007646ac
;
; Called Functions:
;   FUN_0040d890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1b20
        ;   Label: FUN_004c1b20
    PUSH ESI                            ; 004c1b21
    PUSH EDI                            ; 004c1b22
    PUSH EBP                            ; 004c1b23
    MOV EBP,ESP                         ; 004c1b24
    SUB ESP,0x10                        ; 004c1b26
    AND ESP,0xfffffff8                  ; 004c1b29
    MOV EDI,dword ptr [EBP + 0x14]      ; 004c1b2c
    FLD float ptr [EBP + 0x18]          ; 004c1b2f
    FLD1                                ; 004c1b32
    FDIVRP                              ; 004c1b34
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c1b36
    XOR EBX,EBX                         ; 004c1b39
    FSTP float ptr [ESP]                ; 004c1b3b
    TEST EDX,EDX                        ; 004c1b3e
    JLE 0x004c1b65                      ; 004c1b40
        ;   XREF to: 004c1b65 (CONDITIONAL_JUMP)  ; LAB_004c1b65
    MOV ESI,EDI                         ; 004c1b42
    MOV EAX,[0x007646ac]                ; 004c1b44 | DAT_007646ac
        ;   Label: LAB_004c1b44
    PUSH EAX                            ; 004c1b49
    MOV EDX,dword ptr [ESI + 0xc]       ; 004c1b4a
    PUSH EDX                            ; 004c1b4d
    CALL FUN_0040d890                   ; 004c1b4e
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d890()
    ADD ESP,0x8                         ; 004c1b53
    TEST EAX,EAX                        ; 004c1b56
    JNZ 0x004c1b7b                      ; 004c1b58
        ;   XREF to: 004c1b7b (CONDITIONAL_JUMP)  ; LAB_004c1b7b
    INC EBX                             ; 004c1b5a
        ;   Label: LAB_004c1b5a
    MOV ECX,dword ptr [EDI + 0x8]       ; 004c1b5b
    ADD ESI,0x4                         ; 004c1b5e
    CMP EBX,ECX                         ; 004c1b61
    JL 0x004c1b44                       ; 004c1b63
        ;   XREF to: 004c1b44 (CONDITIONAL_JUMP)  ; LAB_004c1b44
    FLD float ptr [ESP]                 ; 004c1b65
        ;   Label: LAB_004c1b65
    FLD1                                ; 004c1b68
    FDIVRP                              ; 004c1b6a
    FSTP float ptr [ESP + 0xc]          ; 004c1b6c
    MOV EAX,dword ptr [ESP + 0xc]       ; 004c1b70
    MOV ESP,EBP                         ; 004c1b74
    POP EBP                             ; 004c1b76
    POP EDI                             ; 004c1b77
    POP ESI                             ; 004c1b78
    POP EBX                             ; 004c1b79
    RET                                 ; 004c1b7a
    FLD float ptr [EAX + 0x2d0]         ; 004c1b7b
        ;   Label: LAB_004c1b7b
    FLD1                                ; 004c1b81
    FDIVRP                              ; 004c1b83
    FADD float ptr [ESP]                ; 004c1b85
    FSTP float ptr [ESP]                ; 004c1b88
    JMP 0x004c1b5a                      ; 004c1b8b
        ;   XREF to: 004c1b5a (UNCONDITIONAL_JUMP)  ; LAB_004c1b5a


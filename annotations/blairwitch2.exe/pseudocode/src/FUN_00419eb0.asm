; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00419eb0(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_0041a0c0
;   FUN_00488890
;   FUN_00503620
;   FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00419eb0
        ;   Label: FUN_00419eb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00419eb1
    MOV EDX,dword ptr [EBX + 0x10b08]   ; 00419eb5
    PUSH EDX                            ; 00419ebb
    CALL FUN_00551050                   ; 00419ebc
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; undefined FUN_00551050()
    ADD ESP,0x4                         ; 00419ec1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00419ec4
    FLD float ptr [EAX + 0x4]           ; 00419ec8
    FSUBR float ptr [EBX + 0x25a8]      ; 00419ecb
    FST float ptr [EBX + 0x25a8]        ; 00419ed1
    FLDZ                                ; 00419ed7
    FCOMPP                              ; 00419ed9
    FNSTSW AX                           ; 00419edb
    SAHF                                ; 00419edd
    JC 0x00419f03                       ; 00419ede
        ;   XREF to: 00419f03 (CONDITIONAL_JUMP)  ; LAB_00419f03
    PUSH EBX                            ; 00419ee0
    MOV dword ptr [EBX + 0x25a8],0x3f800000 ; 00419ee1
    CALL FUN_0041a0c0                   ; 00419eeb
        ;   XREF to: 0041a0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a0c0()
    ADD ESP,0x4                         ; 00419ef0
    MOV ECX,dword ptr [ESP + 0xc]       ; 00419ef3
    PUSH ECX                            ; 00419ef7
    PUSH EBX                            ; 00419ef8
    CALL FUN_00488890                   ; 00419ef9
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 00419efe
    POP EBX                             ; 00419f01
    RET                                 ; 00419f02
    PUSH 0x1                            ; 00419f03
        ;   Label: LAB_00419f03
    PUSH 0x3                            ; 00419f05
    LEA EAX,[EBX + 0x2b4]               ; 00419f07
    PUSH EAX                            ; 00419f0d
    CALL FUN_00503620                   ; 00419f0e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00419f13
    MOV ECX,dword ptr [ESP + 0xc]       ; 00419f16
    PUSH ECX                            ; 00419f1a
    PUSH EBX                            ; 00419f1b
    CALL FUN_00488890                   ; 00419f1c
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; undefined FUN_00488890()
    ADD ESP,0x8                         ; 00419f21
    POP EBX                             ; 00419f24
    RET                                 ; 00419f25


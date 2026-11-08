; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004cd3f0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005c4649
;   undefined4 DAT_005fed24
;
; Called Functions:
;   FUN_004ce950
;   FUN_004ce980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cd3f0
        ;   Label: FUN_004cd3f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cd3f1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004cd3f5
    MOV EBX,dword ptr [EDX + 0x40]      ; 004cd3f9
    CMP EBX,0x3                         ; 004cd3fc
    JZ 0x004cd423                       ; 004cd3ff
        ;   XREF to: 004cd423 (CONDITIONAL_JUMP)  ; LAB_004cd423
    FLD float ptr [ECX + 0x4]           ; 004cd401
    FCOMP double ptr [0x005c4649]       ; 004cd404 | DAT_005c4649
    FNSTSW AX                           ; 004cd40a
    SAHF                                ; 004cd40c
    JA 0x004cd42a                       ; 004cd40d
        ;   XREF to: 004cd42a (CONDITIONAL_JUMP)  ; LAB_004cd42a
    PUSH EDI                            ; 004cd40f
    PUSH EBX                            ; 004cd410
    PUSH ECX                            ; 004cd411
    PUSH EDX                            ; 004cd412
    MOV EDI,dword ptr [0x005fed24]      ; 004cd413 | DAT_005fed24
    PUSH EDI                            ; 004cd419
    CALL FUN_004ce980                   ; 004cd41a
        ;   XREF to: 004ce980 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce980()
    ADD ESP,0x10                        ; 004cd41f
    POP EDI                             ; 004cd422
    MOV EAX,0x1                         ; 004cd423
        ;   Label: LAB_004cd423
    POP EBX                             ; 004cd428
    RET                                 ; 004cd429
    PUSH EBX                            ; 004cd42a
        ;   Label: LAB_004cd42a
    PUSH EDX                            ; 004cd42b
    MOV EAX,[0x005fed24]                ; 004cd42c | DAT_005fed24
    PUSH EAX                            ; 004cd431
    CALL FUN_004ce950                   ; 004cd432
        ;   XREF to: 004ce950 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce950()
    ADD ESP,0xc                         ; 004cd437
    MOV EAX,0x1                         ; 004cd43a
    POP EBX                             ; 004cd43f
    RET                                 ; 004cd440


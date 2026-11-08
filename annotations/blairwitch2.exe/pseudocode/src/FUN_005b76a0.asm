; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b76a0(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   FUN_00415120 at 004151e2
;   FUN_004f1890 at 004f190f
;   FUN_005020c0 at 00502189
;   FUN_00511980 at 00511a48
;   FUN_0056fe50 at 0056ffcf
;   FUN_00582ec0 at 00583074
;
; Called Functions:
;   FUN_005b6a10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b76a0
        ;   Label: FUN_005b76a0
    PUSH ESI                            ; 005b76a1
    PUSH EDI                            ; 005b76a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b76a3
    FLD float ptr [ESP + 0x14]          ; 005b76a7
    FLDZ                                ; 005b76ab
    FCOMPP                              ; 005b76ad
    FNSTSW AX                           ; 005b76af
    SAHF                                ; 005b76b1
    JA 0x005b7700                       ; 005b76b2
        ;   XREF to: 005b7700 (CONDITIONAL_JUMP)  ; LAB_005b7700
    FLD float ptr [ESP + 0x14]          ; 005b76b4
        ;   Label: LAB_005b76b4
    FLD1                                ; 005b76b8
    FCOMPP                              ; 005b76ba
    FNSTSW AX                           ; 005b76bc
    SAHF                                ; 005b76be
    JNC 0x005b76c9                      ; 005b76bf
        ;   XREF to: 005b76c9 (CONDITIONAL_JUMP)  ; LAB_005b76c9
    MOV dword ptr [ESP + 0x14],0x3f800000 ; 005b76c1
    MOV ESI,dword ptr [EBX + 0x660]     ; 005b76c9
        ;   Label: LAB_005b76c9
    FLD1                                ; 005b76cf
    PUSH ESI                            ; 005b76d1
    FSUB float ptr [ESP + 0x18]         ; 005b76d2
    SUB ESP,0x4                         ; 005b76d6
    FSTP float ptr [ESP]                ; 005b76d9
    PUSH EBX                            ; 005b76dc
    CALL FUN_005b6a10                   ; 005b76dd
        ;   XREF to: 005b6a10 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6a10()
    ADD ESP,0xc                         ; 005b76e2
    MOV EDI,dword ptr [EBX + 0x58]      ; 005b76e5
    PUSH EDI                            ; 005b76e8
    ADD EBX,0x608                       ; 005b76e9
    PUSH dword ptr [ESP + 0x18]         ; 005b76ef
    PUSH EBX                            ; 005b76f3
    CALL FUN_005b6a10                   ; 005b76f4
        ;   XREF to: 005b6a10 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6a10()
    ADD ESP,0xc                         ; 005b76f9
    POP EDI                             ; 005b76fc
    POP ESI                             ; 005b76fd
    POP EBX                             ; 005b76fe
    RET                                 ; 005b76ff
    XOR EDX,EDX                         ; 005b7700
        ;   Label: LAB_005b7700
    MOV dword ptr [ESP + 0x14],EDX      ; 005b7702
    JMP 0x005b76b4                      ; 005b7706
        ;   XREF to: 005b76b4 (UNCONDITIONAL_JUMP)  ; LAB_005b76b4


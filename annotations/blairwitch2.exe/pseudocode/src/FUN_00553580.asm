; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00553580(void)
;
; Local Variables:
; undefined8       Stack[-0x8]:8  local_8
;
; XREF[1]:
;   FUN_00502510 at 00502517
;
; Referenced Globals:
;   undefined4 DAT_005e926a
;   undefined4 DAT_02648e80
;   undefined4 DAT_0264900c
;   undefined4 DAT_02649018
;   undefined4 DAT_0264901c
;
; Called Functions:
;   FUN_00554610
;   FUN_0058fcc0
;   FUN_0058fd00
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02648e80],0x0      ; 00553580 | DAT_02648e80
        ;   Label: FUN_00553580
    JNZ 0x0055358a                      ; 00553587
        ;   XREF to: 0055358a (CONDITIONAL_JUMP)  ; LAB_0055358a
    RET                                 ; 00553589
        ;   Label: LAB_00553589
    FLD float ptr [0x0264900c]          ; 0055358a | DAT_0264900c
        ;   Label: LAB_0055358a
    FMUL float ptr [0x005e926a]         ; 00553590 | DAT_005e926a
    SUB ESP,0x8                         ; 00553596
    MOV ECX,dword ptr [0x02649018]      ; 00553599 | DAT_02649018
    FSTP double ptr [ESP]               ; 0055359f
    PUSH ECX                            ; 005535a2
    CALL FUN_0058fcc0                   ; 005535a3
        ;   XREF to: 0058fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058fcc0()
    ADD ESP,0xc                         ; 005535a8
    TEST EAX,EAX                        ; 005535ab
    JZ 0x00553589                       ; 005535ad
        ;   XREF to: 00553589 (CONDITIONAL_JUMP)  ; LAB_00553589
    PUSH EDI                            ; 005535af
    PUSH ESI                            ; 005535b0
    PUSH EBX                            ; 005535b1
    MOV EAX,[0x02648e80]                ; 005535b2 | DAT_02648e80
    MOV EBX,dword ptr [0x0264901c]      ; 005535b7 | DAT_0264901c
    PUSH EAX                            ; 005535bd
    INC EBX                             ; 005535be
    MOV EDX,dword ptr [EAX]             ; 005535bf
    MOV dword ptr [0x0264901c],EBX      ; 005535c1 | DAT_0264901c
    CALL dword ptr [EDX + 0x10]         ; 005535c7
    ADD ESP,0x4                         ; 005535ca
    PUSH 0x0                            ; 005535cd
    CALL FUN_00554610                   ; 005535cf
        ;   XREF to: 00554610 (UNCONDITIONAL_CALL)  ; undefined FUN_00554610()
    MOV EDI,dword ptr [0x0264901c]      ; 005535d4 | DAT_0264901c
    ADD ESP,0x4                         ; 005535da
    MOV ESI,dword ptr [0x02649018]      ; 005535dd | DAT_02649018
    DEC EDI                             ; 005535e3
    PUSH ESI                            ; 005535e4
    MOV dword ptr [0x0264901c],EDI      ; 005535e5 | DAT_0264901c
    CALL FUN_0058fd00                   ; 005535eb
        ;   XREF to: 0058fd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0058fd00()
    ADD ESP,0x4                         ; 005535f0
    POP EBX                             ; 005535f3
    POP ESI                             ; 005535f4
    POP EDI                             ; 005535f5
    RET                                 ; 005535f6


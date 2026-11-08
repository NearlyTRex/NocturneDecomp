; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004aca40(int param_1,float param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_01cb0620
;
; Called Functions:
;   FUN_00550170
;   FUN_00550450
;   FUN_005504d0
;   FUN_005506b0
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x8]           ; 004aca40
        ;   Label: FUN_004aca40
    FCOMP float ptr [0x01cb0620]        ; 004aca44 | DAT_01cb0620
    FNSTSW AX                           ; 004aca4a
    SAHF                                ; 004aca4c
    JC 0x004aca62                       ; 004aca4d
        ;   XREF to: 004aca62 (CONDITIONAL_JUMP)  ; LAB_004aca62
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aca4f
    FLD float ptr [ESP + 0x8]           ; 004aca53
    FCOMP float ptr [EAX + 0x2b8]       ; 004aca57
    FNSTSW AX                           ; 004aca5d
    SAHF                                ; 004aca5f
    JC 0x004aca63                       ; 004aca60
        ;   XREF to: 004aca63 (CONDITIONAL_JUMP)  ; LAB_004aca63
    RET                                 ; 004aca62
        ;   Label: LAB_004aca62
    CALL FUN_00550450                   ; 004aca63
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
        ;   Label: LAB_004aca63
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aca68
    ADD EAX,0x5ec                       ; 004aca6c
    PUSH EAX                            ; 004aca71
    CALL FUN_00550170                   ; 004aca72
        ;   XREF to: 00550170 (UNCONDITIONAL_CALL)  ; undefined FUN_00550170()
    ADD ESP,0x4                         ; 004aca77
    MOV EDX,dword ptr [ESP + 0xc]       ; 004aca7a
    PUSH EDX                            ; 004aca7e
    CALL FUN_005506b0                   ; 004aca7f
        ;   XREF to: 005506b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005506b0()
    ADD ESP,0x4                         ; 004aca84
    JMP 0x005504d0                      ; 004aca87
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00423d60(float param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_00421f00 at 00421f9d
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00423d60
        ;   Label: FUN_00423d60
    FLD float ptr [ESP + 0x8]           ; 00423d63
    FCOMP float ptr [ESP + 0xc]         ; 00423d67
    FNSTSW AX                           ; 00423d6b
    SAHF                                ; 00423d6d
    JBE 0x00423d7e                      ; 00423d6e
        ;   XREF to: 00423d7e (CONDITIONAL_JUMP)  ; LAB_00423d7e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00423d70
    MOV dword ptr [ESP],EAX             ; 00423d74
    MOV EAX,dword ptr [ESP]             ; 00423d77
    ADD ESP,0x4                         ; 00423d7a
    RET                                 ; 00423d7d
    MOV EAX,dword ptr [ESP + 0xc]       ; 00423d7e
        ;   Label: LAB_00423d7e
    MOV dword ptr [ESP],EAX             ; 00423d82
    MOV EAX,dword ptr [ESP]             ; 00423d85
    ADD ESP,0x4                         ; 00423d88
    RET                                 ; 00423d8b


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00498e80(int param_1)
;
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   FUN_0049c430 at 0049c64c
;
; Referenced Globals:
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6b84
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00498e80
        ;   Label: FUN_00498e80
    MOV EBP,ESP                         ; 00498e81
    SUB ESP,0x8                         ; 00498e83
    AND ESP,0xfffffff8                  ; 00498e86
    MOV EDX,dword ptr [EBP + 0x8]       ; 00498e89
    FLDZ                                ; 00498e8c
    FLD float ptr [EDX + 0xc]           ; 00498e8e
    FSTP double ptr [ESP]               ; 00498e91
    FCOMP double ptr [ESP]              ; 00498e94
    FNSTSW AX                           ; 00498e97
    SAHF                                ; 00498e99
    JNC 0x00498eb6                      ; 00498e9a
        ;   XREF to: 00498eb6 (CONDITIONAL_JUMP)  ; LAB_00498eb6
    MOV EAX,[0x00616494]                ; 00498e9c | DAT_00616494
    FLD float ptr [EAX + 0x284]         ; 00498ea1 | DAT_01cb6b84
    FSUBR double ptr [ESP]              ; 00498ea7
    FST float ptr [EDX + 0xc]           ; 00498eaa
    FLDZ                                ; 00498ead
    FCOMPP                              ; 00498eaf
    FNSTSW AX                           ; 00498eb1
    SAHF                                ; 00498eb3
    JA 0x00498eba                       ; 00498eb4
        ;   XREF to: 00498eba (CONDITIONAL_JUMP)  ; LAB_00498eba
    MOV ESP,EBP                         ; 00498eb6
        ;   Label: LAB_00498eb6
    POP EBP                             ; 00498eb8
    RET                                 ; 00498eb9
    MOV dword ptr [EDX + 0xc],0x0       ; 00498eba
        ;   Label: LAB_00498eba
    MOV ESP,EBP                         ; 00498ec1
    POP EBP                             ; 00498ec3
    RET                                 ; 00498ec4


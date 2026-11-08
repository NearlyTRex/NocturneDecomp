; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_005a6067(double param_1)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[3]:
;   FUN_0054f040 at 0054f0bf
;   FUN_0056eed0 at 0056ef70
;   FUN_00581a40 at 00581a6b
;
; Called Functions:
;   FUN_005a3600
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a6067
        ;   Label: FUN_005a6067
    MOV EBP,ESP                         ; 005a6068
    SUB ESP,0x8                         ; 005a606a
    FLD double ptr [EBP + 0x8]          ; 005a606d
    SUB ESP,0x8                         ; 005a6070
    FCHS                                ; 005a6073
    FSTP double ptr [ESP]               ; 005a6075
    CALL FUN_005a3600                   ; 005a6078
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3600()
    MOV dword ptr [EBP + -0x8],EAX      ; 005a607d
    MOV dword ptr [EBP + -0x4],EDX      ; 005a6080
    ADD ESP,0x8                         ; 005a6083
    FLD double ptr [EBP + -0x8]         ; 005a6086
    FCHS                                ; 005a6089
    FSTP double ptr [EBP + -0x8]        ; 005a608b
    MOV EAX,dword ptr [EBP + -0x8]      ; 005a608e
    MOV EDX,dword ptr [EBP + -0x4]      ; 005a6091
    MOV ESP,EBP                         ; 005a6094
    POP EBP                             ; 005a6096
    RET                                 ; 005a6097


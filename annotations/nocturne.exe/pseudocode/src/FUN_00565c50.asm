; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00565c50(int param_1,int param_2)
;
;
; XREF[6]:
;   FUN_0044ac30 at 0044ac3a
;   FUN_00456f60 at 00456f98
;   FUN_0056e254 at 0056e284
;   FUN_0056e56c at 0056e57e
;   FUN_005711a8 at 00571207
;   FUN_00571280 at 00571295
;
; Called Functions:
;   FUN_005635b0
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565c50
        ;   Label: FUN_00565c50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00565c51
    IMUL EBX,dword ptr [ESP + 0xc]      ; 00565c55
    PUSH EBX                            ; 00565c5a
    CALL FUN_005635b0                   ; 00565c5b
        ;   XREF to: 005635b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635b0()
    ADD ESP,0x4                         ; 00565c60
    TEST EAX,EAX                        ; 00565c63
    JZ 0x00565c73                       ; 00565c65
        ;   XREF to: 00565c73 (CONDITIONAL_JUMP)  ; LAB_00565c73
    PUSH EBX                            ; 00565c67
    PUSH 0x0                            ; 00565c68
    PUSH EAX                            ; 00565c6a
    CALL FUN_00563cc0                   ; 00565c6b
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 00565c70
    POP EBX                             ; 00565c73
        ;   Label: LAB_00565c73
    RET                                 ; 00565c74


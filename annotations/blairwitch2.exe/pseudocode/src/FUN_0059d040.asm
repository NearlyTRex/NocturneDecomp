; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059d040(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005ef7d1
;   undefined4 DAT_005ef7d9
;
; Called Functions:
;   FUN_0044d060
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059d040
        ;   Label: FUN_0059d040
    FLD float ptr [EDX + 0x700]         ; 0059d044
    FLDZ                                ; 0059d04a
    FCOMPP                              ; 0059d04c
    FNSTSW AX                           ; 0059d04e
    SAHF                                ; 0059d050
    JC 0x0059d056                       ; 0059d051
        ;   XREF to: 0059d056 (CONDITIONAL_JUMP)  ; LAB_0059d056
    XOR EAX,EAX                         ; 0059d053
    RET                                 ; 0059d055
    FLD float ptr [EDX + 0x6f0]         ; 0059d056
        ;   Label: LAB_0059d056
    FMUL double ptr [0x005ef7d9]        ; 0059d05c | DAT_005ef7d9
    SUB ESP,0x4                         ; 0059d062
    FLD float ptr [EDX + 0x6e8]         ; 0059d065
    FADD float ptr [0x005ef7d1]         ; 0059d06b | DAT_005ef7d1
    LEA EAX,[EDX + 0x6e4]               ; 0059d071
    FSTP float ptr [EDX + 0x6e8]        ; 0059d077
    FSTP float ptr [ESP]                ; 0059d07d
    PUSH dword ptr [EDX + 0x6f4]        ; 0059d080
    PUSH EAX                            ; 0059d086
    ADD EDX,0x6d8                       ; 0059d087
    PUSH EDX                            ; 0059d08d
    CALL FUN_0044d060                   ; 0059d08e
        ;   XREF to: 0044d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d060()
    MOV EAX,0x1                         ; 0059d093
    ADD ESP,0x10                        ; 0059d098
    LEA EAX,[EAX]                       ; 0059d09b
    MOV ECX,ECX                         ; 0059d09e
    RET                                 ; 0059d0a0
        ;   Label: LAB_0059d0a0


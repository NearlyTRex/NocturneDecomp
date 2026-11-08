; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b4730(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005c2208
;   undefined4 DAT_005c2210
;
; Called Functions:
;   FUN_004031c0
;   FUN_00403250
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4730
        ;   Label: FUN_004b4730
    PUSH ESI                            ; 004b4731
    PUSH EDI                            ; 004b4732
    PUSH EBP                            ; 004b4733
    SUB ESP,0x8                         ; 004b4734
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b4737
    FLD float ptr [ESP + 0x2c]          ; 004b473b
    MOV EBX,0x2                         ; 004b473f
    FCOMP double ptr [0x005c2208]       ; 004b4744 | DAT_005c2208
    FNSTSW AX                           ; 004b474a
    SAHF                                ; 004b474c
    JNC 0x004b4754                      ; 004b474d
        ;   XREF to: 004b4754 (CONDITIONAL_JUMP)  ; LAB_004b4754
    MOV EBX,0xfb                        ; 004b474f
    FLD float ptr [ESP + 0x2c]          ; 004b4754
        ;   Label: LAB_004b4754
    FCOMP double ptr [0x005c2210]       ; 004b4758 | DAT_005c2210
    FNSTSW AX                           ; 004b475e
    SAHF                                ; 004b4760
    JNC 0x004b4768                      ; 004b4761
        ;   XREF to: 004b4768 (CONDITIONAL_JUMP)  ; LAB_004b4768
    MOV EBX,0x1                         ; 004b4763
    PUSH 0x0                            ; 004b4768
        ;   Label: LAB_004b4768
    PUSH 0x0                            ; 004b476a
    MOV EDX,dword ptr [ESP + 0x30]      ; 004b476c
    PUSH EDX                            ; 004b4770
    MOV ECX,dword ptr [ESP + 0x30]      ; 004b4771
    PUSH ECX                            ; 004b4775
    MOV EDI,dword ptr [ESP + 0x30]      ; 004b4776
    PUSH EDI                            ; 004b477a
    PUSH ESI                            ; 004b477b
    CALL FUN_00403250                   ; 004b477c
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; undefined FUN_00403250()
    ADD ESP,0x18                        ; 004b4781
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b4784
    SUB EAX,ESI                         ; 004b4788
    INC EAX                             ; 004b478a
    MOV dword ptr [ESP + 0x4],EAX       ; 004b478b
    FILD dword ptr [ESP + 0x4]          ; 004b478f
    FMUL float ptr [ESP + 0x2c]         ; 004b4793
    CALL FUN_005a3120                   ; 004b4797
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 004b479c
    MOV EBP,dword ptr [ESP]             ; 004b479f
    TEST EBP,EBP                        ; 004b47a2
    JG 0x004b47ae                       ; 004b47a4
        ;   XREF to: 004b47ae (CONDITIONAL_JUMP)  ; LAB_004b47ae
    ADD ESP,0x8                         ; 004b47a6
    POP EBP                             ; 004b47a9
    POP EDI                             ; 004b47aa
    POP ESI                             ; 004b47ab
    POP EBX                             ; 004b47ac
    RET                                 ; 004b47ad
    PUSH EBX                            ; 004b47ae
        ;   Label: LAB_004b47ae
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004b47af
    PUSH EAX                            ; 004b47b3
    LEA EAX,[ESI + EBP*0x1]             ; 004b47b4
    PUSH EAX                            ; 004b47b7
    PUSH EDI                            ; 004b47b8
    PUSH ESI                            ; 004b47b9
    CALL FUN_004031c0                   ; 004b47ba
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004b47bf
    ADD ESP,0x8                         ; 004b47c2
    POP EBP                             ; 004b47c5
    POP EDI                             ; 004b47c6
    POP ESI                             ; 004b47c7
    POP EBX                             ; 004b47c8
    RET                                 ; 004b47c9


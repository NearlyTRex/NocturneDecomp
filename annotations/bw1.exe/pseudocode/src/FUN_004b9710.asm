; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b9710(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006005c0
;   undefined4 DAT_006236b8
;
; Called Functions:
;   FUN_0057d9c0
;   FUN_0057d9d0
;   FUN_005ad770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9710
        ;   Label: FUN_004b9710
    PUSH EDI                            ; 004b9711
    PUSH EBP                            ; 004b9712
    MOV EBP,ESP                         ; 004b9713
    SUB ESP,0x8                         ; 004b9715
    AND ESP,0xfffffff8                  ; 004b9718
    MOV EBX,dword ptr [EBP + 0x10]      ; 004b971b
    PUSH dword ptr [EBP + 0x14]         ; 004b971e
    PUSH EBX                            ; 004b9721
    CALL FUN_005ad770                   ; 004b9722
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad770()
    MOV EDX,dword ptr [EBX + 0x578]     ; 004b9727
    ADD ESP,0x8                         ; 004b972d
    TEST EDX,EDX                        ; 004b9730
    JNZ 0x004b975e                      ; 004b9732
        ;   XREF to: 004b975e (CONDITIONAL_JUMP)  ; LAB_004b975e
    MOV ECX,dword ptr [EBX + 0x57c]     ; 004b9734
    TEST ECX,ECX                        ; 004b973a
    JNZ 0x004b97e3                      ; 004b973c
        ;   XREF to: 004b97e3 (CONDITIONAL_JUMP)  ; LAB_004b97e3
    MOV EAX,dword ptr [EBX + 0x578]     ; 004b9742
        ;   Label: LAB_004b9742
    MOV dword ptr [EBX + 0x578],0x0     ; 004b9748
    MOV dword ptr [EBX + 0x580],EAX     ; 004b9752
    MOV ESP,EBP                         ; 004b9758
    POP EBP                             ; 004b975a
    POP EDI                             ; 004b975b
    POP EBX                             ; 004b975c
    RET                                 ; 004b975d
    MOV EAX,dword ptr [EBX + 0x57c]     ; 004b975e
        ;   Label: LAB_004b975e
    PUSH EAX                            ; 004b9764
    MOV EDX,dword ptr [0x006236b8]      ; 004b9765 | DAT_006236b8
    PUSH EDX                            ; 004b976b
    CALL FUN_0057d9c0                   ; 004b976c
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d9c0()
    ADD ESP,0x8                         ; 004b9771
    TEST EAX,EAX                        ; 004b9774
    JZ 0x004b97c9                       ; 004b9776
        ;   XREF to: 004b97c9 (CONDITIONAL_JUMP)  ; LAB_004b97c9
    FLD float ptr [EBX + 0x584]         ; 004b9778
        ;   Label: LAB_004b9778
    FSUB float ptr [EBP + 0x14]         ; 004b977e
    FLDZ                                ; 004b9781
    FXCH                                ; 004b9783
    FST float ptr [EBX + 0x584]         ; 004b9785
    FSTP double ptr [ESP]               ; 004b978b
    FCOMP double ptr [ESP]              ; 004b978e
    FNSTSW AX                           ; 004b9791
    SAHF                                ; 004b9793
    JBE 0x004b9742                      ; 004b9794
        ;   XREF to: 004b9742 (CONDITIONAL_JUMP)  ; LAB_004b9742
    FLD float ptr [0x006005c0]          ; 004b9796 | DAT_006005c0
    FLD1                                ; 004b979c
    FDIVRP                              ; 004b979e
    MOV ECX,dword ptr [EBX + 0x568]     ; 004b97a0
    DEC ECX                             ; 004b97a6
    FADD double ptr [ESP]               ; 004b97a7
    MOV dword ptr [EBX + 0x568],ECX     ; 004b97aa
    FSTP float ptr [EBX + 0x584]        ; 004b97b0
    TEST ECX,ECX                        ; 004b97b6
    JGE 0x004b9742                      ; 004b97b8
        ;   XREF to: 004b9742 (CONDITIONAL_JUMP)  ; LAB_004b9742
    MOV dword ptr [EBX + 0x568],0x0     ; 004b97ba
    JMP 0x004b9742                      ; 004b97c4
        ;   XREF to: 004b9742 (UNCONDITIONAL_JUMP)  ; LAB_004b9742
    PUSH 0x5df7ed                       ; 004b97c9
        ;   Label: LAB_004b97c9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004b97ce
    PUSH EBX                            ; 004b97d4
    CALL dword ptr [EAX + 0x2c]         ; 004b97d5
    ADD ESP,0x8                         ; 004b97d8
    MOV dword ptr [EBX + 0x57c],EAX     ; 004b97db
    JMP 0x004b9778                      ; 004b97e1
        ;   XREF to: 004b9778 (UNCONDITIONAL_JUMP)  ; LAB_004b9778
    PUSH ECX                            ; 004b97e3
        ;   Label: LAB_004b97e3
    MOV EDI,dword ptr [0x006236b8]      ; 004b97e4 | DAT_006236b8
    PUSH EDI                            ; 004b97ea
    CALL FUN_0057d9d0                   ; 004b97eb
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d9d0()
    ADD ESP,0x8                         ; 004b97f0
    MOV dword ptr [EBX + 0x57c],0x0     ; 004b97f3
    JMP 0x004b9742                      ; 004b97fd
        ;   XREF to: 004b9742 (UNCONDITIONAL_JUMP)  ; LAB_004b9742


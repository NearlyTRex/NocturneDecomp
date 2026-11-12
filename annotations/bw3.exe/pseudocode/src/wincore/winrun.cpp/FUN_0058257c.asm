; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float wincore_winrun_cpp_FUN_0058257c(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02d224f0
;   undefined4 DAT_02d224f4
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0058257c
        ;   Label: wincore_winrun.cpp_FUN_0058257c
    SUB ESP,0x4                         ; 00582580
    MOV EAX,[0x02d224f0]                ; 00582583 | DAT_02d224f0
    MOV dword ptr [ESP],EAX             ; 00582588
    FLD float ptr [0x02d224f4]          ; 0058258b | DAT_02d224f4
    FCOMP float ptr [ESP]               ; 00582591
    FNSTSW AX                           ; 00582594
    SAHF                                ; 00582596
    JC 0x005825ba                       ; 00582597
        ;   XREF to: 005825ba (CONDITIONAL_JUMP)  ; LAB_005825ba
    MOV EDX,0x2d22c24                   ; 00582599
        ;   Label: LAB_00582599
    LEA ECX,[EDX + 0x2b0]               ; 0058259e
    CMP dword ptr [EDX],0x0             ; 005825a4
        ;   Label: LAB_005825a4
    JNZ 0x005825c4                      ; 005825a7
        ;   XREF to: 005825c4 (CONDITIONAL_JUMP)  ; LAB_005825c4
    ADD EDX,0xac                        ; 005825a9
        ;   Label: LAB_005825a9
    CMP EDX,ECX                         ; 005825af
    JNZ 0x005825a4                      ; 005825b1
        ;   XREF to: 005825a4 (CONDITIONAL_JUMP)  ; LAB_005825a4
    MOV EAX,dword ptr [ESP]             ; 005825b3
    ADD ESP,0x4                         ; 005825b6
    RET                                 ; 005825b9
    MOV EAX,[0x02d224f4]                ; 005825ba | DAT_02d224f4
        ;   Label: LAB_005825ba
    MOV dword ptr [ESP],EAX             ; 005825bf
    JMP 0x00582599                      ; 005825c2
        ;   XREF to: 00582599 (UNCONDITIONAL_JUMP)  ; LAB_00582599
    FLD float ptr [EDX + 0xa8]          ; 005825c4
        ;   Label: LAB_005825c4
    FCOMP float ptr [ESP]               ; 005825ca
    FNSTSW AX                           ; 005825cd
    SAHF                                ; 005825cf
    JNC 0x005825a9                      ; 005825d0
        ;   XREF to: 005825a9 (CONDITIONAL_JUMP)  ; LAB_005825a9
    MOV EAX,dword ptr [EDX + 0xa8]      ; 005825d2
    MOV dword ptr [ESP],EAX             ; 005825d8
    JMP 0x005825a9                      ; 005825db
        ;   XREF to: 005825a9 (UNCONDITIONAL_JUMP)  ; LAB_005825a9


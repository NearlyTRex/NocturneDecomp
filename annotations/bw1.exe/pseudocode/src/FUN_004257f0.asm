; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004257f0(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_count_005d504f+1
;   TerminatedCString s_modelCount_005d5056
;   undefined4 DAT_005d5061
;   TerminatedCString s_modelName_005d5062
;   TerminatedCString s_allowChase_005d506c
;   TerminatedCString s_allowSwarm_005d5077
;   TerminatedCString s_allowChaseEvent_005d5082
;   TerminatedCString s_allowSwarmEvent_005d5092
;   TerminatedCString s_animateEvent_005d50a2
;   undefined4 DAT_007c3038
;
; Called Functions:
;   FUN_0040b440
;   FUN_0040b670
;   FUN_0040b770
;   FUN_00468950
;   FUN_004a0520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004257f0
        ;   Label: FUN_004257f0
    PUSH ESI                            ; 004257f1
    PUSH EDI                            ; 004257f2
    PUSH EBP                            ; 004257f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004257f4
    PUSH EDI                            ; 004257f8
    CALL FUN_004a0520                   ; 004257f9
        ;   XREF to: 004a0520 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0520()
    ADD ESP,0x4                         ; 004257fe
    PUSH 0x5d5050                       ; 00425801 | s_count_005d504f+1
    LEA EBX,[EDI + 0xc26c]              ; 00425806
    PUSH EBX                            ; 0042580c
    CALL FUN_0040b670                   ; 0042580d
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 00425812
    PUSH 0x5d5056                       ; 00425815 | = "modelCount"
    LEA EBX,[EDI + 0x12670]             ; 0042581a
    PUSH EBX                            ; 00425820
    CALL FUN_0040b670                   ; 00425821
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    MOV EDX,dword ptr [0x007c3038]      ; 00425826 | DAT_007c3038
    ADD ESP,0x8                         ; 0042582c
    CMP EDX,0x1                         ; 0042582f
    JNZ 0x00425860                      ; 00425832
        ;   XREF to: 00425860 (CONDITIONAL_JUMP)  ; LAB_00425860
    LEA ESI,[EDI + 0x12674]             ; 00425834
    MOV EBX,ESI                         ; 0042583a
    ADD ESI,0x5f0                       ; 0042583c
    PUSH 0x5d5061                       ; 00425842 | DAT_005d5061
        ;   Label: LAB_00425842
    PUSH EBX                            ; 00425847
    CALL FUN_00468950                   ; 00425848
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD EBX,0x17c                       ; 0042584d
    ADD ESP,0x8                         ; 00425853
    CMP EBX,ESI                         ; 00425856
    JNZ 0x00425842                      ; 00425858
        ;   XREF to: 00425842 (CONDITIONAL_JUMP)  ; LAB_00425842
    LEA EAX,[EAX]                       ; 0042585a
    MOV ECX,dword ptr [EDI + 0x12670]   ; 00425860
        ;   Label: LAB_00425860
    XOR EBX,EBX                         ; 00425866
    TEST ECX,ECX                        ; 00425868
    JLE 0x004258a0                      ; 0042586a
        ;   XREF to: 004258a0 (CONDITIONAL_JUMP)  ; LAB_004258a0
    LEA ESI,[EDI + 0x12674]             ; 0042586c
    PUSH 0x5d5062                       ; 00425872 | = "modelName"
        ;   Label: LAB_00425872
    PUSH ESI                            ; 00425877
    INC EBX                             ; 00425878
    CALL FUN_0040b770                   ; 00425879
        ;   XREF to: 0040b770 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b770()
    ADD ESP,0x8                         ; 0042587e
    MOV EBP,dword ptr [EDI + 0x12670]   ; 00425881
    ADD ESI,0x17c                       ; 00425887
    CMP EBX,EBP                         ; 0042588d
    JL 0x00425872                       ; 0042588f
        ;   XREF to: 00425872 (CONDITIONAL_JUMP)  ; LAB_00425872
    LEA EAX,[EAX]                       ; 00425891
    LEA EDX,[EDX]                       ; 00425897
    LEA EAX,[EAX]                       ; 0042589d
    PUSH 0x5d506c                       ; 004258a0 | = "allowChase"
        ;   Label: LAB_004258a0
    LEA EBX,[EDI + 0x19c44]             ; 004258a5
    PUSH EBX                            ; 004258ab
    CALL FUN_0040b670                   ; 004258ac
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004258b1
    PUSH 0x5d5077                       ; 004258b4 | = "allowSwarm"
    LEA EBX,[EDI + 0x19c48]             ; 004258b9
    PUSH EBX                            ; 004258bf
    CALL FUN_0040b670                   ; 004258c0
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b670()
    ADD ESP,0x8                         ; 004258c5
    PUSH 0x5d5082                       ; 004258c8 | = "allowChaseEvent"
    LEA EBX,[EDI + 0x19c4c]             ; 004258cd
    PUSH EBX                            ; 004258d3
    CALL FUN_0040b440                   ; 004258d4
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004258d9
    PUSH 0x5d5092                       ; 004258dc | = "allowSwarmEvent"
    LEA EBX,[EDI + 0x19cb0]             ; 004258e1
    PUSH EBX                            ; 004258e7
    CALL FUN_0040b440                   ; 004258e8
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 004258ed
    PUSH 0x5d50a2                       ; 004258f0 | = "animateEvent"
    ADD EDI,0x19d14                     ; 004258f5
    PUSH EDI                            ; 004258fb
    CALL FUN_0040b440                   ; 004258fc
        ;   XREF to: 0040b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b440()
    ADD ESP,0x8                         ; 00425901
    POP EBP                             ; 00425904
    POP EDI                             ; 00425905
    POP ESI                             ; 00425906
    POP EBX                             ; 00425907
    RET                                 ; 00425908


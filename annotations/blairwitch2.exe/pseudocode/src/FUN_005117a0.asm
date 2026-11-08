; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005117a0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa918
;   undefined4 DAT_006141f0
;   undefined4 DAT_00618170
;   undefined4 DAT_01d182f0
;
; Called Functions:
;   FUN_00408cf0
;   FUN_00429e90
;   FUN_0042aa00
;   FUN_0048e340
;   FUN_004fc200
;   FUN_004fc7b0
;   FUN_005030c0
;   FUN_005035c0
;   FUN_00503620
;   FUN_00544f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005117a0
        ;   Label: FUN_005117a0
    PUSH ESI                            ; 005117a1
    PUSH EDI                            ; 005117a2
    PUSH EBP                            ; 005117a3
    MOV EBP,ESP                         ; 005117a4
    SUB ESP,0x1c                        ; 005117a6
    AND ESP,0xfffffff8                  ; 005117a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005117ac
    FLD float ptr [EBX + 0x25080]       ; 005117af
    FLD1                                ; 005117b5
    FCOMPP                              ; 005117b7
    FNSTSW AX                           ; 005117b9
    SAHF                                ; 005117bb
    JA 0x005117c5                       ; 005117bc
        ;   XREF to: 005117c5 (CONDITIONAL_JUMP)  ; LAB_005117c5
    MOV ESP,EBP                         ; 005117be
    POP EBP                             ; 005117c0
    POP EDI                             ; 005117c1
    POP ESI                             ; 005117c2
    POP EBX                             ; 005117c3
    RET                                 ; 005117c4
    LEA ESI,[EBX + 0x2b4]               ; 005117c5
        ;   Label: LAB_005117c5
    PUSH ESI                            ; 005117cb
    CALL FUN_005035c0                   ; 005117cc
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005117d1
    ADD ESP,0x4                         ; 005117d4
    MOV EDI,EAX                         ; 005117d7
    CMP EAX,0x1                         ; 005117d9
    JZ 0x00511885                       ; 005117dc
        ;   XREF to: 00511885 (CONDITIONAL_JUMP)  ; LAB_00511885
    CMP EAX,0x2                         ; 005117e2
    JZ 0x00511885                       ; 005117e5
        ;   XREF to: 00511885 (CONDITIONAL_JUMP)  ; LAB_00511885
    LEA EAX,[EBX + 0x24348]             ; 005117eb
    PUSH EAX                            ; 005117f1
    MOV EDX,dword ptr [0x006141f0]      ; 005117f2 | DAT_006141f0
    PUSH EDX                            ; 005117f8
    CALL FUN_0048e340                   ; 005117f9
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 005117fe
    TEST EAX,EAX                        ; 00511801
    JNZ 0x00511851                      ; 00511803
        ;   XREF to: 00511851 (CONDITIONAL_JUMP)  ; LAB_00511851
    MOV EAX,dword ptr [EBP + 0x18]      ; 00511805
        ;   Label: LAB_00511805
    MOV dword ptr [ESP],EAX             ; 00511808
    LEA EAX,[EBX + 0x2508]              ; 0051180b
    MOV dword ptr [EAX + 0x8],0x0       ; 00511811
    LEA ESI,[EBX + 0x2b4]               ; 00511818
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051181e
    MOV dword ptr [EAX + 0x4],EDX       ; 00511821
    MOV EDX,dword ptr [EAX + 0x4]       ; 00511824
    MOV dword ptr [EAX],EDX             ; 00511827
    FLD float ptr [ESP]                 ; 00511829
        ;   Label: LAB_00511829
    FLDZ                                ; 0051182c
    FCOMPP                              ; 0051182e
    FNSTSW AX                           ; 00511830
    SAHF                                ; 00511832
    JNC 0x005118ee                      ; 00511833
        ;   XREF to: 005118ee (CONDITIONAL_JUMP)  ; LAB_005118ee
    MOV EAX,ESP                         ; 00511839
    PUSH EAX                            ; 0051183b
    PUSH ESI                            ; 0051183c
    CALL FUN_005030c0                   ; 0051183d
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 00511842
    PUSH EAX                            ; 00511845
    PUSH EBX                            ; 00511846
    CALL FUN_0042aa00                   ; 00511847
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 0051184c
    JMP 0x00511829                      ; 0051184f
        ;   XREF to: 00511829 (UNCONDITIONAL_JUMP)  ; LAB_00511829
    PUSH 0x1                            ; 00511851
        ;   Label: LAB_00511851
    PUSH 0x1                            ; 00511853
    PUSH ESI                            ; 00511855
    CALL FUN_00503620                   ; 00511856
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    MOV AH,byte ptr [EBX + 0x243ec]     ; 0051185b
    ADD ESP,0xc                         ; 00511861
    TEST AH,AH                          ; 00511864
    JZ 0x00511805                       ; 00511866
        ;   XREF to: 00511805 (CONDITIONAL_JUMP)  ; LAB_00511805
    LEA ESI,[EBX + 0x243ec]             ; 00511868
    PUSH ESI                            ; 0051186e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0051186f
    PUSH EBX                            ; 00511875
    CALL dword ptr [EAX + 0x34]         ; 00511876
    ADD ESP,0x8                         ; 00511879
    MOV byte ptr [EBX + 0x243ec],0x0    ; 0051187c
    JMP 0x00511805                      ; 00511883
        ;   XREF to: 00511805 (UNCONDITIONAL_JUMP)  ; LAB_00511805
    CMP EDI,0x2                         ; 00511885
        ;   Label: LAB_00511885
    JNZ 0x00511805                      ; 00511888
        ;   XREF to: 00511805 (CONDITIONAL_JUMP)  ; LAB_00511805
    FLD float ptr [EBP + 0x18]          ; 0051188e
    FDIV float ptr [0x005fa918]         ; 00511891 | DAT_005fa918
    FADD float ptr [EBX + 0x25080]      ; 00511897
    FST float ptr [EBX + 0x25080]       ; 0051189d
    FLD1                                ; 005118a3
    FCOMPP                              ; 005118a5
    FNSTSW AX                           ; 005118a7
    SAHF                                ; 005118a9
    JA 0x00511805                       ; 005118aa
        ;   XREF to: 00511805 (CONDITIONAL_JUMP)  ; LAB_00511805
    MOV EDX,dword ptr [EBX + 0x24450]   ; 005118b0
    TEST EDX,EDX                        ; 005118b6
    JZ 0x00511805                       ; 005118b8
        ;   XREF to: 00511805 (CONDITIONAL_JUMP)  ; LAB_00511805
    PUSH EDX                            ; 005118be
    MOV ESI,dword ptr [0x00618170]      ; 005118bf | DAT_00618170
    PUSH ESI                            ; 005118c5 | DAT_01d182f0
    CALL FUN_004fc200                   ; 005118c6
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc200()
    ADD ESP,0x8                         ; 005118cb
    PUSH 0x1                            ; 005118ce
    PUSH EBX                            ; 005118d0
    MOV EAX,[0x00618170]                ; 005118d1 | DAT_00618170
    PUSH EAX                            ; 005118d6 | DAT_01d182f0
    MOV dword ptr [EBX + 0x24450],0x0   ; 005118d7
    CALL FUN_004fc7b0                   ; 005118e1
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc7b0()
    ADD ESP,0xc                         ; 005118e6
    JMP 0x00511805                      ; 005118e9
        ;   XREF to: 00511805 (UNCONDITIONAL_JUMP)  ; LAB_00511805
    TEST EDI,EDI                        ; 005118ee
        ;   Label: LAB_005118ee
    JZ 0x0051195b                       ; 005118f0
        ;   XREF to: 0051195b (CONDITIONAL_JUMP)  ; LAB_0051195b
    LEA EAX,[EBX + 0x2508]              ; 005118f2
    PUSH EAX                            ; 005118f8
    PUSH EBX                            ; 005118f9
    LEA ESI,[ESP + 0x18]                ; 005118fa
    LEA EDI,[ESP + 0xc]                 ; 005118fe
    CALL FUN_00408cf0                   ; 00511902
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    LEA ESI,[ESP + 0x18]                ; 00511907
    ADD ESP,0x8                         ; 0051190b
    LEA EAX,[EBX + 0x20]                ; 0051190e
    MOVSD ES:EDI,ESI                    ; 00511911
    MOVSD ES:EDI,ESI                    ; 00511912
    MOVSD ES:EDI,ESI                    ; 00511913
    FLD float ptr [EAX]                 ; 00511914
    FLD float ptr [EAX + 0x4]           ; 00511916
    FLD float ptr [EAX + 0x8]           ; 00511919
    FXCH ST2                            ; 0051191c
    FADD float ptr [ESP + 0x4]          ; 0051191e
    FXCH                                ; 00511922
    FADD float ptr [ESP + 0x8]          ; 00511924
    FXCH ST2                            ; 00511928
    FADD float ptr [ESP + 0xc]          ; 0051192a
    FXCH                                ; 0051192e
    FSTP float ptr [EAX]                ; 00511930
    FXCH                                ; 00511932
    FSTP float ptr [EAX + 0x4]          ; 00511934
    FSTP float ptr [EAX + 0x8]          ; 00511937
    MOV ECX,dword ptr [EBX + 0x24450]   ; 0051193a
    TEST ECX,ECX                        ; 00511940
    JZ 0x0051195b                       ; 00511942
        ;   XREF to: 0051195b (CONDITIONAL_JUMP)  ; LAB_0051195b
    MOV EDX,dword ptr [EAX]             ; 00511944
    MOV dword ptr [ECX + 0x20],EDX      ; 00511946
    MOV EDX,dword ptr [EAX + 0x4]       ; 00511949
    MOV dword ptr [ECX + 0x24],EDX      ; 0051194c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051194f
    MOV dword ptr [ECX + 0x28],EDX      ; 00511952
    MOV EAX,dword ptr [EAX + 0xc]       ; 00511955
    MOV dword ptr [ECX + 0x2c],EAX      ; 00511958
    LEA EAX,[EBX + 0x2b4]               ; 0051195b
        ;   Label: LAB_0051195b
    PUSH EAX                            ; 00511961
    CALL FUN_00544f00                   ; 00511962
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 00511967
    PUSH dword ptr [EBP + 0x18]         ; 0051196a
    PUSH EBX                            ; 0051196d
    CALL FUN_00429e90                   ; 0051196e
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 00511973
    MOV ESP,EBP                         ; 00511976
    POP EBP                             ; 00511978
    POP EDI                             ; 00511979
    POP ESI                             ; 0051197a
    POP EBX                             ; 0051197b
    RET                                 ; 0051197c


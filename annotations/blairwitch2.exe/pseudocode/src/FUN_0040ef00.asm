; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040ef00(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_armour_wav_005cb36e
;   undefined4 DAT_006141f0
;
; Called Functions:
;   FUN_004244b0
;   FUN_00427360
;   FUN_004287f0
;   FUN_00429e90
;   FUN_0042b2a0
;   FUN_0048e340
;   FUN_005030c0
;   FUN_005035c0
;   FUN_00544f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ef00
        ;   Label: FUN_0040ef00
    PUSH ESI                            ; 0040ef01
    PUSH EDI                            ; 0040ef02
    PUSH EBP                            ; 0040ef03
    MOV EBP,ESP                         ; 0040ef04
    SUB ESP,0x10                        ; 0040ef06
    AND ESP,0xfffffff8                  ; 0040ef09
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040ef0c
    PUSH dword ptr [EBP + 0x18]         ; 0040ef0f
    PUSH ESI                            ; 0040ef12
    CALL FUN_004244b0                   ; 0040ef13
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 0040ef18
    TEST EAX,EAX                        ; 0040ef1b
    JZ 0x0040efe7                       ; 0040ef1d
        ;   XREF to: 0040efe7 (CONDITIONAL_JUMP)  ; LAB_0040efe7
    LEA EAX,[ESI + 0x2508]              ; 0040ef23
    MOV dword ptr [EAX + 0x8],0x0       ; 0040ef29
    FLD float ptr [EBP + 0x18]          ; 0040ef30
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040ef33
    MOV dword ptr [EAX + 0x4],EDX       ; 0040ef36
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040ef39
    MOV dword ptr [EAX],EDX             ; 0040ef3c
    FMUL float ptr [ESI + 0x10a60]      ; 0040ef3e
    LEA EBX,[ESI + 0x2b4]               ; 0040ef44
    FSTP float ptr [ESP]                ; 0040ef4a
    FLD float ptr [ESP]                 ; 0040ef4d
        ;   Label: LAB_0040ef4d
    FLDZ                                ; 0040ef50
    FCOMPP                              ; 0040ef52
    FNSTSW AX                           ; 0040ef54
    SAHF                                ; 0040ef56
    JC 0x0040efee                       ; 0040ef57
        ;   XREF to: 0040efee (CONDITIONAL_JUMP)  ; LAB_0040efee
    FLD float ptr [EBP + 0x18]          ; 0040ef5d
    FMUL float ptr [ESI + 0x10a60]      ; 0040ef60
    FLD float ptr [ESI + 0x2510]        ; 0040ef66
    SUB ESP,0x4                         ; 0040ef6c
    FSTP float ptr [ESI + 0x2594]       ; 0040ef6f
    FSTP float ptr [ESP]                ; 0040ef75
    PUSH ESI                            ; 0040ef78
    CALL FUN_0042b2a0                   ; 0040ef79
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b2a0()
    ADD ESP,0x8                         ; 0040ef7e
    PUSH EBX                            ; 0040ef81
    CALL FUN_005035c0                   ; 0040ef82
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    ADD ESP,0x4                         ; 0040ef87
    PUSH dword ptr [EBP + 0x18]         ; 0040ef8a
    PUSH ESI                            ; 0040ef8d
    CALL FUN_004287f0                   ; 0040ef8e
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004287f0()
    ADD ESP,0x8                         ; 0040ef93
    TEST EAX,EAX                        ; 0040ef96
    JZ 0x0040efb2                       ; 0040ef98
        ;   XREF to: 0040efb2 (CONDITIONAL_JUMP)  ; LAB_0040efb2
    LEA EAX,[ESI + 0x2508]              ; 0040ef9a
    MOV dword ptr [EAX + 0x8],0x0       ; 0040efa0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0040efa7
    MOV dword ptr [EAX + 0x4],EDX       ; 0040efaa
    MOV EDX,dword ptr [EAX + 0x4]       ; 0040efad
    MOV dword ptr [EAX],EDX             ; 0040efb0
    LEA EAX,[ESI + 0x2b4]               ; 0040efb2
        ;   Label: LAB_0040efb2
    PUSH EAX                            ; 0040efb8
    CALL FUN_00544f00                   ; 0040efb9
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 0040efbe
    PUSH dword ptr [EBP + 0x18]         ; 0040efc1
    PUSH ESI                            ; 0040efc4
    CALL FUN_00429e90                   ; 0040efc5
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 0040efca
    LEA EAX,[ESI + 0x10af8]             ; 0040efcd
    PUSH EAX                            ; 0040efd3
    MOV EDX,dword ptr [0x006141f0]      ; 0040efd4 | DAT_006141f0
    PUSH EDX                            ; 0040efda
    CALL FUN_0048e340                   ; 0040efdb
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 0040efe0
    TEST EAX,EAX                        ; 0040efe3
    JNZ 0x0040efff                      ; 0040efe5
        ;   XREF to: 0040efff (CONDITIONAL_JUMP)  ; LAB_0040efff
    MOV ESP,EBP                         ; 0040efe7
        ;   Label: LAB_0040efe7
    POP EBP                             ; 0040efe9
    POP EDI                             ; 0040efea
    POP ESI                             ; 0040efeb
    POP EBX                             ; 0040efec
    RET                                 ; 0040efed
    MOV EAX,ESP                         ; 0040efee
        ;   Label: LAB_0040efee
    PUSH EAX                            ; 0040eff0
    PUSH EBX                            ; 0040eff1
    CALL FUN_005030c0                   ; 0040eff2
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 0040eff7
    JMP 0x0040ef4d                      ; 0040effa
        ;   XREF to: 0040ef4d (UNCONDITIONAL_JUMP)  ; LAB_0040ef4d
    PUSH 0x5cb36e                       ; 0040efff | = "armour.wav"
        ;   Label: LAB_0040efff
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 0040f004
    PUSH ESI                            ; 0040f00a
    CALL dword ptr [EAX + 0x34]         ; 0040f00b
    ADD ESP,0x8                         ; 0040f00e
    PUSH 0x1                            ; 0040f011
    LEA EAX,[ESP + 0x8]                 ; 0040f013
    PUSH 0xbf800000                     ; 0040f017
    XOR ECX,ECX                         ; 0040f01c
    PUSH EAX                            ; 0040f01e
    MOV EDI,0x40a00000                  ; 0040f01f
    MOV dword ptr [ESP + 0x10],ECX      ; 0040f024
    PUSH ESI                            ; 0040f028
    MOV dword ptr [ESP + 0x18],ECX      ; 0040f029
    MOV dword ptr [ESP + 0x1c],EDI      ; 0040f02d
    CALL FUN_00427360                   ; 0040f031
        ;   XREF to: 00427360 (UNCONDITIONAL_CALL)  ; undefined FUN_00427360()
    ADD ESP,0x10                        ; 0040f036
    MOV ESP,EBP                         ; 0040f039
    POP EBP                             ; 0040f03b
    POP EDI                             ; 0040f03c
    POP ESI                             ; 0040f03d
    POP EBX                             ; 0040f03e
    RET                                 ; 0040f03f


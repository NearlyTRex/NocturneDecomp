; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00528fc0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b6f30 at 004b73b6
;
; Referenced Globals:
;   undefined4 DAT_005cde18
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fe9dc
;   undefined4 DAT_01549aa0
;   undefined4 DAT_01549aa4
;   undefined4 DAT_01549ab4
;   undefined4 DAT_01549abc
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01d2131c
;   undefined4 DAT_01d21558
;   undefined4 DAT_01dd4890
;   undefined4 DAT_01ed3800
;   undefined4 DAT_01ed7010
;
; Called Functions:
;   FUN_004031c0
;   FUN_00406bf0
;   FUN_00434b00
;   FUN_004b0a20
;   FUN_004b2a80
;   FUN_004b2e40
;   FUN_004b30f0
;   FUN_00528f60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00528fc0
        ;   Label: FUN_00528fc0
    PUSH ESI                            ; 00528fc1
    PUSH EDI                            ; 00528fc2
    PUSH EBP                            ; 00528fc3
    SUB ESP,0x1c                        ; 00528fc4
    MOV EDI,dword ptr [ESP + 0x30]      ; 00528fc7
    MOV EAX,[0x005fe9dc]                ; 00528fcb | DAT_005fe9dc
    MOV EDX,dword ptr [EAX + 0x24c]     ; 00528fd0 | DAT_01d21558
    TEST EDX,EDX                        ; 00528fd6
    JNZ 0x005291e0                      ; 00528fd8
        ;   XREF to: 005291e0 (CONDITIONAL_JUMP)  ; LAB_005291e0
    PUSH EAX                            ; 00528fde
    CALL FUN_00434b00                   ; 00528fdf
        ;   XREF to: 00434b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00434b00()
    MOV dword ptr [ESP + 0x1c],EAX      ; 00528fe4
    FLD float ptr [ESP + 0x1c]          ; 00528fe8
    FDIV float ptr [0x005cde18]         ; 00528fec | DAT_005cde18
    FSUBR float ptr [0x01ed7010]        ; 00528ff2 | DAT_01ed7010
    ADD ESP,0x4                         ; 00528ff8
        ;   Label: LAB_00528ff8
    FSTP float ptr [0x01ed7010]         ; 00528ffb | DAT_01ed7010
    FLD float ptr [0x01ed7010]          ; 00529001 | DAT_01ed7010
    FLDZ                                ; 00529007
    FCOMPP                              ; 00529009
    FNSTSW AX                           ; 0052900b
    SAHF                                ; 0052900d
    JBE 0x00529018                      ; 0052900e
        ;   XREF to: 00529018 (CONDITIONAL_JUMP)  ; LAB_00529018
    XOR ECX,ECX                         ; 00529010
    MOV dword ptr [0x01ed7010],ECX      ; 00529012 | DAT_01ed7010
    FLD float ptr [0x01ed7010]          ; 00529018 | DAT_01ed7010
        ;   Label: LAB_00529018
    FLD1                                ; 0052901e
    FCOMPP                              ; 00529020
    FNSTSW AX                           ; 00529022
    SAHF                                ; 00529024
    JNC 0x00529031                      ; 00529025
        ;   XREF to: 00529031 (CONDITIONAL_JUMP)  ; LAB_00529031
    MOV dword ptr [0x01ed7010],0x3f800000 ; 00529027 | DAT_01ed7010
    MOV EAX,[0x005fba18]                ; 00529031 | DAT_005fba18
        ;   Label: LAB_00529031
    MOV EBX,dword ptr [0x005fba1c]      ; 00529036 | DAT_005fba1c
    PUSH EDI                            ; 0052903c
    XOR ESI,ESI                         ; 0052903d
    MOV dword ptr [ESP + 0xc],EAX       ; 0052903f
    CALL FUN_00528f60                   ; 00529043
        ;   XREF to: 00528f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00528f60()
    MOV dword ptr [ESP + 0x8],ESI       ; 00529048
    ADD ESP,0x4                         ; 0052904c
    MOV ESI,EAX                         ; 0052904f
    TEST EAX,EAX                        ; 00529051
    JLE 0x00529092                      ; 00529053
        ;   XREF to: 00529092 (CONDITIONAL_JUMP)  ; LAB_00529092
    CMP dword ptr [0x01ed3800],0x2      ; 00529055 | DAT_01ed3800
    JZ 0x00529074                       ; 0052905c
        ;   XREF to: 00529074 (CONDITIONAL_JUMP)  ; LAB_00529074
    PUSH 0x0                            ; 0052905e
    DEC EAX                             ; 00529060
    PUSH EAX                            ; 00529061
    MOV EAX,dword ptr [ESP + 0x10]      ; 00529062
    DEC EAX                             ; 00529066
    PUSH EAX                            ; 00529067
    PUSH 0x0                            ; 00529068
    PUSH 0x0                            ; 0052906a
    CALL FUN_004031c0                   ; 0052906c
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 00529071
    PUSH 0x0                            ; 00529074
        ;   Label: LAB_00529074
    LEA EAX,[EBX + -0x1]                ; 00529076
    PUSH EAX                            ; 00529079
    MOV EAX,dword ptr [ESP + 0x10]      ; 0052907a
    DEC EAX                             ; 0052907e
    PUSH EAX                            ; 0052907f
    MOV EAX,EBX                         ; 00529080
    SUB EAX,ESI                         ; 00529082
    PUSH EAX                            ; 00529084
    MOV EAX,dword ptr [ESP + 0x14]      ; 00529085
    PUSH EAX                            ; 00529089
    CALL FUN_004031c0                   ; 0052908a
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 0052908f
    MOV EAX,[0x01c6b5ac]                ; 00529092 | DAT_01c6b5ac
        ;   Label: LAB_00529092
    MOV dword ptr [ESP],EAX             ; 00529097
    MOV EAX,EBX                         ; 0052909a
    SUB EAX,ESI                         ; 0052909c
    MOV ESI,EAX                         ; 0052909e
    CMP byte ptr [EDI + 0x50],0x0       ; 005290a0
    JZ 0x005291d0                       ; 005290a4
        ;   XREF to: 005291d0 (CONDITIONAL_JUMP)  ; LAB_005291d0
    MOV EAX,[0x005fe9dc]                ; 005290aa | DAT_005fe9dc
    CMP dword ptr [EAX + 0x10],0x0      ; 005290af | DAT_01d2131c
    JZ 0x005291d0                       ; 005290b3
        ;   XREF to: 005291d0 (CONDITIONAL_JUMP)  ; LAB_005291d0
    MOV ECX,dword ptr [0x005fba1c]      ; 005290b9 | DAT_005fba1c
    MOV EBP,dword ptr [0x01549aa0]      ; 005290bf | DAT_01549aa0
    CMP ECX,0x1e0                       ; 005290c5
    JGE 0x005290d3                      ; 005290cb
        ;   XREF to: 005290d3 (CONDITIONAL_JUMP)  ; LAB_005290d3
    MOV EBP,dword ptr [0x01549aa4]      ; 005290cd | DAT_01549aa4
    CMP dword ptr [0x005fba1c],0x180    ; 005290d3 | DAT_005fba1c
        ;   Label: LAB_005290d3
    JGE 0x005290f2                      ; 005290dd
        ;   XREF to: 005290f2 (CONDITIONAL_JUMP)  ; LAB_005290f2
    CMP dword ptr [0x01dd4890],0x0      ; 005290df | DAT_01dd4890
    JZ 0x00529205                       ; 005290e6
        ;   XREF to: 00529205 (CONDITIONAL_JUMP)  ; LAB_00529205
    MOV EBP,dword ptr [0x01549ab4]      ; 005290ec | DAT_01549ab4
    MOV EDX,dword ptr [0x005fba18]      ; 005290f2 | DAT_005fba18
        ;   Label: LAB_005290f2
    LEA EAX,[EDX*0x8 + 0x0]             ; 005290f8
    ADD EDX,EAX                         ; 005290ff
    MOV ECX,0xa                         ; 00529101
    MOV EAX,EDX                         ; 00529106
    SAR EDX,0x1f                        ; 00529108
    IDIV ECX                            ; 0052910b
    PUSH EAX                            ; 0052910d
    PUSH 0x400                          ; 0052910e
    PUSH ECX                            ; 00529113
    PUSH 0x1ed3808                      ; 00529114
    ADD EDI,0x50                        ; 00529119
    PUSH EDI                            ; 0052911c
    PUSH EBP                            ; 0052911d
    CALL FUN_004b2e40                   ; 0052911e
        ;   XREF to: 004b2e40 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2e40()
    ADD ESP,0x18                        ; 00529123
    PUSH 0x58                           ; 00529126
    PUSH EBP                            ; 00529128
    MOV EDI,EAX                         ; 00529129
    MOV dword ptr [ESP + 0x1c],EAX      ; 0052912b
    CALL FUN_004b30f0                   ; 0052912f
        ;   XREF to: 004b30f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b30f0()
    MOV EDX,EAX                         ; 00529134
    IMUL EDX,EDI                        ; 00529136
    ADD ESI,EBX                         ; 00529139
    MOV ECX,EAX                         ; 0052913b
    ADD ESP,0x8                         ; 0052913d
    SUB ESI,EDX                         ; 00529140
    MOV dword ptr [ESP + 0xc],EAX       ; 00529142
    MOV EDX,ESI                         ; 00529146
    MOV EAX,ESI                         ; 00529148
    SAR EDX,0x1f                        ; 0052914a
    SUB EAX,EDX                         ; 0052914d
    SAR EAX,0x1                         ; 0052914f
    MOV ESI,EAX                         ; 00529151
    CMP EDI,0x4                         ; 00529153
    JGE 0x0052915c                      ; 00529156
        ;   XREF to: 0052915c (CONDITIONAL_JUMP)  ; LAB_0052915c
    INC EDI                             ; 00529158
    IMUL ECX,EDI                        ; 00529159
    SUB EBX,ECX                         ; 0052915c
        ;   Label: LAB_0052915c
    CMP ESI,EBX                         ; 0052915e
    JLE 0x00529164                      ; 00529160
        ;   XREF to: 00529164 (CONDITIONAL_JUMP)  ; LAB_00529164
    MOV ESI,EBX                         ; 00529162
    PUSH 0xffff                         ; 00529164
        ;   Label: LAB_00529164
    CALL FUN_00406bf0                   ; 00529169
        ;   XREF to: 00406bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00406bf0()
    ADD ESP,0x4                         ; 0052916e
    MOV ECX,dword ptr [ESP + 0x14]      ; 00529171
    XOR EDI,EDI                         ; 00529175
    TEST ECX,ECX                        ; 00529177
    JLE 0x005291d0                      ; 00529179
        ;   XREF to: 005291d0 (CONDITIONAL_JUMP)  ; LAB_005291d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052917b
    ADD EAX,dword ptr [ESP + 0x8]       ; 0052917f
    MOV EBX,0x1ed3808                   ; 00529183
    MOV dword ptr [ESP + 0x10],EAX      ; 00529188
    PUSH EBX                            ; 0052918c
        ;   Label: LAB_0052918c
    PUSH EBP                            ; 0052918d
    CALL FUN_004b2a80                   ; 0052918e
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2a80()
    ADD ESP,0x8                         ; 00529193
    MOV EDX,dword ptr [ESP + 0x10]      ; 00529196
    SUB EDX,EAX                         ; 0052919a
    MOV EAX,EDX                         ; 0052919c
    SAR EDX,0x1f                        ; 0052919e
    SUB EAX,EDX                         ; 005291a1
    SAR EAX,0x1                         ; 005291a3
    PUSH 0x0                            ; 005291a5
    PUSH 0xf8                           ; 005291a7
    PUSH ESI                            ; 005291ac
    PUSH EAX                            ; 005291ad
    PUSH EBX                            ; 005291ae
    PUSH EBP                            ; 005291af
    INC EDI                             ; 005291b0
    CALL FUN_004b0a20                   ; 005291b1
        ;   XREF to: 004b0a20 (UNCONDITIONAL_CALL)  ; undefined FUN_004b0a20()
    ADD ESP,0x18                        ; 005291b6
    ADD EBX,0x400                       ; 005291b9
    MOV EAX,dword ptr [ESP + 0xc]       ; 005291bf
    MOV EDX,dword ptr [ESP + 0x14]      ; 005291c3
    ADD ESI,EAX                         ; 005291c7
    CMP EDI,EDX                         ; 005291c9
    JL 0x0052918c                       ; 005291cb
        ;   XREF to: 0052918c (CONDITIONAL_JUMP)  ; LAB_0052918c
    LEA EAX,[EAX]                       ; 005291cd
    MOV EAX,dword ptr [ESP]             ; 005291d0
        ;   Label: LAB_005291d0
    MOV [0x01c6b5ac],EAX                ; 005291d3 | DAT_01c6b5ac
    ADD ESP,0x1c                        ; 005291d8
    POP EBP                             ; 005291db
    POP EDI                             ; 005291dc
    POP ESI                             ; 005291dd
    POP EBX                             ; 005291de
    RET                                 ; 005291df
    PUSH EAX                            ; 005291e0
        ;   Label: LAB_005291e0
    MOV dword ptr [0x01ed3800],EDX      ; 005291e1 | DAT_01ed3800
    CALL FUN_00434b00                   ; 005291e7
        ;   XREF to: 00434b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00434b00()
    MOV dword ptr [ESP + 0x1c],EAX      ; 005291ec
    FLD float ptr [ESP + 0x1c]          ; 005291f0
    FDIV float ptr [0x005cde18]         ; 005291f4 | DAT_005cde18
    FADD float ptr [0x01ed7010]         ; 005291fa | DAT_01ed7010
    JMP 0x00528ff8                      ; 00529200
        ;   XREF to: 00528ff8 (UNCONDITIONAL_JUMP)  ; LAB_00528ff8
    MOV EBP,dword ptr [0x01549abc]      ; 00529205 | DAT_01549abc
        ;   Label: LAB_00529205
    JMP 0x005290f2                      ; 0052920b
        ;   XREF to: 005290f2 (UNCONDITIONAL_JUMP)  ; LAB_005290f2


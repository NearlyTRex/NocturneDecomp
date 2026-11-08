; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00427fb0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[11]:
;   FUN_00410880 at 00410898
;   FUN_004364a0 at 00436517
;   FUN_0045b190 at 0045b3eb
;   FUN_00488890 at 004888b7
;   FUN_004b1bf0 at 004b1d48
;   FUN_004cd880 at 004cd910
;   FUN_004d6370 at 004d642d
;   FUN_00510b90 at 00510c0b
;   FUN_0051fb40 at 0051fbb7
;   FUN_0056d060 at 0056d2bb
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005ccded+1
;   undefined4 DAT_006141f0
;   undefined4 DAT_00616494
;   undefined4 DAT_006167e0
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cedef4
;
; Called Functions:
;   FUN_00408d70
;   FUN_00426a10
;   FUN_00426e70
;   FUN_00427210
;   FUN_00427260
;   FUN_00427360
;   FUN_00428e00
;   FUN_004894f0
;   FUN_004bb8d0
;   FUN_004c9850
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427fb0
        ;   Label: FUN_00427fb0
    PUSH ESI                            ; 00427fb1
    PUSH EDI                            ; 00427fb2
    PUSH EBP                            ; 00427fb3
    MOV EBP,ESP                         ; 00427fb4
    SUB ESP,0x38                        ; 00427fb6
    AND ESP,0xfffffff8                  ; 00427fb9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00427fbc
    CMP dword ptr [EBX + 0x281c],0x0    ; 00427fbf
    JNZ 0x00428144                      ; 00427fc6
        ;   XREF to: 00428144 (CONDITIONAL_JUMP)  ; LAB_00428144
    MOV EAX,dword ptr [EBP + 0x18]      ; 00427fcc
    FLD float ptr [EAX + 0x4]           ; 00427fcf
    FLDZ                                ; 00427fd2
    FCOMPP                              ; 00427fd4
    FNSTSW AX                           ; 00427fd6
    SAHF                                ; 00427fd8
    JNC 0x0042813d                      ; 00427fd9
        ;   XREF to: 0042813d (CONDITIONAL_JUMP)  ; LAB_0042813d
    MOV EDX,dword ptr [EBP + 0x18]      ; 00427fdf
    FLD float ptr [EDX + 0x10]          ; 00427fe2
    FMUL ST0                            ; 00427fe5
    FLD float ptr [EDX + 0xc]           ; 00427fe7
    FMUL ST0                            ; 00427fea
    FADDP                               ; 00427fec
    FLD float ptr [EDX + 0x14]          ; 00427fee
    FMUL ST0                            ; 00427ff1
    FADDP                               ; 00427ff3
    FSQRT                               ; 00427ff5
    XOR ECX,ECX                         ; 00427ff7
    ADD EDX,0xc                         ; 00427ff9
    FLDZ                                ; 00427ffc
    FCOMPP                              ; 00427ffe
    FNSTSW AX                           ; 00428000
    SAHF                                ; 00428002
    JNC 0x00428007                      ; 00428003
        ;   XREF to: 00428007 (CONDITIONAL_JUMP)  ; LAB_00428007
    MOV ECX,EDX                         ; 00428005
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428007
        ;   Label: LAB_00428007
    MOV EAX,dword ptr [EAX + 0x30]      ; 0042800a
    CMP EAX,0x6                         ; 0042800d
    JNC 0x00428192                      ; 00428010
        ;   XREF to: 00428192 (CONDITIONAL_JUMP)  ; LAB_00428192
    CMP EAX,0x4                         ; 00428016
    JNC 0x004281af                      ; 00428019
        ;   XREF to: 004281af (CONDITIONAL_JUMP)  ; LAB_004281af
    CMP EAX,0x3                         ; 0042801f
    JNZ 0x00428034                      ; 00428022
        ;   XREF to: 00428034 (CONDITIONAL_JUMP)  ; LAB_00428034
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428024
    PUSH dword ptr [EAX + 0x18]         ; 00428027
    PUSH ECX                            ; 0042802a
    PUSH EBX                            ; 0042802b
    CALL FUN_00427260                   ; 0042802c
        ;   XREF to: 00427260 (UNCONDITIONAL_CALL)  ; undefined FUN_00427260()
    ADD ESP,0xc                         ; 00428031
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428034
        ;   Label: LAB_00428034
    CMP dword ptr [EAX + 0x28],0x5      ; 00428037
    JNZ 0x00428076                      ; 0042803b
        ;   XREF to: 00428076 (CONDITIONAL_JUMP)  ; LAB_00428076
    ADD EAX,0x1c                        ; 0042803d
    PUSH EAX                            ; 00428040
    PUSH EBX                            ; 00428041
    LEA ESI,[ESP + 0x2c]                ; 00428042
    CALL FUN_00408d70                   ; 00428046
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 0042804b
    LEA EDI,[ESP + 0x18]                ; 0042804e
    PUSH 0x0                            ; 00428052
    LEA ESI,[ESP + 0x28]                ; 00428054
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428058
    PUSH 0x3f800000                     ; 0042805b
    MOVSD ES:EDI,ESI                    ; 00428060
    MOVSD ES:EDI,ESI                    ; 00428061
    MOVSD ES:EDI,ESI                    ; 00428062
    PUSH 0x0                            ; 00428063
    MOV ESI,dword ptr [EAX]             ; 00428065
    PUSH ESI                            ; 00428067
    LEA EAX,[ESP + 0x28]                ; 00428068
    PUSH EAX                            ; 0042806c
    PUSH EBX                            ; 0042806d
    CALL FUN_00426e70                   ; 0042806e
        ;   XREF to: 00426e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00426e70()
    ADD ESP,0x18                        ; 00428073
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428076
        ;   Label: LAB_00428076
    FLD float ptr [EAX + 0x8]           ; 00428079
    FLDZ                                ; 0042807c
    FCOMPP                              ; 0042807e
    FNSTSW AX                           ; 00428080
    SAHF                                ; 00428082
    JNC 0x004280e6                      ; 00428083
        ;   XREF to: 004280e6 (CONDITIONAL_JUMP)  ; LAB_004280e6
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428085
    FLD float ptr [EAX + 0x4]           ; 00428088
    FMUL float ptr [EAX + 0x8]          ; 0042808b
    CALL FUN_005b7ff0                   ; 0042808e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x34]        ; 00428093
    MOV EAX,dword ptr [ESP + 0x34]      ; 00428097
    INC EAX                             ; 0042809b
    MOV dword ptr [ESP + 0x30],EAX      ; 0042809c
    MOV EAX,dword ptr [EBP + 0x18]      ; 004280a0
    ADD EAX,0x1c                        ; 004280a3
    PUSH EAX                            ; 004280a6
    PUSH EBX                            ; 004280a7
    LEA ESI,[ESP + 0x14]                ; 004280a8
    LEA EDI,[ESP + 0x8]                 ; 004280ac
    CALL FUN_00408d70                   ; 004280b0
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x14]                ; 004280b5
    ADD ESP,0x8                         ; 004280b9
    MOVSD ES:EDI,ESI                    ; 004280bc
    MOVSD ES:EDI,ESI                    ; 004280bd
    MOVSD ES:EDI,ESI                    ; 004280be
    MOV EDI,dword ptr [EBX + 0x280c]    ; 004280bf
    PUSH EDI                            ; 004280c5
    MOV EAX,dword ptr [ESP + 0x34]      ; 004280c6
    PUSH EAX                            ; 004280ca
    MOV EAX,dword ptr [EBP + 0x18]      ; 004280cb
    ADD EAX,0xc                         ; 004280ce
    PUSH EAX                            ; 004280d1
    LEA EAX,[ESP + 0xc]                 ; 004280d2
    PUSH EAX                            ; 004280d6
    MOV EDX,dword ptr [0x006167e0]      ; 004280d7 | DAT_006167e0
    PUSH EDX                            ; 004280dd
    CALL FUN_004c9850                   ; 004280de
        ;   XREF to: 004c9850 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9850()
    ADD ESP,0x14                        ; 004280e3
    CMP dword ptr [EBX + 0x25b0],0x1    ; 004280e6
        ;   Label: LAB_004280e6
    JNZ 0x0042812a                      ; 004280ed
        ;   XREF to: 0042812a (CONDITIONAL_JUMP)  ; LAB_0042812a
    MOV EAX,[0x01cedef4]                ; 004280ef | DAT_01cedef4
    CMP EBX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004280f4
    JZ 0x0042812a                       ; 004280fb
        ;   XREF to: 0042812a (CONDITIONAL_JUMP)  ; LAB_0042812a
    FLD float ptr [EBX + 0x25a8]        ; 004280fd
    FDIV float ptr [EBX + 0x25ac]       ; 00428103
    PUSH 0x40a00000                     ; 00428109
    SUB ESP,0x4                         ; 0042810e
    LEA EAX,[EBX + 0x25b4]              ; 00428111
    FSTP float ptr [ESP]                ; 00428117
    PUSH EAX                            ; 0042811a
    MOV EDI,dword ptr [0x00616494]      ; 0042811b | DAT_00616494
    PUSH EDI                            ; 00428121 | DAT_01cb6900
    CALL FUN_004bb8d0                   ; 00428122
        ;   XREF to: 004bb8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bb8d0()
    ADD ESP,0x10                        ; 00428127
    FLD float ptr [EBX + 0x25a8]        ; 0042812a
        ;   Label: LAB_0042812a
    FLDZ                                ; 00428130
    FCOMPP                              ; 00428132
    FNSTSW AX                           ; 00428134
    SAHF                                ; 00428136
    JNC 0x004281bf                      ; 00428137
        ;   XREF to: 004281bf (CONDITIONAL_JUMP)  ; LAB_004281bf
    MOV ESP,EBP                         ; 0042813d
        ;   Label: LAB_0042813d
    POP EBP                             ; 0042813f
    POP EDI                             ; 00428140
    POP ESI                             ; 00428141
    POP EBX                             ; 00428142
    RET                                 ; 00428143
    PUSH 0x5ccdee                       ; 00428144 | s_ShotInvulnerable_005ccded+1
        ;   Label: LAB_00428144
    MOV EAX,[0x006141f0]                ; 00428149 | DAT_006141f0
    PUSH EAX                            ; 0042814e
    CALL FUN_004894f0                   ; 0042814f
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004894f0()
    ADD ESP,0x8                         ; 00428154
    MOV ESP,EBP                         ; 00428157
    POP EBP                             ; 00428159
    POP EDI                             ; 0042815a
    POP ESI                             ; 0042815b
    POP EBX                             ; 0042815c
    RET                                 ; 0042815d
    PUSH 0x0                            ; 0042815e
        ;   Label: LAB_0042815e
    MOV EAX,dword ptr [EBP + 0x18]      ; 00428160
    PUSH dword ptr [EAX + 0x18]         ; 00428163
    PUSH ECX                            ; 00428166
    PUSH EBX                            ; 00428167
    CALL FUN_00427360                   ; 00428168
        ;   XREF to: 00427360 (UNCONDITIONAL_CALL)  ; undefined FUN_00427360()
    ADD ESP,0x10                        ; 0042816d
    JMP 0x00428034                      ; 00428170
        ;   XREF to: 00428034 (UNCONDITIONAL_JUMP)  ; LAB_00428034
    PUSH EBX                            ; 00428175
        ;   Label: LAB_00428175
    CALL FUN_00426a10                   ; 00428176
        ;   XREF to: 00426a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00426a10()
    ADD ESP,0x4                         ; 0042817b
    JMP 0x00428034                      ; 0042817e
        ;   XREF to: 00428034 (UNCONDITIONAL_JUMP)  ; LAB_00428034
    MOV dword ptr [EBX + 0x1022c],0x40000000 ; 00428183
        ;   Label: LAB_00428183
    JMP 0x00428034                      ; 0042818d
        ;   XREF to: 00428034 (UNCONDITIONAL_JUMP)  ; LAB_00428034
    JBE 0x00428183                      ; 00428192
        ;   XREF to: 00428183 (CONDITIONAL_JUMP)  ; LAB_00428183
        ;   Label: LAB_00428192
    CMP EAX,0x68                        ; 00428194
    JNC 0x004281a3                      ; 00428197
        ;   XREF to: 004281a3 (CONDITIONAL_JUMP)  ; LAB_004281a3
    CMP EAX,0x7                         ; 00428199
    JZ 0x0042815e                       ; 0042819c
        ;   XREF to: 0042815e (CONDITIONAL_JUMP)  ; LAB_0042815e
    JMP 0x00428034                      ; 0042819e
        ;   XREF to: 00428034 (UNCONDITIONAL_JUMP)  ; LAB_00428034
    JBE 0x00428175                      ; 004281a3
        ;   XREF to: 00428175 (CONDITIONAL_JUMP)  ; LAB_00428175
        ;   Label: LAB_004281a3
    CMP EAX,0x6a                        ; 004281a5
    JZ 0x00428183                       ; 004281a8
        ;   XREF to: 00428183 (CONDITIONAL_JUMP)  ; LAB_00428183
    JMP 0x00428034                      ; 004281aa
        ;   XREF to: 00428034 (UNCONDITIONAL_JUMP)  ; LAB_00428034
    JBE 0x0042815e                      ; 004281af
        ;   XREF to: 0042815e (CONDITIONAL_JUMP)  ; LAB_0042815e
        ;   Label: LAB_004281af
    PUSH EBX                            ; 004281b1
    CALL FUN_00427210                   ; 004281b2
        ;   XREF to: 00427210 (UNCONDITIONAL_CALL)  ; undefined FUN_00427210()
    ADD ESP,0x4                         ; 004281b7
    JMP 0x00428034                      ; 004281ba
        ;   XREF to: 00428034 (UNCONDITIONAL_JUMP)  ; LAB_00428034
    PUSH EBX                            ; 004281bf
        ;   Label: LAB_004281bf
    CALL FUN_00428e00                   ; 004281c0
        ;   XREF to: 00428e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00428e00()
    ADD ESP,0x4                         ; 004281c5
    MOV ESP,EBP                         ; 004281c8
    POP EBP                             ; 004281ca
    POP EDI                             ; 004281cb
    POP ESI                             ; 004281cc
    POP EBX                             ; 004281cd
    RET                                 ; 004281ce


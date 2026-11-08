; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00579130(float *param_1,float *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00579430 at 00579455
;
; Referenced Globals:
;   undefined4 DAT_005d7374
;   undefined4 DAT_005d737c
;   undefined4 DAT_005d7384
;   undefined4 DAT_005d738c
;
; Called Functions:
;   FUN_0050c680
;   FUN_0050ced0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00579130
        ;   Label: FUN_00579130
    PUSH ESI                            ; 00579131
    PUSH EDI                            ; 00579132
    PUSH EBP                            ; 00579133
    MOV EBP,ESP                         ; 00579134
    SUB ESP,0x30                        ; 00579136
    AND ESP,0xfffffff8                  ; 00579139
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057913c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0057913f
    FLD float ptr [EDX]                 ; 00579142
    FLD float ptr [EDX + 0x4]           ; 00579144
    FLD float ptr [EDX + 0x8]           ; 00579147
    LEA EDI,[ESP + 0x24]                ; 0057914a
    LEA ESI,[ESP + 0x18]                ; 0057914e
    MOV EBX,dword ptr [EBP + 0x1c]      ; 00579152
    FXCH ST2                            ; 00579155
    FSUB float ptr [ECX]                ; 00579157
    FXCH                                ; 00579159
    FSUB float ptr [ECX + 0x4]          ; 0057915b
    FXCH ST2                            ; 0057915e
    FSUB float ptr [ECX + 0x8]          ; 00579160
    FXCH ST2                            ; 00579163
    FSTP float ptr [ESP + 0x1c]         ; 00579165
    FXCH                                ; 00579169
    FSTP float ptr [ESP + 0x20]         ; 0057916b
    FSTP float ptr [ESP + 0x18]         ; 0057916f
    MOVSD ES:EDI,ESI                    ; 00579173
    MOVSD ES:EDI,ESI                    ; 00579174
    MOVSD ES:EDI,ESI                    ; 00579175
    TEST EBX,EBX                        ; 00579176
    JZ 0x005791c3                       ; 00579178
        ;   XREF to: 005791c3 (CONDITIONAL_JUMP)  ; LAB_005791c3
    FLD float ptr [ESP + 0x28]          ; 0057917a
    FABS                                ; 0057917e
    FCOMP double ptr [0x005d7384]       ; 00579180 | DAT_005d7384
    FNSTSW AX                           ; 00579186
    SAHF                                ; 00579188
    JA 0x005791bf                       ; 00579189
        ;   XREF to: 005791bf (CONDITIONAL_JUMP)  ; LAB_005791bf
    FLD float ptr [ESP + 0x24]          ; 0057918b
    FABS                                ; 0057918f
    FCOMP double ptr [0x005d738c]       ; 00579191 | DAT_005d738c
    FNSTSW AX                           ; 00579197
    SAHF                                ; 00579199
    JA 0x005791bf                       ; 0057919a
        ;   XREF to: 005791bf (CONDITIONAL_JUMP)  ; LAB_005791bf
    FLD float ptr [ESP + 0x2c]          ; 0057919c
    FABS                                ; 005791a0
    FCOMP double ptr [0x005d738c]       ; 005791a2 | DAT_005d738c
    FNSTSW AX                           ; 005791a8
    SAHF                                ; 005791aa
    JA 0x005791bf                       ; 005791ab
        ;   XREF to: 005791bf (CONDITIONAL_JUMP)  ; LAB_005791bf
    CMP dword ptr [EBP + 0x20],0x0      ; 005791ad
        ;   Label: LAB_005791ad
    JZ 0x005791fa                       ; 005791b1
        ;   XREF to: 005791fa (CONDITIONAL_JUMP)  ; LAB_005791fa
    MOV EAX,0x1                         ; 005791b3
    MOV ESP,EBP                         ; 005791b8
        ;   Label: LAB_005791b8
    POP EBP                             ; 005791ba
    POP EDI                             ; 005791bb
    POP ESI                             ; 005791bc
    POP EBX                             ; 005791bd
    RET                                 ; 005791be
    XOR EAX,EAX                         ; 005791bf
        ;   Label: LAB_005791bf
    JMP 0x005791b8                      ; 005791c1
        ;   XREF to: 005791b8 (UNCONDITIONAL_JUMP)  ; LAB_005791b8
    FLD float ptr [ESP + 0x28]          ; 005791c3
        ;   Label: LAB_005791c3
    FABS                                ; 005791c7
    FCOMP double ptr [0x005d7374]       ; 005791c9 | DAT_005d7374
    FNSTSW AX                           ; 005791cf
    SAHF                                ; 005791d1
    JA 0x005791f6                       ; 005791d2
        ;   XREF to: 005791f6 (CONDITIONAL_JUMP)  ; LAB_005791f6
    FLD float ptr [ESP + 0x24]          ; 005791d4
    FABS                                ; 005791d8
    FCOMP double ptr [0x005d737c]       ; 005791da | DAT_005d737c
    FNSTSW AX                           ; 005791e0
    SAHF                                ; 005791e2
    JA 0x005791f6                       ; 005791e3
        ;   XREF to: 005791f6 (CONDITIONAL_JUMP)  ; LAB_005791f6
    FLD float ptr [ESP + 0x2c]          ; 005791e5
    FABS                                ; 005791e9
    FCOMP double ptr [0x005d737c]       ; 005791eb | DAT_005d737c
    FNSTSW AX                           ; 005791f1
    SAHF                                ; 005791f3
    JBE 0x005791ad                      ; 005791f4
        ;   XREF to: 005791ad (CONDITIONAL_JUMP)  ; LAB_005791ad
    XOR EAX,EAX                         ; 005791f6
        ;   Label: LAB_005791f6
    JMP 0x005791b8                      ; 005791f8
        ;   XREF to: 005791b8 (UNCONDITIONAL_JUMP)  ; LAB_005791b8
    MOV EDI,ESP                         ; 005791fa
        ;   Label: LAB_005791fa
    MOV ESI,EDX                         ; 005791fc
    PUSH ECX                            ; 005791fe
    MOVSD ES:EDI,ESI                    ; 005791ff
    MOVSD ES:EDI,ESI                    ; 00579200
    MOVSD ES:EDI,ESI                    ; 00579201
    CALL FUN_0050ced0                   ; 00579202
        ;   XREF to: 0050ced0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ced0()
    ADD ESP,0x4                         ; 00579207
    PUSH 0x0                            ; 0057920a
    LEA EDX,[ESP + 0x10]                ; 0057920c
    PUSH EDX                            ; 00579210
    LEA EDX,[ESP + 0x8]                 ; 00579211
    PUSH EDX                            ; 00579215
    PUSH EAX                            ; 00579216
    CALL FUN_0050c680                   ; 00579217
        ;   XREF to: 0050c680 (UNCONDITIONAL_CALL)  ; undefined FUN_0050c680()
    ADD ESP,0x10                        ; 0057921c
    CMP EAX,0x1                         ; 0057921f
    SETZ AL                             ; 00579222
    AND EAX,0xff                        ; 00579225
    MOV ESP,EBP                         ; 0057922a
    POP EBP                             ; 0057922c
    POP EDI                             ; 0057922d
    POP ESI                             ; 0057922e
    POP EBX                             ; 0057922f
    RET                                 ; 00579230


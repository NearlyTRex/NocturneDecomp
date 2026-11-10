; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_door_cpp_FUN_004650a0(int param_1,float *param_2,undefined4 param_3)
;
; Local Variables:
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660 at 00431771
;
; Referenced Globals:
;   undefined1* switchdataD_0046508c = 004650e9
;   TerminatedCString s_core_door_cpp_005bbf12
;   TerminatedCString s_CDoor_getOpenStandPos_in_005bbf23
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408bf0
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004650a0
        ;   Label: core_door.cpp_FUN_004650a0
    PUSH EDI                            ; 004650a1
    PUSH EBP                            ; 004650a2
    MOV EBP,ESP                         ; 004650a3
    SUB ESP,0xac                        ; 004650a5
    AND ESP,0xfffffff8                  ; 004650ab
    MOV dword ptr [ESP + 0xa8],ESI      ; 004650ae
    MOV ESI,dword ptr [EBP + 0x14]      ; 004650b5
    LEA EDI,[ESP + 0x60]                ; 004650b8
    MOVSD ES:EDI,ESI                    ; 004650bc
    MOVSD ES:EDI,ESI                    ; 004650bd
    MOVSD ES:EDI,ESI                    ; 004650be
    FLD float ptr [ESP + 0x68]          ; 004650bf
    FLDZ                                ; 004650c3
    FCOMPP                              ; 004650c5
    FNSTSW AX                           ; 004650c7
    SAHF                                ; 004650c9
    JA 0x004651b5                       ; 004650ca
        ;   XREF to: 004651b5 (CONDITIONAL_JUMP)  ; LAB_004651b5
    MOV EAX,dword ptr [EBP + 0x10]      ; 004650d0
        ;   Label: LAB_004650d0
    MOV EAX,dword ptr [EAX + 0x2d8]     ; 004650d3
    CMP EAX,0x3                         ; 004650d9
    JA 0x004652fc                       ; 004650dc
        ;   XREF to: 004652fc (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x46508c]  ; 004650e2 | caseD_2 | caseD_3 | switchdataD_0046508c
        ;   Label: switchD
    MOV EBX,dword ptr [EBP + 0x18]      ; 004650e9
        ;   Label: caseD_0
    PUSH EBX                            ; 004650ec
    MOV ESI,dword ptr [EBP + 0x10]      ; 004650ed
    PUSH ESI                            ; 004650f0
    LEA ESI,[ESP + 0x50]                ; 004650f1
    LEA EDI,[ESP + 0x74]                ; 004650f5
    CALL core_actor.cpp_FUN_00408bf0    ; 004650f9
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0x50]                ; 004650fe
    ADD ESP,0x8                         ; 00465102
    FLDZ                                ; 00465105
    MOV EBX,dword ptr [EBP + 0x10]      ; 00465107
    MOVSD ES:EDI,ESI                    ; 0046510a
    MOVSD ES:EDI,ESI                    ; 0046510b
    MOVSD ES:EDI,ESI                    ; 0046510c
    ADD EBX,0x9bc                       ; 0046510d
    FCOMP float ptr [ESP + 0x74]        ; 00465113
    FNSTSW AX                           ; 00465117
    SAHF                                ; 00465119
    JNC 0x00465241                      ; 0046511a
        ;   XREF to: 00465241 (CONDITIONAL_JUMP)  ; LAB_00465241
    LEA EAX,[ESP + 0x60]                ; 00465120
    PUSH EAX                            ; 00465124
    MOV EAX,dword ptr [EBP + 0x10]      ; 00465125
    PUSH EAX                            ; 00465128
    LEA ESI,[ESP + 0x8]                 ; 00465129
    LEA EDI,[ESP + 0x98]                ; 0046512d
    CALL core_actor.cpp_FUN_00408b00    ; 00465134
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[ESP + 0x8]                 ; 00465139
    ADD ESP,0x8                         ; 0046513d
    MOVSD ES:EDI,ESI                    ; 00465140
    MOVSD ES:EDI,ESI                    ; 00465141
    MOVSD ES:EDI,ESI                    ; 00465142
    LEA EAX,[ESP + 0x30]                ; 00465143
    FLD float ptr [EBX + 0x4]           ; 00465147
    FLD float ptr [EBX + 0x8]           ; 0046514a
    FLD float ptr [EBX]                 ; 0046514d
    LEA EDI,[ESP + 0xc]                 ; 0046514f
    LEA ESI,[ESP + 0x78]                ; 00465153
    LEA EBX,[ESP + 0xc]                 ; 00465157
    FADD float ptr [ESP + 0x90]         ; 0046515b
    FXCH ST2                            ; 00465162
    FADD float ptr [ESP + 0x94]         ; 00465164
    FXCH                                ; 0046516b
    FADD float ptr [ESP + 0x98]         ; 0046516d
    FXCH ST2                            ; 00465174
    FSTP float ptr [ESP + 0x78]         ; 00465176
    FSTP float ptr [ESP + 0x7c]         ; 0046517a
    FSTP float ptr [ESP + 0x80]         ; 0046517e
    MOVSD ES:EDI,ESI                    ; 00465185
    MOVSD ES:EDI,ESI                    ; 00465186
    MOVSD ES:EDI,ESI                    ; 00465187
    CMP EAX,EBX                         ; 00465188
    JNZ 0x00465224                      ; 0046518a
        ;   XREF to: 00465224 (CONDITIONAL_JUMP)  ; LAB_00465224
    MOV EAX,dword ptr [EBP + 0x10]      ; 00465190
        ;   Label: LAB_00465190
    MOV EDI,dword ptr [ESP + 0xa8]      ; 00465193
    MOV EAX,dword ptr [EAX + 0x24]      ; 0046519a
    LEA ESI,[ESP + 0x30]                ; 0046519d
    MOV dword ptr [ESP + 0x34],EAX      ; 004651a1
    MOVSD ES:EDI,ESI                    ; 004651a5
    MOVSD ES:EDI,ESI                    ; 004651a6
    MOVSD ES:EDI,ESI                    ; 004651a7
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004651a8
    MOV ESP,EBP                         ; 004651af
    POP EBP                             ; 004651b1
    POP EDI                             ; 004651b2
    POP EBX                             ; 004651b3
    RET                                 ; 004651b4
    FLD float ptr [ESP + 0x60]          ; 004651b5
        ;   Label: LAB_004651b5
    FLD float ptr [ESP + 0x64]          ; 004651b9
    FLD float ptr [ESP + 0x68]          ; 004651bd
    LEA EDI,[ESP + 0x84]                ; 004651c1
    LEA ESI,[ESP + 0x18]                ; 004651c8
    LEA EAX,[ESP + 0x84]                ; 004651cc
    LEA EBX,[ESP + 0x60]                ; 004651d3
    FXCH ST2                            ; 004651d7
    FCHS                                ; 004651d9
    FXCH                                ; 004651db
    FCHS                                ; 004651dd
    FXCH ST2                            ; 004651df
    FCHS                                ; 004651e1
    FXCH ST2                            ; 004651e3
    FSTP float ptr [ESP + 0x1c]         ; 004651e5
    FXCH                                ; 004651e9
    FSTP float ptr [ESP + 0x20]         ; 004651eb
    FSTP float ptr [ESP + 0x18]         ; 004651ef
    MOVSD ES:EDI,ESI                    ; 004651f3
    MOVSD ES:EDI,ESI                    ; 004651f4
    MOVSD ES:EDI,ESI                    ; 004651f5
    CMP EBX,EAX                         ; 004651f6
    JZ 0x004650d0                       ; 004651f8
        ;   XREF to: 004650d0 (CONDITIONAL_JUMP)  ; LAB_004650d0
    MOV EAX,dword ptr [ESP + 0x84]      ; 004651fe
    MOV dword ptr [ESP + 0x60],EAX      ; 00465205
    MOV EAX,dword ptr [ESP + 0x88]      ; 00465209
    MOV dword ptr [ESP + 0x64],EAX      ; 00465210
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00465214
    MOV dword ptr [ESP + 0x68],EAX      ; 0046521b
    JMP 0x004650d0                      ; 0046521f
        ;   XREF to: 004650d0 (UNCONDITIONAL_JUMP)  ; LAB_004650d0
    MOV EAX,dword ptr [ESP + 0xc]       ; 00465224
        ;   Label: LAB_00465224
    MOV dword ptr [ESP + 0x30],EAX      ; 00465228
    MOV EAX,dword ptr [ESP + 0x10]      ; 0046522c
    MOV dword ptr [ESP + 0x34],EAX      ; 00465230
    MOV EAX,dword ptr [ESP + 0x14]      ; 00465234
    MOV dword ptr [ESP + 0x38],EAX      ; 00465238
    JMP 0x00465190                      ; 0046523c
        ;   XREF to: 00465190 (UNCONDITIONAL_JUMP)  ; LAB_00465190
    LEA EAX,[ESP + 0x60]                ; 00465241
        ;   Label: LAB_00465241
    PUSH EAX                            ; 00465245
    MOV EDI,dword ptr [EBP + 0x10]      ; 00465246
    PUSH EDI                            ; 00465249
    LEA ESI,[ESP + 0x44]                ; 0046524a
    CALL core_actor.cpp_FUN_00408b00    ; 0046524e
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA EDI,[ESP + 0x5c]                ; 00465253
    LEA ESI,[ESP + 0x44]                ; 00465257
    ADD ESP,0x8                         ; 0046525b
    MOVSD ES:EDI,ESI                    ; 0046525e
    MOVSD ES:EDI,ESI                    ; 0046525f
    MOVSD ES:EDI,ESI                    ; 00465260
    LEA EAX,[ESP + 0x30]                ; 00465261
    FLD float ptr [EBX + 0x4]           ; 00465265
    FLD float ptr [EBX + 0x8]           ; 00465268
    FLD float ptr [EBX]                 ; 0046526b
    LEA EDI,[ESP + 0x9c]                ; 0046526d
    LEA ESI,[ESP + 0x24]                ; 00465274
    LEA EBX,[ESP + 0x9c]                ; 00465278
    FSUB float ptr [ESP + 0x54]         ; 0046527f
    FXCH ST2                            ; 00465283
    FSUB float ptr [ESP + 0x58]         ; 00465285
    FXCH                                ; 00465289
    FSUB float ptr [ESP + 0x5c]         ; 0046528b
    FXCH ST2                            ; 0046528f
    FSTP float ptr [ESP + 0x24]         ; 00465291
    FSTP float ptr [ESP + 0x28]         ; 00465295
    FSTP float ptr [ESP + 0x2c]         ; 00465299
    MOVSD ES:EDI,ESI                    ; 0046529d
    MOVSD ES:EDI,ESI                    ; 0046529e
    MOVSD ES:EDI,ESI                    ; 0046529f
    CMP EAX,EBX                         ; 004652a0
    JZ 0x00465190                       ; 004652a2
        ;   XREF to: 00465190 (CONDITIONAL_JUMP)  ; LAB_00465190
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004652a8
    MOV dword ptr [ESP + 0x30],EAX      ; 004652af
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004652b3
    MOV dword ptr [ESP + 0x34],EAX      ; 004652ba
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004652be
    MOV dword ptr [ESP + 0x38],EAX      ; 004652c5
    JMP 0x00465190                      ; 004652c9
        ;   XREF to: 00465190 (UNCONDITIONAL_JUMP)  ; LAB_00465190
    MOV EBX,dword ptr [EBP + 0x10]      ; 004652ce
        ;   Label: caseD_3
    LEA EAX,[ESP + 0x30]                ; 004652d1
    ADD EBX,0x9bc                       ; 004652d5
    CMP EAX,EBX                         ; 004652db
    JZ 0x00465190                       ; 004652dd
        ;   XREF to: 00465190 (CONDITIONAL_JUMP)  ; LAB_00465190
    MOV EAX,dword ptr [EBX]             ; 004652e3
    MOV dword ptr [ESP + 0x30],EAX      ; 004652e5
    MOV EAX,dword ptr [EBX + 0x4]       ; 004652e9
    MOV dword ptr [ESP + 0x34],EAX      ; 004652ec
    MOV EAX,dword ptr [EBX + 0x8]       ; 004652f0
    MOV dword ptr [ESP + 0x38],EAX      ; 004652f3
    JMP 0x00465190                      ; 004652f7
        ;   XREF to: 00465190 (UNCONDITIONAL_JUMP)  ; LAB_00465190
    MOV EDX,0x5bbf12                    ; 004652fc | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ECX,0x37e                       ; 00465301
    PUSH 0x5bbf23                       ; 00465306 | = "CDoor::getOpenStandPos - invalid door..."
    MOV dword ptr [0x01d71de0],EDX      ; 0046530b | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00465311 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00465317
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0046531c
    JMP 0x00465190                      ; 0046531f
        ;   XREF to: 00465190 (UNCONDITIONAL_JUMP)  ; LAB_00465190


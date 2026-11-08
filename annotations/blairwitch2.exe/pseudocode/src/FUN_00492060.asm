; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00492060(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004bb9b0 at 004bbb38
;
; Referenced Globals:
;   TerminatedCString s_CEventList_version_005d506d
;   undefined4 DAT_005d5084
;   TerminatedCString s_eventCount_list_005d5088
;   undefined4 DAT_005d509d
;   undefined4 DAT_005d50a1
;   TerminatedCString s_currentEventCount_list_005d50a5
;   undefined4 DAT_005d50c1
;   undefined4 DAT_005d50c5
;   TerminatedCString s_persistentEventCount_lis_005d50c9
;   undefined4 DAT_005d50e8
;   undefined4 DAT_005d50ec
;   TerminatedCString s_timerCount_list_duration_005d50f0
;   undefined4 DAT_005d5115
;   TerminatedCString s_f_s_005d5119
;   TerminatedCString s_counterCount_list_value_005d5121
;   ... and 8 more
;
; Called Functions:
;   FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00492060
        ;   Label: FUN_00492060
    PUSH ESI                            ; 00492061
    PUSH EDI                            ; 00492062
    PUSH EBP                            ; 00492063
    SUB ESP,0xc                         ; 00492064
    MOV EBX,dword ptr [ESP + 0x20]      ; 00492067
    MOV ESI,dword ptr [ESP + 0x24]      ; 0049206b
    PUSH 0x5d506d                       ; 0049206f | = "// CEventList version\n"
    PUSH ESI                            ; 00492074
    CALL FUN_005b8010                   ; 00492075
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 0049207a
    PUSH 0x5                            ; 0049207d
    PUSH 0x5d5084                       ; 0049207f | DAT_005d5084
    PUSH ESI                            ; 00492084
    CALL FUN_005b8010                   ; 00492085
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0xc                         ; 0049208a
    PUSH 0x5d5088                       ; 0049208d | = "// eventCount, list\n"
    PUSH ESI                            ; 00492092
    CALL FUN_005b8010                   ; 00492093
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 00492098
    MOV EDX,dword ptr [EBX]             ; 0049209b
    PUSH EDX                            ; 0049209d
    PUSH 0x5d509d                       ; 0049209e | DAT_005d509d
    PUSH ESI                            ; 004920a3
    XOR EBP,EBP                         ; 004920a4
    CALL FUN_005b8010                   ; 004920a6
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV ECX,dword ptr [EBX]             ; 004920ab
    ADD ESP,0xc                         ; 004920ad
    TEST ECX,ECX                        ; 004920b0
    JLE 0x004920d0                      ; 004920b2
        ;   XREF to: 004920d0 (CONDITIONAL_JUMP)  ; LAB_004920d0
    LEA EDI,[EBX + 0x4]                 ; 004920b4
    PUSH EDI                            ; 004920b7
        ;   Label: LAB_004920b7
    PUSH 0x5d50a1                       ; 004920b8 | DAT_005d50a1
    PUSH ESI                            ; 004920bd
    INC EBP                             ; 004920be
    ADD EDI,0x20                        ; 004920bf
    CALL FUN_005b8010                   ; 004920c2
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV EAX,dword ptr [EBX]             ; 004920c7
    ADD ESP,0xc                         ; 004920c9
    CMP EBP,EAX                         ; 004920cc
    JL 0x004920b7                       ; 004920ce
        ;   XREF to: 004920b7 (CONDITIONAL_JUMP)  ; LAB_004920b7
    PUSH 0x5d50a5                       ; 004920d0 | = "// currentEventCount, list\n"
        ;   Label: LAB_004920d0
    PUSH ESI                            ; 004920d5
    CALL FUN_005b8010                   ; 004920d6
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 004920db
    MOV EDX,dword ptr [EBX + 0xc84]     ; 004920de
    PUSH EDX                            ; 004920e4
    PUSH 0x5d50c1                       ; 004920e5 | DAT_005d50c1
    PUSH ESI                            ; 004920ea
    XOR EDI,EDI                         ; 004920eb
    CALL FUN_005b8010                   ; 004920ed
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV ECX,dword ptr [EBX + 0xc84]     ; 004920f2
    ADD ESP,0xc                         ; 004920f8
    TEST ECX,ECX                        ; 004920fb
    JLE 0x00492130                      ; 004920fd
        ;   XREF to: 00492130 (CONDITIONAL_JUMP)  ; LAB_00492130
    LEA EBP,[EBX + 0xc88]               ; 004920ff
    PUSH EBP                            ; 00492105
        ;   Label: LAB_00492105
    PUSH 0x5d50c5                       ; 00492106 | DAT_005d50c5
    PUSH ESI                            ; 0049210b
    INC EDI                             ; 0049210c
    ADD EBP,0x20                        ; 0049210d
    CALL FUN_005b8010                   ; 00492110
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV EAX,dword ptr [EBX + 0xc84]     ; 00492115
    ADD ESP,0xc                         ; 0049211b
    CMP EDI,EAX                         ; 0049211e
    JL 0x00492105                       ; 00492120
        ;   XREF to: 00492105 (CONDITIONAL_JUMP)  ; LAB_00492105
    LEA EAX,[EAX]                       ; 00492122
    LEA EDX,[EDX]                       ; 00492128
    MOV EAX,EAX                         ; 0049212e
    PUSH 0x5d50c9                       ; 00492130 | = "// persistentEventCount, list\n"
        ;   Label: LAB_00492130
    PUSH ESI                            ; 00492135
    CALL FUN_005b8010                   ; 00492136
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 0049213b
    MOV EDX,dword ptr [EBX + 0x258c]    ; 0049213e
    PUSH EDX                            ; 00492144
    PUSH 0x5d50e8                       ; 00492145 | DAT_005d50e8
    PUSH ESI                            ; 0049214a
    XOR EBP,EBP                         ; 0049214b
    CALL FUN_005b8010                   ; 0049214d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV ECX,dword ptr [EBX + 0x258c]    ; 00492152
    ADD ESP,0xc                         ; 00492158
    TEST ECX,ECX                        ; 0049215b
    JLE 0x00492190                      ; 0049215d
        ;   XREF to: 00492190 (CONDITIONAL_JUMP)  ; LAB_00492190
    LEA EDI,[EBX + 0x2590]              ; 0049215f
    PUSH EDI                            ; 00492165
        ;   Label: LAB_00492165
    PUSH 0x5d50ec                       ; 00492166 | DAT_005d50ec
    PUSH ESI                            ; 0049216b
    INC EBP                             ; 0049216c
    ADD EDI,0x20                        ; 0049216d
    CALL FUN_005b8010                   ; 00492170
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV EAX,dword ptr [EBX + 0x258c]    ; 00492175
    ADD ESP,0xc                         ; 0049217b
    CMP EBP,EAX                         ; 0049217e
    JL 0x00492165                       ; 00492180
        ;   XREF to: 00492165 (CONDITIONAL_JUMP)  ; LAB_00492165
    LEA EAX,[EAX]                       ; 00492182
    LEA EDX,[EDX]                       ; 00492188
    MOV EAX,EAX                         ; 0049218e
    PUSH 0x5d50f0                       ; 00492190 | = "// timerCount, list(duration, name)\n"
        ;   Label: LAB_00492190
    PUSH ESI                            ; 00492195
    CALL FUN_005b8010                   ; 00492196
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 0049219b
    MOV EDX,dword ptr [EBX + 0x3210]    ; 0049219e
    PUSH EDX                            ; 004921a4
    PUSH 0x5d5115                       ; 004921a5 | DAT_005d5115
    PUSH ESI                            ; 004921aa
    CALL FUN_005b8010                   ; 004921ab
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0xc                         ; 004921b0
    XOR ECX,ECX                         ; 004921b3
    MOV EDI,dword ptr [EBX + 0x3210]    ; 004921b5
    MOV dword ptr [ESP + 0x4],ECX       ; 004921bb
    TEST EDI,EDI                        ; 004921bf
    JLE 0x00492200                      ; 004921c1
        ;   XREF to: 00492200 (CONDITIONAL_JUMP)  ; LAB_00492200
    LEA EBP,[EBX + 0x3214]              ; 004921c3
    MOV EDI,EBX                         ; 004921c9
    PUSH EBP                            ; 004921cb
        ;   Label: LAB_004921cb
    SUB ESP,0x8                         ; 004921cc
    FLD float ptr [EDI + 0x3354]        ; 004921cf
    FSTP double ptr [ESP]               ; 004921d5
    PUSH 0x5d5119                       ; 004921d8 | = "%f, %s\n"
    PUSH ESI                            ; 004921dd
    CALL FUN_005b8010                   ; 004921de
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x14                        ; 004921e3
    ADD EDI,0x4                         ; 004921e6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004921e9
    ADD EBP,0x20                        ; 004921ed
    INC EAX                             ; 004921f0
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004921f1
    MOV dword ptr [ESP + 0x4],EAX       ; 004921f7
    CMP EAX,EDX                         ; 004921fb
    JL 0x004921cb                       ; 004921fd
        ;   XREF to: 004921cb (CONDITIONAL_JUMP)  ; LAB_004921cb
    NOP                                 ; 004921ff
    PUSH 0x5d5121                       ; 00492200 | = "// counterCount, list(value, name)\n"
        ;   Label: LAB_00492200
    PUSH ESI                            ; 00492205
    CALL FUN_005b8010                   ; 00492206
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 0049220b
    MOV ECX,dword ptr [EBX + 0x337c]    ; 0049220e
    PUSH ECX                            ; 00492214
    PUSH 0x5d5145                       ; 00492215 | DAT_005d5145
    PUSH ESI                            ; 0049221a
    XOR EDI,EDI                         ; 0049221b
    CALL FUN_005b8010                   ; 0049221d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0xc                         ; 00492222
    MOV EBP,dword ptr [EBX + 0x337c]    ; 00492225
    MOV dword ptr [ESP + 0x8],EDI       ; 0049222b
    TEST EBP,EBP                        ; 0049222f
    JLE 0x00492270                      ; 00492231
        ;   XREF to: 00492270 (CONDITIONAL_JUMP)  ; LAB_00492270
    LEA EDI,[EBX + 0x3380]              ; 00492233
    MOV EBP,EBX                         ; 00492239
    PUSH EDI                            ; 0049223b
        ;   Label: LAB_0049223b
    MOV EAX,dword ptr [EBP + 0x34c0]    ; 0049223c
    PUSH EAX                            ; 00492242
    PUSH 0x5d5149                       ; 00492243 | = "%d, %s\n"
    PUSH ESI                            ; 00492248
    CALL FUN_005b8010                   ; 00492249
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x10                        ; 0049224e
    ADD EBP,0x4                         ; 00492251
    MOV EDX,dword ptr [ESP + 0x8]       ; 00492254
    ADD EDI,0x20                        ; 00492258
    INC EDX                             ; 0049225b
    MOV ECX,dword ptr [EBX + 0x337c]    ; 0049225c
    MOV dword ptr [ESP + 0x8],EDX       ; 00492262
    CMP EDX,ECX                         ; 00492266
    JL 0x0049223b                       ; 00492268
        ;   XREF to: 0049223b (CONDITIONAL_JUMP)  ; LAB_0049223b
    LEA EAX,[EAX]                       ; 0049226a
    PUSH 0x5d5151                       ; 00492270 | = "// actorVarCount, list(varName, actor..."
        ;   Label: LAB_00492270
    PUSH ESI                            ; 00492275
    CALL FUN_005b8010                   ; 00492276
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 0049227b
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 0049227e
    PUSH EDI                            ; 00492284
    PUSH 0x5d517d                       ; 00492285 | DAT_005d517d
    PUSH ESI                            ; 0049228a
    XOR EBP,EBP                         ; 0049228b
    CALL FUN_005b8010                   ; 0049228d
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 00492292
    ADD ESP,0xc                         ; 00492298
    TEST EAX,EAX                        ; 0049229b
    JLE 0x004922e0                      ; 0049229d
        ;   XREF to: 004922e0 (CONDITIONAL_JUMP)  ; LAB_004922e0
    LEA EAX,[EBX + 0x37da]              ; 0049229f
    LEA EDI,[EBX + 0x34ec]              ; 004922a5
    MOV dword ptr [ESP],EAX             ; 004922ab
    MOV EDX,dword ptr [ESP]             ; 004922ae
        ;   Label: LAB_004922ae
    PUSH EDX                            ; 004922b1
    PUSH EDI                            ; 004922b2
    PUSH 0x5d5181                       ; 004922b3 | = "\"%s\", \"%s\"\n"
    PUSH ESI                            ; 004922b8
    CALL FUN_005b8010                   ; 004922b9
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x10                        ; 004922be
    INC EBP                             ; 004922c1
    MOV ECX,dword ptr [ESP]             ; 004922c2
    ADD EDI,0x1e                        ; 004922c5
    ADD ECX,0x1e                        ; 004922c8
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004922cb
    MOV dword ptr [ESP],ECX             ; 004922d1
    CMP EBP,EAX                         ; 004922d4
    JL 0x004922ae                       ; 004922d6
        ;   XREF to: 004922ae (CONDITIONAL_JUMP)  ; LAB_004922ae
    LEA EAX,[EAX]                       ; 004922d8
    MOV EDX,EDX                         ; 004922de
    PUSH 0x5d518d                       ; 004922e0 | = "// gameFlagCount, list\n"
        ;   Label: LAB_004922e0
    PUSH ESI                            ; 004922e5
    CALL FUN_005b8010                   ; 004922e6
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 004922eb
    MOV EDX,dword ptr [EBX + 0x1908]    ; 004922ee
    PUSH EDX                            ; 004922f4
    PUSH 0x5d51a5                       ; 004922f5 | DAT_005d51a5
    PUSH ESI                            ; 004922fa
    XOR EBP,EBP                         ; 004922fb
    CALL FUN_005b8010                   ; 004922fd
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV ECX,dword ptr [EBX + 0x1908]    ; 00492302
    ADD ESP,0xc                         ; 00492308
    TEST ECX,ECX                        ; 0049230b
    JLE 0x00492340                      ; 0049230d
        ;   XREF to: 00492340 (CONDITIONAL_JUMP)  ; LAB_00492340
    LEA EDI,[EBX + 0x190c]              ; 0049230f
    PUSH EDI                            ; 00492315
        ;   Label: LAB_00492315
    PUSH 0x5d51a9                       ; 00492316 | DAT_005d51a9
    PUSH ESI                            ; 0049231b
    INC EBP                             ; 0049231c
    ADD EDI,0x20                        ; 0049231d
    CALL FUN_005b8010                   ; 00492320
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    MOV EAX,dword ptr [EBX + 0x1908]    ; 00492325
    ADD ESP,0xc                         ; 0049232b
    CMP EBP,EAX                         ; 0049232e
    JL 0x00492315                       ; 00492330
        ;   XREF to: 00492315 (CONDITIONAL_JUMP)  ; LAB_00492315
    LEA EAX,[EAX]                       ; 00492332
    LEA EDX,[EDX]                       ; 00492338
    MOV EAX,EAX                         ; 0049233e
    ADD ESP,0xc                         ; 00492340
        ;   Label: LAB_00492340
    POP EBP                             ; 00492343
    POP EDI                             ; 00492344
    POP ESI                             ; 00492345
    POP EBX                             ; 00492346
    RET                                 ; 00492347


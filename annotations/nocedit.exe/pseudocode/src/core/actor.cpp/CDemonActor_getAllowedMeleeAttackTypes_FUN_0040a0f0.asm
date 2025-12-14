; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0(CDemonActor * this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x30]:1  local_30
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_getAllowedMeleeAttackTypes_FUN_0041b1f0 at 0041b201
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613a19
;   double DOUBLE_00613a30 = 2
;   double DOUBLE_00613a38 = 6
;
; Called Functions:
;   core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a0f0
        ;   Label: core_actor.cpp_CDemonActor_getAllowedMeleeAttackTypes_FUN_0040a0f0
    PUSH ESI                            ; 0040a0f1
    PUSH EBP                            ; 0040a0f2
    MOV EBP,ESP                         ; 0040a0f3
    SUB ESP,0x34                        ; 0040a0f5
    AND ESP,0xfffffff8                  ; 0040a0f8
    MOV ESI,dword ptr [EBP + 0x10]      ; 0040a0fb
    PUSH 0x5ae                          ; 0040a0fe
    PUSH 0x613a19                       ; 0040a103 | = "..\\core\\actor.cpp"
    PUSH ESI                            ; 0040a108
    CALL core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80 ; 0040a109
        ;   XREF to: 0040ac80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80(CDemonActor * this_ptr, char * context_file, int context_line)
    ADD ESP,0xc                         ; 0040a10e
    LEA EDX,[ESP + 0x10]                ; 0040a111
    PUSH EDX                            ; 0040a115
    MOV EAX,dword ptr [ESI + 0x154]     ; 0040a116
    PUSH ESI                            ; 0040a11c
    CALL dword ptr [EAX + 0x14]         ; 0040a11d
    LEA EDX,[EAX + 0xc]                 ; 0040a120
    ADD ESP,0x8                         ; 0040a123
    FLD float ptr [EDX]                 ; 0040a126
    FSUB float ptr [EAX]                ; 0040a128
    XOR EBX,EBX                         ; 0040a12a
    FSTP float ptr [ESP + 0x28]         ; 0040a12c
    FLD float ptr [EDX + 0x4]           ; 0040a130
    FSUB float ptr [EAX + 0x4]          ; 0040a133
    FLD float ptr [ESP + 0x28]          ; 0040a136
    FXCH                                ; 0040a13a
    FSTP float ptr [ESP + 0x2c]         ; 0040a13c
    FLD float ptr [EDX + 0x8]           ; 0040a140
    FSUB float ptr [EAX + 0x8]          ; 0040a143
    FLD1                                ; 0040a146
    FXCH                                ; 0040a148
    FSTP float ptr [ESP + 0x30]         ; 0040a14a
    FCOMPP                              ; 0040a14e
    FNSTSW AX                           ; 0040a150
    SAHF                                ; 0040a152
    JBE 0x0040a1a3                      ; 0040a153
        ;   XREF to: 0040a1a3 (CONDITIONAL_JUMP)  ; LAB_0040a1a3
    FLD float ptr [ESP + 0x2c]          ; 0040a155
    FLD1                                ; 0040a159
    FCOMPP                              ; 0040a15b
    FNSTSW AX                           ; 0040a15d
    SAHF                                ; 0040a15f
    JBE 0x0040a1a3                      ; 0040a160
        ;   XREF to: 0040a1a3 (CONDITIONAL_JUMP)  ; LAB_0040a1a3
    FLD float ptr [ESP + 0x30]          ; 0040a162
    FST double ptr [ESP + 0x8]          ; 0040a166
    FCOMP double ptr [0x00613a30]       ; 0040a16a | DOUBLE_00613a30
    FNSTSW AX                           ; 0040a170
    SAHF                                ; 0040a172
    JBE 0x0040a1a3                      ; 0040a173
        ;   XREF to: 0040a1a3 (CONDITIONAL_JUMP)  ; LAB_0040a1a3
    FLD double ptr [ESP + 0x8]          ; 0040a175
    FCOMP double ptr [0x00613a38]       ; 0040a179 | DOUBLE_00613a38
    FNSTSW AX                           ; 0040a17f
    SAHF                                ; 0040a181
    JNC 0x0040a1a3                      ; 0040a182
        ;   XREF to: 0040a1a3 (CONDITIONAL_JUMP)  ; LAB_0040a1a3
    FLD float ptr [ESP + 0x30]          ; 0040a184
    FCOMP float ptr [ESP + 0x28]        ; 0040a188
    FNSTSW AX                           ; 0040a18c
    SAHF                                ; 0040a18e
    JBE 0x0040a1a3                      ; 0040a18f
        ;   XREF to: 0040a1a3 (CONDITIONAL_JUMP)  ; LAB_0040a1a3
    FLD float ptr [ESP + 0x30]          ; 0040a191
    FCOMP float ptr [ESP + 0x2c]        ; 0040a195
    FNSTSW AX                           ; 0040a199
    SAHF                                ; 0040a19b
    JBE 0x0040a1a3                      ; 0040a19c
        ;   XREF to: 0040a1a3 (CONDITIONAL_JUMP)  ; LAB_0040a1a3
    MOV EBX,0x2                         ; 0040a19e
    FLD float ptr [ESP + 0x28]          ; 0040a1a3
        ;   Label: LAB_0040a1a3
    FLD1                                ; 0040a1a7
    FCOMPP                              ; 0040a1a9
    FNSTSW AX                           ; 0040a1ab
    SAHF                                ; 0040a1ad
    JBE 0x0040a1fb                      ; 0040a1ae
        ;   XREF to: 0040a1fb (CONDITIONAL_JUMP)  ; LAB_0040a1fb
    FLD float ptr [ESP + 0x2c]          ; 0040a1b0
    FLD1                                ; 0040a1b4
    FCOMPP                              ; 0040a1b6
    FNSTSW AX                           ; 0040a1b8
    SAHF                                ; 0040a1ba
    JBE 0x0040a1fb                      ; 0040a1bb
        ;   XREF to: 0040a1fb (CONDITIONAL_JUMP)  ; LAB_0040a1fb
    FLD float ptr [ESP + 0x30]          ; 0040a1bd
    FLD1                                ; 0040a1c1
    FXCH                                ; 0040a1c3
    FSTP double ptr [ESP]               ; 0040a1c5
    FCOMP double ptr [ESP]              ; 0040a1c8
    FNSTSW AX                           ; 0040a1cb
    SAHF                                ; 0040a1cd
    JNC 0x0040a1fb                      ; 0040a1ce
        ;   XREF to: 0040a1fb (CONDITIONAL_JUMP)  ; LAB_0040a1fb
    FLD double ptr [ESP]                ; 0040a1d0
    FCOMP double ptr [0x00613a30]       ; 0040a1d3 | DOUBLE_00613a30
    FNSTSW AX                           ; 0040a1d9
    SAHF                                ; 0040a1db
    JNC 0x0040a1fb                      ; 0040a1dc
        ;   XREF to: 0040a1fb (CONDITIONAL_JUMP)  ; LAB_0040a1fb
    FLD float ptr [ESP + 0x30]          ; 0040a1de
    FCOMP float ptr [ESP + 0x28]        ; 0040a1e2
    FNSTSW AX                           ; 0040a1e6
    SAHF                                ; 0040a1e8
    JBE 0x0040a1fb                      ; 0040a1e9
        ;   XREF to: 0040a1fb (CONDITIONAL_JUMP)  ; LAB_0040a1fb
    FLD float ptr [ESP + 0x30]          ; 0040a1eb
    FCOMP float ptr [ESP + 0x2c]        ; 0040a1ef
    FNSTSW AX                           ; 0040a1f3
    SAHF                                ; 0040a1f5
    JBE 0x0040a1fb                      ; 0040a1f6
        ;   XREF to: 0040a1fb (CONDITIONAL_JUMP)  ; LAB_0040a1fb
    OR BL,0x4                           ; 0040a1f8
    MOV EAX,EBX                         ; 0040a1fb
        ;   Label: LAB_0040a1fb
    MOV ESP,EBP                         ; 0040a1fd
    POP EBP                             ; 0040a1ff
    POP ESI                             ; 0040a200
    POP EBX                             ; 0040a201
    RET                                 ; 0040a202


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_prye_cpp_FUN_00527110(int param_1)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_game.cpp_FUN_004c07b0 at 004c0dff
;
; Called Functions:
;   core_motion.cpp_FUN_004fc0c0
;   core_motion.cpp_FUN_004fc350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527110
        ;   Label: core_prye.cpp_FUN_00527110
    PUSH ESI                            ; 00527111
    SUB ESP,0x4                         ; 00527112
    MOV ESI,dword ptr [ESP + 0x10]      ; 00527115
    PUSH 0x2a                           ; 00527119
    LEA EBX,[ESI + 0x158]               ; 0052711b
    PUSH EBX                            ; 00527121
    CALL core_motion.cpp_FUN_004fc350   ; 00527122
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x8],EAX       ; 00527127
    FLD float ptr [ESP + 0x8]           ; 0052712b
    FLDZ                                ; 0052712f
    ADD ESP,0x8                         ; 00527131
    FCOMPP                              ; 00527134
    FNSTSW AX                           ; 00527136
    SAHF                                ; 00527138
    JNC 0x00527146                      ; 00527139
        ;   XREF to: 00527146 (CONDITIONAL_JUMP)  ; LAB_00527146
    MOV EAX,0x1                         ; 0052713b
        ;   Label: LAB_0052713b
    ADD ESP,0x4                         ; 00527140
    POP ESI                             ; 00527143
    POP EBX                             ; 00527144
    RET                                 ; 00527145
    PUSH 0x2b                           ; 00527146
        ;   Label: LAB_00527146
    PUSH EBX                            ; 00527148
    CALL core_motion.cpp_FUN_004fc350   ; 00527149
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc350()
    MOV dword ptr [ESP + 0x8],EAX       ; 0052714e
    FLD float ptr [ESP + 0x8]           ; 00527152
    FLDZ                                ; 00527156
    ADD ESP,0x8                         ; 00527158
    FCOMPP                              ; 0052715b
    FNSTSW AX                           ; 0052715d
    SAHF                                ; 0052715f
    JC 0x0052713b                       ; 00527160
        ;   XREF to: 0052713b (CONDITIONAL_JUMP)  ; LAB_0052713b
    PUSH EBX                            ; 00527162
    CALL core_motion.cpp_FUN_004fc0c0   ; 00527163
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 00527168
    CMP EAX,0x2a                        ; 0052716b
    JZ 0x0052713b                       ; 0052716e
        ;   XREF to: 0052713b (CONDITIONAL_JUMP)  ; LAB_0052713b
    PUSH EBX                            ; 00527170
    CALL core_motion.cpp_FUN_004fc0c0   ; 00527171
        ;   XREF to: 004fc0c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc0c0()
    ADD ESP,0x4                         ; 00527176
    CMP EAX,0x2b                        ; 00527179
    JZ 0x0052713b                       ; 0052717c
        ;   XREF to: 0052713b (CONDITIONAL_JUMP)  ; LAB_0052713b
    CMP dword ptr [ESI + 0x20b64],0x5   ; 0052717e
    JZ 0x0052713b                       ; 00527185
        ;   XREF to: 0052713b (CONDITIONAL_JUMP)  ; LAB_0052713b
    CMP dword ptr [ESI + 0x20b94],0x0   ; 00527187
    JNZ 0x0052713b                      ; 0052718e
        ;   XREF to: 0052713b (CONDITIONAL_JUMP)  ; LAB_0052713b
    XOR EAX,EAX                         ; 00527190
    ADD ESP,0x4                         ; 00527192
    POP ESI                             ; 00527195
    POP EBX                             ; 00527196
    RET                                 ; 00527197


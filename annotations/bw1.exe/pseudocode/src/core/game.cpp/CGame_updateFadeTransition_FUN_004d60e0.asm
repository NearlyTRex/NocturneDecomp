; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_updateFadeTransition_FUN_004d60e0(CGame *this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d809f
;
; Referenced Globals:
;   undefined4 DAT_005e2e9c
;   undefined4 DAT_005e2ea4
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_01cd0c7c
;   undefined4 DAT_01cd0c80
;   undefined4 DAT_01cd0c8c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004d60e0
        ;   Label: core_game.cpp_CGame_updateFadeTransition_FUN_004d60e0
    MOV EBP,ESP                         ; 004d60e1
    SUB ESP,0xc                         ; 004d60e3
    AND ESP,0xfffffff8                  ; 004d60e6
    MOV EDX,dword ptr [0x01cd0c7c]      ; 004d60e9 | DAT_01cd0c7c
    MOV ECX,dword ptr [0x01cd0c8c]      ; 004d60ef | DAT_01cd0c8c
    TEST EDX,EDX                        ; 004d60f5
    JZ 0x004d6161                       ; 004d60f7
        ;   XREF to: 004d6161 (CONDITIONAL_JUMP)  ; LAB_004d6161
    CMP EDX,0x4                         ; 004d60f9
    JGE 0x004d6173                      ; 004d60fc
        ;   XREF to: 004d6173 (CONDITIONAL_JUMP)  ; LAB_004d6173
    FILD dword ptr [0x0061b49c]         ; 004d6102 | DAT_0061b49c
    FDIVR double ptr [0x005e2e9c]       ; 004d6108 | DAT_005e2e9c
    FSTP float ptr [ESP]                ; 004d610e
    CMP EDX,0x2                         ; 004d6111
    JZ 0x004d617a                       ; 004d6114
        ;   XREF to: 004d617a (CONDITIONAL_JUMP)  ; LAB_004d617a
    CMP EDX,0x3                         ; 004d6116
        ;   Label: LAB_004d6116
    JNZ 0x004d6150                      ; 004d6119
        ;   XREF to: 004d6150 (CONDITIONAL_JUMP)  ; LAB_004d6150
    MOV EAX,dword ptr [EBP + 0x8]       ; 004d611b
    FILD dword ptr [EAX + 0x290]        ; 004d611e
    FMUL double ptr [0x005e2ea4]        ; 004d6124 | DAT_005e2ea4
    FDIV float ptr [ESP]                ; 004d612a
    FLD float ptr [0x01cd0c80]          ; 004d612d | DAT_01cd0c80
    FXCH                                ; 004d6133
    FSUBR ST0,ST1                       ; 004d6135
    FLDZ                                ; 004d6137
    FXCH                                ; 004d6139
    FSTP ST2                            ; 004d613b
    FXCH                                ; 004d613d
    FSTP float ptr [0x01cd0c80]         ; 004d613f | DAT_01cd0c80
    FCOMP float ptr [0x01cd0c80]        ; 004d6145 | DAT_01cd0c80
    FNSTSW AX                           ; 004d614b
    SAHF                                ; 004d614d
    JA 0x004d61bb                       ; 004d614e
        ;   XREF to: 004d61bb (CONDITIONAL_JUMP)  ; LAB_004d61bb
    CMP EDX,0x1                         ; 004d6150
        ;   Label: LAB_004d6150
    JNZ 0x004d6163                      ; 004d6153
        ;   XREF to: 004d6163 (CONDITIONAL_JUMP)  ; LAB_004d6163
    ADD ECX,EDX                         ; 004d6155
    CMP ECX,0x3                         ; 004d6157
    JL 0x004d6163                       ; 004d615a
        ;   XREF to: 004d6163 (CONDITIONAL_JUMP)  ; LAB_004d6163
    MOV EDX,0x2                         ; 004d615c
    XOR ECX,ECX                         ; 004d6161
        ;   Label: LAB_004d6161
    MOV dword ptr [0x01cd0c8c],ECX      ; 004d6163 | DAT_01cd0c8c
        ;   Label: LAB_004d6163
    MOV dword ptr [0x01cd0c7c],EDX      ; 004d6169 | DAT_01cd0c7c
    MOV ESP,EBP                         ; 004d616f
    POP EBP                             ; 004d6171
    RET                                 ; 004d6172
    MOV EDX,0x5                         ; 004d6173
        ;   Label: LAB_004d6173
    JMP 0x004d6163                      ; 004d6178
        ;   XREF to: 004d6163 (UNCONDITIONAL_JUMP)  ; LAB_004d6163
    MOV EAX,dword ptr [EBP + 0x8]       ; 004d617a
        ;   Label: LAB_004d617a
    FILD dword ptr [EAX + 0x290]        ; 004d617d
    FMUL double ptr [0x005e2ea4]        ; 004d6183 | DAT_005e2ea4
    FDIV float ptr [ESP]                ; 004d6189
    FLD float ptr [0x01cd0c80]          ; 004d618c | DAT_01cd0c80
    FXCH                                ; 004d6192
    FADD ST0,ST1                        ; 004d6194
    FILD dword ptr [0x0061b498]         ; 004d6196 | DAT_0061b498
    FXCH                                ; 004d619c
    FSTP ST2                            ; 004d619e
    FXCH                                ; 004d61a0
    FSTP float ptr [0x01cd0c80]         ; 004d61a2 | DAT_01cd0c80
    FCOMP float ptr [0x01cd0c80]        ; 004d61a8 | DAT_01cd0c80
    FNSTSW AX                           ; 004d61ae
    SAHF                                ; 004d61b0
    JNC 0x004d6116                      ; 004d61b1
        ;   XREF to: 004d6116 (CONDITIONAL_JUMP)  ; LAB_004d6116
    XOR EDX,EDX                         ; 004d61b7
    JMP 0x004d6163                      ; 004d61b9
        ;   XREF to: 004d6163 (UNCONDITIONAL_JUMP)  ; LAB_004d6163
    XOR EDX,EDX                         ; 004d61bb
        ;   Label: LAB_004d61bb
    MOV dword ptr [0x01cd0c80],EDX      ; 004d61bd | DAT_01cd0c80
    MOV EDX,0x4                         ; 004d61c3
    MOV dword ptr [0x01cd0c8c],ECX      ; 004d61c8 | DAT_01cd0c8c
    MOV dword ptr [0x01cd0c7c],EDX      ; 004d61ce | DAT_01cd0c7c
    MOV ESP,EBP                         ; 004d61d4
    POP EBP                             ; 004d61d6
    RET                                 ; 004d61d7


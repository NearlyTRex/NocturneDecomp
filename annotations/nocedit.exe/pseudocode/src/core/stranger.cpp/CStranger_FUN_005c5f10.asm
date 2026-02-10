; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stranger_cpp_CStranger_FUN_005c5f10(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bc4ff
;
; Referenced Globals:
;   void* switchdataD_005c5ee4 = 005c6004
;   double DOUBLE_00653e7c = 0.990000000000000
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
;   core_stranger.cpp_CStranger_FUN_005c06b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5f10
        ;   Label: core_stranger.cpp_CStranger_FUN_005c5f10
    PUSH ESI                            ; 005c5f11
    PUSH EDI                            ; 005c5f12
    PUSH EBP                            ; 005c5f13
    SUB ESP,0x4                         ; 005c5f14
    MOV EBX,dword ptr [ESP + 0x18]      ; 005c5f17
    MOV EDX,dword ptr [EBX + 0xbe38]    ; 005c5f1b
    MOV dword ptr [EBX + 0x1fc34],0x0   ; 005c5f21
    TEST EDX,EDX                        ; 005c5f2b
    JZ 0x005c6067                       ; 005c5f2d
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    CMP dword ptr [EBX + 0x2598],0x0    ; 005c5f33
    JNZ 0x005c6067                      ; 005c5f3a
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    CMP dword ptr [EBX + 0x1fc38],0x0   ; 005c5f40
    JNZ 0x005c6067                      ; 005c5f47
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    CMP dword ptr [EBX + 0x1fbd4],0x0   ; 005c5f4d
    JZ 0x005c6067                       ; 005c5f54
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c5f5a
    TEST EAX,EAX                        ; 005c5f60
    JNZ 0x005c606f                      ; 005c5f62
        ;   XREF to: 005c606f (CONDITIONAL_JUMP)  ; LAB_005c606f
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c5f68
    TEST EAX,EAX                        ; 005c5f6e
        ;   Label: LAB_005c5f6e
    JNZ 0x005c6081                      ; 005c5f70
        ;   XREF to: 005c6081 (CONDITIONAL_JUMP)  ; LAB_005c6081
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c5f76
        ;   Label: LAB_005c5f76
    TEST EAX,EAX                        ; 005c5f7c
    JZ 0x005c6067                       ; 005c5f7e
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 005c5f84
    CMP EDX,0x3                         ; 005c5f8a
    JZ 0x005c6067                       ; 005c5f8d
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    CMP dword ptr [EBX + 0x1f734],0x0   ; 005c5f93
    JNZ 0x005c5fe0                      ; 005c5f9a
        ;   XREF to: 005c5fe0 (CONDITIONAL_JUMP)  ; LAB_005c5fe0
    TEST EDX,EDX                        ; 005c5f9c
    JNZ 0x005c5fe0                      ; 005c5f9e
        ;   XREF to: 005c5fe0 (CONDITIONAL_JUMP)  ; LAB_005c5fe0
    LEA ECX,[EBX + 0x1fbe8]             ; 005c5fa0
    MOV EDI,dword ptr [EBX + 0x1fc30]   ; 005c5fa6
    LEA EAX,[EBX + 0x1fc08]             ; 005c5fac
    TEST EDI,EDI                        ; 005c5fb2
    JZ 0x005c611e                       ; 005c5fb4
        ;   XREF to: 005c611e (CONDITIONAL_JUMP)  ; LAB_005c611e
    MOV EDX,EAX                         ; 005c5fba
    MOV EAX,ECX                         ; 005c5fbc
    MOV EBP,dword ptr [EAX + 0x1c]      ; 005c5fbe
        ;   Label: LAB_005c5fbe
    CMP EBP,0x2                         ; 005c5fc1
    JNZ 0x005c5fe0                      ; 005c5fc4
        ;   XREF to: 005c5fe0 (CONDITIONAL_JUMP)  ; LAB_005c5fe0
    CMP EBP,dword ptr [EDX + 0x1c]      ; 005c5fc6
    JZ 0x005c5fe0                       ; 005c5fc9
        ;   XREF to: 005c5fe0 (CONDITIONAL_JUMP)  ; LAB_005c5fe0
    CMP dword ptr [EBX + 0x1fc30],0x0   ; 005c5fcb
    SETZ AL                             ; 005c5fd2
    AND EAX,0xff                        ; 005c5fd5
    MOV dword ptr [EBX + 0x1fc30],EAX   ; 005c5fda
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c5fe0
        ;   Label: LAB_005c5fe0
    TEST EAX,EAX                        ; 005c5fe6
    JZ 0x005c614d                       ; 005c5fe8
        ;   XREF to: 005c614d (CONDITIONAL_JUMP)  ; caseD_6
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 005c5fee
    CMP EAX,0x8                         ; 005c5ff4
    JA 0x005c614d                       ; 005c5ff7
        ;   XREF to: 005c614d (CONDITIONAL_JUMP)  ; caseD_6
    JMP dword ptr [EAX*0x4 + 0x5c5ee4]  ; 005c5ffd | caseD_0 | caseD_1 | caseD_4
        ;   Label: switchD
    MOV EAX,0x2                         ; 005c6004
        ;   Label: caseD_5
    PUSH EAX                            ; 005c6009
        ;   Label: LAB_005c6009
    PUSH EBX                            ; 005c600a
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840 ; 005c600b
        ;   XREF to: 0042e840 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 005c6010
    FLD float ptr [ESP + 0x8]           ; 005c6014
    ADD ESP,0x8                         ; 005c6018
    FCOMP double ptr [0x00653e7c]       ; 005c601b | DOUBLE_00653e7c
    FNSTSW AX                           ; 005c6021
    SAHF                                ; 005c6023
    JC 0x005c6067                       ; 005c6024
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    MOV ECX,dword ptr [EBX + 0x1fc30]   ; 005c6026
    LEA EDX,[EBX + 0x1fbe8]             ; 005c602c
    TEST ECX,ECX                        ; 005c6032
    JZ 0x005c604b                       ; 005c6034
        ;   XREF to: 005c604b (CONDITIONAL_JUMP)  ; LAB_005c604b
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c6036
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005c603c
    JNZ 0x005c604b                      ; 005c6043
        ;   XREF to: 005c604b (CONDITIONAL_JUMP)  ; LAB_005c604b
    LEA EDX,[EBX + 0x1fc08]             ; 005c6045
    FLD float ptr [EDX + 0x14]          ; 005c604b
        ;   Label: LAB_005c604b
    FLD1                                ; 005c604e
    FCOMPP                              ; 005c6050
    FNSTSW AX                           ; 005c6052
    SAHF                                ; 005c6054
    JA 0x005c6067                       ; 005c6055
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    FLD float ptr [EDX + 0x10]          ; 005c6057
    FLDZ                                ; 005c605a
    FCOMPP                              ; 005c605c
    FNSTSW AX                           ; 005c605e
    SAHF                                ; 005c6060
    JNC 0x005c6154                      ; 005c6061
        ;   XREF to: 005c6154 (CONDITIONAL_JUMP)  ; LAB_005c6154
    ADD ESP,0x4                         ; 005c6067
        ;   Label: LAB_005c6067
    POP EBP                             ; 005c606a
    POP EDI                             ; 005c606b
    POP ESI                             ; 005c606c
    POP EBX                             ; 005c606d
    RET                                 ; 005c606e
    CMP dword ptr [EAX + 0x2e0],0x7     ; 005c606f
        ;   Label: LAB_005c606f
    JZ 0x005c5f6e                       ; 005c6076
        ;   XREF to: 005c5f6e (CONDITIONAL_JUMP)  ; LAB_005c5f6e
    JMP 0x005c5f76                      ; 005c607c
        ;   XREF to: 005c5f76 (UNCONDITIONAL_JUMP)  ; LAB_005c5f76
    PUSH EAX                            ; 005c6081
        ;   Label: LAB_005c6081
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c6082
    CALL dword ptr [EDX + 0x6c]         ; 005c6088
    ADD ESP,0x4                         ; 005c608b
    MOV ESI,EAX                         ; 005c608e
    TEST EAX,EAX                        ; 005c6090
    JZ 0x005c5f76                       ; 005c6092
        ;   XREF to: 005c5f76 (CONDITIONAL_JUMP)  ; LAB_005c5f76
    XOR ECX,ECX                         ; 005c6098
    XOR EDI,EDI                         ; 005c609a
    MOV EBP,dword ptr [EBX + 0x1fc3c]   ; 005c609c
        ;   Label: LAB_005c609c
    INC EBP                             ; 005c60a2
    MOV dword ptr [EBX + 0x1fc3c],EBP   ; 005c60a3
    CMP EDI,EBP                         ; 005c60a9
    JLE 0x005c60d5                      ; 005c60ab
        ;   XREF to: 005c60d5 (CONDITIONAL_JUMP)  ; LAB_005c60d5
    MOV dword ptr [EBX + 0x1fc3c],EDI   ; 005c60ad
        ;   Label: LAB_005c60ad
    MOV EDX,dword ptr [EBX + 0x1fc3c]   ; 005c60b3
        ;   Label: LAB_005c60b3
    ADD EDX,0xc                         ; 005c60b9
    MOV EAX,EDI                         ; 005c60bc
    CMP EDX,0xc                         ; 005c60be
    JNC 0x005c60ea                      ; 005c60c1
        ;   XREF to: 005c60ea (CONDITIONAL_JUMP)  ; LAB_005c60ea
    TEST EAX,ESI                        ; 005c60c3
        ;   Label: LAB_005c60c3
    JNZ 0x005c60f3                      ; 005c60c5
        ;   XREF to: 005c60f3 (CONDITIONAL_JUMP)  ; LAB_005c60f3
    INC ECX                             ; 005c60c7
    CMP ECX,0x14                        ; 005c60c8
    JL 0x005c609c                       ; 005c60cb
        ;   XREF to: 005c609c (CONDITIONAL_JUMP)  ; LAB_005c609c
    ADD ESP,0x4                         ; 005c60cd
    POP EBP                             ; 005c60d0
    POP EDI                             ; 005c60d1
    POP ESI                             ; 005c60d2
    POP EBX                             ; 005c60d3
    RET                                 ; 005c60d4
    CMP EBP,0x2                         ; 005c60d5
        ;   Label: LAB_005c60d5
    JL 0x005c60b3                       ; 005c60d8
        ;   XREF to: 005c60b3 (CONDITIONAL_JUMP)  ; LAB_005c60b3
    JMP 0x005c60ad                      ; 005c60da
        ;   XREF to: 005c60ad (UNCONDITIONAL_JUMP)  ; LAB_005c60ad
    MOV EAX,0x1                         ; 005c60dc
        ;   Label: LAB_005c60dc
    JMP 0x005c60c3                      ; 005c60e1
        ;   XREF to: 005c60c3 (UNCONDITIONAL_JUMP)  ; LAB_005c60c3
    MOV EAX,0x2                         ; 005c60e3
        ;   Label: LAB_005c60e3
    JMP 0x005c60c3                      ; 005c60e8
        ;   XREF to: 005c60c3 (UNCONDITIONAL_JUMP)  ; LAB_005c60c3
    JBE 0x005c60dc                      ; 005c60ea
        ;   XREF to: 005c60dc (CONDITIONAL_JUMP)  ; LAB_005c60dc
        ;   Label: LAB_005c60ea
    CMP EDX,0xd                         ; 005c60ec
    JZ 0x005c60e3                       ; 005c60ef
        ;   XREF to: 005c60e3 (CONDITIONAL_JUMP)  ; LAB_005c60e3
    JMP 0x005c60c3                      ; 005c60f1
        ;   XREF to: 005c60c3 (UNCONDITIONAL_JUMP)  ; LAB_005c60c3
    MOV dword ptr [EBX + 0x2a90],0x0    ; 005c60f3
        ;   Label: LAB_005c60f3
    MOV EAX,dword ptr [EBX + 0x1fc3c]   ; 005c60fd
    MOV dword ptr [EBX + 0x1fc38],0x7   ; 005c6103
    ADD EAX,0xc                         ; 005c610d
    MOV dword ptr [EBX + 0x2a8c],EAX    ; 005c6110
    ADD ESP,0x4                         ; 005c6116
    POP EBP                             ; 005c6119
    POP EDI                             ; 005c611a
    POP ESI                             ; 005c611b
    POP EBX                             ; 005c611c
    RET                                 ; 005c611d
    MOV EDX,ECX                         ; 005c611e
        ;   Label: LAB_005c611e
    JMP 0x005c5fbe                      ; 005c6120
        ;   XREF to: 005c5fbe (UNCONDITIONAL_JUMP)  ; LAB_005c5fbe
    MOV EAX,0x4                         ; 005c6125
        ;   Label: caseD_1
    JMP 0x005c6009                      ; 005c612a
        ;   XREF to: 005c6009 (UNCONDITIONAL_JUMP)  ; LAB_005c6009
    MOV EAX,0x7                         ; 005c612f
        ;   Label: caseD_4
    JMP 0x005c6009                      ; 005c6134
        ;   XREF to: 005c6009 (UNCONDITIONAL_JUMP)  ; LAB_005c6009
    MOV EAX,0x5                         ; 005c6139
        ;   Label: caseD_2
    JMP 0x005c6009                      ; 005c613e
        ;   XREF to: 005c6009 (UNCONDITIONAL_JUMP)  ; LAB_005c6009
    MOV EAX,0x8                         ; 005c6143
        ;   Label: caseD_7
    JMP 0x005c6009                      ; 005c6148
        ;   XREF to: 005c6009 (UNCONDITIONAL_JUMP)  ; LAB_005c6009
    XOR EAX,EAX                         ; 005c614d
        ;   Label: caseD_8
    JMP 0x005c6009                      ; 005c614f
        ;   XREF to: 005c6009 (UNCONDITIONAL_JUMP)  ; LAB_005c6009
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c6154
        ;   Label: LAB_005c6154
    PUSH EAX                            ; 005c615a
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c615b
    CALL dword ptr [EDX + 0xfc]         ; 005c6161
    ADD ESP,0x4                         ; 005c6167
    TEST EAX,EAX                        ; 005c616a
    JZ 0x005c6067                       ; 005c616c
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c6172
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005c6178
    JZ 0x005c61eb                       ; 005c617f
        ;   XREF to: 005c61eb (CONDITIONAL_JUMP)  ; LAB_005c61eb
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c6181
        ;   Label: LAB_005c6181
    MOV dword ptr [EBX + 0x1fc34],0x0   ; 005c6187
    PUSH EAX                            ; 005c6191
    MOV EDX,dword ptr [EAX + 0x154]     ; 005c6192
    CALL dword ptr [EDX + 0xf8]         ; 005c6198
    ADD ESP,0x4                         ; 005c619e
    TEST EAX,EAX                        ; 005c61a1
    JZ 0x005c61af                       ; 005c61a3
        ;   XREF to: 005c61af (CONDITIONAL_JUMP)  ; LAB_005c61af
    MOV dword ptr [EBX + 0x1fc34],0x1   ; 005c61a5
    PUSH 0x0                            ; 005c61af
        ;   Label: LAB_005c61af
    PUSH EBX                            ; 005c61b1
    CALL core_stranger.cpp_CStranger_FUN_005c06b0 ; 005c61b2
        ;   XREF to: 005c06b0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c06b0(CStranger * this_ptr)
    MOV EAX,dword ptr [EBX + 0x1fc2c]   ; 005c61b7
    MOV ECX,dword ptr [EAX + 0x2dc]     ; 005c61bd
    ADD ESP,0x8                         ; 005c61c3
    CMP ECX,0x2                         ; 005c61c6
    JNZ 0x005c6067                      ; 005c61c9
        ;   XREF to: 005c6067 (CONDITIONAL_JUMP)  ; LAB_005c6067
    MOV dword ptr [EBX + 0x2a90],0x0    ; 005c61cf
    MOV dword ptr [EBX + 0x2a8c],0x8    ; 005c61d9
    ADD ESP,0x4                         ; 005c61e3
    POP EBP                             ; 005c61e6
    POP EDI                             ; 005c61e7
    POP ESI                             ; 005c61e8
    POP EBX                             ; 005c61e9
    RET                                 ; 005c61ea
    MOV EBP,dword ptr [EBX + 0x1fc30]   ; 005c61eb
        ;   Label: LAB_005c61eb
    PUSH EBP                            ; 005c61f1
    PUSH EBX                            ; 005c61f2
    CALL core_stranger.cpp_CStranger_FUN_005c06b0 ; 005c61f3
        ;   XREF to: 005c06b0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_FUN_005c06b0(CStranger * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1fc30]   ; 005c61f8
    ADD ESP,0x8                         ; 005c61fe
    TEST EDX,EDX                        ; 005c6201
    SETZ AL                             ; 005c6203
    AND EAX,0xff                        ; 005c6206
    MOV dword ptr [EBX + 0x1fc30],EAX   ; 005c620b
    JMP 0x005c6181                      ; 005c6211
        ;   XREF to: 005c6181 (UNCONDITIONAL_JUMP)  ; LAB_005c6181


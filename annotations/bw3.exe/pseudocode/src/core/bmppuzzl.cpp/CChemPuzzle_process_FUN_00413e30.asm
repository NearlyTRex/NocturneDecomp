; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bmppuzzl_cpp_CChemPuzzle_process_FUN_00413e30(CChemPuzzle *this_ptr,float delta_time)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_SolvedChemistryPuzzle_005b69ee
;   TerminatedCString s_FailedChemistryPuzzle_005b6a04
;   undefined4 DAT_005fba60
;   undefined4 DAT_00600284
;   undefined4 DAT_01c5fadc
;   undefined4 DAT_01c5fae0
;   undefined4 DAT_01c5fae4
;   undefined4 DAT_01d70a78
;
; Called Functions:
;   core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413e30
        ;   Label: core_bmppuzzl.cpp_CChemPuzzle_process_FUN_00413e30
    PUSH ESI                            ; 00413e31
    PUSH EDI                            ; 00413e32
    PUSH EBP                            ; 00413e33
    MOV EBX,dword ptr [ESP + 0x14]      ; 00413e34
    CMP dword ptr [EBX + 0x930],0x1     ; 00413e38
    JZ 0x00414173                       ; 00413e3f
        ;   XREF to: 00414173 (CONDITIONAL_JUMP)  ; LAB_00414173
    MOV ECX,dword ptr [EBX + 0x28]      ; 00413e45
    TEST ECX,ECX                        ; 00413e48
    JZ 0x004142c4                       ; 00413e4a
        ;   XREF to: 004142c4 (CONDITIONAL_JUMP)  ; LAB_004142c4
    CMP dword ptr [EBX + 0x30],0x0      ; 00413e50
    JZ 0x004141bb                       ; 00413e54
        ;   XREF to: 004141bb (CONDITIONAL_JUMP)  ; LAB_004141bb
    MOV EDX,dword ptr [EBX + 0x24]      ; 00413e5a
        ;   Label: LAB_00413e5a
    LEA EAX,[EDX*0x4 + 0x0]             ; 00413e5d
    SUB EAX,EDX                         ; 00413e64
    SHL EAX,0x2                         ; 00413e66
    SUB EAX,EDX                         ; 00413e69
    CMP dword ptr [EBX + EAX*0x4 + 0x84],0x1 ; 00413e6b
    JNZ 0x00414043                      ; 00413e73
        ;   XREF to: 00414043 (CONDITIONAL_JUMP)  ; LAB_00414043
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00413e79
    XOR ESI,ESI                         ; 00413e7c
    CMP ECX,0x2                         ; 00413e7e
    JG 0x00413e95                       ; 00413e81
        ;   XREF to: 00413e95 (CONDITIONAL_JUMP)  ; LAB_00413e95
    MOV EAX,0x25                        ; 00413e83
    CMP dword ptr [EBX + 0x930],0x2     ; 00413e88
        ;   Label: LAB_00413e88
    JNZ 0x00414283                      ; 00413e8f
        ;   XREF to: 00414283 (CONDITIONAL_JUMP)  ; LAB_00414283
    CMP dword ptr [EBX + 0x1c],0x1      ; 00413e95
        ;   Label: LAB_00413e95
    JL 0x0041416e                       ; 00413e99
        ;   XREF to: 0041416e (CONDITIONAL_JUMP)  ; LAB_0041416e
    CMP dword ptr [EBX + 0x24],0x25     ; 00413e9f
    JGE 0x00414043                      ; 00413ea3
        ;   XREF to: 00414043 (CONDITIONAL_JUMP)  ; LAB_00414043
    MOV EAX,EBX                         ; 00413ea9
    LEA EDX,[EBX + 0x10]                ; 00413eab
    ADD EAX,0x4                         ; 00413eae
        ;   Label: LAB_00413eae
    MOV dword ptr [EAX + 0x930],0x2     ; 00413eb1
    CMP EAX,EDX                         ; 00413ebb
    JNZ 0x00413eae                      ; 00413ebd
        ;   XREF to: 00413eae (CONDITIONAL_JUMP)  ; LAB_00413eae
    MOV EBP,dword ptr [EBX + 0x1c]      ; 00413ebf
    XOR ESI,ESI                         ; 00413ec2
    TEST EBP,EBP                        ; 00413ec4
    JLE 0x00413fd5                      ; 00413ec6
        ;   XREF to: 00413fd5 (CONDITIONAL_JUMP)  ; LAB_00413fd5
    MOV EAX,EBX                         ; 00413ecc
    CMP dword ptr [EAX + 0x38],0x0      ; 00413ece
        ;   Label: LAB_00413ece
    JNZ 0x00413efe                      ; 00413ed2
        ;   XREF to: 00413efe (CONDITIONAL_JUMP)  ; LAB_00413efe
    MOV dword ptr [EBX + 0x938],0x1     ; 00413ed4
    MOV EBP,dword ptr [EBX + 0x58]      ; 00413ede
    MOV dword ptr [EBX + 0x934],0x1     ; 00413ee1
    CMP EBP,0x1                         ; 00413eeb
    JZ 0x00413efe                       ; 00413eee
        ;   XREF to: 00413efe (CONDITIONAL_JUMP)  ; LAB_00413efe
    MOV EDX,dword ptr [EBX + 0x54]      ; 00413ef0
    MOV dword ptr [EBX + 0x58],0x1      ; 00413ef3
    INC EDX                             ; 00413efa
    MOV dword ptr [EBX + 0x54],EDX      ; 00413efb
    MOV ECX,dword ptr [EAX + 0x38]      ; 00413efe
        ;   Label: LAB_00413efe
    CMP ECX,0x1                         ; 00413f01
    JNZ 0x00413f24                      ; 00413f04
        ;   XREF to: 00413f24 (CONDITIONAL_JUMP)  ; LAB_00413f24
    MOV dword ptr [EBX + 0x93c],ECX     ; 00413f06
    MOV EDI,dword ptr [EBX + 0x5c]      ; 00413f0c
    MOV dword ptr [EBX + 0x938],ECX     ; 00413f0f
    CMP EDI,ECX                         ; 00413f15
    JZ 0x00413f24                       ; 00413f17
        ;   XREF to: 00413f24 (CONDITIONAL_JUMP)  ; LAB_00413f24
    MOV EBP,dword ptr [EBX + 0x54]      ; 00413f19
    MOV dword ptr [EBX + 0x5c],ECX      ; 00413f1c
    SUB EBP,ECX                         ; 00413f1f
    MOV dword ptr [EBX + 0x54],EBP      ; 00413f21
    CMP dword ptr [EAX + 0x38],0x2      ; 00413f24
        ;   Label: LAB_00413f24
    JNZ 0x00413f54                      ; 00413f28
        ;   XREF to: 00413f54 (CONDITIONAL_JUMP)  ; LAB_00413f54
    MOV dword ptr [EBX + 0x940],0x1     ; 00413f2a
    MOV ECX,dword ptr [EBX + 0x60]      ; 00413f34
    MOV dword ptr [EBX + 0x93c],0x1     ; 00413f37
    CMP ECX,0x1                         ; 00413f41
    JZ 0x00413f54                       ; 00413f44
        ;   XREF to: 00413f54 (CONDITIONAL_JUMP)  ; LAB_00413f54
    MOV EDI,dword ptr [EBX + 0x54]      ; 00413f46
    MOV dword ptr [EBX + 0x60],0x1      ; 00413f49
    DEC EDI                             ; 00413f50
    MOV dword ptr [EBX + 0x54],EDI      ; 00413f51
    CMP dword ptr [EAX + 0x38],0x3      ; 00413f54
        ;   Label: LAB_00413f54
    JNZ 0x00413f7a                      ; 00413f58
        ;   XREF to: 00413f7a (CONDITIONAL_JUMP)  ; LAB_00413f7a
    MOV EDX,dword ptr [EBX + 0x64]      ; 00413f5a
    MOV dword ptr [EBX + 0x940],0x1     ; 00413f5d
    CMP EDX,0x1                         ; 00413f67
    JZ 0x00413f7a                       ; 00413f6a
        ;   XREF to: 00413f7a (CONDITIONAL_JUMP)  ; LAB_00413f7a
    MOV ECX,dword ptr [EBX + 0x54]      ; 00413f6c
    MOV dword ptr [EBX + 0x64],0x1      ; 00413f6f
    INC ECX                             ; 00413f76
    MOV dword ptr [EBX + 0x54],ECX      ; 00413f77
    CMP dword ptr [EAX + 0x38],0x4      ; 00413f7a
        ;   Label: LAB_00413f7a
    JNZ 0x00413fa0                      ; 00413f7e
        ;   XREF to: 00413fa0 (CONDITIONAL_JUMP)  ; LAB_00413fa0
    MOV EBP,dword ptr [EBX + 0x68]      ; 00413f80
    MOV dword ptr [EBX + 0x93c],0x1     ; 00413f83
    CMP EBP,0x1                         ; 00413f8d
    JZ 0x00413fa0                       ; 00413f90
        ;   XREF to: 00413fa0 (CONDITIONAL_JUMP)  ; LAB_00413fa0
    MOV EDX,dword ptr [EBX + 0x54]      ; 00413f92
    MOV dword ptr [EBX + 0x68],0x1      ; 00413f95
    DEC EDX                             ; 00413f9c
    MOV dword ptr [EBX + 0x54],EDX      ; 00413f9d
    CMP dword ptr [EAX + 0x38],0x5      ; 00413fa0
        ;   Label: LAB_00413fa0
    JNZ 0x00413fc6                      ; 00413fa4
        ;   XREF to: 00413fc6 (CONDITIONAL_JUMP)  ; LAB_00413fc6
    MOV EDI,dword ptr [EBX + 0x6c]      ; 00413fa6
    MOV dword ptr [EBX + 0x938],0x1     ; 00413fa9
    CMP EDI,0x1                         ; 00413fb3
    JZ 0x00413fc6                       ; 00413fb6
        ;   XREF to: 00413fc6 (CONDITIONAL_JUMP)  ; LAB_00413fc6
    MOV EBP,dword ptr [EBX + 0x54]      ; 00413fb8
    MOV dword ptr [EBX + 0x6c],0x1      ; 00413fbb
    INC EBP                             ; 00413fc2
    MOV dword ptr [EBX + 0x54],EBP      ; 00413fc3
    INC ESI                             ; 00413fc6
        ;   Label: LAB_00413fc6
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00413fc7
    ADD EAX,0x4                         ; 00413fca
    CMP ESI,EDX                         ; 00413fcd
    JL 0x00413ece                       ; 00413fcf
        ;   XREF to: 00413ece (CONDITIONAL_JUMP)  ; LAB_00413ece
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00413fd5
        ;   Label: LAB_00413fd5
    XOR ESI,ESI                         ; 00413fd8
    TEST ECX,ECX                        ; 00413fda
    JLE 0x0041401b                      ; 00413fdc
        ;   XREF to: 0041401b (CONDITIONAL_JUMP)  ; LAB_0041401b
    MOV EAX,EBX                         ; 00413fde
    CMP dword ptr [EAX + 0x38],0x3      ; 00413fe0
        ;   Label: LAB_00413fe0
    JNZ 0x00413ff0                      ; 00413fe4
        ;   XREF to: 00413ff0 (CONDITIONAL_JUMP)  ; LAB_00413ff0
    MOV dword ptr [EBX + 0x934],0x2     ; 00413fe6
    CMP dword ptr [EAX + 0x38],0x4      ; 00413ff0
        ;   Label: LAB_00413ff0
    JNZ 0x00414000                      ; 00413ff4
        ;   XREF to: 00414000 (CONDITIONAL_JUMP)  ; LAB_00414000
    MOV dword ptr [EBX + 0x938],0x2     ; 00413ff6
    CMP dword ptr [EAX + 0x38],0x5      ; 00414000
        ;   Label: LAB_00414000
    JNZ 0x00414010                      ; 00414004
        ;   XREF to: 00414010 (CONDITIONAL_JUMP)  ; LAB_00414010
    MOV dword ptr [EBX + 0x940],0x2     ; 00414006
    INC ESI                             ; 00414010
        ;   Label: LAB_00414010
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00414011
    ADD EAX,0x4                         ; 00414014
    CMP ESI,EDX                         ; 00414017
    JL 0x00413fe0                       ; 00414019
        ;   XREF to: 00413fe0 (CONDITIONAL_JUMP)  ; LAB_00413fe0
    MOV ECX,dword ptr [EBX + 0x1c]      ; 0041401b
        ;   Label: LAB_0041401b
    MOV dword ptr [EBX + 0x930],0x2     ; 0041401e
    CMP ECX,0x3                         ; 00414028
    JNZ 0x0041403c                      ; 0041402b
        ;   XREF to: 0041403c (CONDITIONAL_JUMP)  ; LAB_0041403c
    CMP ECX,dword ptr [EBX + 0x54]      ; 0041402d
    JNZ 0x0041403c                      ; 00414030
        ;   XREF to: 0041403c (CONDITIONAL_JUMP)  ; LAB_0041403c
    MOV dword ptr [EBX + 0x930],0x1     ; 00414032
    MOV dword ptr [EBX + 0x1c],0x0      ; 0041403c
        ;   Label: LAB_0041403c
    MOV EDI,EBX                         ; 00414043
        ;   Label: LAB_00414043
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00414045
    MOV dword ptr [EBX + 0x34],0x0      ; 00414048
    XOR ESI,ESI                         ; 0041404f
    MOV dword ptr [EBX + 0x18],EAX      ; 00414051
    MOV EAX,dword ptr [EBX + 0x20]      ; 00414054
        ;   Label: LAB_00414054
    INC EAX                             ; 00414057
    CMP ESI,EAX                         ; 00414058
    JL 0x004142d9                       ; 0041405a
        ;   XREF to: 004142d9 (CONDITIONAL_JUMP)  ; LAB_004142d9
    MOV EAX,EBX                         ; 00414060
    LEA ESI,[EBX + 0x65c]               ; 00414062
    ADD EAX,0x2c                        ; 00414068
        ;   Label: LAB_00414068
    MOV dword ptr [EAX + 0x6c],0x0      ; 0041406b
    CMP EAX,ESI                         ; 00414072
    JNZ 0x00414068                      ; 00414074
        ;   XREF to: 00414068 (CONDITIONAL_JUMP)  ; LAB_00414068
    LEA EAX,[EBX + 0x65c]               ; 00414076
    LEA EDX,[EBX + 0x764]               ; 0041407c
    ADD EAX,0x2c                        ; 00414082
        ;   Label: LAB_00414082
    MOV dword ptr [EAX + 0x6c],0x1      ; 00414085
    CMP EAX,EDX                         ; 0041408c
    JNZ 0x00414082                      ; 0041408e
        ;   XREF to: 00414082 (CONDITIONAL_JUMP)  ; LAB_00414082
    MOV EDX,dword ptr [EBX + 0x44]      ; 00414090
    LEA EAX,[EDX*0x4 + 0x0]             ; 00414093
    SUB EAX,EDX                         ; 0041409a
    MOV ECX,dword ptr [EBX + 0x48]      ; 0041409c
    LEA EDX,[EAX + 0x1]                 ; 0041409f
    LEA EAX,[ECX*0x4 + 0x0]             ; 004140a2
    SUB EAX,ECX                         ; 004140a9
    LEA EDI,[EAX + 0xa]                 ; 004140ab
    MOV ECX,dword ptr [EBX + 0x4c]      ; 004140ae
    LEA EAX,[ECX*0x4 + 0x0]             ; 004140b1
    SUB EAX,ECX                         ; 004140b8
    LEA ESI,[EAX + 0x13]                ; 004140ba
    MOV ECX,dword ptr [EBX + 0x50]      ; 004140bd
    LEA EAX,[ECX*0x4 + 0x0]             ; 004140c0
    SUB EAX,ECX                         ; 004140c7
    LEA ECX,[EAX + 0x1c]                ; 004140c9
    MOV EAX,dword ptr [EBX + 0x938]     ; 004140cc
    MOV EBP,dword ptr [EBX + 0x934]     ; 004140d2
    ADD EDI,EAX                         ; 004140d8
    MOV EAX,dword ptr [EBX + 0x940]     ; 004140da
    ADD EDX,EBP                         ; 004140e0
    ADD ECX,EAX                         ; 004140e2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004140e4
    SUB EAX,EDX                         ; 004140eb
    SHL EAX,0x2                         ; 004140ed
    SUB EAX,EDX                         ; 004140f0
    MOV EBP,dword ptr [EBX + 0x93c]     ; 004140f2
    MOV dword ptr [EBX + EAX*0x4 + 0x98],0x1 ; 004140f8
    LEA EAX,[EDI*0x4 + 0x0]             ; 00414103
    SUB EAX,EDI                         ; 0041410a
    SHL EAX,0x2                         ; 0041410c
    SUB EAX,EDI                         ; 0041410f
    ADD ESI,EBP                         ; 00414111
    MOV dword ptr [EBX + EAX*0x4 + 0x98],0x1 ; 00414113
    LEA EAX,[ESI*0x4 + 0x0]             ; 0041411e
    SUB EAX,ESI                         ; 00414125
    SHL EAX,0x2                         ; 00414127
    SUB EAX,ESI                         ; 0041412a
    MOV dword ptr [EBX + EAX*0x4 + 0x98],0x1 ; 0041412c
    LEA EAX,[ECX*0x4 + 0x0]             ; 00414137
    SUB EAX,ECX                         ; 0041413e
    SHL EAX,0x2                         ; 00414140
    SUB EAX,ECX                         ; 00414143
    MOV dword ptr [EBX + EAX*0x4 + 0x98],0x1 ; 00414145
    CMP dword ptr [EBX + 0x1c],0x0      ; 00414150
    JLE 0x00414300                      ; 00414154
        ;   XREF to: 00414300 (CONDITIONAL_JUMP)  ; LAB_00414300
    MOV dword ptr [EBX + 0x828],0x1     ; 0041415a
        ;   Label: LAB_0041415a
    MOV dword ptr [EBX + 0x7fc],0x1     ; 00414164
    POP EBP                             ; 0041416e
        ;   Label: LAB_0041416e
    POP EDI                             ; 0041416f
    POP ESI                             ; 00414170
    POP EBX                             ; 00414171
    RET                                 ; 00414172
    PUSH 0x5b69ee                       ; 00414173 | = "SolvedChemistryPuzzle"
        ;   Label: LAB_00414173
    MOV ESI,dword ptr [0x005fba60]      ; 00414178 | DAT_005fba60
    PUSH ESI                            ; 0041417e
    MOV dword ptr [EBX + 0x930],0xffffffff ; 0041417f
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00414189
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 0041418e
    MOV EAX,[0x00600284]                ; 00414191 | DAT_00600284
    PUSH 0x200                          ; 00414196
    MOV EDX,dword ptr [EAX]             ; 0041419b | DAT_01d70a78
    PUSH EAX                            ; 0041419d | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0041419e
    ADD ESP,0x8                         ; 004141a1
    XOR EDI,EDI                         ; 004141a4
    PUSH EDI                            ; 004141a6
    PUSH EBX                            ; 004141a7
    MOV dword ptr [0x01c5fae4],EDI      ; 004141a8 | DAT_01c5fae4
    CALL core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0 ; 004141ae
        ;   XREF to: 004119a0 (UNCONDITIONAL_CALL)  ; void core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0(CPuzzle * puzzle, int activate)
    ADD ESP,0x8                         ; 004141b3
    POP EBP                             ; 004141b6
    POP EDI                             ; 004141b7
    POP ESI                             ; 004141b8
    POP EBX                             ; 004141b9
    RET                                 ; 004141ba
    MOV EBP,dword ptr [0x01c5fae0]      ; 004141bb | DAT_01c5fae0
        ;   Label: LAB_004141bb
    PUSH EBP                            ; 004141c1
    MOV EDX,dword ptr [0x01c5fadc]      ; 004141c2 | DAT_01c5fadc
    PUSH EDX                            ; 004141c8
    MOV EAX,dword ptr [EBX]             ; 004141c9
    PUSH EBX                            ; 004141cb
    MOV dword ptr [EBX + 0x30],0x1      ; 004141cc
    CALL dword ptr [EAX + 0x2c]         ; 004141d3
    ADD ESP,0xc                         ; 004141d6
    TEST EAX,EAX                        ; 004141d9
    JZ 0x0041416e                       ; 004141db
        ;   XREF to: 0041416e (CONDITIONAL_JUMP)  ; LAB_0041416e
    MOV ECX,dword ptr [EBX + 0x24]      ; 004141dd
    CMP ECX,0x2b                        ; 004141e0
    JNZ 0x00414235                      ; 004141e3
        ;   XREF to: 00414235 (CONDITIONAL_JUMP)  ; LAB_00414235
    CMP dword ptr [EBX + 0x930],0x2     ; 004141e5
    JNZ 0x00414202                      ; 004141ec
        ;   XREF to: 00414202 (CONDITIONAL_JUMP)  ; LAB_00414202
    PUSH 0x5b6a04                       ; 004141ee | = "FailedChemistryPuzzle"
    MOV EBP,dword ptr [0x005fba60]      ; 004141f3 | DAT_005fba60
    PUSH EBP                            ; 004141f9
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 004141fa
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004141ff
    PUSH 0x200                          ; 00414202
        ;   Label: LAB_00414202
    MOV EAX,[0x00600284]                ; 00414207 | DAT_00600284
    PUSH EAX                            ; 0041420c | DAT_01d70a78
    MOV EDX,dword ptr [EAX]             ; 0041420d | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 0041420f
    ADD ESP,0x8                         ; 00414212
    XOR EAX,EAX                         ; 00414215
    PUSH EAX                            ; 00414217
    PUSH EBX                            ; 00414218
    MOV [0x01c5fae4],EAX                ; 00414219 | DAT_01c5fae4
    CALL core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0 ; 0041421e
        ;   XREF to: 004119a0 (UNCONDITIONAL_CALL)  ; void core_bmppuzzl.cpp_activatePuzzle_FUN_004119a0(CPuzzle * puzzle, int activate)
    ADD ESP,0x8                         ; 00414223
    MOV dword ptr [EBX + 0x930],0xffffffff ; 00414226
    POP EBP                             ; 00414230
    POP EDI                             ; 00414231
    POP ESI                             ; 00414232
    POP EBX                             ; 00414233
    RET                                 ; 00414234
    CMP ECX,0x2c                        ; 00414235
        ;   Label: LAB_00414235
    JNZ 0x00413e5a                      ; 00414238
        ;   XREF to: 00413e5a (CONDITIONAL_JUMP)  ; LAB_00413e5a
    PUSH EBX                            ; 0041423e
    MOV EAX,dword ptr [EBX]             ; 0041423f
    CALL dword ptr [EAX + 0x8]          ; 00414241
    ADD ESP,0x4                         ; 00414244
    MOV EAX,[0x00600284]                ; 00414247 | DAT_00600284
    PUSH 0x200                          ; 0041424c
    MOV EDX,dword ptr [EAX]             ; 00414251 | DAT_01d70a78
    PUSH EAX                            ; 00414253 | DAT_01d70a78
    CALL dword ptr [EDX + 0x4]          ; 00414254
    ADD ESP,0x8                         ; 00414257
    MOV dword ptr [EBX + 0x930],0xffffffff ; 0041425a
    POP EBP                             ; 00414264
    POP EDI                             ; 00414265
    POP ESI                             ; 00414266
    POP EBX                             ; 00414267
    RET                                 ; 00414268
    INC EAX                             ; 00414269
        ;   Label: LAB_00414269
    INC ESI                             ; 0041426a
    CMP EAX,0x2b                        ; 0041426b
    JGE 0x00413e95                      ; 0041426e
        ;   XREF to: 00413e95 (CONDITIONAL_JUMP)  ; LAB_00413e95
    CMP dword ptr [EBX + 0x1c],0x2      ; 00414274
    JG 0x00413e95                       ; 00414278
        ;   XREF to: 00413e95 (CONDITIONAL_JUMP)  ; LAB_00413e95
    JMP 0x00413e88                      ; 0041427e
        ;   XREF to: 00413e88 (UNCONDITIONAL_JUMP)  ; LAB_00413e88
    MOV ECX,dword ptr [EBX + 0x24]      ; 00414283
        ;   Label: LAB_00414283
    CMP EAX,ECX                         ; 00414286
    JNZ 0x00414269                      ; 00414288
        ;   XREF to: 00414269 (CONDITIONAL_JUMP)  ; LAB_00414269
    MOV EDX,0x1                         ; 0041428a
    MOV EDI,dword ptr [EBX + 0x1c]      ; 0041428f
    XOR EAX,ECX                         ; 00414292
    TEST EDI,EDI                        ; 00414294
    JLE 0x004142ac                      ; 00414296
        ;   XREF to: 004142ac (CONDITIONAL_JUMP)  ; LAB_004142ac
    MOV EDI,EBX                         ; 00414298
    CMP ESI,dword ptr [EDI + 0x38]      ; 0041429a
        ;   Label: LAB_0041429a
    JNZ 0x004142a1                      ; 0041429d
        ;   XREF to: 004142a1 (CONDITIONAL_JUMP)  ; LAB_004142a1
    XOR EDX,EDX                         ; 0041429f
    INC EAX                             ; 004142a1
        ;   Label: LAB_004142a1
    MOV EBP,dword ptr [EBX + 0x1c]      ; 004142a2
    ADD EDI,0x4                         ; 004142a5
    CMP EAX,EBP                         ; 004142a8
    JL 0x0041429a                       ; 004142aa
        ;   XREF to: 0041429a (CONDITIONAL_JUMP)  ; LAB_0041429a
    TEST EDX,EDX                        ; 004142ac
        ;   Label: LAB_004142ac
    JLE 0x00413e95                      ; 004142ae
        ;   XREF to: 00413e95 (CONDITIONAL_JUMP)  ; LAB_00413e95
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004142b4
    INC EAX                             ; 004142b7
    MOV dword ptr [EBX + 0x1c],EAX      ; 004142b8
    MOV dword ptr [EBX + EAX*0x4 + 0x34],ESI ; 004142bb
    JMP 0x00413e95                      ; 004142bf
        ;   XREF to: 00413e95 (UNCONDITIONAL_JUMP)  ; LAB_00413e95
    CMP ECX,dword ptr [EBX + 0x2c]      ; 004142c4
        ;   Label: LAB_004142c4
    JZ 0x00414043                       ; 004142c7
        ;   XREF to: 00414043 (CONDITIONAL_JUMP)  ; LAB_00414043
    MOV dword ptr [EBX + 0x24],0xffffffff ; 004142cd
    JMP 0x00414043                      ; 004142d4
        ;   XREF to: 00414043 (UNCONDITIONAL_JUMP)  ; LAB_00414043
    CMP dword ptr [EDI + 0x98],0x1      ; 004142d9
        ;   Label: LAB_004142d9
    JNZ 0x004142f7                      ; 004142e0
        ;   XREF to: 004142f7 (CONDITIONAL_JUMP)  ; LAB_004142f7
    PUSH ESI                            ; 004142e2
    MOV EAX,dword ptr [EBX]             ; 004142e3
    PUSH EBX                            ; 004142e5
    CALL dword ptr [EAX + 0x30]         ; 004142e6
    ADD ESP,0x8                         ; 004142e9
    TEST EAX,EAX                        ; 004142ec
    JZ 0x004142f7                       ; 004142ee
        ;   XREF to: 004142f7 (CONDITIONAL_JUMP)  ; LAB_004142f7
    MOV dword ptr [EBX + 0x34],0x1      ; 004142f0
    INC ESI                             ; 004142f7
        ;   Label: LAB_004142f7
    ADD EDI,0x2c                        ; 004142f8
    JMP 0x00414054                      ; 004142fb
        ;   XREF to: 00414054 (UNCONDITIONAL_JUMP)  ; LAB_00414054
    CMP dword ptr [EBX + 0x930],0x2     ; 00414300
        ;   Label: LAB_00414300
    JZ 0x0041415a                       ; 00414307
        ;   XREF to: 0041415a (CONDITIONAL_JUMP)  ; LAB_0041415a
    MOV dword ptr [EBX + 0x828],0x0     ; 0041430d
    MOV dword ptr [EBX + 0x7fc],0x1     ; 00414317
    POP EBP                             ; 00414321
    POP EDI                             ; 00414322
    POP ESI                             ; 00414323
    POP EBX                             ; 00414324
    RET                                 ; 00414325


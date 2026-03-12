; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004270f0(CBugs *this_ptr,SBug *bug_data)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; SBug *           Stack[0x8]:4   bug_data
; Local Variables:
; int[1008]        Stack[-0x1030]:4032  aiStackY_1030
; undefined4       Stack[-0x68]:4  local_68
; int              Stack[-0x48]:4  local_48
; int              Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; SSwarmVertex *   Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; SSwarmVertex *   Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_bugs.cpp_CBugs_updateBugRenderingData_FUN_004268e0 at 0042704a
;
; Referenced Globals:
;   double DOUBLE_00616e53 = 0.00390625
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004270f0
        ;   Label: core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004270f0
    PUSH ESI                            ; 004270f1
    PUSH EDI                            ; 004270f2
    PUSH EBP                            ; 004270f3
    SUB ESP,0x58                        ; 004270f4
    MOV EAX,dword ptr [ESP + 0x70]      ; 004270f7
    MOV EAX,dword ptr [EAX + 0x2c]      ; 004270fb
    MOV dword ptr [ESP + 0x3c],EAX      ; 004270fe
    MOV EAX,dword ptr [ESP + 0x70]      ; 00427102
    MOV EDX,dword ptr [ESP + 0x70]      ; 00427106
    MOV EAX,dword ptr [EAX + 0x30]      ; 0042710a
    MOV dword ptr [EDX + 0x34],0x0      ; 0042710d
    MOV dword ptr [EDX + 0x2c],EAX      ; 00427114
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00427117
    XOR EDX,EDX                         ; 0042711b
    ADD EAX,0x12b38                     ; 0042711d
    MOV dword ptr [ESP + 0x48],EDX      ; 00427122
    MOV dword ptr [ESP + 0x38],EAX      ; 00427126
    MOV EAX,dword ptr [ESP + 0x70]      ; 0042712a
        ;   Label: LAB_0042712a
    IMUL EAX,dword ptr [EAX + 0x2c],0x28 ; 0042712e
    MOV EDX,dword ptr [ESP + 0x38]      ; 00427132
    ADD EDX,EAX                         ; 00427136
    MOV EAX,dword ptr [ESP + 0x70]      ; 00427138
    IMUL EAX,dword ptr [EAX + 0x2c],0xc ; 0042713c
    MOV dword ptr [ESP + 0x44],EDX      ; 00427140
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00427144
    MOV EDX,dword ptr [EDX + 0x12afc]   ; 00427148
    MOV EDX,dword ptr [EDX + 0x2234]    ; 0042714e
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x4] ; 00427154
    MOV dword ptr [ESP + 0x40],EAX      ; 00427158
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042715c
    XOR ESI,ESI                         ; 00427160
    MOV EDI,dword ptr [EAX]             ; 00427162
    XOR EDX,EDX                         ; 00427164
    TEST EDI,EDI                        ; 00427166
    JLE 0x004271ba                      ; 00427168
        ;   XREF to: 004271ba (CONDITIONAL_JUMP)  ; LAB_004271ba
    MOV EBX,EAX                         ; 0042716a
    XOR ECX,ECX                         ; 0042716c
    MOV EAX,dword ptr [EBX + 0x8]       ; 0042716e
        ;   Label: LAB_0042716e
    IMUL EBP,EAX,0xc                    ; 00427171
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00427174
    MOV EDI,dword ptr [EDI + 0x12afc]   ; 00427178
    MOV EDI,dword ptr [EDI + 0x2234]    ; 0042717e
    ADD EDI,EBP                         ; 00427184
    MOV EDI,dword ptr [EDI + 0x4]       ; 00427186
    MOV dword ptr [ESP + 0x4c],EDI      ; 00427189
    MOV EDI,0x1                         ; 0042718d
    MOV EBP,dword ptr [ESP + 0x48]      ; 00427192
    MOV dword ptr [ESP + 0x50],EDI      ; 00427196
    TEST EBP,EBP                        ; 0042719a
    JNZ 0x004272af                      ; 0042719c
        ;   XREF to: 004272af (CONDITIONAL_JUMP)  ; LAB_004272af
    CMP EAX,dword ptr [ESP + 0x3c]      ; 004271a2
    JNZ 0x00427297                      ; 004271a6
        ;   XREF to: 00427297 (CONDITIONAL_JUMP)  ; LAB_00427297
    MOV EAX,dword ptr [ESP + 0x44]      ; 004271ac
        ;   Label: LAB_004271ac
    INC EDX                             ; 004271b0
    MOV EBP,dword ptr [EAX]             ; 004271b1
    ADD EBX,0x4                         ; 004271b3
    CMP EDX,EBP                         ; 004271b6
    JL 0x0042716e                       ; 004271b8
        ;   XREF to: 0042716e (CONDITIONAL_JUMP)  ; LAB_0042716e
    TEST ESI,ESI                        ; 004271ba
        ;   Label: LAB_004271ba
    JLE 0x00427280                      ; 004271bc
        ;   XREF to: 00427280 (CONDITIONAL_JUMP)  ; LAB_00427280
    MOV EAX,dword ptr [ESP + 0x70]      ; 004271c2
        ;   Label: LAB_004271c2
    MOV ECX,dword ptr [EAX + 0x3c]      ; 004271c6
    TEST ECX,ECX                        ; 004271c9
    JLE 0x004271d3                      ; 004271cb
        ;   XREF to: 004271d3 (CONDITIONAL_JUMP)  ; LAB_004271d3
    LEA EBX,[ECX + -0x1]                ; 004271cd
    MOV dword ptr [EAX + 0x3c],EBX      ; 004271d0
    TEST ESI,ESI                        ; 004271d3
        ;   Label: LAB_004271d3
    JG 0x004272c7                       ; 004271d5
        ;   XREF to: 004272c7 (CONDITIONAL_JUMP)  ; LAB_004272c7
    MOV EDX,dword ptr [ESP + 0x70]      ; 004271db
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004271df
    MOV dword ptr [EDX + 0x30],EAX      ; 004271e3
    TEST EAX,EAX                        ; 004271e6
    JL 0x004272e2                       ; 004271e8
        ;   XREF to: 004272e2 (CONDITIONAL_JUMP)  ; LAB_004272e2
    MOV EDX,dword ptr [ESP + 0x70]      ; 004271ee
        ;   Label: LAB_004271ee
    MOV EDX,dword ptr [EDX + 0x2c]      ; 004271f2
    LEA EAX,[EDX*0x4 + 0x0]             ; 004271f5
    MOV ECX,dword ptr [ESP + 0x6c]      ; 004271fc
    SUB EAX,EDX                         ; 00427200
    MOV ECX,dword ptr [ECX + 0x12afc]   ; 00427202
    SHL EAX,0x2                         ; 00427208
    MOV EDX,dword ptr [ECX + 0x2234]    ; 0042720b
    LEA EDI,[ESP + 0x2c]                ; 00427211
    LEA ESI,[EDX + EAX*0x1]             ; 00427215
    MOV ECX,dword ptr [ESP + 0x70]      ; 00427218
    MOVSD ES:EDI,ESI                    ; 0042721c
    MOVSD ES:EDI,ESI                    ; 0042721d
    MOVSD ES:EDI,ESI                    ; 0042721e
    MOV ECX,dword ptr [ECX + 0x30]      ; 0042721f
    LEA EAX,[ECX*0x4 + 0x0]             ; 00427222
    SUB EAX,ECX                         ; 00427229
    SHL EAX,0x2                         ; 0042722b
    LEA EDI,[ESP + 0x20]                ; 0042722e
    LEA ESI,[EDX + EAX*0x1]             ; 00427232
    MOVSD ES:EDI,ESI                    ; 00427235
    MOVSD ES:EDI,ESI                    ; 00427236
    MOVSD ES:EDI,ESI                    ; 00427237
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00427238
    SUB EDX,dword ptr [ESP + 0x20]      ; 0042723c
    IMUL EDX,EDX                        ; 00427240
    MOV EAX,dword ptr [ESP + 0x30]      ; 00427243
    SUB EAX,dword ptr [ESP + 0x24]      ; 00427247
    IMUL EAX,EAX                        ; 0042724b
    MOV EBX,dword ptr [ESP + 0x28]      ; 0042724e
    MOV ECX,dword ptr [ESP + 0x34]      ; 00427252
    SUB ECX,EBX                         ; 00427256
    ADD EDX,EAX                         ; 00427258
    MOV EAX,ECX                         ; 0042725a
    IMUL EAX,ECX                        ; 0042725c
    ADD EAX,EDX                         ; 0042725f
    MOV dword ptr [ESP + 0x54],EAX      ; 00427261
    FILD dword ptr [ESP + 0x54]         ; 00427265
    FSQRT                               ; 00427269
    FMUL double ptr [0x00616e53]        ; 0042726b | DOUBLE_00616e53
    MOV EAX,dword ptr [ESP + 0x70]      ; 00427271
    FSTP float ptr [EAX + 0x38]         ; 00427275
    ADD ESP,0x58                        ; 00427278
    POP EBP                             ; 0042727b
    POP EDI                             ; 0042727c
    POP ESI                             ; 0042727d
    POP EBX                             ; 0042727e
    RET                                 ; 0042727f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00427280
        ;   Label: LAB_00427280
    INC EAX                             ; 00427284
    MOV dword ptr [ESP + 0x48],EAX      ; 00427285
    CMP EAX,0x2                         ; 00427289
    JL 0x0042712a                       ; 0042728c
        ;   XREF to: 0042712a (CONDITIONAL_JUMP)  ; LAB_0042712a
    JMP 0x004271c2                      ; 00427292
        ;   XREF to: 004271c2 (UNCONDITIONAL_JUMP)  ; LAB_004271c2
    MOV EDI,dword ptr [ESP + 0x70]      ; 00427297
        ;   Label: LAB_00427297
    CMP dword ptr [EDI + 0x3c],0x0      ; 0042729b
    JLE 0x004272af                      ; 0042729f
        ;   XREF to: 004272af (CONDITIONAL_JUMP)  ; LAB_004272af
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004272a1
    CMP EDI,dword ptr [ESP + 0x40]      ; 004272a5
    JL 0x004271ac                       ; 004272a9
        ;   XREF to: 004271ac (CONDITIONAL_JUMP)  ; LAB_004271ac
    CMP dword ptr [ESP + 0x50],0x0      ; 004272af
        ;   Label: LAB_004272af
    JZ 0x004271ac                       ; 004272b4
        ;   XREF to: 004271ac (CONDITIONAL_JUMP)  ; LAB_004271ac
    ADD ECX,0x4                         ; 004272ba
    INC ESI                             ; 004272bd
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EAX ; 004272be
    JMP 0x004271ac                      ; 004272c2
        ;   XREF to: 004271ac (UNCONDITIONAL_JUMP)  ; LAB_004271ac
    DEC ESI                             ; 004272c7
        ;   Label: LAB_004272c7
    PUSH ESI                            ; 004272c8
    PUSH 0x0                            ; 004272c9
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 004272cb
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 004272d0
    MOV EDX,dword ptr [ESP + 0x70]      ; 004272d3
    MOV EAX,dword ptr [ESP + EAX*0x4]   ; 004272d7
    MOV dword ptr [EDX + 0x30],EAX      ; 004272da
    JMP 0x004271ee                      ; 004272dd
        ;   XREF to: 004271ee (UNCONDITIONAL_JUMP)  ; LAB_004271ee
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004272e2
        ;   Label: LAB_004272e2
    MOV dword ptr [EDX + 0x30],EAX      ; 004272e5
    JMP 0x004271ee                      ; 004272e8
        ;   XREF to: 004271ee (UNCONDITIONAL_JUMP)  ; LAB_004271ee


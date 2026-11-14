; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00427830(CBugs *this_ptr,SBug *bug_data)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
; SBug *           Stack[0x8]:4   bug_data
; Local Variables:
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x48]:4  local_48
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
;
; XREF[1]:
;   core_bugs.cpp_FUN_00426ec0 at 0042773c
;
; Referenced Globals:
;   undefined4 DAT_005d5168
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427830
        ;   Label: core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00427830
    PUSH ESI                            ; 00427831
    PUSH EDI                            ; 00427832
    PUSH EBP                            ; 00427833
    SUB ESP,0x58                        ; 00427834
    MOV EAX,dword ptr [ESP + 0x70]      ; 00427837
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0042783b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042783e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00427842
    MOV EDX,dword ptr [ESP + 0x70]      ; 00427846
    MOV EAX,dword ptr [EAX + 0x30]      ; 0042784a
    MOV dword ptr [EDX + 0x34],0x0      ; 0042784d
    MOV dword ptr [EDX + 0x2c],EAX      ; 00427854
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00427857
    XOR EDX,EDX                         ; 0042785b
    ADD EAX,0x12ee4                     ; 0042785d
    MOV dword ptr [ESP + 0x48],EDX      ; 00427862
    MOV dword ptr [ESP + 0x38],EAX      ; 00427866
    MOV EAX,dword ptr [ESP + 0x70]      ; 0042786a
        ;   Label: LAB_0042786a
    IMUL EAX,dword ptr [EAX + 0x2c],0x28 ; 0042786e
    MOV EDX,dword ptr [ESP + 0x38]      ; 00427872
    ADD EDX,EAX                         ; 00427876
    MOV EAX,dword ptr [ESP + 0x70]      ; 00427878
    IMUL EAX,dword ptr [EAX + 0x2c],0xc ; 0042787c
    MOV dword ptr [ESP + 0x44],EDX      ; 00427880
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00427884
    MOV EDX,dword ptr [EDX + 0x12ea8]   ; 00427888
    MOV EDX,dword ptr [EDX + 0x2324]    ; 0042788e
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x4] ; 00427894
    MOV dword ptr [ESP + 0x40],EAX      ; 00427898
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042789c
    XOR ESI,ESI                         ; 004278a0
    MOV EDI,dword ptr [EAX]             ; 004278a2
    XOR EDX,EDX                         ; 004278a4
    TEST EDI,EDI                        ; 004278a6
    JLE 0x004278fa                      ; 004278a8
        ;   XREF to: 004278fa (CONDITIONAL_JUMP)  ; LAB_004278fa
    MOV EBX,EAX                         ; 004278aa
    XOR ECX,ECX                         ; 004278ac
    MOV EAX,dword ptr [EBX + 0x8]       ; 004278ae
        ;   Label: LAB_004278ae
    IMUL EBP,EAX,0xc                    ; 004278b1
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004278b4
    MOV EDI,dword ptr [EDI + 0x12ea8]   ; 004278b8
    MOV EDI,dword ptr [EDI + 0x2324]    ; 004278be
    ADD EDI,EBP                         ; 004278c4
    MOV EDI,dword ptr [EDI + 0x4]       ; 004278c6
    MOV dword ptr [ESP + 0x4c],EDI      ; 004278c9
    MOV EDI,0x1                         ; 004278cd
    MOV EBP,dword ptr [ESP + 0x48]      ; 004278d2
    MOV dword ptr [ESP + 0x50],EDI      ; 004278d6
    TEST EBP,EBP                        ; 004278da
    JNZ 0x004279ef                      ; 004278dc
        ;   XREF to: 004279ef (CONDITIONAL_JUMP)  ; LAB_004279ef
    CMP EAX,dword ptr [ESP + 0x3c]      ; 004278e2
    JNZ 0x004279d7                      ; 004278e6
        ;   XREF to: 004279d7 (CONDITIONAL_JUMP)  ; LAB_004279d7
    MOV EAX,dword ptr [ESP + 0x44]      ; 004278ec
        ;   Label: LAB_004278ec
    INC EDX                             ; 004278f0
    MOV EBP,dword ptr [EAX]             ; 004278f1
    ADD EBX,0x4                         ; 004278f3
    CMP EDX,EBP                         ; 004278f6
    JL 0x004278ae                       ; 004278f8
        ;   XREF to: 004278ae (CONDITIONAL_JUMP)  ; LAB_004278ae
    TEST ESI,ESI                        ; 004278fa
        ;   Label: LAB_004278fa
    JLE 0x004279c0                      ; 004278fc
        ;   XREF to: 004279c0 (CONDITIONAL_JUMP)  ; LAB_004279c0
    MOV EAX,dword ptr [ESP + 0x70]      ; 00427902
        ;   Label: LAB_00427902
    MOV ECX,dword ptr [EAX + 0x3c]      ; 00427906
    TEST ECX,ECX                        ; 00427909
    JLE 0x00427913                      ; 0042790b
        ;   XREF to: 00427913 (CONDITIONAL_JUMP)  ; LAB_00427913
    LEA EBX,[ECX + -0x1]                ; 0042790d
    MOV dword ptr [EAX + 0x3c],EBX      ; 00427910
    TEST ESI,ESI                        ; 00427913
        ;   Label: LAB_00427913
    JG 0x00427a07                       ; 00427915
        ;   XREF to: 00427a07 (CONDITIONAL_JUMP)  ; LAB_00427a07
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042791b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042791f
    MOV dword ptr [EDX + 0x30],EAX      ; 00427923
    TEST EAX,EAX                        ; 00427926
    JL 0x00427a22                       ; 00427928
        ;   XREF to: 00427a22 (CONDITIONAL_JUMP)  ; LAB_00427a22
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042792e
        ;   Label: LAB_0042792e
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00427932
    LEA EAX,[EDX*0x4 + 0x0]             ; 00427935
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0042793c
    SUB EAX,EDX                         ; 00427940
    MOV ECX,dword ptr [ECX + 0x12ea8]   ; 00427942
    SHL EAX,0x2                         ; 00427948
    MOV EDX,dword ptr [ECX + 0x2324]    ; 0042794b
    LEA EDI,[ESP + 0x2c]                ; 00427951
    LEA ESI,[EDX + EAX*0x1]             ; 00427955
    MOV ECX,dword ptr [ESP + 0x70]      ; 00427958
    MOVSD ES:EDI,ESI                    ; 0042795c
    MOVSD ES:EDI,ESI                    ; 0042795d
    MOVSD ES:EDI,ESI                    ; 0042795e
    MOV ECX,dword ptr [ECX + 0x30]      ; 0042795f
    LEA EAX,[ECX*0x4 + 0x0]             ; 00427962
    SUB EAX,ECX                         ; 00427969
    SHL EAX,0x2                         ; 0042796b
    LEA EDI,[ESP + 0x20]                ; 0042796e
    LEA ESI,[EDX + EAX*0x1]             ; 00427972
    MOVSD ES:EDI,ESI                    ; 00427975
    MOVSD ES:EDI,ESI                    ; 00427976
    MOVSD ES:EDI,ESI                    ; 00427977
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00427978
    SUB EDX,dword ptr [ESP + 0x20]      ; 0042797c
    IMUL EDX,EDX                        ; 00427980
    MOV EAX,dword ptr [ESP + 0x30]      ; 00427983
    SUB EAX,dword ptr [ESP + 0x24]      ; 00427987
    IMUL EAX,EAX                        ; 0042798b
    MOV EBX,dword ptr [ESP + 0x28]      ; 0042798e
    MOV ECX,dword ptr [ESP + 0x34]      ; 00427992
    SUB ECX,EBX                         ; 00427996
    ADD EDX,EAX                         ; 00427998
    MOV EAX,ECX                         ; 0042799a
    IMUL EAX,ECX                        ; 0042799c
    ADD EAX,EDX                         ; 0042799f
    MOV dword ptr [ESP + 0x54],EAX      ; 004279a1
    FILD dword ptr [ESP + 0x54]         ; 004279a5
    FSQRT                               ; 004279a9
    FMUL double ptr [0x005d5168]        ; 004279ab | DAT_005d5168
    MOV EAX,dword ptr [ESP + 0x70]      ; 004279b1
    FSTP float ptr [EAX + 0x38]         ; 004279b5
    ADD ESP,0x58                        ; 004279b8
    POP EBP                             ; 004279bb
    POP EDI                             ; 004279bc
    POP ESI                             ; 004279bd
    POP EBX                             ; 004279be
    RET                                 ; 004279bf
    MOV EAX,dword ptr [ESP + 0x48]      ; 004279c0
        ;   Label: LAB_004279c0
    INC EAX                             ; 004279c4
    MOV dword ptr [ESP + 0x48],EAX      ; 004279c5
    CMP EAX,0x2                         ; 004279c9
    JL 0x0042786a                       ; 004279cc
        ;   XREF to: 0042786a (CONDITIONAL_JUMP)  ; LAB_0042786a
    JMP 0x00427902                      ; 004279d2
        ;   XREF to: 00427902 (UNCONDITIONAL_JUMP)  ; LAB_00427902
    MOV EDI,dword ptr [ESP + 0x70]      ; 004279d7
        ;   Label: LAB_004279d7
    CMP dword ptr [EDI + 0x3c],0x0      ; 004279db
    JLE 0x004279ef                      ; 004279df
        ;   XREF to: 004279ef (CONDITIONAL_JUMP)  ; LAB_004279ef
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004279e1
    CMP EDI,dword ptr [ESP + 0x40]      ; 004279e5
    JL 0x004278ec                       ; 004279e9
        ;   XREF to: 004278ec (CONDITIONAL_JUMP)  ; LAB_004278ec
    CMP dword ptr [ESP + 0x50],0x0      ; 004279ef
        ;   Label: LAB_004279ef
    JZ 0x004278ec                       ; 004279f4
        ;   XREF to: 004278ec (CONDITIONAL_JUMP)  ; LAB_004278ec
    ADD ECX,0x4                         ; 004279fa
    INC ESI                             ; 004279fd
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EAX ; 004279fe
    JMP 0x004278ec                      ; 00427a02
        ;   XREF to: 004278ec (UNCONDITIONAL_JUMP)  ; LAB_004278ec
    DEC ESI                             ; 00427a07
        ;   Label: LAB_00427a07
    PUSH ESI                            ; 00427a08
    PUSH 0x0                            ; 00427a09
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 00427a0b
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 00427a10
    MOV EDX,dword ptr [ESP + 0x70]      ; 00427a13
    MOV EAX,dword ptr [ESP + EAX*0x4]   ; 00427a17
    MOV dword ptr [EDX + 0x30],EAX      ; 00427a1a
    JMP 0x0042792e                      ; 00427a1d
        ;   XREF to: 0042792e (UNCONDITIONAL_JUMP)  ; LAB_0042792e
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00427a22
        ;   Label: LAB_00427a22
    MOV dword ptr [EDX + 0x30],EAX      ; 00427a25
    JMP 0x0042792e                      ; 00427a28
        ;   XREF to: 0042792e (UNCONDITIONAL_JUMP)  ; LAB_0042792e


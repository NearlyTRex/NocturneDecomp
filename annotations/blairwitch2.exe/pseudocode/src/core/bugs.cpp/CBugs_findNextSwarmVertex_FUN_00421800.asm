; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00421800(CBugs *this_ptr,SBug *bug_data)
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
;   core_bugs.cpp_FUN_00420e90 at 0042170c
;
; Referenced Globals:
;   undefined4 DAT_005cca79
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421800
        ;   Label: core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00421800
    PUSH ESI                            ; 00421801
    PUSH EDI                            ; 00421802
    PUSH EBP                            ; 00421803
    SUB ESP,0x58                        ; 00421804
    MOV EAX,dword ptr [ESP + 0x70]      ; 00421807
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0042180b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042180e
    MOV EAX,dword ptr [ESP + 0x70]      ; 00421812
    MOV EDX,dword ptr [ESP + 0x70]      ; 00421816
    MOV EAX,dword ptr [EAX + 0x30]      ; 0042181a
    MOV dword ptr [EDX + 0x34],0x0      ; 0042181d
    MOV dword ptr [EDX + 0x2c],EAX      ; 00421824
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00421827
    XOR EDX,EDX                         ; 0042182b
    ADD EAX,0x17774                     ; 0042182d
    MOV dword ptr [ESP + 0x48],EDX      ; 00421832
    MOV dword ptr [ESP + 0x38],EAX      ; 00421836
    MOV EAX,dword ptr [ESP + 0x70]      ; 0042183a
        ;   Label: LAB_0042183a
    IMUL EAX,dword ptr [EAX + 0x2c],0x28 ; 0042183e
    MOV EDX,dword ptr [ESP + 0x38]      ; 00421842
    ADD EDX,EAX                         ; 00421846
    MOV EAX,dword ptr [ESP + 0x70]      ; 00421848
    IMUL EAX,dword ptr [EAX + 0x2c],0xc ; 0042184c
    MOV dword ptr [ESP + 0x44],EDX      ; 00421850
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00421854
    MOV EDX,dword ptr [EDX + 0x17738]   ; 00421858
    MOV EDX,dword ptr [EDX + 0x2234]    ; 0042185e
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x4] ; 00421864
    MOV dword ptr [ESP + 0x40],EAX      ; 00421868
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042186c
    XOR ESI,ESI                         ; 00421870
    MOV EDI,dword ptr [EAX]             ; 00421872
    XOR EDX,EDX                         ; 00421874
    TEST EDI,EDI                        ; 00421876
    JLE 0x004218ca                      ; 00421878
        ;   XREF to: 004218ca (CONDITIONAL_JUMP)  ; LAB_004218ca
    MOV EBX,EAX                         ; 0042187a
    XOR ECX,ECX                         ; 0042187c
    MOV EAX,dword ptr [EBX + 0x8]       ; 0042187e
        ;   Label: LAB_0042187e
    IMUL EBP,EAX,0xc                    ; 00421881
    MOV EDI,dword ptr [ESP + 0x6c]      ; 00421884
    MOV EDI,dword ptr [EDI + 0x17738]   ; 00421888
    MOV EDI,dword ptr [EDI + 0x2234]    ; 0042188e
    ADD EDI,EBP                         ; 00421894
    MOV EDI,dword ptr [EDI + 0x4]       ; 00421896
    MOV dword ptr [ESP + 0x4c],EDI      ; 00421899
    MOV EDI,0x1                         ; 0042189d
    MOV EBP,dword ptr [ESP + 0x48]      ; 004218a2
    MOV dword ptr [ESP + 0x50],EDI      ; 004218a6
    TEST EBP,EBP                        ; 004218aa
    JNZ 0x004219bf                      ; 004218ac
        ;   XREF to: 004219bf (CONDITIONAL_JUMP)  ; LAB_004219bf
    CMP EAX,dword ptr [ESP + 0x3c]      ; 004218b2
    JNZ 0x004219a7                      ; 004218b6
        ;   XREF to: 004219a7 (CONDITIONAL_JUMP)  ; LAB_004219a7
    MOV EAX,dword ptr [ESP + 0x44]      ; 004218bc
        ;   Label: LAB_004218bc
    INC EDX                             ; 004218c0
    MOV EBP,dword ptr [EAX]             ; 004218c1
    ADD EBX,0x4                         ; 004218c3
    CMP EDX,EBP                         ; 004218c6
    JL 0x0042187e                       ; 004218c8
        ;   XREF to: 0042187e (CONDITIONAL_JUMP)  ; LAB_0042187e
    TEST ESI,ESI                        ; 004218ca
        ;   Label: LAB_004218ca
    JLE 0x00421990                      ; 004218cc
        ;   XREF to: 00421990 (CONDITIONAL_JUMP)  ; LAB_00421990
    MOV EAX,dword ptr [ESP + 0x70]      ; 004218d2
        ;   Label: LAB_004218d2
    MOV ECX,dword ptr [EAX + 0x3c]      ; 004218d6
    TEST ECX,ECX                        ; 004218d9
    JLE 0x004218e3                      ; 004218db
        ;   XREF to: 004218e3 (CONDITIONAL_JUMP)  ; LAB_004218e3
    LEA EBX,[ECX + -0x1]                ; 004218dd
    MOV dword ptr [EAX + 0x3c],EBX      ; 004218e0
    TEST ESI,ESI                        ; 004218e3
        ;   Label: LAB_004218e3
    JG 0x004219d7                       ; 004218e5
        ;   XREF to: 004219d7 (CONDITIONAL_JUMP)  ; LAB_004219d7
    MOV EDX,dword ptr [ESP + 0x70]      ; 004218eb
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004218ef
    MOV dword ptr [EDX + 0x30],EAX      ; 004218f3
    TEST EAX,EAX                        ; 004218f6
    JL 0x004219f2                       ; 004218f8
        ;   XREF to: 004219f2 (CONDITIONAL_JUMP)  ; LAB_004219f2
    MOV EDX,dword ptr [ESP + 0x70]      ; 004218fe
        ;   Label: LAB_004218fe
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00421902
    LEA EAX,[EDX*0x4 + 0x0]             ; 00421905
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0042190c
    SUB EAX,EDX                         ; 00421910
    MOV ECX,dword ptr [ECX + 0x17738]   ; 00421912
    SHL EAX,0x2                         ; 00421918
    MOV EDX,dword ptr [ECX + 0x2234]    ; 0042191b
    LEA EDI,[ESP + 0x2c]                ; 00421921
    LEA ESI,[EDX + EAX*0x1]             ; 00421925
    MOV ECX,dword ptr [ESP + 0x70]      ; 00421928
    MOVSD ES:EDI,ESI                    ; 0042192c
    MOVSD ES:EDI,ESI                    ; 0042192d
    MOVSD ES:EDI,ESI                    ; 0042192e
    MOV ECX,dword ptr [ECX + 0x30]      ; 0042192f
    LEA EAX,[ECX*0x4 + 0x0]             ; 00421932
    SUB EAX,ECX                         ; 00421939
    SHL EAX,0x2                         ; 0042193b
    LEA EDI,[ESP + 0x20]                ; 0042193e
    LEA ESI,[EDX + EAX*0x1]             ; 00421942
    MOVSD ES:EDI,ESI                    ; 00421945
    MOVSD ES:EDI,ESI                    ; 00421946
    MOVSD ES:EDI,ESI                    ; 00421947
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00421948
    SUB EDX,dword ptr [ESP + 0x20]      ; 0042194c
    IMUL EDX,EDX                        ; 00421950
    MOV EAX,dword ptr [ESP + 0x30]      ; 00421953
    SUB EAX,dword ptr [ESP + 0x24]      ; 00421957
    IMUL EAX,EAX                        ; 0042195b
    MOV EBX,dword ptr [ESP + 0x28]      ; 0042195e
    MOV ECX,dword ptr [ESP + 0x34]      ; 00421962
    SUB ECX,EBX                         ; 00421966
    ADD EDX,EAX                         ; 00421968
    MOV EAX,ECX                         ; 0042196a
    IMUL EAX,ECX                        ; 0042196c
    ADD EAX,EDX                         ; 0042196f
    MOV dword ptr [ESP + 0x54],EAX      ; 00421971
    FILD dword ptr [ESP + 0x54]         ; 00421975
    FSQRT                               ; 00421979
    FMUL double ptr [0x005cca79]        ; 0042197b | DAT_005cca79
    MOV EAX,dword ptr [ESP + 0x70]      ; 00421981
    FSTP float ptr [EAX + 0x38]         ; 00421985
    ADD ESP,0x58                        ; 00421988
    POP EBP                             ; 0042198b
    POP EDI                             ; 0042198c
    POP ESI                             ; 0042198d
    POP EBX                             ; 0042198e
    RET                                 ; 0042198f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00421990
        ;   Label: LAB_00421990
    INC EAX                             ; 00421994
    MOV dword ptr [ESP + 0x48],EAX      ; 00421995
    CMP EAX,0x2                         ; 00421999
    JL 0x0042183a                       ; 0042199c
        ;   XREF to: 0042183a (CONDITIONAL_JUMP)  ; LAB_0042183a
    JMP 0x004218d2                      ; 004219a2
        ;   XREF to: 004218d2 (UNCONDITIONAL_JUMP)  ; LAB_004218d2
    MOV EDI,dword ptr [ESP + 0x70]      ; 004219a7
        ;   Label: LAB_004219a7
    CMP dword ptr [EDI + 0x3c],0x0      ; 004219ab
    JLE 0x004219bf                      ; 004219af
        ;   XREF to: 004219bf (CONDITIONAL_JUMP)  ; LAB_004219bf
    MOV EDI,dword ptr [ESP + 0x4c]      ; 004219b1
    CMP EDI,dword ptr [ESP + 0x40]      ; 004219b5
    JL 0x004218bc                       ; 004219b9
        ;   XREF to: 004218bc (CONDITIONAL_JUMP)  ; LAB_004218bc
    CMP dword ptr [ESP + 0x50],0x0      ; 004219bf
        ;   Label: LAB_004219bf
    JZ 0x004218bc                       ; 004219c4
        ;   XREF to: 004218bc (CONDITIONAL_JUMP)  ; LAB_004218bc
    ADD ECX,0x4                         ; 004219ca
    INC ESI                             ; 004219cd
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EAX ; 004219ce
    JMP 0x004218bc                      ; 004219d2
        ;   XREF to: 004218bc (UNCONDITIONAL_JUMP)  ; LAB_004218bc
    DEC ESI                             ; 004219d7
        ;   Label: LAB_004219d7
    PUSH ESI                            ; 004219d8
    PUSH 0x0                            ; 004219d9
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004219db
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004219e0
    MOV EDX,dword ptr [ESP + 0x70]      ; 004219e3
    MOV EAX,dword ptr [ESP + EAX*0x4]   ; 004219e7
    MOV dword ptr [EDX + 0x30],EAX      ; 004219ea
    JMP 0x004218fe                      ; 004219ed
        ;   XREF to: 004218fe (UNCONDITIONAL_JUMP)  ; LAB_004218fe
    MOV EAX,dword ptr [EDX + 0x2c]      ; 004219f2
        ;   Label: LAB_004219f2
    MOV dword ptr [EDX + 0x30],EAX      ; 004219f5
    JMP 0x004218fe                      ; 004219f8
        ;   XREF to: 004218fe (UNCONDITIONAL_JUMP)  ; LAB_004218fe


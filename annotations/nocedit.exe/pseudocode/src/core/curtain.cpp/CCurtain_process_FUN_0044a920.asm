; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_process_FUN_0044a920(CCurtain *this_ptr,float delta_time)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
;
; Referenced Globals:
;   TerminatedCString s_none_00619c1a
;   double DOUBLE_00619c22 = 0.850000000000000
;   double DOUBLE_00619c2a = 4
;   double DOUBLE_00619c32 = 0.03125
;   float FLOAT_00619c3a = 0.05000000
;   double DOUBLE_00619c42 = 0.100000000000000
;   CEventList* g_CEventListPtr = 02d05310
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int INT_008879bc
;   CVector3f[100] CVector3f_ARRAY_008879c0
;   undefined4 DAT_008879c4
;   undefined4 DAT_008879c8
;   SCollisionInfo[100] SCollisionInfo_ARRAY_00887e70
;   undefined4 DAT_00887e88
;   undefined4 DAT_00887e8c
;   ... and 4 more
;
; Called Functions:
;   core_curtain.cpp_CCurtain_solveConstraints_FUN_00449fc0
;   core_curtain.cpp_CCurtain_updateLocalPositions_FUN_00449f10
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   crt_string.c_strcmp_FUN_005fef20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044a920
        ;   Label: core_curtain.cpp_CCurtain_process_FUN_0044a920
    PUSH ESI                            ; 0044a921
    PUSH EDI                            ; 0044a922
    PUSH EBP                            ; 0044a923
    MOV EBP,ESP                         ; 0044a924
    SUB ESP,0xd0                        ; 0044a926
    AND ESP,0xfffffff8                  ; 0044a92c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0044a92f
    CMP dword ptr [EDI + 0x65b30],0x0   ; 0044a932
    JNZ 0x0044a948                      ; 0044a939
        ;   XREF to: 0044a948 (CONDITIONAL_JUMP)  ; LAB_0044a948
    CMP dword ptr [EDI + 0x190],0x0     ; 0044a93b
    JZ 0x0044ad91                       ; 0044a942
        ;   XREF to: 0044ad91 (CONDITIONAL_JUMP)  ; LAB_0044ad91
    MOV EBX,dword ptr [EDI + 0x1f8]     ; 0044a948
        ;   Label: LAB_0044a948
    MOV dword ptr [EDI + 0x65b30],0x0   ; 0044a94e
    TEST EBX,EBX                        ; 0044a958
    JZ 0x0044ad91                       ; 0044a95a
        ;   XREF to: 0044ad91 (CONDITIONAL_JUMP)  ; LAB_0044ad91
    LEA EAX,[EDI + 0x194]               ; 0044a960
    PUSH EAX                            ; 0044a966
    MOV ESI,dword ptr [0x006793d0]      ; 0044a967 | g_CEventListPtr
    PUSH ESI                            ; 0044a96d | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 0044a96e
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0044a973
    TEST EAX,EAX                        ; 0044a976
    JZ 0x0044a984                       ; 0044a978
        ;   XREF to: 0044a984 (CONDITIONAL_JUMP)  ; LAB_0044a984
    MOV dword ptr [EDI + 0x190],0x1     ; 0044a97a
    PUSH 0x619c1a                       ; 0044a984 | = "none"
        ;   Label: LAB_0044a984
    LEA EAX,[EDI + 0x194]               ; 0044a989
    PUSH EAX                            ; 0044a98f
    CALL crt_string.c_strcmp_FUN_005fef20 ; 0044a990
        ;   XREF to: 005fef20 (UNCONDITIONAL_CALL)  ; int crt_string.c_strcmp_FUN_005fef20(char * str1, char * str2)
    ADD ESP,0x8                         ; 0044a995
    TEST EAX,EAX                        ; 0044a998
    JZ 0x0044a9a9                       ; 0044a99a
        ;   XREF to: 0044a9a9 (CONDITIONAL_JUMP)  ; LAB_0044a9a9
    CMP dword ptr [EDI + 0x190],0x0     ; 0044a99c
    JZ 0x0044ad91                       ; 0044a9a3
        ;   XREF to: 0044ad91 (CONDITIONAL_JUMP)  ; LAB_0044ad91
    CMP dword ptr [EDI + 0x65b2c],0x0   ; 0044a9a9
        ;   Label: LAB_0044a9a9
    JZ 0x0044a9da                       ; 0044a9b0
        ;   XREF to: 0044a9da (CONDITIONAL_JUMP)  ; LAB_0044a9da
    PUSH 0x0                            ; 0044a9b2
    MOV EAX,dword ptr [EDI + 0x154]     ; 0044a9b4
    PUSH 0x3dcccccd                     ; 0044a9ba
    PUSH EDI                            ; 0044a9bf
    CALL dword ptr [EAX + 0x38]         ; 0044a9c0
    MOV dword ptr [ESP + 0xd8],EAX      ; 0044a9c3
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0044a9ca
    MOV dword ptr [EDI + 0x65b28],EAX   ; 0044a9d1
    ADD ESP,0xc                         ; 0044a9d7
    FLD float ptr [EBP + 0x18]          ; 0044a9da
        ;   Label: LAB_0044a9da
    FLD1                                ; 0044a9dd
    FDIVRP                              ; 0044a9df
    MOV ECX,0x47c34f80                  ; 0044a9e1
    MOV EAX,0xc7c34f80                  ; 0044a9e6
    FSTP float ptr [EDI + 0x1c728]      ; 0044a9eb
    MOV dword ptr [ESP + 0x34],ECX      ; 0044a9f1
    MOV dword ptr [ESP + 0x38],ECX      ; 0044a9f5
    MOV dword ptr [ESP + 0x3c],ECX      ; 0044a9f9
    MOV dword ptr [ESP + 0x64],EAX      ; 0044a9fd
    MOV dword ptr [ESP + 0x68],EAX      ; 0044aa01
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044aa05
    MOV EDX,EAX                         ; 0044aa09
    MOV EBX,dword ptr [EDI + 0x204]     ; 0044aa0b
    XOR EDX,EAX                         ; 0044aa11
    TEST EBX,EBX                        ; 0044aa13
    JLE 0x0044aaa7                      ; 0044aa15
        ;   XREF to: 0044aaa7 (CONDITIONAL_JUMP)  ; LAB_0044aaa7
    LEA ESI,[EDI + 0x208]               ; 0044aa1b
    FLD float ptr [ESI + 0x20]          ; 0044aa21
        ;   Label: LAB_0044aa21
    MOV EBX,ESI                         ; 0044aa24
    FCOMP float ptr [ESP + 0x34]        ; 0044aa26
    FNSTSW AX                           ; 0044aa2a
    SAHF                                ; 0044aa2c
    JNC 0x0044aa36                      ; 0044aa2d
        ;   XREF to: 0044aa36 (CONDITIONAL_JUMP)  ; LAB_0044aa36
    MOV EAX,dword ptr [ESI + 0x20]      ; 0044aa2f
    MOV dword ptr [ESP + 0x34],EAX      ; 0044aa32
    FLD float ptr [EBX + 0x24]          ; 0044aa36
        ;   Label: LAB_0044aa36
    FCOMP float ptr [ESP + 0x38]        ; 0044aa39
    FNSTSW AX                           ; 0044aa3d
    SAHF                                ; 0044aa3f
    JNC 0x0044aa49                      ; 0044aa40
        ;   XREF to: 0044aa49 (CONDITIONAL_JUMP)  ; LAB_0044aa49
    MOV EAX,dword ptr [EBX + 0x24]      ; 0044aa42
    MOV dword ptr [ESP + 0x38],EAX      ; 0044aa45
    FLD float ptr [EBX + 0x28]          ; 0044aa49
        ;   Label: LAB_0044aa49
    FCOMP float ptr [ESP + 0x3c]        ; 0044aa4c
    FNSTSW AX                           ; 0044aa50
    SAHF                                ; 0044aa52
    JNC 0x0044aa5c                      ; 0044aa53
        ;   XREF to: 0044aa5c (CONDITIONAL_JUMP)  ; LAB_0044aa5c
    MOV EAX,dword ptr [EBX + 0x28]      ; 0044aa55
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044aa58
    FLD float ptr [EBX + 0x20]          ; 0044aa5c
        ;   Label: LAB_0044aa5c
    FCOMP float ptr [ESP + 0x64]        ; 0044aa5f
    FNSTSW AX                           ; 0044aa63
    SAHF                                ; 0044aa65
    JBE 0x0044aa6f                      ; 0044aa66
        ;   XREF to: 0044aa6f (CONDITIONAL_JUMP)  ; LAB_0044aa6f
    MOV EAX,dword ptr [EBX + 0x20]      ; 0044aa68
    MOV dword ptr [ESP + 0x64],EAX      ; 0044aa6b
    FLD float ptr [EBX + 0x24]          ; 0044aa6f
        ;   Label: LAB_0044aa6f
    FCOMP float ptr [ESP + 0x68]        ; 0044aa72
    FNSTSW AX                           ; 0044aa76
    SAHF                                ; 0044aa78
    JBE 0x0044aa82                      ; 0044aa79
        ;   XREF to: 0044aa82 (CONDITIONAL_JUMP)  ; LAB_0044aa82
    MOV EAX,dword ptr [EBX + 0x24]      ; 0044aa7b
    MOV dword ptr [ESP + 0x68],EAX      ; 0044aa7e
    FLD float ptr [EBX + 0x28]          ; 0044aa82
        ;   Label: LAB_0044aa82
    FCOMP float ptr [ESP + 0x6c]        ; 0044aa85
    FNSTSW AX                           ; 0044aa89
    SAHF                                ; 0044aa8b
    JBE 0x0044aa95                      ; 0044aa8c
        ;   XREF to: 0044aa95 (CONDITIONAL_JUMP)  ; LAB_0044aa95
    MOV EAX,dword ptr [EBX + 0x28]      ; 0044aa8e
    MOV dword ptr [ESP + 0x6c],EAX      ; 0044aa91
    INC EDX                             ; 0044aa95
        ;   Label: LAB_0044aa95
    MOV EAX,dword ptr [EDI + 0x204]     ; 0044aa96
    ADD ESI,0x74                        ; 0044aa9c
    CMP EDX,EAX                         ; 0044aa9f
    JL 0x0044aa21                       ; 0044aaa1
        ;   XREF to: 0044aa21 (CONDITIONAL_JUMP)  ; LAB_0044aa21
    XOR EDX,EDX                         ; 0044aaa7
        ;   Label: LAB_0044aaa7
    MOV dword ptr [ESP + 0xc0],EDX      ; 0044aaa9
    MOV dword ptr [ESP + 0xb8],EDX      ; 0044aab0
    MOV dword ptr [0x008879bc],EDX      ; 0044aab7 | INT_008879bc
    MOV EDX,dword ptr [0x006810c8]      ; 0044aabd | g_CDemonSetPtr
        ;   Label: LAB_0044aabd
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0044aac3
    CMP EAX,dword ptr [EDX + 0x14f098]  ; 0044aaca | g_CDemonSetInstance.character_count
    JGE 0x0044abb1                      ; 0044aad0
        ;   XREF to: 0044abb1 (CONDITIONAL_JUMP)  ; LAB_0044abb1
    MOV EAX,[0x008879bc]                ; 0044aad6 | INT_008879bc
    IMUL ESI,EAX,0x28                   ; 0044aadb
    ADD EDX,dword ptr [ESP + 0xb8]      ; 0044aade
    MOV EBX,dword ptr [EDX + 0x14f09c]  ; 0044aae5 | g_CDemonSetInstance.characters[0] | DAT_03263318
    IMUL EDX,EAX,0xc                    ; 0044aaeb
    ADD EDX,0x8879c0                    ; 0044aaee | CVector3f_ARRAY_008879c0
    LEA EAX,[EBX + 0x20]                ; 0044aaf4
    ADD ESI,0x887e70                    ; 0044aaf7 | SCollisionInfo_ARRAY_00887e70
    CMP EDX,EAX                         ; 0044aafd
    JZ 0x0044ab11                       ; 0044aaff
        ;   XREF to: 0044ab11 (CONDITIONAL_JUMP)  ; LAB_0044ab11
    MOV ECX,dword ptr [EAX]             ; 0044ab01
    MOV dword ptr [EDX],ECX             ; 0044ab03 | CVector3f_ARRAY_008879c0
    MOV ECX,dword ptr [EAX + 0x4]       ; 0044ab05
    MOV dword ptr [EDX + 0x4],ECX       ; 0044ab08 | DAT_008879c4
    MOV ECX,dword ptr [EAX + 0x8]       ; 0044ab0b
    MOV dword ptr [EDX + 0x8],ECX       ; 0044ab0e | DAT_008879c8
    PUSH ESI                            ; 0044ab11 | SCollisionInfo_ARRAY_00887e70
        ;   Label: LAB_0044ab11
    MOV dword ptr [ESI],0x0             ; 0044ab12 | SCollisionInfo_ARRAY_00887e70
    PUSH EBX                            ; 0044ab18
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044ab19
    CALL dword ptr [EAX + 0x34]         ; 0044ab1f
    ADD ESP,0x8                         ; 0044ab22
    CMP EAX,0x2                         ; 0044ab25
    JZ 0x0044ab4f                       ; 0044ab28
        ;   XREF to: 0044ab4f (CONDITIONAL_JUMP)  ; LAB_0044ab4f
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0044ab2a
        ;   Label: LAB_0044ab2a
    MOV ESI,dword ptr [ESP + 0xb8]      ; 0044ab31
    INC EAX                             ; 0044ab38
    ADD ESI,0x4                         ; 0044ab39
    MOV dword ptr [ESP + 0xc0],EAX      ; 0044ab3c
    MOV dword ptr [ESP + 0xb8],ESI      ; 0044ab43
    JMP 0x0044aabd                      ; 0044ab4a
        ;   XREF to: 0044aabd (UNCONDITIONAL_JUMP)  ; LAB_0044aabd
    FLD float ptr [EBX + 0x24]          ; 0044ab4f
        ;   Label: LAB_0044ab4f
    FCOMP float ptr [ESP + 0x68]        ; 0044ab52
    FNSTSW AX                           ; 0044ab56
    SAHF                                ; 0044ab58
    JA 0x0044ab2a                       ; 0044ab59
        ;   XREF to: 0044ab2a (CONDITIONAL_JUMP)  ; LAB_0044ab2a
    FLD float ptr [EBX + 0x24]          ; 0044ab5b
    FADD float ptr [ESI + 0x18]         ; 0044ab5e | DAT_00887e88
    FCOMP float ptr [ESP + 0x38]        ; 0044ab61
    FNSTSW AX                           ; 0044ab65
    SAHF                                ; 0044ab67
    JC 0x0044ab2a                       ; 0044ab68
        ;   XREF to: 0044ab2a (CONDITIONAL_JUMP)  ; LAB_0044ab2a
    FLD float ptr [EBX + 0x20]          ; 0044ab6a
    FADD float ptr [ESI + 0x1c]         ; 0044ab6d | DAT_00887e8c
    FCOMP float ptr [ESP + 0x34]        ; 0044ab70
    FNSTSW AX                           ; 0044ab74
    SAHF                                ; 0044ab76
    JC 0x0044ab2a                       ; 0044ab77
        ;   XREF to: 0044ab2a (CONDITIONAL_JUMP)  ; LAB_0044ab2a
    FLD float ptr [EBX + 0x20]          ; 0044ab79
    FSUB float ptr [ESI + 0x1c]         ; 0044ab7c | DAT_00887e8c
    FCOMP float ptr [ESP + 0x64]        ; 0044ab7f
    FNSTSW AX                           ; 0044ab83
    SAHF                                ; 0044ab85
    JA 0x0044ab2a                       ; 0044ab86
        ;   XREF to: 0044ab2a (CONDITIONAL_JUMP)  ; LAB_0044ab2a
    FLD float ptr [EBX + 0x28]          ; 0044ab88
    FADD float ptr [ESI + 0x1c]         ; 0044ab8b | DAT_00887e8c
    FCOMP float ptr [ESP + 0x3c]        ; 0044ab8e
    FNSTSW AX                           ; 0044ab92
    SAHF                                ; 0044ab94
    JC 0x0044ab2a                       ; 0044ab95
        ;   XREF to: 0044ab2a (CONDITIONAL_JUMP)  ; LAB_0044ab2a
    FLD float ptr [EBX + 0x28]          ; 0044ab97
    FSUB float ptr [ESI + 0x1c]         ; 0044ab9a | DAT_00887e8c
    FCOMP float ptr [ESP + 0x6c]        ; 0044ab9d
    FNSTSW AX                           ; 0044aba1
    SAHF                                ; 0044aba3
    JA 0x0044ab2a                       ; 0044aba4
        ;   XREF to: 0044ab2a (CONDITIONAL_JUMP)  ; LAB_0044ab2a
    INC dword ptr [0x008879bc]          ; 0044aba6 | INT_008879bc
    JMP 0x0044ab2a                      ; 0044abac
        ;   XREF to: 0044ab2a (UNCONDITIONAL_JUMP)  ; LAB_0044ab2a
    MOV EAX,[0x008879bc]                ; 0044abb1 | INT_008879bc
        ;   Label: LAB_0044abb1
    MOV dword ptr [EDI + 0x65b34],0x1   ; 0044abb6
    TEST EAX,EAX                        ; 0044abc0
    JNZ 0x0044ac09                      ; 0044abc2
        ;   XREF to: 0044ac09 (CONDITIONAL_JUMP)  ; LAB_0044ac09
    MOV EDX,dword ptr [EDI + 0x190]     ; 0044abc4
    TEST EDX,EDX                        ; 0044abca
    JNZ 0x0044ac09                      ; 0044abcc
        ;   XREF to: 0044ac09 (CONDITIONAL_JUMP)  ; LAB_0044ac09
    MOV ECX,dword ptr [EDI + 0x204]     ; 0044abce
    MOV dword ptr [EDI + 0x65b34],EAX   ; 0044abd4
    TEST ECX,ECX                        ; 0044abda
    JLE 0x0044abfc                      ; 0044abdc
        ;   XREF to: 0044abfc (CONDITIONAL_JUMP)  ; LAB_0044abfc
    LEA EBX,[EDI + 0x208]               ; 0044abde
    CMP dword ptr [EBX + 0x68],0x0      ; 0044abe4
        ;   Label: LAB_0044abe4
    JZ 0x0044ad98                       ; 0044abe8
        ;   XREF to: 0044ad98 (CONDITIONAL_JUMP)  ; LAB_0044ad98
    INC EDX                             ; 0044abee
        ;   Label: LAB_0044abee
    MOV ECX,dword ptr [EDI + 0x204]     ; 0044abef
    ADD EBX,0x74                        ; 0044abf5
    CMP EDX,ECX                         ; 0044abf8
    JL 0x0044abe4                       ; 0044abfa
        ;   XREF to: 0044abe4 (CONDITIONAL_JUMP)  ; LAB_0044abe4
    CMP dword ptr [EDI + 0x65b34],0x0   ; 0044abfc
        ;   Label: LAB_0044abfc
    JZ 0x0044ad91                       ; 0044ac03
        ;   XREF to: 0044ad91 (CONDITIONAL_JUMP)  ; LAB_0044ad91
    MOV EAX,dword ptr [EDI + 0x204]     ; 0044ac09
        ;   Label: LAB_0044ac09
    XOR EDX,EDX                         ; 0044ac0f
    TEST EAX,EAX                        ; 0044ac11
    JLE 0x0044ac30                      ; 0044ac13
        ;   XREF to: 0044ac30 (CONDITIONAL_JUMP)  ; LAB_0044ac30
    MOV EAX,EDI                         ; 0044ac15
    MOV dword ptr [EAX + 0x274],0x0     ; 0044ac17
        ;   Label: LAB_0044ac17
    INC EDX                             ; 0044ac21
    MOV ECX,dword ptr [EDI + 0x204]     ; 0044ac22
    ADD EAX,0x74                        ; 0044ac28
    CMP EDX,ECX                         ; 0044ac2b
    JL 0x0044ac17                       ; 0044ac2d
        ;   XREF to: 0044ac17 (CONDITIONAL_JUMP)  ; LAB_0044ac17
    NOP                                 ; 0044ac2f
    XOR EBX,EBX                         ; 0044ac30
        ;   Label: LAB_0044ac30
    MOV ESI,dword ptr [EDI + 0x204]     ; 0044ac32
    MOV dword ptr [ESP + 0xc4],EBX      ; 0044ac38
    TEST ESI,ESI                        ; 0044ac3f
    JLE 0x0044ac72                      ; 0044ac41
        ;   XREF to: 0044ac72 (CONDITIONAL_JUMP)  ; LAB_0044ac72
    LEA EBX,[EDI + 0x208]               ; 0044ac43
    MOV EAX,dword ptr [EBX + 0x68]      ; 0044ac49
        ;   Label: LAB_0044ac49
    MOV ESI,EBX                         ; 0044ac4c
    TEST EAX,EAX                        ; 0044ac4e
    JZ 0x0044ae1c                       ; 0044ac50
        ;   XREF to: 0044ae1c (CONDITIONAL_JUMP)  ; LAB_0044ae1c
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0044ac56
        ;   Label: LAB_0044ac56
    ADD EBX,0x74                        ; 0044ac5d
    INC EAX                             ; 0044ac60
    MOV EDX,dword ptr [EDI + 0x204]     ; 0044ac61
    MOV dword ptr [ESP + 0xc4],EAX      ; 0044ac67
    CMP EAX,EDX                         ; 0044ac6e
    JL 0x0044ac49                       ; 0044ac70
        ;   XREF to: 0044ac49 (CONDITIONAL_JUMP)  ; LAB_0044ac49
    LEA EAX,[EDI + 0x208]               ; 0044ac72
        ;   Label: LAB_0044ac72
    XOR ECX,ECX                         ; 0044ac78
    MOV dword ptr [ESP + 0xb0],EAX      ; 0044ac7a
    MOV dword ptr [ESP + 0xbc],ECX      ; 0044ac81
    MOV ECX,dword ptr [EDI + 0x204]     ; 0044ac88
        ;   Label: LAB_0044ac88
    XOR ESI,ESI                         ; 0044ac8e
    TEST ECX,ECX                        ; 0044ac90
    JLE 0x0044acb3                      ; 0044ac92
        ;   XREF to: 0044acb3 (CONDITIONAL_JUMP)  ; LAB_0044acb3
    MOV EBX,dword ptr [ESP + 0xb0]      ; 0044ac94
    CMP dword ptr [EBX + 0x68],0x0      ; 0044ac9b
        ;   Label: LAB_0044ac9b
    JZ 0x0044b050                       ; 0044ac9f
        ;   XREF to: 0044b050 (CONDITIONAL_JUMP)  ; LAB_0044b050
    INC ESI                             ; 0044aca5
        ;   Label: LAB_0044aca5
    MOV EAX,dword ptr [EDI + 0x204]     ; 0044aca6
    ADD EBX,0x74                        ; 0044acac
    CMP ESI,EAX                         ; 0044acaf
    JL 0x0044ac9b                       ; 0044acb1
        ;   XREF to: 0044ac9b (CONDITIONAL_JUMP)  ; LAB_0044ac9b
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0044acb3
        ;   Label: LAB_0044acb3
    INC EDX                             ; 0044acba
    MOV dword ptr [ESP + 0xbc],EDX      ; 0044acbb
    CMP EDX,0x3                         ; 0044acc2
    JL 0x0044ac88                       ; 0044acc5
        ;   XREF to: 0044ac88 (CONDITIONAL_JUMP)  ; LAB_0044ac88
    MOV EBX,dword ptr [EDI + 0x204]     ; 0044acc7
    XOR ECX,ECX                         ; 0044accd
    TEST EBX,EBX                        ; 0044accf
    JLE 0x0044ad3c                      ; 0044acd1
        ;   XREF to: 0044ad3c (CONDITIONAL_JUMP)  ; LAB_0044ad3c
    LEA ESI,[EDI + 0x65b20]             ; 0044acd3
    LEA EBX,[EDI + 0x208]               ; 0044acd9
    MOV EAX,dword ptr [EBX + 0x6c]      ; 0044acdf
        ;   Label: LAB_0044acdf
    MOV dword ptr [ESP + 0xb4],EBX      ; 0044ace2
    TEST EAX,EAX                        ; 0044ace9
    JZ 0x0044ad06                       ; 0044aceb
        ;   XREF to: 0044ad06 (CONDITIONAL_JUMP)  ; LAB_0044ad06
    LEA EAX,[EBX + 0x2c]                ; 0044aced
    FLD float ptr [ESI]                 ; 0044acf0
    FMUL float ptr [EAX]                ; 0044acf2
    FSTP float ptr [EAX]                ; 0044acf4
    FLD float ptr [ESI]                 ; 0044acf6
    FMUL float ptr [EAX + 0x4]          ; 0044acf8
    FSTP float ptr [EAX + 0x4]          ; 0044acfb
    FLD float ptr [ESI]                 ; 0044acfe
    FMUL float ptr [EAX + 0x8]          ; 0044ad00
    FSTP float ptr [EAX + 0x8]          ; 0044ad03
    MOV EDX,dword ptr [ESP + 0xb4]      ; 0044ad06
        ;   Label: LAB_0044ad06
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0044ad0d
    ADD EDX,0x20                        ; 0044ad14
    ADD EAX,0x38                        ; 0044ad17
    CMP EAX,EDX                         ; 0044ad1a
    JZ 0x0044ad2e                       ; 0044ad1c
        ;   XREF to: 0044ad2e (CONDITIONAL_JUMP)  ; LAB_0044ad2e
    FLD float ptr [EDX]                 ; 0044ad1e
    FSTP float ptr [EAX]                ; 0044ad20
    FLD float ptr [EDX + 0x4]           ; 0044ad22
    FSTP float ptr [EAX + 0x4]          ; 0044ad25
    FLD float ptr [EDX + 0x8]           ; 0044ad28
    FSTP float ptr [EAX + 0x8]          ; 0044ad2b
    INC ECX                             ; 0044ad2e
        ;   Label: LAB_0044ad2e
    MOV EDX,dword ptr [EDI + 0x204]     ; 0044ad2f
    ADD EBX,0x74                        ; 0044ad35
    CMP ECX,EDX                         ; 0044ad38
    JL 0x0044acdf                       ; 0044ad3a
        ;   XREF to: 0044acdf (CONDITIONAL_JUMP)  ; LAB_0044acdf
    CMP dword ptr [EDI + 0x65b2c],0x0   ; 0044ad3c
        ;   Label: LAB_0044ad3c
    JZ 0x0044ad88                       ; 0044ad43
        ;   XREF to: 0044ad88 (CONDITIONAL_JUMP)  ; LAB_0044ad88
    MOV ESI,dword ptr [EDI + 0x204]     ; 0044ad45
    XOR EBX,EBX                         ; 0044ad4b
    XOR ECX,ECX                         ; 0044ad4d
    TEST ESI,ESI                        ; 0044ad4f
    JLE 0x0044ad76                      ; 0044ad51
        ;   XREF to: 0044ad76 (CONDITIONAL_JUMP)  ; LAB_0044ad76
    LEA EDX,[EDI + 0x208]               ; 0044ad53
    FLD float ptr [EDX + 0x24]          ; 0044ad59
        ;   Label: LAB_0044ad59
    FCOMP float ptr [EDI + 0x65b28]     ; 0044ad5c
    FNSTSW AX                           ; 0044ad62
    SAHF                                ; 0044ad64
    JA 0x0044ad68                       ; 0044ad65
        ;   XREF to: 0044ad68 (CONDITIONAL_JUMP)  ; LAB_0044ad68
    INC ECX                             ; 0044ad67
    INC EBX                             ; 0044ad68
        ;   Label: LAB_0044ad68
    MOV ESI,dword ptr [EDI + 0x204]     ; 0044ad69
    ADD EDX,0x74                        ; 0044ad6f
    CMP EBX,ESI                         ; 0044ad72
    JL 0x0044ad59                       ; 0044ad74
        ;   XREF to: 0044ad59 (CONDITIONAL_JUMP)  ; LAB_0044ad59
    CMP ECX,dword ptr [EDI + 0x204]     ; 0044ad76
        ;   Label: LAB_0044ad76
    JNZ 0x0044ad88                      ; 0044ad7c
        ;   XREF to: 0044ad88 (CONDITIONAL_JUMP)  ; LAB_0044ad88
    MOV dword ptr [EDI + 0x1f8],0x0     ; 0044ad7e
    PUSH EDI                            ; 0044ad88
        ;   Label: LAB_0044ad88
    CALL core_curtain.cpp_CCurtain_updateLocalPositions_FUN_00449f10 ; 0044ad89
        ;   XREF to: 00449f10 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_CCurtain_updateLocalPositions_FUN_00449f10(CCurtain * this_ptr)
    ADD ESP,0x4                         ; 0044ad8e
    MOV ESP,EBP                         ; 0044ad91
        ;   Label: LAB_0044ad91
    POP EBP                             ; 0044ad93
    POP EDI                             ; 0044ad94
    POP ESI                             ; 0044ad95
    POP EBX                             ; 0044ad96
    RET                                 ; 0044ad97
    LEA EAX,[EBX + 0x2c]                ; 0044ad98
        ;   Label: LAB_0044ad98
    FLD float ptr [EAX + 0x4]           ; 0044ad9b
    FMUL ST0                            ; 0044ad9e
    FLD float ptr [EAX]                 ; 0044ada0
    FMUL ST0                            ; 0044ada2
    FADDP                               ; 0044ada4
    FLD float ptr [EAX + 0x8]           ; 0044ada6
    FMUL ST0                            ; 0044ada9
    FADDP                               ; 0044adab
    FSQRT                               ; 0044adad
    FCOMP double ptr [0x00619c42]       ; 0044adaf | DOUBLE_00619c42
    FNSTSW AX                           ; 0044adb5
    SAHF                                ; 0044adb7
    JBE 0x0044adc9                      ; 0044adb8
        ;   XREF to: 0044adc9 (CONDITIONAL_JUMP)  ; LAB_0044adc9
    MOV dword ptr [EDI + 0x65b34],0x1   ; 0044adba
    JMP 0x0044ac09                      ; 0044adc4
        ;   XREF to: 0044ac09 (UNCONDITIONAL_JUMP)  ; LAB_0044ac09
    LEA EAX,[EBX + 0xc]                 ; 0044adc9
        ;   Label: LAB_0044adc9
    FLD float ptr [EAX]                 ; 0044adcc
    FSUB float ptr [EBX]                ; 0044adce
    FSTP float ptr [ESP + 0x28]         ; 0044add0
    FLD float ptr [EAX + 0x4]           ; 0044add4
    FSUB float ptr [EBX + 0x4]          ; 0044add7
    FST float ptr [ESP + 0x2c]          ; 0044adda
    FMUL float ptr [ESP + 0x2c]         ; 0044adde
    FLD float ptr [ESP + 0x28]          ; 0044ade2
    FMUL ST0                            ; 0044ade6
    FLD float ptr [EAX + 0x8]           ; 0044ade8
    FSUB float ptr [EBX + 0x8]          ; 0044adeb
    FXCH                                ; 0044adee
    FADDP ST2,ST0                       ; 0044adf0
    FST float ptr [ESP + 0x30]          ; 0044adf2
    FMUL float ptr [ESP + 0x30]         ; 0044adf6
    FADDP                               ; 0044adfa
    FSQRT                               ; 0044adfc
    FCOMP double ptr [0x00619c42]       ; 0044adfe | DOUBLE_00619c42
    FNSTSW AX                           ; 0044ae04
    SAHF                                ; 0044ae06
    JBE 0x0044abee                      ; 0044ae07
        ;   XREF to: 0044abee (CONDITIONAL_JUMP)  ; LAB_0044abee
    MOV dword ptr [EDI + 0x65b34],0x1   ; 0044ae0d
    JMP 0x0044ac09                      ; 0044ae17
        ;   XREF to: 0044ac09 (UNCONDITIONAL_JUMP)  ; LAB_0044ac09
    FLD float ptr [EBX + 0x2c]          ; 0044ae1c
        ;   Label: LAB_0044ae1c
    FLD ST0                             ; 0044ae1f
    FLD double ptr [0x00619c22]         ; 0044ae21 | DOUBLE_00619c22
    FXCH                                ; 0044ae27
    FMUL ST1                            ; 0044ae29
    FLD float ptr [EBX + 0x34]          ; 0044ae2b
    FMUL ST2                            ; 0044ae2e
    FXCH                                ; 0044ae30
    FSTP ST3                            ; 0044ae32
    FXCH ST2                            ; 0044ae34
    FSTP float ptr [EBX + 0x2c]         ; 0044ae36
    FLD float ptr [EDI + 0x65b18]       ; 0044ae39
    FMUL float ptr [EBX + 0x30]         ; 0044ae3f
    FXCH                                ; 0044ae42
    FSTP ST2                            ; 0044ae44
    FXCH                                ; 0044ae46
    FSTP float ptr [EBX + 0x34]         ; 0044ae48
    FSTP float ptr [EBX + 0x30]         ; 0044ae4b
    MOV dword ptr [ESP + 0x78],EAX      ; 0044ae4e
    MOV dword ptr [ESP + 0x74],EAX      ; 0044ae52
    MOV dword ptr [ESP + 0x70],EAX      ; 0044ae56
    MOV EAX,dword ptr [EDI + 0x65b14]   ; 0044ae5a
    MOV EDX,dword ptr [EBX + 0x70]      ; 0044ae60
    MOV dword ptr [ESP],EAX             ; 0044ae63
    TEST EDX,EDX                        ; 0044ae66
    JZ 0x0044ae76                       ; 0044ae68
        ;   XREF to: 0044ae76 (CONDITIONAL_JUMP)  ; LAB_0044ae76
    FLD float ptr [ESP]                 ; 0044ae6a
    FMUL double ptr [0x00619c2a]        ; 0044ae6d | DOUBLE_00619c2a
    FSTP float ptr [ESP]                ; 0044ae73
    FLD1                                ; 0044ae76
        ;   Label: LAB_0044ae76
    FDIV float ptr [EBP + 0x18]         ; 0044ae78
    FLD float ptr [ESP]                 ; 0044ae7b
    FLD ST0                             ; 0044ae7e
    FMUL double ptr [0x00619c32]        ; 0044ae80 | DOUBLE_00619c32
    FLD float ptr [ESP + 0x74]          ; 0044ae86
    FLD1                                ; 0044ae8a
    LEA EAX,[ESI + 0x2c]                ; 0044ae8c
    FXCH                                ; 0044ae8f
    FSUBRP ST3,ST0                      ; 0044ae91
    FXCH                                ; 0044ae93
    FSTP float ptr [ESP + 0xc8]         ; 0044ae95
    FXCH                                ; 0044ae9c
    FSTP float ptr [ESP + 0x74]         ; 0044ae9e
    FLD float ptr [EAX]                 ; 0044aea2
    FCHS                                ; 0044aea4
    FST float ptr [ESP + 0x7c]          ; 0044aea6
    FLD float ptr [EAX + 0x4]           ; 0044aeaa
    FCHS                                ; 0044aead
    FXCH                                ; 0044aeaf
    FMUL ST3                            ; 0044aeb1
    FXCH ST2                            ; 0044aeb3
    FDIV float ptr [ESP + 0xc8]         ; 0044aeb5
    FXCH                                ; 0044aebc
    FST float ptr [ESP + 0x80]          ; 0044aebe
    FMUL ST3                            ; 0044aec5
    FLD float ptr [EAX + 0x8]           ; 0044aec7
    FCHS                                ; 0044aeca
    FST float ptr [ESP + 0x84]          ; 0044aecc
    FMULP ST4                           ; 0044aed3
    FXCH ST2                            ; 0044aed5
    FST float ptr [ESP + 0x94]          ; 0044aed7
    FMUL float ptr [ESP + 0xc8]         ; 0044aede
    FXCH ST2                            ; 0044aee5
    FST float ptr [ESP + 0x98]          ; 0044aee7
    FMUL float ptr [ESP + 0xc8]         ; 0044aeee
    FXCH ST3                            ; 0044aef5
    FST float ptr [ESP + 0x9c]          ; 0044aef7
    FMUL float ptr [ESP + 0xc8]         ; 0044aefe
    FXCH ST2                            ; 0044af05
    FST float ptr [ESP + 0x4c]          ; 0044af07
    FLD float ptr [0x00619c3a]          ; 0044af0b | FLOAT_00619c3a
    FXCH                                ; 0044af11
    FMUL ST1                            ; 0044af13
    FXCH ST4                            ; 0044af15
    FST float ptr [ESP + 0x50]          ; 0044af17
    FMUL ST1                            ; 0044af1b
    FLD float ptr [ESP + 0x70]          ; 0044af1d
    FXCH ST4                            ; 0044af21
    FST float ptr [ESP + 0x54]          ; 0044af23
    FXCH ST5                            ; 0044af27
    FSTP float ptr [ESP + 0x10]         ; 0044af29
    FXCH ST3                            ; 0044af2d
    FADD float ptr [ESP + 0x10]         ; 0044af2f
    FXCH ST4                            ; 0044af33
    FMULP                               ; 0044af35
    FXCH ST3                            ; 0044af37
    FST float ptr [ESP + 0x70]          ; 0044af39
    FMUL ST1                            ; 0044af3d
    FLD float ptr [ESP + 0x78]          ; 0044af3f
    FLD float ptr [ESP + 0x74]          ; 0044af43
    FXCH ST4                            ; 0044af47
    FSTP float ptr [ESP + 0x14]         ; 0044af49
    FXCH ST4                            ; 0044af4d
    FSTP float ptr [ESP + 0x18]         ; 0044af4f
    FXCH ST2                            ; 0044af53
    FADD float ptr [ESP + 0x14]         ; 0044af55
    FXCH ST3                            ; 0044af59
    FADD float ptr [ESP + 0x18]         ; 0044af5b
    FXCH ST3                            ; 0044af5f
    FST float ptr [ESP + 0x74]          ; 0044af61
    FMUL ST1                            ; 0044af65
    FXCH ST3                            ; 0044af67
    FST float ptr [ESP + 0x78]          ; 0044af69
    FMULP                               ; 0044af6d
    LEA EDX,[ESP + 0x1c]                ; 0044af6f
    LEA EAX,[ESP + 0x88]                ; 0044af73
    FXCH                                ; 0044af7a
    FSTP float ptr [ESP + 0x88]         ; 0044af7c
    FXCH                                ; 0044af83
    FSTP float ptr [ESP + 0x8c]         ; 0044af85
    FSTP float ptr [ESP + 0x90]         ; 0044af8c
    CMP EDX,EAX                         ; 0044af93
    JZ 0x0044afb8                       ; 0044af95
        ;   XREF to: 0044afb8 (CONDITIONAL_JUMP)  ; LAB_0044afb8
    MOV EAX,dword ptr [ESP + 0x88]      ; 0044af97
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044af9e
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0044afa2
    MOV dword ptr [ESP + 0x20],EAX      ; 0044afa9
    MOV EAX,dword ptr [ESP + 0x90]      ; 0044afad
    MOV dword ptr [ESP + 0x24],EAX      ; 0044afb4
    FLD float ptr [EBP + 0x18]          ; 0044afb8
        ;   Label: LAB_0044afb8
    FLD float ptr [ESP + 0x1c]          ; 0044afbb
    FMUL ST1                            ; 0044afbf
    FLD float ptr [ESP + 0x20]          ; 0044afc1
    FMUL ST2                            ; 0044afc5
    FLD float ptr [ESP + 0x24]          ; 0044afc7
    FMUL ST3                            ; 0044afcb
    LEA EAX,[ESI + 0x2c]                ; 0044afcd
    FXCH ST2                            ; 0044afd0
    FSTP float ptr [ESP + 0x4]          ; 0044afd2
    FSTP float ptr [ESP + 0x8]          ; 0044afd6
    FSTP float ptr [ESP + 0xc]          ; 0044afda
    FLD float ptr [EAX + 0x4]           ; 0044afde
    FLD float ptr [EAX]                 ; 0044afe1
    FADD float ptr [ESP + 0x4]          ; 0044afe3
    FLD float ptr [EAX + 0x8]           ; 0044afe7
    FXCH                                ; 0044afea
    FSTP float ptr [EAX]                ; 0044afec
    FXCH                                ; 0044afee
    FADD float ptr [ESP + 0x8]          ; 0044aff0
    FLD float ptr [EAX]                 ; 0044aff4
    FXCH                                ; 0044aff6
    FSTP float ptr [EAX + 0x4]          ; 0044aff8
    FXCH                                ; 0044affb
    FADD float ptr [ESP + 0xc]          ; 0044affd
    FXCH                                ; 0044b001
    FMUL ST2                            ; 0044b003
    FXCH                                ; 0044b005
    FSTP float ptr [EAX + 0x8]          ; 0044b007
    FSTP float ptr [ESP + 0x40]         ; 0044b00a
    FLD float ptr [EAX + 0x4]           ; 0044b00e
    FMUL ST1                            ; 0044b011
    FSTP float ptr [ESP + 0x44]         ; 0044b013
    FMUL float ptr [EAX + 0x8]          ; 0044b017
    LEA EAX,[ESI + 0x20]                ; 0044b01a
    FSTP float ptr [ESP + 0x48]         ; 0044b01d
    PUSH ESI                            ; 0044b021
    FLD float ptr [EAX]                 ; 0044b022
    FADD float ptr [ESP + 0x44]         ; 0044b024
    FLD float ptr [EAX + 0x4]           ; 0044b028
    FXCH                                ; 0044b02b
    FSTP float ptr [EAX]                ; 0044b02d
    FADD float ptr [ESP + 0x48]         ; 0044b02f
    FLD float ptr [EAX + 0x8]           ; 0044b033
    FXCH                                ; 0044b036
    FSTP float ptr [EAX + 0x4]          ; 0044b038
    FADD float ptr [ESP + 0x4c]         ; 0044b03b
    PUSH EDI                            ; 0044b03f
    FSTP float ptr [EAX + 0x8]          ; 0044b040
    CALL core_curtain.cpp_CCurtain_solveConstraints_FUN_00449fc0 ; 0044b043
        ;   XREF to: 00449fc0 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_CCurtain_solveConstraints_FUN_00449fc0(CCurtain * this_ptr, SCurtainVertex * vertex)
    ADD ESP,0x8                         ; 0044b048
    JMP 0x0044ac56                      ; 0044b04b
        ;   XREF to: 0044ac56 (UNCONDITIONAL_JUMP)  ; LAB_0044ac56
    PUSH EBX                            ; 0044b050
        ;   Label: LAB_0044b050
    PUSH EDI                            ; 0044b051
    CALL core_curtain.cpp_CCurtain_solveConstraints_FUN_00449fc0 ; 0044b052
        ;   XREF to: 00449fc0 (UNCONDITIONAL_CALL)  ; void core_curtain.cpp_CCurtain_solveConstraints_FUN_00449fc0(CCurtain * this_ptr, SCurtainVertex * vertex)
    ADD ESP,0x8                         ; 0044b057
    JMP 0x0044aca5                      ; 0044b05a
        ;   XREF to: 0044aca5 (UNCONDITIONAL_JUMP)  ; LAB_0044aca5


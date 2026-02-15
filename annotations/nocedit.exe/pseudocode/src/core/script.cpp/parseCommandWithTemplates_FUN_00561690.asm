; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_parseCommandWithTemplates_FUN_00561690(char *input_text,char *cmd_name_out,char *prefix_out,char *suffix_out,int cursor_position,CCmdParm *parm_out,CCmdParse *parse_out,char **templates,int template_count)
;
; Parameters:
; char *           Stack[0x4]:4   input_text
; char *           Stack[0x8]:4   cmd_name_out
; char *           Stack[0xc]:4   prefix_out
; char *           Stack[0x10]:4   suffix_out
; int              Stack[0x14]:4   cursor_position
; CCmdParm *       Stack[0x18]:4   parm_out
; CCmdParse *      Stack[0x1c]:4   parse_out
; char * *         Stack[0x20]:4   templates
; int              Stack[0x24]:4   template_count
; Local Variables:
; undefined1       Stack[-0x2148]:1  local_2148
; undefined1       Stack[-0x2144]:1  local_2144
; undefined1       Stack[-0x2143]:1  local_2143
; undefined1       Stack[-0x20e0]:1  local_20e0
; undefined1       Stack[-0x20df]:1  local_20df
; undefined4       Stack[-0x207c]:4  local_207c
; undefined1       Stack[-0x2078]:1  local_2078
; undefined1       Stack[-0x2077]:1  local_2077
; undefined1       Stack[-0x2014]:1  local_2014
; undefined1       Stack[-0x2013]:1  local_2013
; undefined1       Stack[-0xe8]:1  local_e8
; undefined1       Stack[-0xe7]:1  local_e7
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_script.cpp_parseCommandWithDefaultTemplates_FUN_00561c70 at 00561c9e
;   core_script.cpp_parseConditionExpression_FUN_00561a30 at 00561b29
;
; Referenced Globals:
;   void* switchdataD_0056160c = 00561842
;
; Called Functions:
;   core_script.cpp_CCmdParse_bestParse_FUN_00561db0
;   core_script.cpp_parseConditionExpression_FUN_00561a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561690
        ;   Label: core_script.cpp_parseCommandWithTemplates_FUN_00561690
    PUSH ESI                            ; 00561691
    PUSH EDI                            ; 00561692
    PUSH EBP                            ; 00561693
    SUB ESP,0x2138                      ; 00561694
    MOV EBX,dword ptr [ESP + 0x2150]    ; 0056169a
    MOV EBP,dword ptr [ESP + 0x2158]    ; 005616a1
    MOV EDX,dword ptr [ESP + 0x216c]    ; 005616a8
    PUSH EDX                            ; 005616af
    MOV ECX,dword ptr [ESP + 0x216c]    ; 005616b0
    PUSH ECX                            ; 005616b7
    MOV ESI,dword ptr [ESP + 0x2164]    ; 005616b8
    PUSH ESI                            ; 005616bf
    MOV EDI,dword ptr [ESP + 0x2158]    ; 005616c0
    PUSH EDI                            ; 005616c7
    LEA EAX,[ESP + 0x10]                ; 005616c8
    PUSH EAX                            ; 005616cc
    CALL core_script.cpp_CCmdParse_bestParse_FUN_00561db0 ; 005616cd
        ;   XREF to: 00561db0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParse_bestParse_FUN_00561db0(CCmdParse * this_ptr, char * input_text, int cursor_position, char * * templates, ...)
    ADD ESP,0x14                        ; 005616d2
    MOV dword ptr [ESP + 0x2130],EAX    ; 005616d5
    TEST EAX,EAX                        ; 005616dc
    JL 0x0056196f                       ; 005616de
        ;   XREF to: 0056196f (CONDITIONAL_JUMP)  ; LAB_0056196f
    MOV EAX,dword ptr [ESP + 0x2164]    ; 005616e4
    TEST EAX,EAX                        ; 005616eb
    JZ 0x005616fa                       ; 005616ed
        ;   XREF to: 005616fa (CONDITIONAL_JUMP)  ; LAB_005616fa
    MOV ECX,0x84a                       ; 005616ef
    MOV ESI,ESP                         ; 005616f4
    MOV EDI,EAX                         ; 005616f6
    MOVSD.REP ES:EDI,ESI                ; 005616f8
    LEA ESI,[ESP + 0x4]                 ; 005616fa
        ;   Label: LAB_005616fa
    MOV EDI,EBX                         ; 005616fe
    PUSH EDI                            ; 00561700
    MOV AL,byte ptr [ESI]               ; 00561701
        ;   Label: LAB_00561701
    MOV byte ptr [EDI],AL               ; 00561703
    CMP AL,0x0                          ; 00561705
    JZ 0x00561719                       ; 00561707
        ;   XREF to: 00561719 (CONDITIONAL_JUMP)  ; LAB_00561719
    MOV AL,byte ptr [ESI + 0x1]         ; 00561709
    ADD ESI,0x2                         ; 0056170c
    MOV byte ptr [EDI + 0x1],AL         ; 0056170f
    ADD EDI,0x2                         ; 00561712
    CMP AL,0x0                          ; 00561715
    JNZ 0x00561701                      ; 00561717
        ;   XREF to: 00561701 (CONDITIONAL_JUMP)  ; LAB_00561701
    POP EDI                             ; 00561719
        ;   Label: LAB_00561719
    LEA ESI,[ESP + 0x68]                ; 0056171a
    PUSH EDI                            ; 0056171e
    SUB ECX,ECX                         ; 0056171f
    DEC ECX                             ; 00561721
    MOV AL,0x0                          ; 00561722
    SCASB.REPNE ES:EDI                  ; 00561724
    DEC EDI                             ; 00561726
    MOV AL,byte ptr [ESI]               ; 00561727
        ;   Label: LAB_00561727
    MOV byte ptr [EDI],AL               ; 00561729
    CMP AL,0x0                          ; 0056172b
    JZ 0x0056173f                       ; 0056172d
        ;   XREF to: 0056173f (CONDITIONAL_JUMP)  ; LAB_0056173f
    MOV AL,byte ptr [ESI + 0x1]         ; 0056172f
    ADD ESI,0x2                         ; 00561732
    MOV byte ptr [EDI + 0x1],AL         ; 00561735
    ADD EDI,0x2                         ; 00561738
    CMP AL,0x0                          ; 0056173b
    JNZ 0x00561727                      ; 0056173d
        ;   XREF to: 00561727 (CONDITIONAL_JUMP)  ; LAB_00561727
    POP EDI                             ; 0056173f
        ;   Label: LAB_0056173f
    MOV ECX,dword ptr [ESP + 0x2130]    ; 00561740
    XOR EDX,EDX                         ; 00561747
    TEST ECX,ECX                        ; 00561749
    JLE 0x005617e0                      ; 0056174b
        ;   XREF to: 005617e0 (CONDITIONAL_JUMP)  ; LAB_005617e0
    LEA EAX,[ESP + 0xd0]                ; 00561751
    ADD EAX,0x64                        ; 00561758
    MOV dword ptr [ESP + 0x2134],EAX    ; 0056175b
    IMUL EAX,EDX,0x328                  ; 00561762
        ;   Label: LAB_00561762
    LEA ESI,[ESP + 0xd0]                ; 00561768
    MOV EDI,EBX                         ; 0056176f
    ADD ESI,EAX                         ; 00561771
    PUSH EDI                            ; 00561773
    SUB ECX,ECX                         ; 00561774
    DEC ECX                             ; 00561776
    MOV AL,0x0                          ; 00561777
    SCASB.REPNE ES:EDI                  ; 00561779
    DEC EDI                             ; 0056177b
    MOV AL,byte ptr [ESI]               ; 0056177c
        ;   Label: LAB_0056177c
    MOV byte ptr [EDI],AL               ; 0056177e
    CMP AL,0x0                          ; 00561780
    JZ 0x00561794                       ; 00561782
        ;   XREF to: 00561794 (CONDITIONAL_JUMP)  ; LAB_00561794
    MOV AL,byte ptr [ESI + 0x1]         ; 00561784
    ADD ESI,0x2                         ; 00561787
    MOV byte ptr [EDI + 0x1],AL         ; 0056178a
    ADD EDI,0x2                         ; 0056178d
    CMP AL,0x0                          ; 00561790
    JNZ 0x0056177c                      ; 00561792
        ;   XREF to: 0056177c (CONDITIONAL_JUMP)  ; LAB_0056177c
    POP EDI                             ; 00561794
        ;   Label: LAB_00561794
    MOV ESI,dword ptr [ESP + 0x2134]    ; 00561795
    PUSH EDI                            ; 0056179c
    SUB ECX,ECX                         ; 0056179d
    DEC ECX                             ; 0056179f
    MOV AL,0x0                          ; 005617a0
    SCASB.REPNE ES:EDI                  ; 005617a2
    DEC EDI                             ; 005617a4
    MOV AL,byte ptr [ESI]               ; 005617a5
        ;   Label: LAB_005617a5
    MOV byte ptr [EDI],AL               ; 005617a7
    CMP AL,0x0                          ; 005617a9
    JZ 0x005617bd                       ; 005617ab
        ;   XREF to: 005617bd (CONDITIONAL_JUMP)  ; LAB_005617bd
    MOV AL,byte ptr [ESI + 0x1]         ; 005617ad
    ADD ESI,0x2                         ; 005617b0
    MOV byte ptr [EDI + 0x1],AL         ; 005617b3
    ADD EDI,0x2                         ; 005617b6
    CMP AL,0x0                          ; 005617b9
    JNZ 0x005617a5                      ; 005617bb
        ;   XREF to: 005617a5 (CONDITIONAL_JUMP)  ; LAB_005617a5
    POP EDI                             ; 005617bd
        ;   Label: LAB_005617bd
    MOV ESI,dword ptr [ESP + 0x2134]    ; 005617be
    INC EDX                             ; 005617c5
    ADD ESI,0x328                       ; 005617c6
    MOV EDI,dword ptr [ESP + 0x2130]    ; 005617cc
    MOV dword ptr [ESP + 0x2134],ESI    ; 005617d3
    CMP EDX,EDI                         ; 005617da
    JL 0x00561762                       ; 005617dc
        ;   XREF to: 00561762 (CONDITIONAL_JUMP)  ; LAB_00561762
    MOV EAX,EAX                         ; 005617de
    IMUL EAX,dword ptr [ESP + 0x2130],0x328 ; 005617e0
        ;   Label: LAB_005617e0
    LEA EDX,[ESP + 0xd0]                ; 005617eb
    ADD EDX,EAX                         ; 005617f2
    MOV EDI,EBX                         ; 005617f4
    MOV ESI,EDX                         ; 005617f6
    MOV dword ptr [ESP + 0x2128],EAX    ; 005617f8
    PUSH EDI                            ; 005617ff
    SUB ECX,ECX                         ; 00561800
    DEC ECX                             ; 00561802
    MOV AL,0x0                          ; 00561803
    SCASB.REPNE ES:EDI                  ; 00561805
    DEC EDI                             ; 00561807
    MOV AL,byte ptr [ESI]               ; 00561808
        ;   Label: LAB_00561808
    MOV byte ptr [EDI],AL               ; 0056180a
    CMP AL,0x0                          ; 0056180c
    JZ 0x00561820                       ; 0056180e
        ;   XREF to: 00561820 (CONDITIONAL_JUMP)  ; LAB_00561820
    MOV AL,byte ptr [ESI + 0x1]         ; 00561810
    ADD ESI,0x2                         ; 00561813
    MOV byte ptr [EDI + 0x1],AL         ; 00561816
    ADD EDI,0x2                         ; 00561819
    CMP AL,0x0                          ; 0056181c
    JNZ 0x00561808                      ; 0056181e
        ;   XREF to: 00561808 (CONDITIONAL_JUMP)  ; LAB_00561808
    POP EDI                             ; 00561820
        ;   Label: LAB_00561820
    MOV EAX,dword ptr [ESP + 0x2128]    ; 00561821
    MOV EAX,dword ptr [ESP + EAX*0x1 + 0x328] ; 00561828
    MOV dword ptr [ESP + 0x212c],EAX    ; 0056182f
    CMP EAX,0x20                        ; 00561836
    JA 0x00561842                       ; 00561839
        ;   XREF to: 00561842 (CONDITIONAL_JUMP)  ; caseD_f
    JMP dword ptr [EAX*0x4 + 0x56160c]  ; 0056183b | caseD_f | caseD_4 | caseD_14
        ;   Label: switchD
    IMUL EDX,dword ptr [ESP + 0x2130],0x328 ; 00561842
        ;   Label: caseD_20
    LEA EAX,[ESP + 0xd0]                ; 0056184d
    MOV ECX,0xca                        ; 00561854
    ADD EAX,EDX                         ; 00561859
    MOV EDI,dword ptr [ESP + 0x2154]    ; 0056185b
    LEA ESI,[EAX + 0x64]                ; 00561862
    MOV byte ptr [EBP],0x0              ; 00561865
    PUSH EDI                            ; 00561869
    MOV AL,byte ptr [ESI]               ; 0056186a
        ;   Label: LAB_0056186a
    MOV byte ptr [EDI],AL               ; 0056186c
    CMP AL,0x0                          ; 0056186e
    JZ 0x00561882                       ; 00561870
        ;   XREF to: 00561882 (CONDITIONAL_JUMP)  ; LAB_00561882
    MOV AL,byte ptr [ESI + 0x1]         ; 00561872
    ADD ESI,0x2                         ; 00561875
    MOV byte ptr [EDI + 0x1],AL         ; 00561878
    ADD EDI,0x2                         ; 0056187b
    CMP AL,0x0                          ; 0056187e
    JNZ 0x0056186a                      ; 00561880
        ;   XREF to: 0056186a (CONDITIONAL_JUMP)  ; LAB_0056186a
    POP EDI                             ; 00561882
        ;   Label: LAB_00561882
    MOV EDI,dword ptr [ESP + 0x2160]    ; 00561883
    LEA ESI,[ESP + EDX*0x1 + 0xd0]      ; 0056188a
    MOVSD.REP ES:EDI,ESI                ; 00561891
    MOV EBX,dword ptr [ESP + 0x2130]    ; 00561893
        ;   Label: LAB_00561893
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0056189a
    INC EBX                             ; 005618a1
    CMP EBX,EAX                         ; 005618a2
    JGE 0x00561930                      ; 005618a4
        ;   XREF to: 00561930 (CONDITIONAL_JUMP)  ; LAB_00561930
    IMUL EDX,EBX,0x328                  ; 005618aa
    LEA EAX,[ESP + 0xd0]                ; 005618b0
    ADD EDX,0x64                        ; 005618b7
    MOV EDI,EBP                         ; 005618ba
    ADD EDX,EAX                         ; 005618bc
    IMUL EAX,EBX,0x328                  ; 005618be
        ;   Label: LAB_005618be
    LEA ESI,[ESP + 0xd0]                ; 005618c4
    ADD ESI,EAX                         ; 005618cb
    PUSH EDI                            ; 005618cd
    SUB ECX,ECX                         ; 005618ce
    DEC ECX                             ; 005618d0
    MOV AL,0x0                          ; 005618d1
    SCASB.REPNE ES:EDI                  ; 005618d3
    DEC EDI                             ; 005618d5
    MOV AL,byte ptr [ESI]               ; 005618d6
        ;   Label: LAB_005618d6
    MOV byte ptr [EDI],AL               ; 005618d8
    CMP AL,0x0                          ; 005618da
    JZ 0x005618ee                       ; 005618dc
        ;   XREF to: 005618ee (CONDITIONAL_JUMP)  ; LAB_005618ee
    MOV AL,byte ptr [ESI + 0x1]         ; 005618de
    ADD ESI,0x2                         ; 005618e1
    MOV byte ptr [EDI + 0x1],AL         ; 005618e4
    ADD EDI,0x2                         ; 005618e7
    CMP AL,0x0                          ; 005618ea
    JNZ 0x005618d6                      ; 005618ec
        ;   XREF to: 005618d6 (CONDITIONAL_JUMP)  ; LAB_005618d6
    POP EDI                             ; 005618ee
        ;   Label: LAB_005618ee
    MOV ESI,EDX                         ; 005618ef
    INC EBX                             ; 005618f1
    PUSH EDI                            ; 005618f2
    SUB ECX,ECX                         ; 005618f3
    DEC ECX                             ; 005618f5
    MOV AL,0x0                          ; 005618f6
    SCASB.REPNE ES:EDI                  ; 005618f8
    DEC EDI                             ; 005618fa
    MOV AL,byte ptr [ESI]               ; 005618fb
        ;   Label: LAB_005618fb
    MOV byte ptr [EDI],AL               ; 005618fd
    CMP AL,0x0                          ; 005618ff
    JZ 0x00561913                       ; 00561901
        ;   XREF to: 00561913 (CONDITIONAL_JUMP)  ; LAB_00561913
    MOV AL,byte ptr [ESI + 0x1]         ; 00561903
    ADD ESI,0x2                         ; 00561906
    MOV byte ptr [EDI + 0x1],AL         ; 00561909
    ADD EDI,0x2                         ; 0056190c
    CMP AL,0x0                          ; 0056190f
    JNZ 0x005618fb                      ; 00561911
        ;   XREF to: 005618fb (CONDITIONAL_JUMP)  ; LAB_005618fb
    POP EDI                             ; 00561913
        ;   Label: LAB_00561913
    MOV ECX,dword ptr [ESP + 0xcc]      ; 00561914
    ADD EDX,0x328                       ; 0056191b
    CMP EBX,ECX                         ; 00561921
    JL 0x005618be                       ; 00561923
        ;   XREF to: 005618be (CONDITIONAL_JUMP)  ; LAB_005618be
    LEA EAX,[EAX]                       ; 00561925
    LEA EDX,[EDX]                       ; 0056192b
    MOV EBX,EBX                         ; 0056192e
    LEA ESI,[ESP + 0x2060]              ; 00561930
        ;   Label: LAB_00561930
    MOV EDI,EBP                         ; 00561937
    PUSH EDI                            ; 00561939
    SUB ECX,ECX                         ; 0056193a
    DEC ECX                             ; 0056193c
    MOV AL,0x0                          ; 0056193d
    SCASB.REPNE ES:EDI                  ; 0056193f
    DEC EDI                             ; 00561941
    MOV AL,byte ptr [ESI]               ; 00561942
        ;   Label: LAB_00561942
    MOV byte ptr [EDI],AL               ; 00561944
    CMP AL,0x0                          ; 00561946
    JZ 0x0056195a                       ; 00561948
        ;   XREF to: 0056195a (CONDITIONAL_JUMP)  ; LAB_0056195a
    MOV AL,byte ptr [ESI + 0x1]         ; 0056194a
    ADD ESI,0x2                         ; 0056194d
    MOV byte ptr [EDI + 0x1],AL         ; 00561950
    ADD EDI,0x2                         ; 00561953
    CMP AL,0x0                          ; 00561956
    JNZ 0x00561942                      ; 00561958
        ;   XREF to: 00561942 (CONDITIONAL_JUMP)  ; LAB_00561942
    POP EDI                             ; 0056195a
        ;   Label: LAB_0056195a
    MOV ESI,dword ptr [ESP + 0x212c]    ; 0056195b
    MOV EAX,ESI                         ; 00561962
    ADD ESP,0x2138                      ; 00561964
    POP EBP                             ; 0056196a
    POP EDI                             ; 0056196b
    POP ESI                             ; 0056196c
    POP EBX                             ; 0056196d
    RET                                 ; 0056196e
    MOV ESI,0xffffffff                  ; 0056196f
        ;   Label: LAB_0056196f
    MOV EAX,ESI                         ; 00561974
    ADD ESP,0x2138                      ; 00561976
    POP EBP                             ; 0056197c
    POP EDI                             ; 0056197d
    POP ESI                             ; 0056197e
    POP EBX                             ; 0056197f
    RET                                 ; 00561980
    SUB ECX,ECX                         ; 00561981
        ;   Label: caseD_4
    DEC ECX                             ; 00561983
    XOR EAX,EAX                         ; 00561984
    SCASB.REPNE ES:EDI                  ; 00561986
    NOT ECX                             ; 00561988
    DEC ECX                             ; 0056198a
    MOV ESI,dword ptr [ESP + 0x215c]    ; 0056198b
    MOV EDI,EBX                         ; 00561992
    SUB ESI,ECX                         ; 00561994
    SUB ECX,ECX                         ; 00561996
    DEC ECX                             ; 00561998
    XOR EAX,EAX                         ; 00561999
    SCASB.REPNE ES:EDI                  ; 0056199b
    NOT ECX                             ; 0056199d
    DEC ECX                             ; 0056199f
    MOV EAX,dword ptr [ESP + 0x2164]    ; 005619a0
    PUSH EAX                            ; 005619a7
    ADD ECX,EBX                         ; 005619a8
    MOV EBX,dword ptr [ESP + 0x2164]    ; 005619aa
    PUSH EBX                            ; 005619b1
    PUSH ESI                            ; 005619b2
    PUSH EBP                            ; 005619b3
    MOV ESI,dword ptr [ESP + 0x2164]    ; 005619b4
    PUSH ESI                            ; 005619bb
    PUSH ECX                            ; 005619bc
    ADD EDX,0x64                        ; 005619bd
    PUSH EDX                            ; 005619c0
    CALL core_script.cpp_parseConditionExpression_FUN_00561a30 ; 005619c1
        ;   XREF to: 00561a30 (UNCONDITIONAL_CALL)  ; int core_script.cpp_parseConditionExpression_FUN_00561a30(char * input_text, char * cmd_name_out, char * prefix_out, char * suffix_out, ...)
    ADD ESP,0x1c                        ; 005619c6
    MOV dword ptr [ESP + 0x212c],EAX    ; 005619c9
    JMP 0x00561893                      ; 005619d0
        ;   XREF to: 00561893 (UNCONDITIONAL_JUMP)  ; LAB_00561893
    MOV EDI,dword ptr [ESP + 0x2154]    ; 005619d5
        ;   Label: caseD_14
    LEA ESI,[EDX + 0x64]                ; 005619dc
    MOV byte ptr [EBP],0x0              ; 005619df
    PUSH EDI                            ; 005619e3
    MOV AL,byte ptr [ESI]               ; 005619e4
        ;   Label: LAB_005619e4
    MOV byte ptr [EDI],AL               ; 005619e6
    CMP AL,0x0                          ; 005619e8
    JZ 0x005619fc                       ; 005619ea
        ;   XREF to: 005619fc (CONDITIONAL_JUMP)  ; LAB_005619fc
    MOV AL,byte ptr [ESI + 0x1]         ; 005619ec
    ADD ESI,0x2                         ; 005619ef
    MOV byte ptr [EDI + 0x1],AL         ; 005619f2
    ADD EDI,0x2                         ; 005619f5
    CMP AL,0x0                          ; 005619f8
    JNZ 0x005619e4                      ; 005619fa
        ;   XREF to: 005619e4 (CONDITIONAL_JUMP)  ; LAB_005619e4
    POP EDI                             ; 005619fc
        ;   Label: LAB_005619fc
    MOV ESI,dword ptr [ESP + 0x2128]    ; 005619fd
    MOV ECX,0xca                        ; 00561a04
    MOV EDI,dword ptr [ESP + 0x2160]    ; 00561a09
    LEA ESI,[ESP + ESI*0x1 + 0xd0]      ; 00561a10
    MOVSD.REP ES:EDI,ESI                ; 00561a17
    MOV dword ptr [ESP + 0x212c],0x20   ; 00561a19
    JMP 0x00561893                      ; 00561a24
        ;   XREF to: 00561893 (UNCONDITIONAL_JUMP)  ; LAB_00561893


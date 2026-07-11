; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00566634(int param_1,uint param_2,char *param_3,undefined4 *param_4)
;
; Local Variables:
; undefined1       Stack[-0xa0]:1  local_a0
; undefined1       Stack[-0x9f]:1  local_9f
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00474460 at 0047456d
;
; Referenced Globals:
;   string s_%a_%b_%d_%H:%M:%S_%Y_00598a98
;   string s_%m/%d/%y_00598ab0
;   undefined1 DAT_00598abc
;   string s_%I:%M:%S_%p_00598ac0
;   undefined1 DAT_00598acc
;   undefined1 DAT_00598ad0
;   undefined1 DAT_00598ad4
;   string s_%a_%b_%d,_%Y_00598ad8
;   string s_%H:%M:%S_00598ae8
;   undefined4 DAT_005c17f8
;   undefined1* PTR_s_Sunday_005c1814 = 005989e8
;   undefined4 DAT_005c1830
;   undefined1* PTR_s_January_005c1860 = 00598a2c
;   void* PTR_DAT_005c1f0c = 005c1e08
;
; Called Functions:
;   FUN_00566600
;   FUN_0056d608
;   FUN_0056dc68
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566634
        ;   Label: FUN_00566634
    PUSH ESI                            ; 00566635
    PUSH EDI                            ; 00566636
    PUSH EBP                            ; 00566637
    SUB ESP,0x90                        ; 00566638
    MOV EBP,dword ptr [ESP + 0xac]      ; 0056663e
    MOV EBX,dword ptr [ESP + 0xb0]      ; 00566645
    XOR EDX,EDX                         ; 0056664c
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0056664e
    MOV dword ptr [ESP + 0x84],EDX      ; 00566655
    MOV dword ptr [ESP + 0x88],EAX      ; 0056665c
    MOV dword ptr [ESP + 0x8c],EDX      ; 00566663
    MOV AH,byte ptr [EBP]               ; 0056666a | = "%a %b %d, %Y" | s_%I:%M:%S_%p_00598ac0 | s_%a_%b_%d_%H:%M:%S_%Y_00598a98
        ;   Label: LAB_0056666a
    MOV ESI,ESP                         ; 0056666d
    TEST AH,AH                          ; 0056666f
    JNZ 0x00566690                      ; 00566671
        ;   XREF to: 00566690 (CONDITIONAL_JUMP)  ; LAB_00566690
    MOV EDI,dword ptr [ESP + 0x8c]      ; 00566673
    TEST EDI,EDI                        ; 0056667a
    JZ 0x00566a8f                       ; 0056667c
        ;   XREF to: 00566a8f (CONDITIONAL_JUMP)  ; LAB_00566a8f
    XOR EAX,EAX                         ; 00566682
    LEA EBP,[EDI + 0x1]                 ; 00566684
    MOV dword ptr [ESP + 0x8c],EAX      ; 00566687
    JMP 0x0056666a                      ; 0056668e
        ;   XREF to: 0056666a (UNCONDITIONAL_JUMP)  ; LAB_0056666a
    CMP AH,0x25                         ; 00566690
        ;   Label: LAB_00566690
    JZ 0x005666a5                       ; 00566693
        ;   XREF to: 005666a5 (CONDITIONAL_JUMP)  ; LAB_005666a5
    MOV AL,AH                           ; 00566695
    MOV byte ptr [ESP],AH               ; 00566697
    XOR AL,AH                           ; 0056669a
    MOV byte ptr [ESP + 0x1],AL         ; 0056669c
    JMP 0x00566a20                      ; 005666a0
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV AL,byte ptr [EBP + 0x1]         ; 005666a5
        ;   Label: LAB_005666a5
    INC EBP                             ; 005666a8
    CMP AL,0x61                         ; 005666a9
    JC 0x00566751                       ; 005666ab
        ;   XREF to: 00566751 (CONDITIONAL_JUMP)  ; LAB_00566751
    JBE 0x005667e1                      ; 005666b1
        ;   XREF to: 005667e1 (CONDITIONAL_JUMP)  ; LAB_005667e1
    CMP AL,0x6e                         ; 005666b7
    JC 0x0056670a                       ; 005666b9
        ;   XREF to: 0056670a (CONDITIONAL_JUMP)  ; LAB_0056670a
    JBE 0x005668d1                      ; 005666bb
        ;   XREF to: 005668d1 (CONDITIONAL_JUMP)  ; LAB_005668d1
    CMP AL,0x77                         ; 005666c1
    JC 0x005666e6                       ; 005666c3
        ;   XREF to: 005666e6 (CONDITIONAL_JUMP)  ; LAB_005666e6
    JBE 0x0056694f                      ; 005666c5
        ;   XREF to: 0056694f (CONDITIONAL_JUMP)  ; LAB_0056694f
    CMP AL,0x79                         ; 005666cb
    JC 0x005669a8                       ; 005666cd
        ;   XREF to: 005669a8 (CONDITIONAL_JUMP)  ; LAB_005669a8
    JBE 0x005669ca                      ; 005666d3
        ;   XREF to: 005669ca (CONDITIONAL_JUMP)  ; LAB_005669ca
    CMP AL,0x7a                         ; 005666d9
    JZ 0x00566a03                       ; 005666db
        ;   XREF to: 00566a03 (CONDITIONAL_JUMP)  ; LAB_00566a03
    JMP 0x00566a14                      ; 005666e1
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x72                         ; 005666e6
        ;   Label: LAB_005666e6
    JC 0x005666fd                       ; 005666e8
        ;   XREF to: 005666fd (CONDITIONAL_JUMP)  ; LAB_005666fd
    JBE 0x005668db                      ; 005666ea
        ;   XREF to: 005668db (CONDITIONAL_JUMP)  ; LAB_005668db
    CMP AL,0x74                         ; 005666f0
    JZ 0x0056691b                       ; 005666f2
        ;   XREF to: 0056691b (CONDITIONAL_JUMP)  ; LAB_0056691b
    JMP 0x00566a14                      ; 005666f8
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x70                         ; 005666fd
        ;   Label: LAB_005666fd
    JZ 0x005668ec                       ; 005666ff
        ;   XREF to: 005668ec (CONDITIONAL_JUMP)  ; LAB_005668ec
    JMP 0x00566a14                      ; 00566705
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x64                         ; 0056670a
        ;   Label: LAB_0056670a
    JC 0x00566738                       ; 0056670c
        ;   XREF to: 00566738 (CONDITIONAL_JUMP)  ; LAB_00566738
    JBE 0x00566822                      ; 0056670e
        ;   XREF to: 00566822 (CONDITIONAL_JUMP)  ; LAB_00566822
    CMP AL,0x6a                         ; 00566714
    JC 0x0056672b                       ; 00566716
        ;   XREF to: 0056672b (CONDITIONAL_JUMP)  ; LAB_0056672b
    JBE 0x00566886                      ; 00566718
        ;   XREF to: 00566886 (CONDITIONAL_JUMP)  ; LAB_00566886
    CMP AL,0x6d                         ; 0056671e
    JZ 0x005668a4                       ; 00566720
        ;   XREF to: 005668a4 (CONDITIONAL_JUMP)  ; LAB_005668a4
    JMP 0x00566a14                      ; 00566726
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x68                         ; 0056672b
        ;   Label: LAB_0056672b
    JZ 0x00566802                       ; 0056672d
        ;   XREF to: 00566802 (CONDITIONAL_JUMP)  ; LAB_00566802
    JMP 0x00566a14                      ; 00566733
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x62                         ; 00566738
        ;   Label: LAB_00566738
    JBE 0x00566802                      ; 0056673a
        ;   XREF to: 00566802 (CONDITIONAL_JUMP)  ; LAB_00566802
    MOV dword ptr [ESP + 0x8c],EBP      ; 00566740
    MOV EBP,0x598a98                    ; 00566747 | = "%a %b %d %H:%M:%S %Y"
    JMP 0x0056666a                      ; 0056674c
        ;   XREF to: 0056666a (UNCONDITIONAL_JUMP)  ; LAB_0056666a
    CMP AL,0x4d                         ; 00566751
        ;   Label: LAB_00566751
    JC 0x005667a4                       ; 00566753
        ;   XREF to: 005667a4 (CONDITIONAL_JUMP)  ; LAB_005667a4
    JBE 0x005668bb                      ; 00566755
        ;   XREF to: 005668bb (CONDITIONAL_JUMP)  ; LAB_005668bb
    CMP AL,0x57                         ; 0056675b
    JC 0x00566780                       ; 0056675d
        ;   XREF to: 00566780 (CONDITIONAL_JUMP)  ; LAB_00566780
    JBE 0x00566962                      ; 0056675f
        ;   XREF to: 00566962 (CONDITIONAL_JUMP)  ; LAB_00566962
    CMP AL,0x59                         ; 00566765
    JC 0x005669b9                       ; 00566767
        ;   XREF to: 005669b9 (CONDITIONAL_JUMP)  ; LAB_005669b9
    JBE 0x005669e9                      ; 0056676d
        ;   XREF to: 005669e9 (CONDITIONAL_JUMP)  ; LAB_005669e9
    CMP AL,0x5a                         ; 00566773
    JZ 0x00566a03                       ; 00566775
        ;   XREF to: 00566a03 (CONDITIONAL_JUMP)  ; LAB_00566a03
    JMP 0x00566a14                      ; 0056677b
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x54                         ; 00566780
        ;   Label: LAB_00566780
    JC 0x00566797                       ; 00566782
        ;   XREF to: 00566797 (CONDITIONAL_JUMP)  ; LAB_00566797
    JBE 0x005669b9                      ; 00566784
        ;   XREF to: 005669b9 (CONDITIONAL_JUMP)  ; LAB_005669b9
    CMP AL,0x55                         ; 0056678a
    JZ 0x00566925                       ; 0056678c
        ;   XREF to: 00566925 (CONDITIONAL_JUMP)  ; LAB_00566925
    JMP 0x00566a14                      ; 00566792
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x53                         ; 00566797
        ;   Label: LAB_00566797
    JZ 0x00566906                       ; 00566799
        ;   XREF to: 00566906 (CONDITIONAL_JUMP)  ; LAB_00566906
    JMP 0x00566a14                      ; 0056679f
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x42                         ; 005667a4
        ;   Label: LAB_005667a4
    JC 0x005667ca                       ; 005667a6
        ;   XREF to: 005667ca (CONDITIONAL_JUMP)  ; LAB_005667ca
    JBE 0x00566813                      ; 005667a8
        ;   XREF to: 00566813 (CONDITIONAL_JUMP)  ; LAB_00566813
    CMP AL,0x48                         ; 005667aa
    JC 0x005667c1                       ; 005667ac
        ;   XREF to: 005667c1 (CONDITIONAL_JUMP)  ; LAB_005667c1
    JBE 0x00566849                      ; 005667ae
        ;   XREF to: 00566849 (CONDITIONAL_JUMP)  ; LAB_00566849
    CMP AL,0x49                         ; 005667b4
    JZ 0x0056685f                       ; 005667b6
        ;   XREF to: 0056685f (CONDITIONAL_JUMP)  ; LAB_0056685f
    JMP 0x00566a14                      ; 005667bc
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x44                         ; 005667c1
        ;   Label: LAB_005667c1
    JZ 0x00566838                       ; 005667c3
        ;   XREF to: 00566838 (CONDITIONAL_JUMP)  ; LAB_00566838
    JMP 0x00566a14                      ; 005667c5
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,AH                           ; 005667ca
        ;   Label: LAB_005667ca
    JC 0x00566a14                       ; 005667cc
        ;   XREF to: 00566a14 (CONDITIONAL_JUMP)  ; LAB_00566a14
    JBE 0x00566a14                      ; 005667d2
        ;   XREF to: 00566a14 (CONDITIONAL_JUMP)  ; LAB_00566a14
    CMP AL,0x41                         ; 005667d8
    JZ 0x005667f3                       ; 005667da
        ;   XREF to: 005667f3 (CONDITIONAL_JUMP)  ; LAB_005667f3
    JMP 0x00566a14                      ; 005667dc
        ;   XREF to: 00566a14 (UNCONDITIONAL_JUMP)  ; LAB_00566a14
    MOV EAX,dword ptr [EBX + 0x18]      ; 005667e1
        ;   Label: LAB_005667e1
    MOV ESI,0x5c17f8                    ; 005667e4 | DAT_005c17f8
    SHL EAX,0x2                         ; 005667e9
    ADD ESI,EAX                         ; 005667ec
    JMP 0x00566a20                      ; 005667ee
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV ESI,dword ptr [EBX + 0x18]      ; 005667f3
        ;   Label: LAB_005667f3
    MOV ESI,dword ptr [ESI*0x4 + 0x5c1814] ; 005667f6 | PTR_s_Sunday_005c1814
    JMP 0x00566a20                      ; 005667fd
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV ESI,dword ptr [EBX + 0x10]      ; 00566802
        ;   Label: LAB_00566802
    SHL ESI,0x2                         ; 00566805
    ADD ESI,0x5c1830                    ; 00566808 | DAT_005c1830
    JMP 0x00566a20                      ; 0056680e
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV ESI,dword ptr [EBX + 0x10]      ; 00566813
        ;   Label: LAB_00566813
    MOV ESI,dword ptr [ESI*0x4 + 0x5c1860] ; 00566816 | PTR_s_January_005c1860
    JMP 0x00566a20                      ; 0056681d
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV EDI,dword ptr [EBX + 0xc]       ; 00566822
        ;   Label: LAB_00566822
    PUSH EDI                            ; 00566825
    LEA EAX,[ESP + 0x4]                 ; 00566826
    PUSH EAX                            ; 0056682a
    CALL FUN_00566600                   ; 0056682b
        ;   XREF to: 00566600 (UNCONDITIONAL_CALL)  ; undefined FUN_00566600()
    ADD ESP,0x8                         ; 00566830
    JMP 0x00566a20                      ; 00566833
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV dword ptr [ESP + 0x8c],EBP      ; 00566838
        ;   Label: LAB_00566838
    MOV EBP,0x598ab0                    ; 0056683f | = "%m/%d/%y"
    JMP 0x0056666a                      ; 00566844
        ;   XREF to: 0056666a (UNCONDITIONAL_JUMP)  ; LAB_0056666a
    MOV ECX,dword ptr [EBX + 0x8]       ; 00566849
        ;   Label: LAB_00566849
    PUSH ECX                            ; 0056684c
    LEA EAX,[ESP + 0x4]                 ; 0056684d
    PUSH EAX                            ; 00566851
    CALL FUN_00566600                   ; 00566852
        ;   XREF to: 00566600 (UNCONDITIONAL_CALL)  ; undefined FUN_00566600()
    ADD ESP,0x8                         ; 00566857
    JMP 0x00566a20                      ; 0056685a
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV EAX,dword ptr [EBX + 0x8]       ; 0056685f
        ;   Label: LAB_0056685f
    CMP EAX,0xc                         ; 00566862
    JLE 0x0056686a                      ; 00566865
        ;   XREF to: 0056686a (CONDITIONAL_JUMP)  ; LAB_0056686a
    SUB EAX,0xc                         ; 00566867
    TEST EAX,EAX                        ; 0056686a
        ;   Label: LAB_0056686a
    JNZ 0x00566873                      ; 0056686c
        ;   XREF to: 00566873 (CONDITIONAL_JUMP)  ; LAB_00566873
    MOV EAX,0xc                         ; 0056686e
    PUSH EAX                            ; 00566873
        ;   Label: LAB_00566873
    LEA EAX,[ESP + 0x4]                 ; 00566874
    PUSH EAX                            ; 00566878
    CALL FUN_00566600                   ; 00566879
        ;   XREF to: 00566600 (UNCONDITIONAL_CALL)  ; undefined FUN_00566600()
    ADD ESP,0x8                         ; 0056687e
    JMP 0x00566a20                      ; 00566881
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    PUSH 0xa                            ; 00566886
        ;   Label: LAB_00566886
    LEA EAX,[ESP + 0x4]                 ; 00566888
    PUSH EAX                            ; 0056688c
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0056688d
    ADD EAX,0x65                        ; 00566890
    PUSH EAX                            ; 00566893
    CALL FUN_0056dc68                   ; 00566894
        ;   XREF to: 0056dc68 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dc68()
    ADD ESP,0xc                         ; 00566899
    DEC byte ptr [ESP]                  ; 0056689c
    JMP 0x00566a20                      ; 0056689f
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV EAX,dword ptr [EBX + 0x10]      ; 005668a4
        ;   Label: LAB_005668a4
    INC EAX                             ; 005668a7
    PUSH EAX                            ; 005668a8
    LEA EAX,[ESP + 0x4]                 ; 005668a9
    PUSH EAX                            ; 005668ad
    CALL FUN_00566600                   ; 005668ae
        ;   XREF to: 00566600 (UNCONDITIONAL_CALL)  ; undefined FUN_00566600()
    ADD ESP,0x8                         ; 005668b3
    JMP 0x00566a20                      ; 005668b6
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV EDX,dword ptr [EBX + 0x4]       ; 005668bb
        ;   Label: LAB_005668bb
    PUSH EDX                            ; 005668be
    LEA EAX,[ESP + 0x4]                 ; 005668bf
    PUSH EAX                            ; 005668c3
    CALL FUN_00566600                   ; 005668c4
        ;   XREF to: 00566600 (UNCONDITIONAL_CALL)  ; undefined FUN_00566600()
    ADD ESP,0x8                         ; 005668c9
    JMP 0x00566a20                      ; 005668cc
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV ESI,0x598abc                    ; 005668d1 | DAT_00598abc
        ;   Label: LAB_005668d1
    JMP 0x00566a20                      ; 005668d6
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV dword ptr [ESP + 0x8c],EBP      ; 005668db
        ;   Label: LAB_005668db
    MOV EBP,0x598ac0                    ; 005668e2 | = "%I:%M:%S %p"
    JMP 0x0056666a                      ; 005668e7
        ;   XREF to: 0056666a (UNCONDITIONAL_JUMP)  ; LAB_0056666a
    CMP dword ptr [EBX + 0x8],0xc       ; 005668ec
        ;   Label: LAB_005668ec
    JGE 0x005668fc                      ; 005668f0
        ;   XREF to: 005668fc (CONDITIONAL_JUMP)  ; LAB_005668fc
    MOV ESI,0x598acc                    ; 005668f2 | DAT_00598acc
    JMP 0x00566a20                      ; 005668f7
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV ESI,0x598ad0                    ; 005668fc | DAT_00598ad0
        ;   Label: LAB_005668fc
    JMP 0x00566a20                      ; 00566901
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV EAX,dword ptr [EBX]             ; 00566906
        ;   Label: LAB_00566906
    PUSH EAX                            ; 00566908
    LEA EAX,[ESP + 0x4]                 ; 00566909
    PUSH EAX                            ; 0056690d
    CALL FUN_00566600                   ; 0056690e
        ;   XREF to: 00566600 (UNCONDITIONAL_CALL)  ; undefined FUN_00566600()
    ADD ESP,0x8                         ; 00566913
    JMP 0x00566a20                      ; 00566916
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV ESI,0x598ad4                    ; 0056691b | DAT_00598ad4
        ;   Label: LAB_0056691b
    JMP 0x00566a20                      ; 00566920
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00566925
        ;   Label: LAB_00566925
    MOV EDI,dword ptr [EBX + 0x18]      ; 00566928
    ADD EDX,0x7                         ; 0056692b
    SUB EDX,EDI                         ; 0056692e
    MOV ECX,0x7                         ; 00566930
    MOV EAX,EDX                         ; 00566935
    SAR EDX,0x1f                        ; 00566937
    IDIV ECX                            ; 0056693a
    PUSH EAX                            ; 0056693c
    LEA EAX,[ESP + 0x4]                 ; 0056693d
    PUSH EAX                            ; 00566941
    CALL FUN_00566600                   ; 00566942
        ;   XREF to: 00566600 (UNCONDITIONAL_CALL)  ; undefined FUN_00566600()
    ADD ESP,0x8                         ; 00566947
    JMP 0x00566a20                      ; 0056694a
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV AL,byte ptr [EBX + 0x18]        ; 0056694f
        ;   Label: LAB_0056694f
    XOR DH,DH                           ; 00566952
    ADD AL,0x30                         ; 00566954
    MOV byte ptr [ESP + 0x1],DH         ; 00566956
    MOV byte ptr [ESP],AL               ; 0056695a
    JMP 0x00566a20                      ; 0056695d
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00566962
        ;   Label: LAB_00566962
    MOV EDX,EAX                         ; 00566965
    MOV ECX,0x7                         ; 00566967
    SAR EDX,0x1f                        ; 0056696c
    IDIV ECX                            ; 0056696f
    SUB EDX,dword ptr [EBX + 0x18]      ; 00566971
    ADD EDX,ECX                         ; 00566974
    MOV EAX,EDX                         ; 00566976
    SAR EDX,0x1f                        ; 00566978
    IDIV ECX                            ; 0056697b
    MOV EAX,0x6                         ; 0056697d
    MOV ECX,dword ptr [EBX + 0x1c]      ; 00566982
    SUB EAX,EDX                         ; 00566985
    ADD EAX,ECX                         ; 00566987
    MOV EDX,EAX                         ; 00566989
    MOV ECX,0x7                         ; 0056698b
    SAR EDX,0x1f                        ; 00566990
    IDIV ECX                            ; 00566993
    PUSH EAX                            ; 00566995
    LEA EAX,[ESP + 0x4]                 ; 00566996
    PUSH EAX                            ; 0056699a
    CALL FUN_00566600                   ; 0056699b
        ;   XREF to: 00566600 (UNCONDITIONAL_CALL)  ; undefined FUN_00566600()
    ADD ESP,0x8                         ; 005669a0
    JMP 0x00566a20                      ; 005669a3
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV dword ptr [ESP + 0x8c],EBP      ; 005669a8
        ;   Label: LAB_005669a8
    MOV EBP,0x598ad8                    ; 005669af | = "%a %b %d, %Y"
    JMP 0x0056666a                      ; 005669b4
        ;   XREF to: 0056666a (UNCONDITIONAL_JUMP)  ; LAB_0056666a
    MOV dword ptr [ESP + 0x8c],EBP      ; 005669b9
        ;   Label: LAB_005669b9
    MOV EBP,0x598ae8                    ; 005669c0 | = "%H:%M:%S"
    JMP 0x0056666a                      ; 005669c5
        ;   XREF to: 0056666a (UNCONDITIONAL_JUMP)  ; LAB_0056666a
    MOV EAX,dword ptr [EBX + 0x14]      ; 005669ca
        ;   Label: LAB_005669ca
    MOV EDX,EAX                         ; 005669cd
    MOV ECX,0x64                        ; 005669cf
    SAR EDX,0x1f                        ; 005669d4
    IDIV ECX                            ; 005669d7
    PUSH EDX                            ; 005669d9
    LEA EAX,[ESP + 0x4]                 ; 005669da
    PUSH EAX                            ; 005669de
    CALL FUN_00566600                   ; 005669df
        ;   XREF to: 00566600 (UNCONDITIONAL_CALL)  ; undefined FUN_00566600()
    ADD ESP,0x8                         ; 005669e4
    JMP 0x00566a20                      ; 005669e7
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    PUSH 0xa                            ; 005669e9
        ;   Label: LAB_005669e9
    LEA EAX,[ESP + 0x4]                 ; 005669eb
    PUSH EAX                            ; 005669ef
    MOV EAX,dword ptr [EBX + 0x14]      ; 005669f0
    ADD EAX,0x76c                       ; 005669f3
    PUSH EAX                            ; 005669f8
    CALL FUN_0056dc68                   ; 005669f9
        ;   XREF to: 0056dc68 (UNCONDITIONAL_CALL)  ; undefined FUN_0056dc68()
    ADD ESP,0xc                         ; 005669fe
    JMP 0x00566a20                      ; 00566a01
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    CALL FUN_0056d608                   ; 00566a03
        ;   XREF to: 0056d608 (UNCONDITIONAL_CALL)  ; undefined FUN_0056d608()
        ;   Label: LAB_00566a03
    MOV ESI,dword ptr [EBX + 0x20]      ; 00566a08
    MOV ESI,dword ptr [ESI*0x4 + 0x5c1f0c] ; 00566a0b | PTR_DAT_005c1f0c
    JMP 0x00566a20                      ; 00566a12
        ;   XREF to: 00566a20 (UNCONDITIONAL_JUMP)  ; LAB_00566a20
    MOV AL,byte ptr [EBP]               ; 00566a14
        ;   Label: LAB_00566a14
    XOR CH,CH                           ; 00566a17
    MOV byte ptr [ESP],AL               ; 00566a19
    MOV byte ptr [ESP + 0x1],CH         ; 00566a1c
    MOV EDI,ESI                         ; 00566a20
        ;   Label: LAB_00566a20
    INC EBP                             ; 00566a22
    PUSH ES                             ; 00566a23
    MOV AX,DS                           ; 00566a24
    MOV ES,AX                           ; 00566a26
    SUB ECX,ECX                         ; 00566a28
    DEC ECX                             ; 00566a2a
    XOR EAX,EAX                         ; 00566a2b
    SCASB.REPNE ES:EDI                  ; 00566a2d | DAT_00598ad4 | DAT_00598acc | DAT_00598ad0
    NOT ECX                             ; 00566a2f
    DEC ECX                             ; 00566a31
    POP ES                              ; 00566a32
    MOV EDI,dword ptr [ESP + 0x88]      ; 00566a33
    MOV EDX,ECX                         ; 00566a3a
    CMP ECX,EDI                         ; 00566a3c
    JBE 0x00566a42                      ; 00566a3e
        ;   XREF to: 00566a42 (CONDITIONAL_JUMP)  ; LAB_00566a42
    MOV EDX,EDI                         ; 00566a40
    MOV EDI,dword ptr [ESP + 0xa4]      ; 00566a42
        ;   Label: LAB_00566a42
    MOV EAX,dword ptr [ESP + 0x84]      ; 00566a49
    MOV ECX,EDX                         ; 00566a50
    ADD EDI,EAX                         ; 00566a52
    PUSH ES                             ; 00566a54
    MOV AX,DS                           ; 00566a55
    MOV ES,AX                           ; 00566a57
    PUSH EDI                            ; 00566a59
    MOV EAX,ECX                         ; 00566a5a
    SHR ECX,0x2                         ; 00566a5c
    MOVSD.REP ES:EDI,ESI                ; 00566a5f
    MOV CL,AL                           ; 00566a61
    AND CL,0x3                          ; 00566a63
    MOVSB.REP ES:EDI,ESI                ; 00566a66
    POP EDI                             ; 00566a68
    POP ES                              ; 00566a69
    MOV ECX,dword ptr [ESP + 0x88]      ; 00566a6a
    MOV ESI,dword ptr [ESP + 0x84]      ; 00566a71
    SUB ECX,EDX                         ; 00566a78
    ADD ESI,EDX                         ; 00566a7a
    MOV dword ptr [ESP + 0x88],ECX      ; 00566a7c
    MOV dword ptr [ESP + 0x84],ESI      ; 00566a83
    JMP 0x0056666a                      ; 00566a8a
        ;   XREF to: 0056666a (UNCONDITIONAL_JUMP)  ; LAB_0056666a
    MOV EAX,dword ptr [ESP + 0x84]      ; 00566a8f
        ;   Label: LAB_00566a8f
    CMP EAX,dword ptr [ESP + 0xa8]      ; 00566a96
    JNC 0x00566ab6                      ; 00566a9d
        ;   XREF to: 00566ab6 (CONDITIONAL_JUMP)  ; LAB_00566ab6
    MOV EAX,dword ptr [ESP + 0xa4]      ; 00566a9f
    MOV EBX,dword ptr [ESP + 0x84]      ; 00566aa6
    ADD EAX,EBX                         ; 00566aad
    MOV byte ptr [EAX],0x0              ; 00566aaf
    MOV EAX,EBX                         ; 00566ab2
    JMP 0x00566ab8                      ; 00566ab4
        ;   XREF to: 00566ab8 (UNCONDITIONAL_JUMP)  ; LAB_00566ab8
    XOR EAX,EAX                         ; 00566ab6
        ;   Label: LAB_00566ab6
    ADD ESP,0x90                        ; 00566ab8
        ;   Label: LAB_00566ab8
    POP EBP                             ; 00566abe
    POP EDI                             ; 00566abf
    POP ESI                             ; 00566ac0
    POP EBX                             ; 00566ac1
    RET                                 ; 00566ac2


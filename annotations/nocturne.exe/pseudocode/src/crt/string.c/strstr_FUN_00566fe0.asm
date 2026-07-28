; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strstr_FUN_00566fe0(char *haystack_str,char *needle_str)
;
; Parameters:
; char *           Stack[0x4]:4   haystack_str
; char *           Stack[0x8]:4   needle_str
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_script.cpp_trimLine_FUN_004fdf60 at 004fdfa5
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_00521e10 at 00521fce
;   sound_sndmain.cpp_trimLineAndRemoveComments_FUN_00521d80 at 00521d8d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566fe0
        ;   Label: crt_string.c_strstr_FUN_00566fe0
    PUSH ESI                            ; 00566fe1
    PUSH EDI                            ; 00566fe2
    PUSH EBP                            ; 00566fe3
    SUB ESP,0x4                         ; 00566fe4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00566fe7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00566feb
    MOV AH,byte ptr [EBX]               ; 00566fef
    TEST AH,AH                          ; 00566ff1
    JNZ 0x00566ffc                      ; 00566ff3
        ;   XREF to: 00566ffc (CONDITIONAL_JUMP)  ; LAB_00566ffc
    MOV EAX,ESI                         ; 00566ff5
    JMP 0x005670a7                      ; 00566ff7
        ;   XREF to: 005670a7 (UNCONDITIONAL_JUMP)  ; LAB_005670a7
    CMP byte ptr [EBX + 0x1],0x0        ; 00566ffc
        ;   Label: LAB_00566ffc
    JNZ 0x00567026                      ; 00567000
        ;   XREF to: 00567026 (CONDITIONAL_JUMP)  ; LAB_00567026
    MOV DL,AH                           ; 00567002
    MOV AL,byte ptr [ESI]               ; 00567004
        ;   Label: LAB_00567004
    CMP AL,DL                           ; 00567006
    JZ 0x0056701c                       ; 00567008
        ;   XREF to: 0056701c (CONDITIONAL_JUMP)  ; LAB_0056701c
    CMP AL,0x0                          ; 0056700a
    JZ 0x0056701a                       ; 0056700c
        ;   XREF to: 0056701a (CONDITIONAL_JUMP)  ; LAB_0056701a
    INC ESI                             ; 0056700e
    MOV AL,byte ptr [ESI]               ; 0056700f
    CMP AL,DL                           ; 00567011
    JZ 0x0056701c                       ; 00567013
        ;   XREF to: 0056701c (CONDITIONAL_JUMP)  ; LAB_0056701c
    INC ESI                             ; 00567015
    CMP AL,0x0                          ; 00567016
    JNZ 0x00567004                      ; 00567018
        ;   XREF to: 00567004 (CONDITIONAL_JUMP)  ; LAB_00567004
    SUB ESI,ESI                         ; 0056701a
        ;   Label: LAB_0056701a
    MOV EAX,ESI                         ; 0056701c
        ;   Label: LAB_0056701c
    ADD ESP,0x4                         ; 0056701e
    POP EBP                             ; 00567021
    POP EDI                             ; 00567022
    POP ESI                             ; 00567023
    POP EBX                             ; 00567024
    RET                                 ; 00567025
    MOV ECX,0xffffffff                  ; 00567026
        ;   Label: LAB_00567026
    MOV EDI,ESI                         ; 0056702b
    XOR AL,AL                           ; 0056702d
    PUSH ES                             ; 0056702f
    JECXZ 0x0056703d                    ; 00567030
        ;   XREF to: 0056703d (CONDITIONAL_JUMP)  ; LAB_0056703b+2
    MOV DX,DS                           ; 00567032
    MOV ES,DX                           ; 00567034
    SCASB.REPNE ES:EDI                  ; 00567036
    JNZ 0x0056703d                      ; 00567038
        ;   XREF to: 0056703d (CONDITIONAL_JUMP)  ; LAB_0056703b+2
    DEC EDI                             ; 0056703a
    TEST AX,0xcf89                      ; 0056703b
    POP ES                              ; 0056703f
    MOV dword ptr [ESP],EDI             ; 00567040
    MOV EDI,EBX                         ; 00567043
    PUSH ES                             ; 00567045
    MOV AX,DS                           ; 00567046
    MOV ES,AX                           ; 00567048
    SUB ECX,ECX                         ; 0056704a
    DEC ECX                             ; 0056704c
    XOR EAX,EAX                         ; 0056704d
    SCASB.REPNE ES:EDI                  ; 0056704f
    NOT ECX                             ; 00567051
    DEC ECX                             ; 00567053
    POP ES                              ; 00567054
    MOV EBP,ECX                         ; 00567055
    MOV ECX,dword ptr [ESP]             ; 00567057
        ;   Label: LAB_00567057
    SUB ECX,ESI                         ; 0056705a
    CMP ECX,EBP                         ; 0056705c
    JC 0x005670a5                       ; 0056705e
        ;   XREF to: 005670a5 (CONDITIONAL_JUMP)  ; LAB_005670a5
    MOV EDI,ESI                         ; 00567060
    MOV AL,byte ptr [EBX]               ; 00567062
    PUSH ES                             ; 00567064
    JECXZ 0x00567072                    ; 00567065
        ;   XREF to: 00567072 (CONDITIONAL_JUMP)  ; LAB_00567070+2
    MOV DX,DS                           ; 00567067
    MOV ES,DX                           ; 00567069
    SCASB.REPNE ES:EDI                  ; 0056706b
    JNZ 0x00567072                      ; 0056706d
        ;   XREF to: 00567072 (CONDITIONAL_JUMP)  ; LAB_00567070+2
    DEC EDI                             ; 0056706f
    TEST AX,0xcf89                      ; 00567070
    POP ES                              ; 00567074
    MOV EDX,EDI                         ; 00567075
    TEST EDI,EDI                        ; 00567077
    JZ 0x005670a5                       ; 00567079
        ;   XREF to: 005670a5 (CONDITIONAL_JUMP)  ; LAB_005670a5
    MOV ECX,EBP                         ; 0056707b
    MOV EDI,EBX                         ; 0056707d
    MOV ESI,EDX                         ; 0056707f
    PUSH ES                             ; 00567081
    MOV AX,DS                           ; 00567082
    MOV ES,AX                           ; 00567084
    XOR EAX,EAX                         ; 00567086
    CMPSB.REPE ES:EDI,ESI               ; 00567088
    JZ 0x00567091                       ; 0056708a
        ;   XREF to: 00567091 (CONDITIONAL_JUMP)  ; LAB_00567091
    SBB EAX,EAX                         ; 0056708c
    SBB EAX,-0x1                        ; 0056708e
    POP ES                              ; 00567091
        ;   Label: LAB_00567091
    TEST EAX,EAX                        ; 00567092
    JNZ 0x005670a0                      ; 00567094
        ;   XREF to: 005670a0 (CONDITIONAL_JUMP)  ; LAB_005670a0
    MOV EAX,EDX                         ; 00567096
    ADD ESP,0x4                         ; 00567098
    POP EBP                             ; 0056709b
    POP EDI                             ; 0056709c
    POP ESI                             ; 0056709d
    POP EBX                             ; 0056709e
    RET                                 ; 0056709f
    LEA ESI,[EDX + 0x1]                 ; 005670a0
        ;   Label: LAB_005670a0
    JMP 0x00567057                      ; 005670a3
        ;   XREF to: 00567057 (UNCONDITIONAL_JUMP)  ; LAB_00567057
    XOR EAX,EAX                         ; 005670a5
        ;   Label: LAB_005670a5
    ADD ESP,0x4                         ; 005670a7
        ;   Label: LAB_005670a7
    POP EBP                             ; 005670aa
    POP EDI                             ; 005670ab
    POP ESI                             ; 005670ac
    POP EBX                             ; 005670ad
    RET                                 ; 005670ae


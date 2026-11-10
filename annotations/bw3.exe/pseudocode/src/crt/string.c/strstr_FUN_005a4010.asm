; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strstr_FUN_005a4010(char *haystack_str,char *needle_str)
;
; Parameters:
; char *           Stack[0x4]:4   haystack_str
; char *           Stack[0x8]:4   needle_str
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_charactr.cpp_CCharacter_getDeathState_FUN_00431000 at 004310a3
;   core_fldnotes.cpp_FUN_004aa810 at 004aaadb
;   core_hino.cpp_CHino_process_FUN_0059b960 at 0059c194
;   core_hino.cpp_FUN_0059d000 at 0059d02b
;   core_script.cpp_trimLine_FUN_00528790 at 005287d5
;   sound_sndmain.cpp_FUN_00551620 at 0055181a
;   sound_sndmain.cpp_trimLineAndRemoveComments_FUN_00551590 at 0055159d
;   unkaddr_004a76f0.cpp_FUN_004a7920 at 004a792a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4010
        ;   Label: crt_string.c_strstr_FUN_005a4010
    PUSH ESI                            ; 005a4011
    PUSH EDI                            ; 005a4012
    PUSH EBP                            ; 005a4013
    SUB ESP,0x4                         ; 005a4014
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a4017
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005a401b
    MOV AH,byte ptr [EBX]               ; 005a401f
    TEST AH,AH                          ; 005a4021
    JNZ 0x005a402c                      ; 005a4023
        ;   XREF to: 005a402c (CONDITIONAL_JUMP)  ; LAB_005a402c
    MOV EAX,ESI                         ; 005a4025
    JMP 0x005a40d7                      ; 005a4027
        ;   XREF to: 005a40d7 (UNCONDITIONAL_JUMP)  ; LAB_005a40d7
    CMP byte ptr [EBX + 0x1],0x0        ; 005a402c
        ;   Label: LAB_005a402c
    JNZ 0x005a4056                      ; 005a4030
        ;   XREF to: 005a4056 (CONDITIONAL_JUMP)  ; LAB_005a4056
    MOV DL,AH                           ; 005a4032
    MOV AL,byte ptr [ESI]               ; 005a4034
        ;   Label: LAB_005a4034
    CMP AL,DL                           ; 005a4036
    JZ 0x005a404c                       ; 005a4038
        ;   XREF to: 005a404c (CONDITIONAL_JUMP)  ; LAB_005a404c
    CMP AL,0x0                          ; 005a403a
    JZ 0x005a404a                       ; 005a403c
        ;   XREF to: 005a404a (CONDITIONAL_JUMP)  ; LAB_005a404a
    INC ESI                             ; 005a403e
    MOV AL,byte ptr [ESI]               ; 005a403f
    CMP AL,DL                           ; 005a4041
    JZ 0x005a404c                       ; 005a4043
        ;   XREF to: 005a404c (CONDITIONAL_JUMP)  ; LAB_005a404c
    INC ESI                             ; 005a4045
    CMP AL,0x0                          ; 005a4046
    JNZ 0x005a4034                      ; 005a4048
        ;   XREF to: 005a4034 (CONDITIONAL_JUMP)  ; LAB_005a4034
    SUB ESI,ESI                         ; 005a404a
        ;   Label: LAB_005a404a
    MOV EAX,ESI                         ; 005a404c
        ;   Label: LAB_005a404c
    ADD ESP,0x4                         ; 005a404e
    POP EBP                             ; 005a4051
    POP EDI                             ; 005a4052
    POP ESI                             ; 005a4053
    POP EBX                             ; 005a4054
    RET                                 ; 005a4055
    MOV ECX,0xffffffff                  ; 005a4056
        ;   Label: LAB_005a4056
    MOV EDI,ESI                         ; 005a405b
    XOR AL,AL                           ; 005a405d
    PUSH ES                             ; 005a405f
    JECXZ 0x005a406d                    ; 005a4060
        ;   XREF to: 005a406d (CONDITIONAL_JUMP)  ; LAB_005a406b+2
    MOV DX,DS                           ; 005a4062
    MOV ES,DX                           ; 005a4064
    SCASB.REPNE ES:EDI                  ; 005a4066
    JNZ 0x005a406d                      ; 005a4068
        ;   XREF to: 005a406d (CONDITIONAL_JUMP)  ; LAB_005a406b+2
    DEC EDI                             ; 005a406a
    TEST AX,0xcf89                      ; 005a406b
    POP ES                              ; 005a406f
    MOV dword ptr [ESP],EDI             ; 005a4070
    MOV EDI,EBX                         ; 005a4073
    PUSH ES                             ; 005a4075
    MOV AX,DS                           ; 005a4076
    MOV ES,AX                           ; 005a4078
    SUB ECX,ECX                         ; 005a407a
    DEC ECX                             ; 005a407c
    XOR EAX,EAX                         ; 005a407d
    SCASB.REPNE ES:EDI                  ; 005a407f
    NOT ECX                             ; 005a4081
    DEC ECX                             ; 005a4083
    POP ES                              ; 005a4084
    MOV EBP,ECX                         ; 005a4085
    MOV ECX,dword ptr [ESP]             ; 005a4087
        ;   Label: LAB_005a4087
    SUB ECX,ESI                         ; 005a408a
    CMP ECX,EBP                         ; 005a408c
    JC 0x005a40d5                       ; 005a408e
        ;   XREF to: 005a40d5 (CONDITIONAL_JUMP)  ; LAB_005a40d5
    MOV EDI,ESI                         ; 005a4090
    MOV AL,byte ptr [EBX]               ; 005a4092
    PUSH ES                             ; 005a4094
    JECXZ 0x005a40a2                    ; 005a4095
        ;   XREF to: 005a40a2 (CONDITIONAL_JUMP)  ; LAB_005a40a0+2
    MOV DX,DS                           ; 005a4097
    MOV ES,DX                           ; 005a4099
    SCASB.REPNE ES:EDI                  ; 005a409b
    JNZ 0x005a40a2                      ; 005a409d
        ;   XREF to: 005a40a2 (CONDITIONAL_JUMP)  ; LAB_005a40a0+2
    DEC EDI                             ; 005a409f
    TEST AX,0xcf89                      ; 005a40a0
    POP ES                              ; 005a40a4
    MOV EDX,EDI                         ; 005a40a5
    TEST EDI,EDI                        ; 005a40a7
    JZ 0x005a40d5                       ; 005a40a9
        ;   XREF to: 005a40d5 (CONDITIONAL_JUMP)  ; LAB_005a40d5
    MOV ECX,EBP                         ; 005a40ab
    MOV EDI,EBX                         ; 005a40ad
    MOV ESI,EDX                         ; 005a40af
    PUSH ES                             ; 005a40b1
    MOV AX,DS                           ; 005a40b2
    MOV ES,AX                           ; 005a40b4
    XOR EAX,EAX                         ; 005a40b6
    CMPSB.REPE ES:EDI,ESI               ; 005a40b8
    JZ 0x005a40c1                       ; 005a40ba
        ;   XREF to: 005a40c1 (CONDITIONAL_JUMP)  ; LAB_005a40c1
    SBB EAX,EAX                         ; 005a40bc
    SBB EAX,-0x1                        ; 005a40be
    POP ES                              ; 005a40c1
        ;   Label: LAB_005a40c1
    TEST EAX,EAX                        ; 005a40c2
    JNZ 0x005a40d0                      ; 005a40c4
        ;   XREF to: 005a40d0 (CONDITIONAL_JUMP)  ; LAB_005a40d0
    MOV EAX,EDX                         ; 005a40c6
    ADD ESP,0x4                         ; 005a40c8
    POP EBP                             ; 005a40cb
    POP EDI                             ; 005a40cc
    POP ESI                             ; 005a40cd
    POP EBX                             ; 005a40ce
    RET                                 ; 005a40cf
    LEA ESI,[EDX + 0x1]                 ; 005a40d0
        ;   Label: LAB_005a40d0
    JMP 0x005a4087                      ; 005a40d3
        ;   XREF to: 005a4087 (UNCONDITIONAL_JUMP)  ; LAB_005a4087
    XOR EAX,EAX                         ; 005a40d5
        ;   Label: LAB_005a40d5
    ADD ESP,0x4                         ; 005a40d7
        ;   Label: LAB_005a40d7
    POP EBP                             ; 005a40da
    POP EDI                             ; 005a40db
    POP ESI                             ; 005a40dc
    POP EBX                             ; 005a40dd
    RET                                 ; 005a40de


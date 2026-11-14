; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strstr_FUN_005c2dc0(char *haystack_str,char *needle_str)
;
; Parameters:
; char *           Stack[0x4]:4   haystack_str
; char *           Stack[0x8]:4   needle_str
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_flashlit.cpp_FUN_004b9ce0 at 004b9cea
;   core_fldnotes.cpp_CFieldNotes_loadFile_FUN_004bcba0 at 004bce5d
;   core_script.cpp_trimLine_FUN_005431a0 at 005431e5
;   sound_sndmain.cpp_CSfxSample_parseConfigFile_FUN_0056e130 at 0056e32a
;   sound_sndmain.cpp_trimLineAndRemoveComments_FUN_0056e0a0 at 0056e0ad
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2dc0
        ;   Label: crt_string.c_strstr_FUN_005c2dc0
    PUSH ESI                            ; 005c2dc1
    PUSH EDI                            ; 005c2dc2
    PUSH EBP                            ; 005c2dc3
    SUB ESP,0x4                         ; 005c2dc4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005c2dc7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005c2dcb
    MOV AH,byte ptr [EBX]               ; 005c2dcf
    TEST AH,AH                          ; 005c2dd1
    JNZ 0x005c2ddc                      ; 005c2dd3
        ;   XREF to: 005c2ddc (CONDITIONAL_JUMP)  ; LAB_005c2ddc
    MOV EAX,ESI                         ; 005c2dd5
    JMP 0x005c2e87                      ; 005c2dd7
        ;   XREF to: 005c2e87 (UNCONDITIONAL_JUMP)  ; LAB_005c2e87
    CMP byte ptr [EBX + 0x1],0x0        ; 005c2ddc
        ;   Label: LAB_005c2ddc
    JNZ 0x005c2e06                      ; 005c2de0
        ;   XREF to: 005c2e06 (CONDITIONAL_JUMP)  ; LAB_005c2e06
    MOV DL,AH                           ; 005c2de2
    MOV AL,byte ptr [ESI]               ; 005c2de4
        ;   Label: LAB_005c2de4
    CMP AL,DL                           ; 005c2de6
    JZ 0x005c2dfc                       ; 005c2de8
        ;   XREF to: 005c2dfc (CONDITIONAL_JUMP)  ; LAB_005c2dfc
    CMP AL,0x0                          ; 005c2dea
    JZ 0x005c2dfa                       ; 005c2dec
        ;   XREF to: 005c2dfa (CONDITIONAL_JUMP)  ; LAB_005c2dfa
    INC ESI                             ; 005c2dee
    MOV AL,byte ptr [ESI]               ; 005c2def
    CMP AL,DL                           ; 005c2df1
    JZ 0x005c2dfc                       ; 005c2df3
        ;   XREF to: 005c2dfc (CONDITIONAL_JUMP)  ; LAB_005c2dfc
    INC ESI                             ; 005c2df5
    CMP AL,0x0                          ; 005c2df6
    JNZ 0x005c2de4                      ; 005c2df8
        ;   XREF to: 005c2de4 (CONDITIONAL_JUMP)  ; LAB_005c2de4
    SUB ESI,ESI                         ; 005c2dfa
        ;   Label: LAB_005c2dfa
    MOV EAX,ESI                         ; 005c2dfc
        ;   Label: LAB_005c2dfc
    ADD ESP,0x4                         ; 005c2dfe
    POP EBP                             ; 005c2e01
    POP EDI                             ; 005c2e02
    POP ESI                             ; 005c2e03
    POP EBX                             ; 005c2e04
    RET                                 ; 005c2e05
    MOV ECX,0xffffffff                  ; 005c2e06
        ;   Label: LAB_005c2e06
    MOV EDI,ESI                         ; 005c2e0b
    XOR AL,AL                           ; 005c2e0d
    PUSH ES                             ; 005c2e0f
    JECXZ 0x005c2e1d                    ; 005c2e10
        ;   XREF to: 005c2e1d (CONDITIONAL_JUMP)  ; LAB_005c2e1b+2
    MOV DX,DS                           ; 005c2e12
    MOV ES,DX                           ; 005c2e14
    SCASB.REPNE ES:EDI                  ; 005c2e16
    JNZ 0x005c2e1d                      ; 005c2e18
        ;   XREF to: 005c2e1d (CONDITIONAL_JUMP)  ; LAB_005c2e1b+2
    DEC EDI                             ; 005c2e1a
    TEST AX,0xcf89                      ; 005c2e1b
    POP ES                              ; 005c2e1f
    MOV dword ptr [ESP],EDI             ; 005c2e20
    MOV EDI,EBX                         ; 005c2e23
    PUSH ES                             ; 005c2e25
    MOV AX,DS                           ; 005c2e26
    MOV ES,AX                           ; 005c2e28
    SUB ECX,ECX                         ; 005c2e2a
    DEC ECX                             ; 005c2e2c
    XOR EAX,EAX                         ; 005c2e2d
    SCASB.REPNE ES:EDI                  ; 005c2e2f
    NOT ECX                             ; 005c2e31
    DEC ECX                             ; 005c2e33
    POP ES                              ; 005c2e34
    MOV EBP,ECX                         ; 005c2e35
    MOV ECX,dword ptr [ESP]             ; 005c2e37
        ;   Label: LAB_005c2e37
    SUB ECX,ESI                         ; 005c2e3a
    CMP ECX,EBP                         ; 005c2e3c
    JC 0x005c2e85                       ; 005c2e3e
        ;   XREF to: 005c2e85 (CONDITIONAL_JUMP)  ; LAB_005c2e85
    MOV EDI,ESI                         ; 005c2e40
    MOV AL,byte ptr [EBX]               ; 005c2e42
    PUSH ES                             ; 005c2e44
    JECXZ 0x005c2e52                    ; 005c2e45
        ;   XREF to: 005c2e52 (CONDITIONAL_JUMP)  ; LAB_005c2e50+2
    MOV DX,DS                           ; 005c2e47
    MOV ES,DX                           ; 005c2e49
    SCASB.REPNE ES:EDI                  ; 005c2e4b
    JNZ 0x005c2e52                      ; 005c2e4d
        ;   XREF to: 005c2e52 (CONDITIONAL_JUMP)  ; LAB_005c2e50+2
    DEC EDI                             ; 005c2e4f
    TEST AX,0xcf89                      ; 005c2e50
    POP ES                              ; 005c2e54
    MOV EDX,EDI                         ; 005c2e55
    TEST EDI,EDI                        ; 005c2e57
    JZ 0x005c2e85                       ; 005c2e59
        ;   XREF to: 005c2e85 (CONDITIONAL_JUMP)  ; LAB_005c2e85
    MOV ECX,EBP                         ; 005c2e5b
    MOV EDI,EBX                         ; 005c2e5d
    MOV ESI,EDX                         ; 005c2e5f
    PUSH ES                             ; 005c2e61
    MOV AX,DS                           ; 005c2e62
    MOV ES,AX                           ; 005c2e64
    XOR EAX,EAX                         ; 005c2e66
    CMPSB.REPE ES:EDI,ESI               ; 005c2e68
    JZ 0x005c2e71                       ; 005c2e6a
        ;   XREF to: 005c2e71 (CONDITIONAL_JUMP)  ; LAB_005c2e71
    SBB EAX,EAX                         ; 005c2e6c
    SBB EAX,-0x1                        ; 005c2e6e
    POP ES                              ; 005c2e71
        ;   Label: LAB_005c2e71
    TEST EAX,EAX                        ; 005c2e72
    JNZ 0x005c2e80                      ; 005c2e74
        ;   XREF to: 005c2e80 (CONDITIONAL_JUMP)  ; LAB_005c2e80
    MOV EAX,EDX                         ; 005c2e76
    ADD ESP,0x4                         ; 005c2e78
    POP EBP                             ; 005c2e7b
    POP EDI                             ; 005c2e7c
    POP ESI                             ; 005c2e7d
    POP EBX                             ; 005c2e7e
    RET                                 ; 005c2e7f
    LEA ESI,[EDX + 0x1]                 ; 005c2e80
        ;   Label: LAB_005c2e80
    JMP 0x005c2e37                      ; 005c2e83
        ;   XREF to: 005c2e37 (UNCONDITIONAL_JUMP)  ; LAB_005c2e37
    XOR EAX,EAX                         ; 005c2e85
        ;   Label: LAB_005c2e85
    ADD ESP,0x4                         ; 005c2e87
        ;   Label: LAB_005c2e87
    POP EBP                             ; 005c2e8a
    POP EDI                             ; 005c2e8b
    POP ESI                             ; 005c2e8c
    POP EBX                             ; 005c2e8d
    RET                                 ; 005c2e8e


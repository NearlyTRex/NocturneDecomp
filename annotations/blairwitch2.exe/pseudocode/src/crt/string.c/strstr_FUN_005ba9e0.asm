; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl crt_string_c_strstr_FUN_005ba9e0(char *haystack_str,char *needle_str)
;
; Parameters:
; char *           Stack[0x4]:4   haystack_str
; char *           Stack[0x8]:4   needle_str
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_basicene.cpp_CBasicEnemy_processBurnState_FUN_005a0380 at 005a049a
;   core_fldnotes.cpp_FUN_004a41b0 at 004a446d
;   core_hag.cpp_CHag_processBurnState_FUN_005aae80 at 005aafa5
;   core_script.cpp_trimLine_FUN_00521070 at 005210b5
;   sound_sndmain.cpp_FUN_0054bac0 at 0054bcb8
;   sound_sndmain.cpp_trimLineAndRemoveComments_FUN_0054ba30 at 0054ba3d
;   unkaddr_004a1200.cpp_FUN_004a1420 at 004a142a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba9e0
        ;   Label: crt_string.c_strstr_FUN_005ba9e0
    PUSH ESI                            ; 005ba9e1
    PUSH EDI                            ; 005ba9e2
    PUSH EBP                            ; 005ba9e3
    SUB ESP,0x4                         ; 005ba9e4
    MOV ESI,dword ptr [ESP + 0x18]      ; 005ba9e7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005ba9eb
    MOV AH,byte ptr [EBX]               ; 005ba9ef
    TEST AH,AH                          ; 005ba9f1
    JNZ 0x005ba9fc                      ; 005ba9f3
        ;   XREF to: 005ba9fc (CONDITIONAL_JUMP)  ; LAB_005ba9fc
    MOV EAX,ESI                         ; 005ba9f5
    JMP 0x005baaa7                      ; 005ba9f7
        ;   XREF to: 005baaa7 (UNCONDITIONAL_JUMP)  ; LAB_005baaa7
    CMP byte ptr [EBX + 0x1],0x0        ; 005ba9fc
        ;   Label: LAB_005ba9fc
    JNZ 0x005baa26                      ; 005baa00
        ;   XREF to: 005baa26 (CONDITIONAL_JUMP)  ; LAB_005baa26
    MOV DL,AH                           ; 005baa02
    MOV AL,byte ptr [ESI]               ; 005baa04
        ;   Label: LAB_005baa04
    CMP AL,DL                           ; 005baa06
    JZ 0x005baa1c                       ; 005baa08
        ;   XREF to: 005baa1c (CONDITIONAL_JUMP)  ; LAB_005baa1c
    CMP AL,0x0                          ; 005baa0a
    JZ 0x005baa1a                       ; 005baa0c
        ;   XREF to: 005baa1a (CONDITIONAL_JUMP)  ; LAB_005baa1a
    INC ESI                             ; 005baa0e
    MOV AL,byte ptr [ESI]               ; 005baa0f
    CMP AL,DL                           ; 005baa11
    JZ 0x005baa1c                       ; 005baa13
        ;   XREF to: 005baa1c (CONDITIONAL_JUMP)  ; LAB_005baa1c
    INC ESI                             ; 005baa15
    CMP AL,0x0                          ; 005baa16
    JNZ 0x005baa04                      ; 005baa18
        ;   XREF to: 005baa04 (CONDITIONAL_JUMP)  ; LAB_005baa04
    SUB ESI,ESI                         ; 005baa1a
        ;   Label: LAB_005baa1a
    MOV EAX,ESI                         ; 005baa1c
        ;   Label: LAB_005baa1c
    ADD ESP,0x4                         ; 005baa1e
    POP EBP                             ; 005baa21
    POP EDI                             ; 005baa22
    POP ESI                             ; 005baa23
    POP EBX                             ; 005baa24
    RET                                 ; 005baa25
    MOV ECX,0xffffffff                  ; 005baa26
        ;   Label: LAB_005baa26
    MOV EDI,ESI                         ; 005baa2b
    XOR AL,AL                           ; 005baa2d
    PUSH ES                             ; 005baa2f
    JECXZ 0x005baa3d                    ; 005baa30
        ;   XREF to: 005baa3d (CONDITIONAL_JUMP)  ; LAB_005baa3b+2
    MOV DX,DS                           ; 005baa32
    MOV ES,DX                           ; 005baa34
    SCASB.REPNE ES:EDI                  ; 005baa36
    JNZ 0x005baa3d                      ; 005baa38
        ;   XREF to: 005baa3d (CONDITIONAL_JUMP)  ; LAB_005baa3b+2
    DEC EDI                             ; 005baa3a
    TEST AX,0xcf89                      ; 005baa3b
    POP ES                              ; 005baa3f
    MOV dword ptr [ESP],EDI             ; 005baa40
    MOV EDI,EBX                         ; 005baa43
    PUSH ES                             ; 005baa45
    MOV AX,DS                           ; 005baa46
    MOV ES,AX                           ; 005baa48
    SUB ECX,ECX                         ; 005baa4a
    DEC ECX                             ; 005baa4c
    XOR EAX,EAX                         ; 005baa4d
    SCASB.REPNE ES:EDI                  ; 005baa4f
    NOT ECX                             ; 005baa51
    DEC ECX                             ; 005baa53
    POP ES                              ; 005baa54
    MOV EBP,ECX                         ; 005baa55
    MOV ECX,dword ptr [ESP]             ; 005baa57
        ;   Label: LAB_005baa57
    SUB ECX,ESI                         ; 005baa5a
    CMP ECX,EBP                         ; 005baa5c
    JC 0x005baaa5                       ; 005baa5e
        ;   XREF to: 005baaa5 (CONDITIONAL_JUMP)  ; LAB_005baaa5
    MOV EDI,ESI                         ; 005baa60
    MOV AL,byte ptr [EBX]               ; 005baa62
    PUSH ES                             ; 005baa64
    JECXZ 0x005baa72                    ; 005baa65
        ;   XREF to: 005baa72 (CONDITIONAL_JUMP)  ; LAB_005baa70+2
    MOV DX,DS                           ; 005baa67
    MOV ES,DX                           ; 005baa69
    SCASB.REPNE ES:EDI                  ; 005baa6b
    JNZ 0x005baa72                      ; 005baa6d
        ;   XREF to: 005baa72 (CONDITIONAL_JUMP)  ; LAB_005baa70+2
    DEC EDI                             ; 005baa6f
    TEST AX,0xcf89                      ; 005baa70
    POP ES                              ; 005baa74
    MOV EDX,EDI                         ; 005baa75
    TEST EDI,EDI                        ; 005baa77
    JZ 0x005baaa5                       ; 005baa79
        ;   XREF to: 005baaa5 (CONDITIONAL_JUMP)  ; LAB_005baaa5
    MOV ECX,EBP                         ; 005baa7b
    MOV EDI,EBX                         ; 005baa7d
    MOV ESI,EDX                         ; 005baa7f
    PUSH ES                             ; 005baa81
    MOV AX,DS                           ; 005baa82
    MOV ES,AX                           ; 005baa84
    XOR EAX,EAX                         ; 005baa86
    CMPSB.REPE ES:EDI,ESI               ; 005baa88
    JZ 0x005baa91                       ; 005baa8a
        ;   XREF to: 005baa91 (CONDITIONAL_JUMP)  ; LAB_005baa91
    SBB EAX,EAX                         ; 005baa8c
    SBB EAX,-0x1                        ; 005baa8e
    POP ES                              ; 005baa91
        ;   Label: LAB_005baa91
    TEST EAX,EAX                        ; 005baa92
    JNZ 0x005baaa0                      ; 005baa94
        ;   XREF to: 005baaa0 (CONDITIONAL_JUMP)  ; LAB_005baaa0
    MOV EAX,EDX                         ; 005baa96
    ADD ESP,0x4                         ; 005baa98
    POP EBP                             ; 005baa9b
    POP EDI                             ; 005baa9c
    POP ESI                             ; 005baa9d
    POP EBX                             ; 005baa9e
    RET                                 ; 005baa9f
    LEA ESI,[EDX + 0x1]                 ; 005baaa0
        ;   Label: LAB_005baaa0
    JMP 0x005baa57                      ; 005baaa3
        ;   XREF to: 005baa57 (UNCONDITIONAL_JUMP)  ; LAB_005baa57
    XOR EAX,EAX                         ; 005baaa5
        ;   Label: LAB_005baaa5
    ADD ESP,0x4                         ; 005baaa7
        ;   Label: LAB_005baaa7
    POP EBP                             ; 005baaaa
    POP EDI                             ; 005baaab
    POP ESI                             ; 005baaac
    POP EBX                             ; 005baaad
    RET                                 ; 005baaae


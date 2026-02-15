; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CCmdParm_parseValue_FUN_00561cb0(CCmdParm *this_ptr,char *input_text,int *cursor,int end_position)
;
; Parameters:
; CCmdParm *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   input_text
; int *            Stack[0xc]:4   cursor
; int              Stack[0x10]:4   end_position
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CCmdParse_parse_FUN_00561fd0 at 0056230e
;
; Referenced Globals:
;   uchar[257] g_CharacterClassificationTable
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00561cb0
        ;   Label: core_script.cpp_CCmdParm_parseValue_FUN_00561cb0
    PUSH ESI                            ; 00561cb1
    PUSH EDI                            ; 00561cb2
    PUSH EBP                            ; 00561cb3
    SUB ESP,0x4                         ; 00561cb4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00561cb7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00561cbb
    MOV EDX,dword ptr [ESP + 0x20]      ; 00561cbf
    MOV EDI,EBP                         ; 00561cc3
    MOV EBX,dword ptr [ESP + 0x24]      ; 00561cc5
    SUB ECX,ECX                         ; 00561cc9
    DEC ECX                             ; 00561ccb
    XOR EAX,EAX                         ; 00561ccc
    SCASB.REPNE ES:EDI                  ; 00561cce
    NOT ECX                             ; 00561cd0
    DEC ECX                             ; 00561cd2
    MOV EAX,ECX                         ; 00561cd3
    CMP EBX,dword ptr [EDX]             ; 00561cd5
    JLE 0x00561d09                      ; 00561cd7
        ;   XREF to: 00561d09 (CONDITIONAL_JUMP)  ; LAB_00561d09
    MOV EDI,dword ptr [ESP + 0x24]      ; 00561cd9
    MOV ECX,dword ptr [EDX]             ; 00561cdd
        ;   Label: LAB_00561cdd
    MOV BL,byte ptr [ECX + ESI*0x1]     ; 00561cdf
    INC BL                              ; 00561ce2
    XOR ECX,ECX                         ; 00561ce4
    MOV CL,BL                           ; 00561ce6
    TEST byte ptr [ECX + 0x6849c4],0x2  ; 00561ce8 | g_CharacterClassificationTable
    JZ 0x00561d09                       ; 00561cef
        ;   XREF to: 00561d09 (CONDITIONAL_JUMP)  ; LAB_00561d09
    MOV ECX,dword ptr [EDX]             ; 00561cf1
    LEA EBX,[ECX + 0x1]                 ; 00561cf3
    MOV dword ptr [EDX],EBX             ; 00561cf6
    LEA EBX,[ESI + ECX*0x1]             ; 00561cf8
    MOV ECX,EAX                         ; 00561cfb
    MOV BL,byte ptr [EBX]               ; 00561cfd
    MOV byte ptr [ECX + EBP*0x1],BL     ; 00561cff
    MOV ECX,dword ptr [EDX]             ; 00561d02
    INC EAX                             ; 00561d04
    CMP ECX,EDI                         ; 00561d05
    JL 0x00561cdd                       ; 00561d07
        ;   XREF to: 00561cdd (CONDITIONAL_JUMP)  ; LAB_00561cdd
    MOV EDI,dword ptr [ESP + 0x24]      ; 00561d09
        ;   Label: LAB_00561d09
    MOV byte ptr [EAX + EBP*0x1],0x0    ; 00561d0d
    XOR ECX,ECX                         ; 00561d11
    MOV EBX,dword ptr [EDX]             ; 00561d13
    XOR EAX,EAX                         ; 00561d15
    CMP EBX,EDI                         ; 00561d17
    JGE 0x00561d30                      ; 00561d19
        ;   XREF to: 00561d30 (CONDITIONAL_JUMP)  ; LAB_00561d30
    MOV EDI,dword ptr [EDX]             ; 00561d1b
        ;   Label: LAB_00561d1b
    CMP byte ptr [EDI + ESI*0x1],0x2c   ; 00561d1d
    JNZ 0x00561d57                      ; 00561d21
        ;   XREF to: 00561d57 (CONDITIONAL_JUMP)  ; LAB_00561d57
    TEST ECX,ECX                        ; 00561d23
    JNZ 0x00561d57                      ; 00561d25
        ;   XREF to: 00561d57 (CONDITIONAL_JUMP)  ; LAB_00561d57
    CMP dword ptr [EBP + 0x258],0x2     ; 00561d27
    JZ 0x00561d57                       ; 00561d2e
        ;   XREF to: 00561d57 (CONDITIONAL_JUMP)  ; LAB_00561d57
    MOV EDI,0xffffffff                  ; 00561d30
        ;   Label: LAB_00561d30
    LEA ECX,[EAX + EBP*0x1]             ; 00561d35
    TEST EAX,EAX                        ; 00561d38
        ;   Label: LAB_00561d38
    JLE 0x00561d8f                      ; 00561d3a
        ;   XREF to: 00561d8f (CONDITIONAL_JUMP)  ; LAB_00561d8f
    MOV BL,byte ptr [ECX + 0x63]        ; 00561d3c
    INC BL                              ; 00561d3f
    MOVZX ESI,BL                        ; 00561d41
    TEST byte ptr [ESI + 0x6849c4],0x2  ; 00561d44 | g_CharacterClassificationTable
    JZ 0x00561d8f                       ; 00561d4b
        ;   XREF to: 00561d8f (CONDITIONAL_JUMP)  ; LAB_00561d8f
    MOV ESI,dword ptr [EDX]             ; 00561d4d
    DEC EAX                             ; 00561d4f
    ADD ESI,EDI                         ; 00561d50
    DEC ECX                             ; 00561d52
    MOV dword ptr [EDX],ESI             ; 00561d53
    JMP 0x00561d38                      ; 00561d55
        ;   XREF to: 00561d38 (UNCONDITIONAL_JUMP)  ; LAB_00561d38
    MOV EDI,dword ptr [EDX]             ; 00561d57
        ;   Label: LAB_00561d57
    CMP byte ptr [EDI + ESI*0x1],0x28   ; 00561d59
    JNZ 0x00561d60                      ; 00561d5d
        ;   XREF to: 00561d60 (CONDITIONAL_JUMP)  ; LAB_00561d60
    INC ECX                             ; 00561d5f
    MOV EDI,dword ptr [EDX]             ; 00561d60
        ;   Label: LAB_00561d60
    CMP byte ptr [EDI + ESI*0x1],0x29   ; 00561d62
    JNZ 0x00561d6d                      ; 00561d66
        ;   XREF to: 00561d6d (CONDITIONAL_JUMP)  ; LAB_00561d6d
    TEST ECX,ECX                        ; 00561d68
    JZ 0x00561d30                       ; 00561d6a
        ;   XREF to: 00561d30 (CONDITIONAL_JUMP)  ; LAB_00561d30
    DEC ECX                             ; 00561d6c
    MOV EBX,dword ptr [EDX]             ; 00561d6d
        ;   Label: LAB_00561d6d
    LEA EDI,[EBX + 0x1]                 ; 00561d6f
    MOV dword ptr [ESP],EAX             ; 00561d72
    MOV dword ptr [EDX],EDI             ; 00561d75
    MOV EDI,dword ptr [ESP]             ; 00561d77
    ADD EDI,EBP                         ; 00561d7a
    MOV BL,byte ptr [ESI + EBX*0x1]     ; 00561d7c
    MOV byte ptr [EDI + 0x64],BL        ; 00561d7f
    MOV EDI,dword ptr [ESP + 0x24]      ; 00561d82
    MOV EBX,dword ptr [EDX]             ; 00561d86
    INC EAX                             ; 00561d88
    CMP EBX,EDI                         ; 00561d89
    JL 0x00561d1b                       ; 00561d8b
        ;   XREF to: 00561d1b (CONDITIONAL_JUMP)  ; LAB_00561d1b
    JMP 0x00561d30                      ; 00561d8d
        ;   XREF to: 00561d30 (UNCONDITIONAL_JUMP)  ; LAB_00561d30
    MOV byte ptr [EAX + EBP*0x1 + 0x64],0x0 ; 00561d8f
        ;   Label: LAB_00561d8f
    MOV EAX,0x1                         ; 00561d94
    ADD ESP,0x4                         ; 00561d99
    POP EBP                             ; 00561d9c
    POP EDI                             ; 00561d9d
    POP ESI                             ; 00561d9e
    POP EBX                             ; 00561d9f
    RET                                 ; 00561da0


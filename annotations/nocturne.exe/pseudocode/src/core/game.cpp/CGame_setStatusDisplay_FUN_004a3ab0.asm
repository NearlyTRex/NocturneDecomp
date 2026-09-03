; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_CGame_setStatusDisplay_FUN_004a3ab0(CGame *this_ptr,char *name,int value,float duration)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; int              Stack[0xc]:4   value
; float            Stack[0x10]:4   duration
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510 at 0042863a
;   core_charactr.cpp_CCharacter_process_FUN_004259f0 at 00425aca
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d88d
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3ab0
        ;   Label: core_game.cpp_CGame_setStatusDisplay_FUN_004a3ab0
    PUSH ESI                            ; 004a3ab1
    PUSH EDI                            ; 004a3ab2
    PUSH EBP                            ; 004a3ab3
    SUB ESP,0x4                         ; 004a3ab4
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a3ab7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a3abb
    FLD float ptr [ESP + 0x24]          ; 004a3abf
    FLDZ                                ; 004a3ac3
    FCOMPP                              ; 004a3ac5
    FNSTSW AX                           ; 004a3ac7
    SAHF                                ; 004a3ac9
    JNC 0x004a3b17                      ; 004a3aca
        ;   XREF to: 004a3b17 (CONDITIONAL_JUMP)  ; LAB_004a3b17
    TEST EBP,EBP                        ; 004a3acc
    JZ 0x004a3b17                       ; 004a3ace
        ;   XREF to: 004a3b17 (CONDITIONAL_JUMP)  ; LAB_004a3b17
    CMP byte ptr [EBP],0x0              ; 004a3ad0
    JZ 0x004a3b17                       ; 004a3ad4
        ;   XREF to: 004a3b17 (CONDITIONAL_JUMP)  ; LAB_004a3b17
    LEA EAX,[EBX + 0x38c]               ; 004a3ad6
    MOV EDX,dword ptr [EBX + 0x388]     ; 004a3adc
    XOR ESI,ESI                         ; 004a3ae2
    MOV dword ptr [ESP],EAX             ; 004a3ae4
    MOV EDI,EAX                         ; 004a3ae7
    TEST EDX,EDX                        ; 004a3ae9
    JLE 0x004a3b0c                      ; 004a3aeb
        ;   XREF to: 004a3b0c (CONDITIONAL_JUMP)  ; LAB_004a3b0c
    PUSH EBP                            ; 004a3aed
        ;   Label: LAB_004a3aed
    PUSH EDI                            ; 004a3aee
    CALL crt_string.c__stricmp_FUN_00564520 ; 004a3aef
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004a3af4
    TEST EAX,EAX                        ; 004a3af7
    JZ 0x004a3b1f                       ; 004a3af9
        ;   XREF to: 004a3b1f (CONDITIONAL_JUMP)  ; LAB_004a3b1f
    INC ESI                             ; 004a3afb
    MOV ECX,dword ptr [EBX + 0x388]     ; 004a3afc
    ADD EDI,0x100                       ; 004a3b02
    CMP ESI,ECX                         ; 004a3b08
    JL 0x004a3aed                       ; 004a3b0a
        ;   XREF to: 004a3aed (CONDITIONAL_JUMP)  ; LAB_004a3aed
    MOV ESI,dword ptr [EBX + 0x388]     ; 004a3b0c
        ;   Label: LAB_004a3b0c
    CMP ESI,0x5                         ; 004a3b12
    JL 0x004a3b37                       ; 004a3b15
        ;   XREF to: 004a3b37 (CONDITIONAL_JUMP)  ; LAB_004a3b37
    ADD ESP,0x4                         ; 004a3b17
        ;   Label: LAB_004a3b17
    POP EBP                             ; 004a3b1a
    POP EDI                             ; 004a3b1b
    POP ESI                             ; 004a3b1c
    POP EBX                             ; 004a3b1d
    RET                                 ; 004a3b1e
    MOV EAX,dword ptr [ESP + 0x20]      ; 004a3b1f
        ;   Label: LAB_004a3b1f
    MOV dword ptr [EBX + ESI*0x4 + 0x88c],EAX ; 004a3b23
    MOV EAX,dword ptr [ESP + 0x24]      ; 004a3b2a
    MOV dword ptr [EBX + ESI*0x4 + 0x8a0],EAX ; 004a3b2e
    JMP 0x004a3b17                      ; 004a3b35
        ;   XREF to: 004a3b17 (UNCONDITIONAL_JUMP)  ; LAB_004a3b17
    MOV EDI,ESI                         ; 004a3b37
        ;   Label: LAB_004a3b37
    MOV EAX,dword ptr [ESP]             ; 004a3b39
    SHL EDI,0x8                         ; 004a3b3c
    MOV ESI,EBP                         ; 004a3b3f
    ADD EDI,EAX                         ; 004a3b41
    PUSH EDI                            ; 004a3b43
    MOV AL,byte ptr [ESI]               ; 004a3b44
        ;   Label: LAB_004a3b44
    MOV byte ptr [EDI],AL               ; 004a3b46
    CMP AL,0x0                          ; 004a3b48
    JZ 0x004a3b5c                       ; 004a3b4a
        ;   XREF to: 004a3b5c (CONDITIONAL_JUMP)  ; LAB_004a3b5c
    MOV AL,byte ptr [ESI + 0x1]         ; 004a3b4c
    ADD ESI,0x2                         ; 004a3b4f
    MOV byte ptr [EDI + 0x1],AL         ; 004a3b52
    ADD EDI,0x2                         ; 004a3b55
    CMP AL,0x0                          ; 004a3b58
    JNZ 0x004a3b44                      ; 004a3b5a
        ;   XREF to: 004a3b44 (CONDITIONAL_JUMP)  ; LAB_004a3b44
    POP EDI                             ; 004a3b5c
        ;   Label: LAB_004a3b5c
    MOV EAX,dword ptr [EBX + 0x388]     ; 004a3b5d
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a3b63
    MOV dword ptr [EBX + EAX*0x4 + 0x88c],ESI ; 004a3b67
    MOV EAX,dword ptr [EBX + 0x388]     ; 004a3b6e
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a3b74
    MOV dword ptr [EBX + EAX*0x4 + 0x8a0],ESI ; 004a3b78
    INC dword ptr [EBX + 0x388]         ; 004a3b7f
    ADD ESP,0x4                         ; 004a3b85
    POP EBP                             ; 004a3b88
    POP EDI                             ; 004a3b89
    POP ESI                             ; 004a3b8a
    POP EBX                             ; 004a3b8b
    RET                                 ; 004a3b8c


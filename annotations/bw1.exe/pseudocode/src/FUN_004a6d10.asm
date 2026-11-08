; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a6d10(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_004a6c30 at 004a6c62
;   FUN_004a6c90 at 004a6cb1
;
; Referenced Globals:
;   TerminatedCString s_Syntax_error_005de192
;   undefined4 s_yntax_error_005de192+1
;   undefined4 s_ntax_error_005de192+2
;   undefined4 s_tax_error_005de192+3
;   undefined4 DAT_01c56ed0
;   undefined4 DAT_01c56ed1
;   undefined4 DAT_01c56ed2
;   undefined4 DAT_01c56ed3
;
; Called Functions:
;   FUN_004a97b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a6d10
        ;   Label: FUN_004a6d10
    SUB ESP,0x4                         ; 004a6d11
    XOR AH,AH                           ; 004a6d14
    MOV byte ptr [0x01c56ed0],AH        ; 004a6d16 | DAT_01c56ed0
    MOV EAX,ESP                         ; 004a6d1c
    PUSH EAX                            ; 004a6d1e
    MOV ECX,dword ptr [ESP + 0x14]      ; 004a6d1f
    PUSH ECX                            ; 004a6d23
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a6d24
    XOR EDX,EDX                         ; 004a6d28
    PUSH EBX                            ; 004a6d2a
    MOV dword ptr [ESP + 0xc],EDX       ; 004a6d2b
    CALL FUN_004a97b0                   ; 004a6d2f
        ;   XREF to: 004a97b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a97b0()
    ADD ESP,0xc                         ; 004a6d34
    TEST EAX,EAX                        ; 004a6d37
    JL 0x004a6d47                       ; 004a6d39
        ;   XREF to: 004a6d47 (CONDITIONAL_JUMP)  ; LAB_004a6d47
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a6d3b
    ADD EDX,dword ptr [ESP]             ; 004a6d3f
    CMP byte ptr [EDX],0x0              ; 004a6d42
    JNZ 0x004a6d4c                      ; 004a6d45
        ;   XREF to: 004a6d4c (CONDITIONAL_JUMP)  ; LAB_004a6d4c
    ADD ESP,0x4                         ; 004a6d47
        ;   Label: LAB_004a6d47
    POP EBX                             ; 004a6d4a
    RET                                 ; 004a6d4b
    PUSH EDI                            ; 004a6d4c
        ;   Label: LAB_004a6d4c
    PUSH ESI                            ; 004a6d4d
    MOV ESI,0x5de192                    ; 004a6d4e | = "Syntax error"
    MOV EDI,0x1c56ed0                   ; 004a6d53
    PUSH EDI                            ; 004a6d58 | DAT_01c56ed0
    MOV AL,byte ptr [ESI]               ; 004a6d59 | = "Syntax error" | s_ntax_error_005de192+2
        ;   Label: LAB_004a6d59
    MOV byte ptr [EDI],AL               ; 004a6d5b | DAT_01c56ed0 | DAT_01c56ed2
    CMP AL,0x0                          ; 004a6d5d
    JZ 0x004a6d71                       ; 004a6d5f
        ;   XREF to: 004a6d71 (CONDITIONAL_JUMP)  ; LAB_004a6d71
    MOV AL,byte ptr [ESI + 0x1]         ; 004a6d61 | s_yntax_error_005de192+1 | s_tax_error_005de192+3
    ADD ESI,0x2                         ; 004a6d64
    MOV byte ptr [EDI + 0x1],AL         ; 004a6d67 | DAT_01c56ed1 | DAT_01c56ed3
    ADD EDI,0x2                         ; 004a6d6a
    CMP AL,0x0                          ; 004a6d6d
    JNZ 0x004a6d59                      ; 004a6d6f
        ;   XREF to: 004a6d59 (CONDITIONAL_JUMP)  ; LAB_004a6d59
    POP EDI                             ; 004a6d71
        ;   Label: LAB_004a6d71
    MOV EAX,0xffffffff                  ; 004a6d72
    POP ESI                             ; 004a6d77
    POP EDI                             ; 004a6d78
    ADD ESP,0x4                         ; 004a6d79
    POP EBX                             ; 004a6d7c
    RET                                 ; 004a6d7d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00491b80(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_00491aa0 at 00491ad2
;   FUN_00491b00 at 00491b21
;
; Referenced Globals:
;   TerminatedCString s_Syntax_error_005bf4ce
;   undefined4 s_yntax_error_005bf4ce+1
;   undefined4 s_ntax_error_005bf4ce+2
;   undefined4 s_tax_error_005bf4ce+3
;   undefined4 DAT_01c734b0
;   undefined4 DAT_01c734b1
;   undefined4 DAT_01c734b2
;   undefined4 DAT_01c734b3
;
; Called Functions:
;   FUN_00494630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491b80
        ;   Label: FUN_00491b80
    SUB ESP,0x4                         ; 00491b81
    XOR AH,AH                           ; 00491b84
    MOV byte ptr [0x01c734b0],AH        ; 00491b86 | DAT_01c734b0
    MOV EAX,ESP                         ; 00491b8c
    PUSH EAX                            ; 00491b8e
    MOV ECX,dword ptr [ESP + 0x14]      ; 00491b8f
    PUSH ECX                            ; 00491b93
    MOV EBX,dword ptr [ESP + 0x14]      ; 00491b94
    XOR EDX,EDX                         ; 00491b98
    PUSH EBX                            ; 00491b9a
    MOV dword ptr [ESP + 0xc],EDX       ; 00491b9b
    CALL FUN_00494630                   ; 00491b9f
        ;   XREF to: 00494630 (UNCONDITIONAL_CALL)  ; undefined FUN_00494630()
    ADD ESP,0xc                         ; 00491ba4
    TEST EAX,EAX                        ; 00491ba7
    JL 0x00491bb7                       ; 00491ba9
        ;   XREF to: 00491bb7 (CONDITIONAL_JUMP)  ; LAB_00491bb7
    MOV EDX,dword ptr [ESP + 0x10]      ; 00491bab
    ADD EDX,dword ptr [ESP]             ; 00491baf
    CMP byte ptr [EDX],0x0              ; 00491bb2
    JNZ 0x00491bbc                      ; 00491bb5
        ;   XREF to: 00491bbc (CONDITIONAL_JUMP)  ; LAB_00491bbc
    ADD ESP,0x4                         ; 00491bb7
        ;   Label: LAB_00491bb7
    POP EBX                             ; 00491bba
    RET                                 ; 00491bbb
    PUSH EDI                            ; 00491bbc
        ;   Label: LAB_00491bbc
    PUSH ESI                            ; 00491bbd
    MOV ESI,0x5bf4ce                    ; 00491bbe | = "Syntax error"
    MOV EDI,0x1c734b0                   ; 00491bc3
    PUSH EDI                            ; 00491bc8 | DAT_01c734b0
    MOV AL,byte ptr [ESI]               ; 00491bc9 | = "Syntax error" | s_ntax_error_005bf4ce+2
        ;   Label: LAB_00491bc9
    MOV byte ptr [EDI],AL               ; 00491bcb | DAT_01c734b0 | DAT_01c734b2
    CMP AL,0x0                          ; 00491bcd
    JZ 0x00491be1                       ; 00491bcf
        ;   XREF to: 00491be1 (CONDITIONAL_JUMP)  ; LAB_00491be1
    MOV AL,byte ptr [ESI + 0x1]         ; 00491bd1 | s_yntax_error_005bf4ce+1 | s_tax_error_005bf4ce+3
    ADD ESI,0x2                         ; 00491bd4
    MOV byte ptr [EDI + 0x1],AL         ; 00491bd7 | DAT_01c734b1 | DAT_01c734b3
    ADD EDI,0x2                         ; 00491bda
    CMP AL,0x0                          ; 00491bdd
    JNZ 0x00491bc9                      ; 00491bdf
        ;   XREF to: 00491bc9 (CONDITIONAL_JUMP)  ; LAB_00491bc9
    POP EDI                             ; 00491be1
        ;   Label: LAB_00491be1
    MOV EAX,0xffffffff                  ; 00491be2
    POP ESI                             ; 00491be7
    POP EDI                             ; 00491be8
    ADD ESP,0x4                         ; 00491be9
    POP EBX                             ; 00491bec
    RET                                 ; 00491bed


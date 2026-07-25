; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00432bd8(void)
;
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766c80
;   undefined4 DAT_00766c84
;   undefined4 DAT_00766ca4
;   undefined4 DAT_00766ca8
;   undefined4 DAT_00766cac
;
; Called Functions:
;   engine_clipper.c_interpolateVertexNearClip_FUN_00431930
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 00432bd8
        ;   Label: FUN_00432bd8
    MOV ESI,EBX                         ; 00432bde
    ADD EDI,0x766c74                    ; 00432be0 | DAT_00766c74
    TEST EDI,0x7                        ; 00432be6
    JZ 0x00432bf4                       ; 00432bec
        ;   XREF to: 00432bf4 (CONDITIONAL_JUMP)  ; LAB_00432bf4
    MOVSD ES:EDI,ESI                    ; 00432bee | DAT_00766c74
    SUB ECX,0x4                         ; 00432bef
    JLE 0x00432c11                      ; 00432bf2
        ;   XREF to: 00432c11 (CONDITIONAL_JUMP)  ; LAB_00432c11
    SUB ECX,0x8                         ; 00432bf4
        ;   Label: LAB_00432bf4
    JL 0x00432c05                       ; 00432bf7
        ;   XREF to: 00432c05 (CONDITIONAL_JUMP)  ; LAB_00432c05
    FILD qword ptr [ESI]                ; 00432bf9
    ADD ESI,0x8                         ; 00432bfb
    FISTP qword ptr [EDI]               ; 00432bfe | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 00432c00
    JMP 0x00432bf4                      ; 00432c03
        ;   XREF to: 00432bf4 (UNCONDITIONAL_JUMP)  ; LAB_00432bf4
    ADD ECX,0x8                         ; 00432c05
        ;   Label: LAB_00432c05
    JLE 0x00432c11                      ; 00432c08
        ;   XREF to: 00432c11 (CONDITIONAL_JUMP)  ; LAB_00432c11
    MOVSD ES:EDI,ESI                    ; 00432c0a | DAT_00766c80
    SUB ECX,0x4                         ; 00432c0b
    JLE 0x00432c11                      ; 00432c0e
        ;   XREF to: 00432c11 (CONDITIONAL_JUMP)  ; LAB_00432c11
    MOVSD ES:EDI,ESI                    ; 00432c10 | DAT_00766c84
    MOV ECX,dword ptr [0x00766c70]      ; 00432c11 | DAT_00766c70
        ;   Label: LAB_00432c11
    INC ECX                             ; 00432c17
    MOV dword ptr [0x00766c70],ECX      ; 00432c18 | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 00432c1e
    ADD EAX,0x766c74                    ; 00432c21 | DAT_00766c74
    PUSH EAX                            ; 00432c26
    PUSH EDX                            ; 00432c27
    PUSH EBX                            ; 00432c28
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00431930 ; 00432c29
        ;   XREF to: 00431930 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexNearClip_FUN_00431930()
    MOV EDI,dword ptr [0x00766c70]      ; 00432c2e | DAT_00766c70
    INC EDI                             ; 00432c34
    ADD ESP,0xc                         ; 00432c35
    MOV dword ptr [0x00766c70],EDI      ; 00432c38 | DAT_00766c70
    JMP 0x00432b87                      ; 00432c3e
        ;   XREF to: 00432b87 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ECX,dword ptr [EAX]             ; 00432c43 | DAT_00766ca4
        ;   Label: LAB_00432c43
    CMP ECX,EBX                         ; 00432c45
    JLE 0x00432c50                      ; 00432c47
        ;   XREF to: 00432c50 (CONDITIONAL_JUMP)  ; LAB_00432c50
    MOV dword ptr [EAX],EBX             ; 00432c49 | DAT_00766ca4
    JMP 0x00432751                      ; 00432c4b
        ;   XREF to: 00432751 (UNCONDITIONAL_JUMP)  ; LAB_00432751
    NEG EBX                             ; 00432c50
        ;   Label: LAB_00432c50
    CMP EBX,ECX                         ; 00432c52
    JLE 0x00432c5d                      ; 00432c54
        ;   XREF to: 00432c5d (CONDITIONAL_JUMP)  ; LAB_00432c5d
    MOV dword ptr [EAX],EBX             ; 00432c56 | DAT_00766ca4
    JMP 0x00432751                      ; 00432c58
        ;   XREF to: 00432751 (UNCONDITIONAL_JUMP)  ; LAB_00432751
    MOV EBP,dword ptr [EAX + 0x8]       ; 00432c5d | DAT_00766cac
        ;   Label: LAB_00432c5d
    MOV ECX,dword ptr [EAX + 0x4]       ; 00432c60 | DAT_00766ca8
    CMP ECX,EBP                         ; 00432c63
    JLE 0x00432c6f                      ; 00432c65
        ;   XREF to: 00432c6f (CONDITIONAL_JUMP)  ; LAB_00432c6f
    MOV dword ptr [EAX + 0x4],EBP       ; 00432c67 | DAT_00766ca8
    JMP 0x00432751                      ; 00432c6a
        ;   XREF to: 00432751 (UNCONDITIONAL_JUMP)  ; LAB_00432751
    CMP EBX,ECX                         ; 00432c6f
        ;   Label: LAB_00432c6f
    JLE 0x00432751                      ; 00432c71
        ;   XREF to: 00432751 (CONDITIONAL_JUMP)  ; LAB_00432751
    JMP 0x0043274e                      ; 00432c77
        ;   XREF to: 0043274e (UNCONDITIONAL_JUMP)  ; LAB_0043274e


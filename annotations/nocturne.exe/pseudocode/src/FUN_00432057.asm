; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00432057(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766c80
;   undefined4 DAT_00766c84
;   undefined4 DAT_007672f4
;
; Called Functions:
;   engine_clipper.c_interpolateVertexNearClip_FUN_00431930
;
; *****************************************************************************

section .text

    MOV ECX,0x30                        ; 00432057
        ;   Label: FUN_00432057
    MOV ESI,EDX                         ; 0043205c
    ADD EDI,0x766c74                    ; 0043205e | DAT_00766c74
    TEST EDI,0x7                        ; 00432064
    JZ 0x00432072                       ; 0043206a
        ;   XREF to: 00432072 (CONDITIONAL_JUMP)  ; LAB_00432072
    MOVSD ES:EDI,ESI                    ; 0043206c | DAT_00766c74
    SUB ECX,0x4                         ; 0043206d
    JLE 0x0043208f                      ; 00432070
        ;   XREF to: 0043208f (CONDITIONAL_JUMP)  ; LAB_0043208f
    SUB ECX,0x8                         ; 00432072
        ;   Label: LAB_00432072
    JL 0x00432083                       ; 00432075
        ;   XREF to: 00432083 (CONDITIONAL_JUMP)  ; LAB_00432083
    FILD qword ptr [ESI]                ; 00432077
    ADD ESI,0x8                         ; 00432079
    FISTP qword ptr [EDI]               ; 0043207c | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 0043207e
    JMP 0x00432072                      ; 00432081
        ;   XREF to: 00432072 (UNCONDITIONAL_JUMP)  ; LAB_00432072
    ADD ECX,0x8                         ; 00432083
        ;   Label: LAB_00432083
    JLE 0x0043208f                      ; 00432086
        ;   XREF to: 0043208f (CONDITIONAL_JUMP)  ; LAB_0043208f
    MOVSD ES:EDI,ESI                    ; 00432088 | DAT_00766c80
    SUB ECX,0x4                         ; 00432089
    JLE 0x0043208f                      ; 0043208c
        ;   XREF to: 0043208f (CONDITIONAL_JUMP)  ; LAB_0043208f
    MOVSD ES:EDI,ESI                    ; 0043208e | DAT_00766c84
    INC dword ptr [0x00766c70]          ; 0043208f | DAT_00766c70
        ;   Label: LAB_0043208f
    MOV ECX,dword ptr [0x007672f4]      ; 00432095 | DAT_007672f4
        ;   Label: caseD_3
    INC EBX                             ; 0043209b
    ADD EBP,0x30                        ; 0043209c
    CMP EBX,ECX                         ; 0043209f
    JGE 0x00431f96                      ; 004320a1
        ;   XREF to: 00431f96 (CONDITIONAL_JUMP)  ; LAB_00431f96
    JMP 0x00432002                      ; 004320a7
        ;   XREF to: 00432002 (UNCONDITIONAL_JUMP)  ; LAB_00432002
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 004320ac | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 004320b3 | DAT_00766c74
    PUSH EAX                            ; 004320b8
    PUSH EDX                            ; 004320b9
    MOV ESI,dword ptr [ESP + 0x8]       ; 004320ba
    PUSH ESI                            ; 004320be
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00431930 ; 004320bf
        ;   XREF to: 00431930 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexNearClip_FUN_00431930()
    MOV EDI,dword ptr [0x00766c70]      ; 004320c4 | DAT_00766c70
    INC EDI                             ; 004320ca
    ADD ESP,0xc                         ; 004320cb
    MOV dword ptr [0x00766c70],EDI      ; 004320ce | DAT_00766c70
    JMP 0x00432095                      ; 004320d4
        ;   XREF to: 00432095 (UNCONDITIONAL_JUMP)  ; caseD_3


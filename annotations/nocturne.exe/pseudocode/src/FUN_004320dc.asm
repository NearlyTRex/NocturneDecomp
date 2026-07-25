; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004320dc(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766c80
;   undefined4 DAT_00766c84
;
; Called Functions:
;   engine_clipper.c_interpolateVertexNearClip_FUN_00431930
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 004320dc
        ;   Label: FUN_004320dc
    MOV ESI,EDX                         ; 004320e2
    ADD EDI,0x766c74                    ; 004320e4 | DAT_00766c74
    TEST EDI,0x7                        ; 004320ea
    JZ 0x004320f8                       ; 004320f0
        ;   XREF to: 004320f8 (CONDITIONAL_JUMP)  ; LAB_004320f8
    MOVSD ES:EDI,ESI                    ; 004320f2 | DAT_00766c74
    SUB ECX,0x4                         ; 004320f3
    JLE 0x00432115                      ; 004320f6
        ;   XREF to: 00432115 (CONDITIONAL_JUMP)  ; LAB_00432115
    SUB ECX,0x8                         ; 004320f8
        ;   Label: LAB_004320f8
    JL 0x00432109                       ; 004320fb
        ;   XREF to: 00432109 (CONDITIONAL_JUMP)  ; LAB_00432109
    FILD qword ptr [ESI]                ; 004320fd
    ADD ESI,0x8                         ; 004320ff
    FISTP qword ptr [EDI]               ; 00432102 | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 00432104
    JMP 0x004320f8                      ; 00432107
        ;   XREF to: 004320f8 (UNCONDITIONAL_JUMP)  ; LAB_004320f8
    ADD ECX,0x8                         ; 00432109
        ;   Label: LAB_00432109
    JLE 0x00432115                      ; 0043210c
        ;   XREF to: 00432115 (CONDITIONAL_JUMP)  ; LAB_00432115
    MOVSD ES:EDI,ESI                    ; 0043210e | DAT_00766c80
    SUB ECX,0x4                         ; 0043210f
    JLE 0x00432115                      ; 00432112
        ;   XREF to: 00432115 (CONDITIONAL_JUMP)  ; LAB_00432115
    MOVSD ES:EDI,ESI                    ; 00432114 | DAT_00766c84
    MOV ECX,dword ptr [0x00766c70]      ; 00432115 | DAT_00766c70
        ;   Label: LAB_00432115
    INC ECX                             ; 0043211b
    MOV dword ptr [0x00766c70],ECX      ; 0043211c | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 00432122
    ADD EAX,0x766c74                    ; 00432125 | DAT_00766c74
    PUSH EAX                            ; 0043212a
    MOV EDI,dword ptr [ESP + 0x4]       ; 0043212b
    PUSH EDI                            ; 0043212f
    PUSH EDX                            ; 00432130
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00431930 ; 00432131
        ;   XREF to: 00431930 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexNearClip_FUN_00431930()
    MOV EAX,[0x00766c70]                ; 00432136 | DAT_00766c70
    INC EAX                             ; 0043213b
    ADD ESP,0xc                         ; 0043213c
    MOV [0x00766c70],EAX                ; 0043213f | DAT_00766c70
    JMP 0x00432095                      ; 00432144
        ;   XREF to: 00432095 (UNCONDITIONAL_JUMP)  ; caseD_3


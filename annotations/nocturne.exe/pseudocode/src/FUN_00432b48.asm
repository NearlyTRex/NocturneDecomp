; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00432b48(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766c80
;   undefined4 DAT_00766c84
;   undefined4 DAT_007672f4
;   undefined8 DAT_00767328
;
; Called Functions:
;   engine_clipper.c_interpolateVertexNearClip_FUN_00431930
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 00432b48
        ;   Label: FUN_00432b48
    ADD EDI,0x766c74                    ; 00432b4e | DAT_00766c74
    MOV ESI,EBX                         ; 00432b54
    TEST EDI,0x7                        ; 00432b56
    JZ 0x00432b64                       ; 00432b5c
        ;   XREF to: 00432b64 (CONDITIONAL_JUMP)  ; LAB_00432b64
    MOVSD ES:EDI,ESI                    ; 00432b5e | DAT_00766c74
    SUB ECX,0x4                         ; 00432b5f
    JLE 0x00432b81                      ; 00432b62
        ;   XREF to: 00432b81 (CONDITIONAL_JUMP)  ; LAB_00432b81
    SUB ECX,0x8                         ; 00432b64
        ;   Label: LAB_00432b64
    JL 0x00432b75                       ; 00432b67
        ;   XREF to: 00432b75 (CONDITIONAL_JUMP)  ; LAB_00432b75
    FILD qword ptr [ESI]                ; 00432b69
    ADD ESI,0x8                         ; 00432b6b
    FISTP qword ptr [EDI]               ; 00432b6e | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 00432b70
    JMP 0x00432b64                      ; 00432b73
        ;   XREF to: 00432b64 (UNCONDITIONAL_JUMP)  ; LAB_00432b64
    ADD ECX,0x8                         ; 00432b75
        ;   Label: LAB_00432b75
    JLE 0x00432b81                      ; 00432b78
        ;   XREF to: 00432b81 (CONDITIONAL_JUMP)  ; LAB_00432b81
    MOVSD ES:EDI,ESI                    ; 00432b7a | DAT_00766c80
    SUB ECX,0x4                         ; 00432b7b
    JLE 0x00432b81                      ; 00432b7e
        ;   XREF to: 00432b81 (CONDITIONAL_JUMP)  ; LAB_00432b81
    MOVSD ES:EDI,ESI                    ; 00432b80 | DAT_00766c84
    INC dword ptr [0x00766c70]          ; 00432b81 | DAT_00766c70
        ;   Label: LAB_00432b81
    MOV EDI,dword ptr [ESP + 0x138]     ; 00432b87
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x007672f4]      ; 00432b8e | DAT_007672f4
    INC EDI                             ; 00432b94
    ADD EBP,0x30                        ; 00432b95
    MOV dword ptr [ESP + 0x138],EDI     ; 00432b98
    CMP EDI,EDX                         ; 00432b9f
    JGE 0x00432720                      ; 00432ba1
        ;   XREF to: 00432720 (CONDITIONAL_JUMP)  ; LAB_00432720
    JMP 0x00432af5                      ; 00432ba7
        ;   XREF to: 00432af5 (UNCONDITIONAL_JUMP)  ; LAB_00432af5
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 00432bac | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 00432bb3 | DAT_00766c74
    PUSH EAX                            ; 00432bb8 | DAT_00766c74
    PUSH EBX                            ; 00432bb9 | DAT_00767328
    PUSH EDX                            ; 00432bba
    CALL engine_clipper.c_interpolateVertexNearClip_FUN_00431930 ; 00432bbb
        ;   XREF to: 00431930 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexNearClip_FUN_00431930()
    MOV EBX,dword ptr [0x00766c70]      ; 00432bc0 | DAT_00766c70
    INC EBX                             ; 00432bc6
    ADD ESP,0xc                         ; 00432bc7
    MOV dword ptr [0x00766c70],EBX      ; 00432bca | DAT_00766c70
    JMP 0x00432b87                      ; 00432bd0
        ;   XREF to: 00432b87 (UNCONDITIONAL_JUMP)  ; caseD_3


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004348ca(void)
;
;
; Referenced Globals:
;   undefined4 caseD_3
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766c78+1
;   undefined4 DAT_00766ca4
;   undefined4 DAT_00766ca8
;   undefined4 DAT_00766cac
;
; Called Functions:
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 004348ca
        ;   Label: FUN_004348ca
    MOV ESI,EDX                         ; 004348d0
    ADD EDI,0x766c74                    ; 004348d2 | DAT_00766c74
    PUSH EDI                            ; 004348d8
    MOV EAX,ECX                         ; 004348d9
    SHR ECX,0x2                         ; 004348db
    MOVSD.REP ES:EDI,ESI                ; 004348de | DAT_00766c74 | DAT_00766c78
    MOV CL,AL                           ; 004348e0
    AND CL,0x3                          ; 004348e2
    MOVSB.REP ES:EDI,ESI                ; 004348e5 | DAT_00766c78 | DAT_00766c78+1
    POP EDI                             ; 004348e7
    MOV ECX,dword ptr [0x00766c70]      ; 004348e8 | DAT_00766c70
    INC ECX                             ; 004348ee
    MOV dword ptr [0x00766c70],ECX      ; 004348ef | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 004348f5
    ADD EAX,0x766c74                    ; 004348f8 | DAT_00766c74
    PUSH EAX                            ; 004348fd
    PUSH EBP                            ; 004348fe
    PUSH EDX                            ; 004348ff
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30 ; 00434900
        ;   XREF to: 00433b30 (UNCONDITIONAL_CALL)  ; undefined engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_00433b30()
    MOV EDI,dword ptr [0x00766c70]      ; 00434905 | DAT_00766c70
    INC EDI                             ; 0043490b
    ADD ESP,0xc                         ; 0043490c
    MOV dword ptr [0x00766c70],EDI      ; 0043490f | DAT_00766c70
    JMP 0x004346bf                      ; 00434915
        ;   XREF to: 004346bf (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP ECX,dword ptr [EAX]             ; 0043491a | DAT_00766ca4
        ;   Label: LAB_0043491a
    JGE 0x00434925                      ; 0043491c
        ;   XREF to: 00434925 (CONDITIONAL_JUMP)  ; LAB_00434925
    MOV dword ptr [EAX],ECX             ; 0043491e | DAT_00766ca4
    JMP 0x00434706                      ; 00434920
        ;   XREF to: 00434706 (UNCONDITIONAL_JUMP)  ; LAB_00434706
    MOV EDX,ECX                         ; 00434925
        ;   Label: LAB_00434925
    MOV ESI,dword ptr [EAX]             ; 00434927 | DAT_00766ca4
    NEG EDX                             ; 00434929
    CMP EDX,ESI                         ; 0043492b
    JLE 0x00434936                      ; 0043492d
        ;   XREF to: 00434936 (CONDITIONAL_JUMP)  ; LAB_00434936
    MOV dword ptr [EAX],EDX             ; 0043492f | DAT_00766ca4
    JMP 0x00434706                      ; 00434931
        ;   XREF to: 00434706 (UNCONDITIONAL_JUMP)  ; LAB_00434706
    MOV EDI,dword ptr [EAX + 0x8]       ; 00434936 | DAT_00766cac
        ;   Label: LAB_00434936
    MOV ECX,dword ptr [EAX + 0x4]       ; 00434939 | DAT_00766ca8
    CMP ECX,EDI                         ; 0043493c
    JLE 0x00434948                      ; 0043493e
        ;   XREF to: 00434948 (CONDITIONAL_JUMP)  ; LAB_00434948
    MOV dword ptr [EAX + 0x4],EDI       ; 00434940 | DAT_00766ca8
    JMP 0x00434706                      ; 00434943
        ;   XREF to: 00434706 (UNCONDITIONAL_JUMP)  ; LAB_00434706
    CMP EDX,ECX                         ; 00434948
        ;   Label: LAB_00434948
    JLE 0x00434706                      ; 0043494a
        ;   XREF to: 00434706 (CONDITIONAL_JUMP)  ; LAB_00434706
    MOV dword ptr [EAX + 0x4],EDX       ; 00434950 | DAT_00766ca8
    JMP 0x00434706                      ; 00434953
        ;   XREF to: 00434706 (UNCONDITIONAL_JUMP)  ; LAB_00434706


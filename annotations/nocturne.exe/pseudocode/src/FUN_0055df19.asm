; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055df19(void)
;
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
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 0055df19
        ;   Label: FUN_0055df19
    MOV ESI,EDX                         ; 0055df1f
    ADD EDI,0x766c74                    ; 0055df21 | DAT_00766c74
    TEST EDI,0x7                        ; 0055df27
    JZ 0x0055df35                       ; 0055df2d
        ;   XREF to: 0055df35 (CONDITIONAL_JUMP)  ; LAB_0055df35
    MOVSD ES:EDI,ESI                    ; 0055df2f | DAT_00766c74
    SUB ECX,0x4                         ; 0055df30
    JLE 0x0055df52                      ; 0055df33
        ;   XREF to: 0055df52 (CONDITIONAL_JUMP)  ; LAB_0055df52
    SUB ECX,0x8                         ; 0055df35
        ;   Label: LAB_0055df35
    JL 0x0055df46                       ; 0055df38
        ;   XREF to: 0055df46 (CONDITIONAL_JUMP)  ; LAB_0055df46
    FILD qword ptr [ESI]                ; 0055df3a
    ADD ESI,0x8                         ; 0055df3c
    FISTP qword ptr [EDI]               ; 0055df3f | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 0055df41
    JMP 0x0055df35                      ; 0055df44
        ;   XREF to: 0055df35 (UNCONDITIONAL_JUMP)  ; LAB_0055df35
    ADD ECX,0x8                         ; 0055df46
        ;   Label: LAB_0055df46
    JLE 0x0055df52                      ; 0055df49
        ;   XREF to: 0055df52 (CONDITIONAL_JUMP)  ; LAB_0055df52
    MOVSD ES:EDI,ESI                    ; 0055df4b | DAT_00766c80
    SUB ECX,0x4                         ; 0055df4c
    JLE 0x0055df52                      ; 0055df4f
        ;   XREF to: 0055df52 (CONDITIONAL_JUMP)  ; LAB_0055df52
    MOVSD ES:EDI,ESI                    ; 0055df51 | DAT_00766c84
    MOV ECX,dword ptr [0x00766c70]      ; 0055df52 | DAT_00766c70
        ;   Label: LAB_0055df52
    INC ECX                             ; 0055df58
    MOV dword ptr [0x00766c70],ECX      ; 0055df59 | DAT_00766c70
    IMUL EAX,ECX,0x30                   ; 0055df5f
    ADD EAX,0x766c74                    ; 0055df62 | DAT_00766c74
    PUSH EAX                            ; 0055df67
    PUSH EBP                            ; 0055df68
    PUSH EDX                            ; 0055df69
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0 ; 0055df6a
        ;   XREF to: 0055d8f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0()
    MOV EDI,dword ptr [0x00766c70]      ; 0055df6f | DAT_00766c70
    INC EDI                             ; 0055df75
    ADD ESP,0xc                         ; 0055df76
    MOV dword ptr [0x00766c70],EDI      ; 0055df79 | DAT_00766c70
    JMP 0x0055decd                      ; 0055df7f
        ;   XREF to: 0055decd (UNCONDITIONAL_JUMP)  ; caseD_3


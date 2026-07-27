; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_xform_cpp_FUN_0055de8e(void)
;
; Parameters:
; undefined4       Stack[0x0]:4   local_res0
;
; Referenced Globals:
;   undefined4 DAT_00766c70
;   undefined4 DAT_00766c74
;   undefined4 DAT_00766c78
;   undefined4 DAT_00766c80
;   undefined4 DAT_00766c84
;   undefined4 DAT_02de313c
;
; Called Functions:
;   core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0
;
; *****************************************************************************

section .text

    XOR byte ptr [ECX + 0x30],BH        ; 0055de8e
        ;   Label: core_xform.cpp_FUN_0055de8e
    MOV ESI,EDX                         ; 0055de94
    ADD EDI,0x766c74                    ; 0055de96 | DAT_00766c74
    TEST EDI,0x7                        ; 0055de9c
    JZ 0x0055deaa                       ; 0055dea2
        ;   XREF to: 0055deaa (CONDITIONAL_JUMP)  ; LAB_0055deaa
    MOVSD ES:EDI,ESI                    ; 0055dea4 | DAT_00766c74
    SUB ECX,0x4                         ; 0055dea5
    JLE 0x0055dec7                      ; 0055dea8
        ;   XREF to: 0055dec7 (CONDITIONAL_JUMP)  ; LAB_0055dec7
    SUB ECX,0x8                         ; 0055deaa
        ;   Label: LAB_0055deaa
    JL 0x0055debb                       ; 0055dead
        ;   XREF to: 0055debb (CONDITIONAL_JUMP)  ; LAB_0055debb
    FILD qword ptr [ESI]                ; 0055deaf
    ADD ESI,0x8                         ; 0055deb1
    FISTP qword ptr [EDI]               ; 0055deb4 | DAT_00766c78 | DAT_00766c80 | DAT_00766c74
    ADD EDI,0x8                         ; 0055deb6
    JMP 0x0055deaa                      ; 0055deb9
        ;   XREF to: 0055deaa (UNCONDITIONAL_JUMP)  ; LAB_0055deaa
    ADD ECX,0x8                         ; 0055debb
        ;   Label: LAB_0055debb
    JLE 0x0055dec7                      ; 0055debe
        ;   XREF to: 0055dec7 (CONDITIONAL_JUMP)  ; LAB_0055dec7
    MOVSD ES:EDI,ESI                    ; 0055dec0 | DAT_00766c80
    SUB ECX,0x4                         ; 0055dec1
    JLE 0x0055dec7                      ; 0055dec4
        ;   XREF to: 0055dec7 (CONDITIONAL_JUMP)  ; LAB_0055dec7
    MOVSD ES:EDI,ESI                    ; 0055dec6 | DAT_00766c84
    INC dword ptr [0x00766c70]          ; 0055dec7 | DAT_00766c70
        ;   Label: LAB_0055dec7
    MOV ESI,dword ptr [ESP]             ; 0055decd
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x02de313c]      ; 0055ded0 | DAT_02de313c
    INC ESI                             ; 0055ded6
    ADD EBX,0x30                        ; 0055ded7
    MOV dword ptr [ESP],ESI             ; 0055deda
    CMP ESI,EDI                         ; 0055dedd
    JL 0x0055de3f                       ; 0055dedf
        ;   XREF to: 0055de3f (CONDITIONAL_JUMP)  ; LAB_0055de3f
    ADD ESP,0x4                         ; 0055dee5
        ;   Label: LAB_0055dee5
    POP EBP                             ; 0055dee8
    POP EDI                             ; 0055dee9
    POP ESI                             ; 0055deea
    POP EBX                             ; 0055deeb
    RET                                 ; 0055deec
    IMUL EAX,dword ptr [0x00766c70],0x30 ; 0055deed | DAT_00766c70
        ;   Label: caseD_1
    ADD EAX,0x766c74                    ; 0055def4 | DAT_00766c74
    PUSH EAX                            ; 0055def9
    PUSH EDX                            ; 0055defa
    PUSH EBP                            ; 0055defb
    CALL core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0 ; 0055defc
        ;   XREF to: 0055d8f0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_clipInterpolateBottomPlane_FUN_0055d8f0()
    MOV ESI,dword ptr [0x00766c70]      ; 0055df01 | DAT_00766c70
    INC ESI                             ; 0055df07
    ADD ESP,0xc                         ; 0055df08
    MOV dword ptr [0x00766c70],ESI      ; 0055df0b | DAT_00766c70
    JMP 0x0055decd                      ; 0055df11
        ;   XREF to: 0055decd (UNCONDITIONAL_JUMP)  ; caseD_3


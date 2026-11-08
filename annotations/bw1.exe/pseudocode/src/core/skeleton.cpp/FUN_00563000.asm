; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00563000(int param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_0056b650 at 0056b6de
;
; Referenced Globals:
;   undefined4 DAT_005f1b41
;   undefined4 DAT_005f1b44
;   TerminatedCString s_core_skeleton_cpp_005f1b49
;   TerminatedCString s_CSkeleton_load_Can_t_ope_005f1b5e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00479180
;   FUN_005030e0
;   FUN_00563090
;   FUN_005c0d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563000
        ;   Label: FUN_00563000
    PUSH ESI                            ; 00563001
    PUSH EDI                            ; 00563002
    MOV EDI,dword ptr [ESP + 0x10]      ; 00563003
    MOV ESI,dword ptr [ESP + 0x14]      ; 00563007
    PUSH 0x5f1b41                       ; 0056300b | DAT_005f1b41
    PUSH ESI                            ; 00563010
    PUSH 0x5f1b44                       ; 00563011 | DAT_005f1b44
    CALL FUN_00479180                   ; 00563016
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; undefined FUN_00479180()
    ADD ESP,0xc                         ; 0056301b
    MOV EBX,EAX                         ; 0056301e
    TEST EAX,EAX                        ; 00563020
    JZ 0x0056305b                       ; 00563022
        ;   XREF to: 0056305b (CONDITIONAL_JUMP)  ; LAB_0056305b
    PUSH EBX                            ; 00563024
        ;   Label: LAB_00563024
    PUSH EDI                            ; 00563025
    CALL FUN_00563090                   ; 00563026
        ;   XREF to: 00563090 (UNCONDITIONAL_CALL)  ; undefined FUN_00563090()
    ADD ESP,0x8                         ; 0056302b
    ADD EDI,0x1de28                     ; 0056302e
    PUSH EDI                            ; 00563034
    MOV AL,byte ptr [ESI]               ; 00563035
        ;   Label: LAB_00563035
    MOV byte ptr [EDI],AL               ; 00563037
    CMP AL,0x0                          ; 00563039
    JZ 0x0056304d                       ; 0056303b
        ;   XREF to: 0056304d (CONDITIONAL_JUMP)  ; LAB_0056304d
    MOV AL,byte ptr [ESI + 0x1]         ; 0056303d
    ADD ESI,0x2                         ; 00563040
    MOV byte ptr [EDI + 0x1],AL         ; 00563043
    ADD EDI,0x2                         ; 00563046
    CMP AL,0x0                          ; 00563049
    JNZ 0x00563035                      ; 0056304b
        ;   XREF to: 00563035 (CONDITIONAL_JUMP)  ; LAB_00563035
    POP EDI                             ; 0056304d
        ;   Label: LAB_0056304d
    PUSH EBX                            ; 0056304e
    CALL FUN_005c0d10                   ; 0056304f
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0d10()
    ADD ESP,0x4                         ; 00563054
    POP EDI                             ; 00563057
    POP ESI                             ; 00563058
    POP EBX                             ; 00563059
    RET                                 ; 0056305a
    PUSH ESI                            ; 0056305b
        ;   Label: LAB_0056305b
    MOV EDX,0x5f1b49                    ; 0056305c | = "..\\core\\skeleton.cpp"
    MOV ECX,0x101                       ; 00563061
    PUSH 0x5f1b5e                       ; 00563066 | = "CSkeleton::load - Can't open %s"
    MOV dword ptr [0x01d1d400],EDX      ; 0056306b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00563071 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00563077
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x8                         ; 0056307c
    JMP 0x00563024                      ; 0056307f
        ;   XREF to: 00563024 (UNCONDITIONAL_JUMP)  ; LAB_00563024


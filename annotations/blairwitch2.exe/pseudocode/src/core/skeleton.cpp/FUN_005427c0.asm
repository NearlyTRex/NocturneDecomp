; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005427c0(int param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_00548e80 at 00548f06
;
; Referenced Globals:
;   undefined4 DAT_005e6e17
;   TerminatedCString s_models_005e6e1a
;   TerminatedCString s_core_skeleton_cpp_005e6e21
;   TerminatedCString s_CDeformableModel_load_Ca_005e6e36
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00460c70
;   FUN_004e4500
;   FUN_00542850
;   FUN_005b89c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005427c0
        ;   Label: FUN_005427c0
    PUSH ESI                            ; 005427c1
    PUSH EDI                            ; 005427c2
    MOV EDI,dword ptr [ESP + 0x10]      ; 005427c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005427c7
    PUSH 0x5e6e17                       ; 005427cb | DAT_005e6e17
    PUSH ESI                            ; 005427d0
    PUSH 0x5e6e1a                       ; 005427d1 | = "models"
    CALL FUN_00460c70                   ; 005427d6
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; undefined FUN_00460c70()
    ADD ESP,0xc                         ; 005427db
    MOV EBX,EAX                         ; 005427de
    TEST EAX,EAX                        ; 005427e0
    JZ 0x0054281b                       ; 005427e2
        ;   XREF to: 0054281b (CONDITIONAL_JUMP)  ; LAB_0054281b
    PUSH EBX                            ; 005427e4
        ;   Label: LAB_005427e4
    PUSH EDI                            ; 005427e5
    CALL FUN_00542850                   ; 005427e6
        ;   XREF to: 00542850 (UNCONDITIONAL_CALL)  ; undefined FUN_00542850()
    ADD ESP,0x8                         ; 005427eb
    ADD EDI,0x2a70                      ; 005427ee
    PUSH EDI                            ; 005427f4
    MOV AL,byte ptr [ESI]               ; 005427f5
        ;   Label: LAB_005427f5
    MOV byte ptr [EDI],AL               ; 005427f7
    CMP AL,0x0                          ; 005427f9
    JZ 0x0054280d                       ; 005427fb
        ;   XREF to: 0054280d (CONDITIONAL_JUMP)  ; LAB_0054280d
    MOV AL,byte ptr [ESI + 0x1]         ; 005427fd
    ADD ESI,0x2                         ; 00542800
    MOV byte ptr [EDI + 0x1],AL         ; 00542803
    ADD EDI,0x2                         ; 00542806
    CMP AL,0x0                          ; 00542809
    JNZ 0x005427f5                      ; 0054280b
        ;   XREF to: 005427f5 (CONDITIONAL_JUMP)  ; LAB_005427f5
    POP EDI                             ; 0054280d
        ;   Label: LAB_0054280d
    PUSH EBX                            ; 0054280e
    CALL FUN_005b89c0                   ; 0054280f
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b89c0()
    ADD ESP,0x4                         ; 00542814
    POP EDI                             ; 00542817
    POP ESI                             ; 00542818
    POP EBX                             ; 00542819
    RET                                 ; 0054281a
    PUSH ESI                            ; 0054281b
        ;   Label: LAB_0054281b
    MOV EDX,0x5e6e21                    ; 0054281c | = "..\\core\\skeleton.cpp"
    MOV ECX,0x4c0                       ; 00542821
    PUSH 0x5e6e36                       ; 00542826 | = "CDeformableModel::load - Can't open %s"
    MOV dword ptr [0x01d046a0],EDX      ; 0054282b | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00542831 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00542837
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 0054283c
    JMP 0x005427e4                      ; 0054283f
        ;   XREF to: 005427e4 (UNCONDITIONAL_JUMP)  ; LAB_005427e4


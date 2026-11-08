; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00569a10(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00430060 at 004301a5
;   FUN_00569810 at 0056984b
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005f2539
;   TerminatedCString s_CDeformableModelInstance_005f254e
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_005030e0
;   FUN_005640d0
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569a10
        ;   Label: FUN_00569a10
    PUSH EDI                            ; 00569a11
    PUSH EBP                            ; 00569a12
    MOV EBX,dword ptr [ESP + 0x10]      ; 00569a13
    CMP dword ptr [EBX + 0x2320],0x0    ; 00569a17
    JL 0x00569a55                       ; 00569a1e
        ;   XREF to: 00569a55 (CONDITIONAL_JUMP)  ; LAB_00569a55
    MOV EDI,dword ptr [ESP + 0x18]      ; 00569a20
        ;   Label: LAB_00569a20
    PUSH EDI                            ; 00569a24
    MOV EBP,dword ptr [ESP + 0x18]      ; 00569a25
    PUSH EBP                            ; 00569a29
    LEA EAX,[EBX + 0x2230]              ; 00569a2a
    PUSH EAX                            ; 00569a30
    LEA EAX,[EBX + 0x2140]              ; 00569a31
    PUSH EAX                            ; 00569a37
    MOV EAX,dword ptr [EBX + 0x2320]    ; 00569a38
    PUSH EAX                            ; 00569a3e
    PUSH EBX                            ; 00569a3f
    CALL FUN_00569eb0                   ; 00569a40
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    ADD ESP,0x4                         ; 00569a45
    PUSH EAX                            ; 00569a48
    CALL FUN_005640d0                   ; 00569a49
        ;   XREF to: 005640d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005640d0()
    ADD ESP,0x18                        ; 00569a4e
    POP EBP                             ; 00569a51
    POP EDI                             ; 00569a52
    POP EBX                             ; 00569a53
    RET                                 ; 00569a54
    PUSH ESI                            ; 00569a55
        ;   Label: LAB_00569a55
    MOV ECX,0x5f2539                    ; 00569a56 | = "..\\core\\skeleton.cpp"
    MOV ESI,0xd42                       ; 00569a5b
    PUSH 0x5f254e                       ; 00569a60 | = "CDeformableModelInstance::renderPolyg..."
    MOV dword ptr [0x01d1d400],ECX      ; 00569a65 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00569a6b | DAT_01d1d404
    CALL FUN_005030e0                   ; 00569a71
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00569a76
    POP ESI                             ; 00569a79
    JMP 0x00569a20                      ; 00569a7a
        ;   XREF to: 00569a20 (UNCONDITIONAL_JUMP)  ; LAB_00569a20


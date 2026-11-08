; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a48d0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f040a
;   TerminatedCString s_Animation_005f0410
;
; Called Functions:
;   FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a48d0
        ;   Label: FUN_005a48d0
    PUSH ESI                            ; 005a48d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a48d2
    PUSH 0x5f040a                       ; 005a48d6 | = "Death"
    LEA EBX,[ESI + 0x10af8]             ; 005a48db
    PUSH EBX                            ; 005a48e1
    CALL FUN_0059daa0                   ; 005a48e2
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a48e7
    TEST EAX,EAX                        ; 005a48ea
    JZ 0x005a48f1                       ; 005a48ec
        ;   XREF to: 005a48f1 (CONDITIONAL_JUMP)  ; LAB_005a48f1
    POP ESI                             ; 005a48ee
        ;   Label: LAB_005a48ee
    POP EBX                             ; 005a48ef
    PUSH 0x5f0410                       ; 005a48f1 | = "Animation"
        ;   Label: LAB_005a48f1
    PUSH EBX                            ; 005a48f6
    CALL FUN_0059daa0                   ; 005a48f7
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005a48fc
    TEST EAX,EAX                        ; 005a48ff
    JNZ 0x005a48ee                      ; 005a4901
        ;   XREF to: 005a48ee (CONDITIONAL_JUMP)  ; LAB_005a48ee
    PUSH ESI                            ; 005a4903
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a4904
    CALL dword ptr [EAX + 0x17c]        ; 005a490a
    ADD ESP,0x4                         ; 005a4910
    POP ESI                             ; 005a4913
    POP EBX                             ; 005a4914
    RET                                 ; 005a4915


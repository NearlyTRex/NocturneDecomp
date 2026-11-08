; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447450(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   FUN_00492ff0 at 00492ff6
;
; Referenced Globals:
;   undefined4 s_whoGoesHere_005cea69+1
;   TerminatedCString s_whatEvent_005cea76
;   TerminatedCString s_destActor_005cea80
;   TerminatedCString s_destClass_005cea8a
;   TerminatedCString s_persistantEventFlag_005cea94
;   undefined4 DAT_0060a024
;
; Called Functions:
;   FUN_0040b730
;   FUN_0040b960
;   FUN_0040b9e0
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447450
        ;   Label: FUN_00447450
    SUB ESP,0x100                       ; 00447451
    MOV EBX,dword ptr [ESP + 0x108]     ; 00447457
    PUSH EBX                            ; 0044745e
    CALL FUN_0040c330                   ; 0044745f
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    MOV EDX,dword ptr [0x0060a024]      ; 00447464 | DAT_0060a024
    ADD ESP,0x4                         ; 0044746a
    CMP EDX,0x2                         ; 0044746d
    JL 0x004474d3                       ; 00447470
        ;   XREF to: 004474d3 (CONDITIONAL_JUMP)  ; LAB_004474d3
    PUSH 0x5cea76                       ; 00447472 | = "whatEvent"
        ;   Label: LAB_00447472
    LEA EAX,[EBX + 0x2e4]               ; 00447477
    PUSH EAX                            ; 0044747d
    CALL FUN_0040b730                   ; 0044747e
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    MOV ECX,dword ptr [0x0060a024]      ; 00447483 | DAT_0060a024
    ADD ESP,0x8                         ; 00447489
    CMP ECX,0x2                         ; 0044748c
    JL 0x004474a5                       ; 0044748f
        ;   XREF to: 004474a5 (CONDITIONAL_JUMP)  ; LAB_004474a5
    PUSH 0x5cea80                       ; 00447491 | = "destActor"
    LEA EAX,[EBX + 0x2b4]               ; 00447496
    PUSH EAX                            ; 0044749c
    CALL FUN_0040b9e0                   ; 0044749d
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b9e0()
    ADD ESP,0x8                         ; 004474a2
    CMP dword ptr [0x0060a024],0x3      ; 004474a5 | DAT_0060a024
        ;   Label: LAB_004474a5
    JL 0x004474c2                       ; 004474ac
        ;   XREF to: 004474c2 (CONDITIONAL_JUMP)  ; LAB_004474c2
    PUSH 0x5cea8a                       ; 004474ae | = "destClass"
    LEA EAX,[EBX + 0x2b8]               ; 004474b3
    PUSH EAX                            ; 004474b9
    CALL FUN_0040b730                   ; 004474ba
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004474bf
    CMP dword ptr [0x0060a024],0x4      ; 004474c2 | DAT_0060a024
        ;   Label: LAB_004474c2
    JGE 0x004474f1                      ; 004474c9
        ;   XREF to: 004474f1 (CONDITIONAL_JUMP)  ; LAB_004474f1
    ADD ESP,0x100                       ; 004474cb
    POP EBX                             ; 004474d1
    RET                                 ; 004474d2
    PUSH 0x5cea6a                       ; 004474d3 | s_whoGoesHere_005cea69+1
        ;   Label: LAB_004474d3
    LEA EAX,[ESP + 0x4]                 ; 004474d8
    PUSH EAX                            ; 004474dc
    CALL FUN_0040b730                   ; 004474dd
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 004474e2
    MOV dword ptr [EBX + 0x2b4],0x0     ; 004474e5
    JMP 0x00447472                      ; 004474ef
        ;   XREF to: 00447472 (UNCONDITIONAL_JUMP)  ; LAB_00447472
    PUSH 0x5cea94                       ; 004474f1 | = "persistantEventFlag"
        ;   Label: LAB_004474f1
    ADD EBX,0x348                       ; 004474f6
    PUSH EBX                            ; 004474fc
    CALL FUN_0040b960                   ; 004474fd
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 00447502
    ADD ESP,0x100                       ; 00447505
    POP EBX                             ; 0044750b
    RET                                 ; 0044750c


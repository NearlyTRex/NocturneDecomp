; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc1a0(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5 )
;
;
; XREF[1]:
;   FUN_0040b9e0 at 0040ba52
;
; Referenced Globals:
;   undefined4 DAT_005de657
;   undefined4 DAT_005de65c
;   TerminatedCString s_s_005de661
;   undefined4 DAT_005de66a
;   TerminatedCString s_none_006182b0
;
; Called Functions:
;   FUN_005b8010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc1a0
        ;   Label: FUN_004fc1a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004fc1a1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fc1a5
    CMP EDX,0xff000000                  ; 004fc1a9
    JNC 0x004fc1e4                      ; 004fc1af
        ;   XREF to: 004fc1e4 (CONDITIONAL_JUMP)  ; LAB_004fc1e4
    MOV EAX,0x6182b0                    ; 004fc1b1 | = "(none)"
    TEST EDX,EDX                        ; 004fc1b6
    JZ 0x004fc1bc                       ; 004fc1b8
        ;   XREF to: 004fc1bc (CONDITIONAL_JUMP)  ; LAB_004fc1bc
    MOV EAX,EDX                         ; 004fc1ba
    PUSH EAX                            ; 004fc1bc | = "(none)"
        ;   Label: LAB_004fc1bc
    PUSH 0x5de65c                       ; 004fc1bd | DAT_005de65c
    PUSH EBX                            ; 004fc1c2
        ;   Label: LAB_004fc1c2
    CALL FUN_005b8010                   ; 004fc1c3
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0xc                         ; 004fc1c8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004fc1cb
    TEST EDX,EDX                        ; 004fc1cf
    JZ 0x004fc1ec                       ; 004fc1d1
        ;   XREF to: 004fc1ec (CONDITIONAL_JUMP)  ; LAB_004fc1ec
    PUSH EDX                            ; 004fc1d3
    PUSH 0x5de661                       ; 004fc1d4 | = "\t\t// %s\n"
    PUSH EBX                            ; 004fc1d9
    CALL FUN_005b8010                   ; 004fc1da
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0xc                         ; 004fc1df
    POP EBX                             ; 004fc1e2
    RET                                 ; 004fc1e3
    PUSH EDX                            ; 004fc1e4
        ;   Label: LAB_004fc1e4
    PUSH 0x5de657                       ; 004fc1e5 | DAT_005de657
    JMP 0x004fc1c2                      ; 004fc1ea
        ;   XREF to: 004fc1c2 (UNCONDITIONAL_JUMP)  ; LAB_004fc1c2
    PUSH 0x5de66a                       ; 004fc1ec | DAT_005de66a
        ;   Label: LAB_004fc1ec
    PUSH EBX                            ; 004fc1f1
    CALL FUN_005b8010                   ; 004fc1f2
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8010()
    ADD ESP,0x8                         ; 004fc1f7
    POP EBX                             ; 004fc1fa
    RET                                 ; 004fc1fb


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00488970(int param_1,undefined4 param_2)
;
;
; XREF[20]:
;   FUN_00411a10 at 004120ed
;   FUN_00412f40 at 00413816
;   FUN_004186c0 at 004190aa
;   FUN_0041dbe0 at 0041dd1a
;   FUN_00436e80 at 0043775a
;   FUN_004392b0 at 00439678
;   FUN_0045e360 at 0045e7c2
;   FUN_00462ff0 at 00463f98
;   FUN_0046d870 at 0046dd64
;   FUN_004c0050 at 004c071b
;   ... and 10 more
;
; Referenced Globals:
;   TerminatedCString s_Capture_005d2e0a
;   undefined4 DAT_006141f0
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6af0
;
; Called Functions:
;   FUN_00429f20
;   FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488970
        ;   Label: FUN_00488970
    MOV EBX,dword ptr [ESP + 0x8]       ; 00488971
    MOV EAX,[0x00616494]                ; 00488975 | DAT_00616494
    CMP dword ptr [EAX + 0x1f0],0x0     ; 0048897a | DAT_01cb6af0
    JNZ 0x0048899b                      ; 00488981
        ;   XREF to: 0048899b (CONDITIONAL_JUMP)  ; LAB_0048899b
    PUSH 0x5d2e0a                       ; 00488983 | = "Capture"
    MOV ECX,dword ptr [0x006141f0]      ; 00488988 | DAT_006141f0
    PUSH ECX                            ; 0048898e
    CALL FUN_0048e340                   ; 0048898f
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00488994
    TEST EAX,EAX                        ; 00488997
    JZ 0x004889ac                       ; 00488999
        ;   XREF to: 004889ac (CONDITIONAL_JUMP)  ; LAB_004889ac
    PUSH 0x0                            ; 0048899b
        ;   Label: LAB_0048899b
    PUSH dword ptr [ESP + 0x10]         ; 0048899d
    PUSH EBX                            ; 004889a1
    CALL FUN_00429f20                   ; 004889a2
        ;   XREF to: 00429f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00429f20()
    ADD ESP,0xc                         ; 004889a7
    POP EBX                             ; 004889aa
    RET                                 ; 004889ab
    LEA EAX,[EBX + 0x10a84]             ; 004889ac
        ;   Label: LAB_004889ac
    PUSH EAX                            ; 004889b2
    PUSH dword ptr [ESP + 0x10]         ; 004889b3
    PUSH EBX                            ; 004889b7
    CALL FUN_00429f20                   ; 004889b8
        ;   XREF to: 00429f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00429f20()
    ADD ESP,0xc                         ; 004889bd
    POP EBX                             ; 004889c0
    RET                                 ; 004889c1


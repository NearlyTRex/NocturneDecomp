; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d960(int param_1)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
;
; XREF[1]:
;   FUN_0049da10 at 0049dfce
;
; Referenced Globals:
;   string s_fangs_005827b8
;   undefined4 DAT_005b7620
;   undefined4 DAT_005baf90
;   undefined4 DAT_014b9900
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   FUN_0040e320
;   FUN_0040e340
;   FUN_0040e3c0
;   FUN_0040e710
;   FUN_0052ee70
;   FUN_00552e00
;   FUN_00553910
;   thunk_FUN_005533a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d960
        ;   Label: FUN_0049d960
    SUB ESP,0x14                        ; 0049d961
    CALL thunk_FUN_005533a0             ; 0049d964
        ;   XREF to: 00403770 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005533a0()
    CMP dword ptr [0x005b7620],0x1e0    ; 0049d969 | DAT_005b7620
    JNZ 0x0049d97f                      ; 0049d973
        ;   XREF to: 0049d97f (CONDITIONAL_JUMP)  ; LAB_0049d97f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0049d975
    CMP dword ptr [EAX + 0x8],0x20      ; 0049d979
    JZ 0x0049d993                       ; 0049d97d
        ;   XREF to: 0049d993 (CONDITIONAL_JUMP)  ; LAB_0049d993
    PUSH 0x20                           ; 0049d97f
        ;   Label: LAB_0049d97f
    PUSH 0x1e0                          ; 0049d981
    PUSH 0x280                          ; 0049d986
    CALL FUN_00552e00                   ; 0049d98b
        ;   XREF to: 00552e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00552e00()
    ADD ESP,0xc                         ; 0049d990
    MOV EAX,[0x005baf90]                ; 0049d993 | DAT_005baf90
        ;   Label: LAB_0049d993
    CMP dword ptr [EAX + 0x4],0x0       ; 0049d998 | DAT_01cc9454
    JZ 0x0049d9f9                       ; 0049d99c
        ;   XREF to: 0049d9f9 (CONDITIONAL_JUMP)  ; LAB_0049d9f9
    CALL FUN_0052ee70                   ; 0049d99e
        ;   XREF to: 0052ee70 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ee70()
        ;   Label: LAB_0049d99e
    MOV EAX,ESP                         ; 0049d9a3
    PUSH EAX                            ; 0049d9a5
    CALL FUN_0040e320                   ; 0049d9a6
        ;   XREF to: 0040e320 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e320()
    ADD ESP,0x4                         ; 0049d9ab
    PUSH 0x1e0                          ; 0049d9ae
    PUSH 0x280                          ; 0049d9b3
    PUSH 0x5827b8                       ; 0049d9b8 | = "fangs"
    LEA EAX,[ESP + 0xc]                 ; 0049d9bd
    PUSH EAX                            ; 0049d9c1
    CALL FUN_0040e3c0                   ; 0049d9c2
        ;   XREF to: 0040e3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e3c0()
    ADD ESP,0x10                        ; 0049d9c7
    PUSH 0x8000                         ; 0049d9ca
    PUSH 0x0                            ; 0049d9cf
    PUSH 0x0                            ; 0049d9d1
    LEA EAX,[ESP + 0xc]                 ; 0049d9d3
    PUSH EAX                            ; 0049d9d7
    CALL FUN_0040e710                   ; 0049d9d8
        ;   XREF to: 0040e710 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e710()
    ADD ESP,0x10                        ; 0049d9dd
    CALL FUN_00553910                   ; 0049d9e0
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; undefined FUN_00553910()
    PUSH 0x0                            ; 0049d9e5
    LEA EAX,[ESP + 0x4]                 ; 0049d9e7
    PUSH EAX                            ; 0049d9eb
    CALL FUN_0040e340                   ; 0049d9ec
        ;   XREF to: 0040e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0040e340()
    ADD ESP,0x8                         ; 0049d9f1
    ADD ESP,0x14                        ; 0049d9f4
    POP EBX                             ; 0049d9f7
    RET                                 ; 0049d9f8
    MOV EAX,[0x014b9900]                ; 0049d9f9 | DAT_014b9900
        ;   Label: LAB_0049d9f9
    MOV [0x01bcd070],EAX                ; 0049d9fe | DAT_01bcd070
    JMP 0x0049d99e                      ; 0049da03
        ;   XREF to: 0049d99e (UNCONDITIONAL_JUMP)  ; LAB_0049d99e


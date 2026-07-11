; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056fb98(void)
;
;
; XREF[1]:
;   FUN_0056af50 at 0056af58
;
; Referenced Globals:
;   void* PTR_GetConsoleMode_005754f0 = 00175c94
;   void* PTR_SetConsoleMode_00575588 = 00175f74
;   void* PTR_FUN_005c1ac0 = 005671e4
;   void* PTR_FUN_005c1ac4 = 005671e4
;   undefined4 DAT_005c1cf8
;   undefined4 DAT_005c1d54
;   undefined4 DAT_005c1d88
;
; Called Functions:
;   FUN_005671e4
;   FUN_0056fa80
;   FUN_005714e0
;   GetConsoleMode
;   SetConsoleMode
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fb98
        ;   Label: FUN_0056fb98
    PUSH ESI                            ; 0056fb99
    SUB ESP,0x4                         ; 0056fb9a
    MOV EAX,[0x005c1cf8]                ; 0056fb9d | DAT_005c1cf8
    TEST EAX,EAX                        ; 0056fba2
    JZ 0x0056fbb0                       ; 0056fba4
        ;   XREF to: 0056fbb0 (CONDITIONAL_JUMP)  ; LAB_0056fbb0
    XOR ESI,ESI                         ; 0056fba6
    MOV dword ptr [0x005c1cf8],ESI      ; 0056fba8 | DAT_005c1cf8
    JMP 0x0056fc1b                      ; 0056fbae
        ;   XREF to: 0056fc1b (UNCONDITIONAL_JUMP)  ; LAB_0056fc1b
    CMP dword ptr [0x005c1d88],0x0      ; 0056fbb0 | DAT_005c1d88
        ;   Label: LAB_0056fbb0
    JZ 0x0056fbd1                       ; 0056fbb7
        ;   XREF to: 0056fbd1 (CONDITIONAL_JUMP)  ; LAB_0056fbd1
    PUSH EAX                            ; 0056fbb9
    CALL dword ptr [0x005c1d54]         ; 0056fbba | DAT_005c1d54
    ADD ESP,0x4                         ; 0056fbc0
    PUSH EAX                            ; 0056fbc3
    CALL dword ptr [0x005c1d88]         ; 0056fbc4 | DAT_005c1d88
    ADD ESP,0x4                         ; 0056fbca
    MOV ESI,EAX                         ; 0056fbcd
    JMP 0x0056fc19                      ; 0056fbcf
        ;   XREF to: 0056fc19 (UNCONDITIONAL_JUMP)  ; LAB_0056fc19
    PUSH EAX                            ; 0056fbd1
        ;   Label: LAB_0056fbd1
    CALL dword ptr [0x005c1ac0]         ; 0056fbd2 | PTR_FUN_005c1ac0
    ADD ESP,0x4                         ; 0056fbd8
    CALL FUN_005714e0                   ; 0056fbdb
        ;   XREF to: 005714e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005714e0()
    MOV EBX,EAX                         ; 0056fbe0
    MOV EAX,ESP                         ; 0056fbe2
    PUSH EAX                            ; 0056fbe4
    PUSH EBX                            ; 0056fbe5
    CALL dword ptr CS:[0x5754f0]        ; 0056fbe6 | PTR_GetConsoleMode_005754f0
    PUSH 0x0                            ; 0056fbed
    PUSH EBX                            ; 0056fbef
    CALL dword ptr CS:[0x575588]        ; 0056fbf0 | PTR_SetConsoleMode_00575588
    PUSH EBX                            ; 0056fbf7
    CALL FUN_0056fa80                   ; 0056fbf8
        ;   XREF to: 0056fa80 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa80()
    ADD ESP,0x4                         ; 0056fbfd
    MOV ECX,dword ptr [ESP]             ; 0056fc00
    PUSH ECX                            ; 0056fc03
    PUSH EBX                            ; 0056fc04
    MOV ESI,EAX                         ; 0056fc05
    CALL dword ptr CS:[0x575588]        ; 0056fc07 | PTR_SetConsoleMode_00575588
    PUSH 0x0                            ; 0056fc0e
    CALL dword ptr [0x005c1ac4]         ; 0056fc10 | PTR_FUN_005c1ac4
    ADD ESP,0x4                         ; 0056fc16
    MOV EAX,ESI                         ; 0056fc19
        ;   Label: LAB_0056fc19
    ADD ESP,0x4                         ; 0056fc1b
        ;   Label: LAB_0056fc1b
    POP ESI                             ; 0056fc1e
    POP EBX                             ; 0056fc1f
    RET                                 ; 0056fc20


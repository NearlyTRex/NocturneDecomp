; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_stdio_c_WriteConsoleChar_FUN_0056fc30(int character)
;
; Parameters:
; int              Stack[0x4]:4   character
; Local Variables:
; undefined1       Stack[-0x8]:1  local_8
;
; XREF[1]:
;   crt_unknown.c_FUN_0056af50 at 0056af69
;
; Referenced Globals:
;   void* PTR_WriteConsoleA_005755e8 = 0017612e
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4 = 005671e4
;   undefined4 DAT_005c1d54
;   undefined4 DAT_005c1d90
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   crt_unknown.c_FUN_005714ec
;   WriteConsoleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056fc30
        ;   Label: crt_stdio.c_WriteConsoleChar_FUN_0056fc30
    SUB ESP,0x8                         ; 0056fc31
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056fc34
    MOV EDX,dword ptr [0x005c1d90]      ; 0056fc38 | DAT_005c1d90
    MOV byte ptr [ESP + 0x4],BL         ; 0056fc3e
    TEST EDX,EDX                        ; 0056fc42
    JZ 0x0056fc5e                       ; 0056fc44
        ;   XREF to: 0056fc5e (CONDITIONAL_JUMP)  ; LAB_0056fc5e
    PUSH 0x1                            ; 0056fc46
    CALL dword ptr [0x005c1d54]         ; 0056fc48 | DAT_005c1d54
    ADD ESP,0x4                         ; 0056fc4e
    PUSH EBX                            ; 0056fc51
    PUSH EAX                            ; 0056fc52
    CALL dword ptr [0x005c1d90]         ; 0056fc53 | DAT_005c1d90
    ADD ESP,0x8                         ; 0056fc59
    JMP 0x0056fc8f                      ; 0056fc5c
        ;   XREF to: 0056fc8f (UNCONDITIONAL_JUMP)  ; LAB_0056fc8f
    PUSH 0x1                            ; 0056fc5e
        ;   Label: LAB_0056fc5e
    CALL dword ptr [0x005c1ac0]         ; 0056fc60 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac0
    ADD ESP,0x4                         ; 0056fc66
    CALL crt_unknown.c_FUN_005714ec     ; 0056fc69
        ;   XREF to: 005714ec (UNCONDITIONAL_CALL)  ; HANDLE crt_unknown.c_FUN_005714ec()
    PUSH 0x0                            ; 0056fc6e
    LEA EDX,[ESP + 0x4]                 ; 0056fc70
    PUSH EDX                            ; 0056fc74
    PUSH 0x1                            ; 0056fc75
    LEA EDX,[ESP + 0x10]                ; 0056fc77
    PUSH EDX                            ; 0056fc7b
    PUSH EAX                            ; 0056fc7c
    CALL dword ptr CS:[0x5755e8]        ; 0056fc7d | PTR_WriteConsoleA_005755e8
    PUSH 0x1                            ; 0056fc84
    CALL dword ptr [0x005c1ac4]         ; 0056fc86 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ac4
    ADD ESP,0x4                         ; 0056fc8c
    MOV EAX,EBX                         ; 0056fc8f
        ;   Label: LAB_0056fc8f
    ADD ESP,0x8                         ; 0056fc91
    POP EBX                             ; 0056fc94
    RET                                 ; 0056fc95


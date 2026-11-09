; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_00573e00(int param_1)
;
;
; XREF[3]:
;   support_trstream.cpp_FUN_00573f50 at 00573f9b
;   support_trstream.cpp_FUN_00573fc0 at 0057404d
;   support_trstream.cpp_FUN_00574080 at 005740f1
;
; Referenced Globals:
;   TerminatedCString s_support_trstream_cpp_005d6e1c
;   TerminatedCString s_Out_of_memory_005d6e34
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a3650
;   support_trstream.cpp_FUN_00573e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573e00
        ;   Label: support_trstream.cpp_FUN_00573e00
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573e01
    PUSH EBX                            ; 00573e05
    CALL support_trstream.cpp_FUN_00573e70 ; 00573e06
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573e70()
    MOV dword ptr [EBX + 0x20],0x1000   ; 00573e0b
    MOV EAX,dword ptr [EBX + 0x20]      ; 00573e12
    ADD ESP,0x4                         ; 00573e15
    ADD EAX,0x1f                        ; 00573e18
    PUSH EAX                            ; 00573e1b
    CALL crt_unknown.c_FUN_005a3650     ; 00573e1c
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 00573e21
    MOV dword ptr [EBX + 0x14],EAX      ; 00573e24
    TEST EAX,EAX                        ; 00573e27
    JZ 0x00573e46                       ; 00573e29
        ;   XREF to: 00573e46 (CONDITIONAL_JUMP)  ; LAB_00573e46
    MOV EAX,dword ptr [EBX + 0x14]      ; 00573e2b
        ;   Label: LAB_00573e2b
    MOV dword ptr [EBX + 0x1c],0x0      ; 00573e2e
    ADD EAX,0x1f                        ; 00573e35
    MOV dword ptr [EBX + 0x24],0x0      ; 00573e38
    AND AL,0xe0                         ; 00573e3f
    MOV dword ptr [EBX + 0x18],EAX      ; 00573e41
    POP EBX                             ; 00573e44
    RET                                 ; 00573e45
    PUSH ESI                            ; 00573e46
        ;   Label: LAB_00573e46
    MOV ECX,0x5d6e1c                    ; 00573e47 | = "..\\support\\trstream.cpp"
    MOV ESI,0x62c                       ; 00573e4c
    PUSH 0x5d6e34                       ; 00573e51 | = "Out of memory"
    MOV dword ptr [0x01d71de0],ECX      ; 00573e56 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 00573e5c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00573e62
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00573e67
    POP ESI                             ; 00573e6a
    JMP 0x00573e2b                      ; 00573e6b
        ;   XREF to: 00573e2b (UNCONDITIONAL_JUMP)  ; LAB_00573e2b


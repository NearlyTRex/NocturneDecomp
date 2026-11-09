; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004b2e40(undefined4 param_1,int param_2,void *param_3,int param_4,int param_5,undefined4 param_6)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[6]:
;   core_game.cpp_FUN_004b47d0 at 004b48c6
;   core_game.cpp_FUN_004bfb50 at 004bfe3f
;   core_game.cpp_FUN_004bfee0 at 004c01f0
;   core_inv.cpp_CInventory_renderAllItems_FUN_004dda90 at 004ddc38
;   core_script.cpp_FUN_00528fc0 at 0052911e
;   shape_edittool.cpp_FUN_0047f4c0 at 0047f5ff
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   engine_font.cpp_FUN_004b2c10
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004b2e40
        ;   Label: engine_font.cpp_FUN_004b2e40
    PUSH EBP                            ; 004b2e41
    SUB ESP,0x4                         ; 004b2e42
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b2e45
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b2e49
    IMUL EAX,dword ptr [ESP + 0x20]     ; 004b2e4d
    PUSH EAX                            ; 004b2e52
    PUSH 0x0                            ; 004b2e53
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b2e55
    PUSH ECX                            ; 004b2e59
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004b2e5a
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004b2e5f
    TEST EDI,EDI                        ; 004b2e62
    JZ 0x004b2ec1                       ; 004b2e64
        ;   XREF to: 004b2ec1 (CONDITIONAL_JUMP)  ; LAB_004b2ec1
    PUSH ESI                            ; 004b2e66
    PUSH EBX                            ; 004b2e67
    MOV ESI,0x2f                        ; 004b2e68
    MOV EBP,dword ptr [ESP + 0x24]      ; 004b2e6d
    XOR EBX,EBX                         ; 004b2e71
    TEST EBP,EBP                        ; 004b2e73
    JLE 0x004b2eb7                      ; 004b2e75
        ;   XREF to: 004b2eb7 (CONDITIONAL_JUMP)  ; LAB_004b2eb7
    MOV EBP,dword ptr [ESP + 0x28]      ; 004b2e77
        ;   Label: LAB_004b2e77
    IMUL EBP,EBX                        ; 004b2e7b
    LEA EAX,[ESP + 0x8]                 ; 004b2e7e
    PUSH EAX                            ; 004b2e82
    PUSH ESI                            ; 004b2e83
    MOV ECX,dword ptr [ESP + 0x34]      ; 004b2e84
    PUSH ECX                            ; 004b2e88
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b2e89
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004b2e8d
    PUSH EAX                            ; 004b2e91
    ADD EBP,EDX                         ; 004b2e92
    PUSH EBP                            ; 004b2e94
    PUSH EDI                            ; 004b2e95
    MOV EDX,dword ptr [ESP + 0x30]      ; 004b2e96
    PUSH EDX                            ; 004b2e9a
    CALL engine_font.cpp_FUN_004b2c10   ; 004b2e9b
        ;   XREF to: 004b2c10 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004b2c10()
    ADD ESP,0x1c                        ; 004b2ea0
    ADD EDI,dword ptr [ESP + 0x8]       ; 004b2ea3
    CMP EAX,0x3                         ; 004b2ea7
    JNZ 0x004b2ec5                      ; 004b2eaa
        ;   XREF to: 004b2ec5 (CONDITIONAL_JUMP)  ; LAB_004b2ec5
    INC EBX                             ; 004b2eac
    AND SI,0xffef                       ; 004b2ead
    CMP EBX,dword ptr [ESP + 0x24]      ; 004b2eb1
    JL 0x004b2e77                       ; 004b2eb5
        ;   XREF to: 004b2e77 (CONDITIONAL_JUMP)  ; LAB_004b2e77
    MOV EAX,EBX                         ; 004b2eb7
        ;   Label: LAB_004b2eb7
    POP EBX                             ; 004b2eb9
    POP ESI                             ; 004b2eba
    ADD ESP,0x4                         ; 004b2ebb
        ;   Label: LAB_004b2ebb
    POP EBP                             ; 004b2ebe
    POP EDI                             ; 004b2ebf
    RET                                 ; 004b2ec0
    XOR EAX,EAX                         ; 004b2ec1
        ;   Label: LAB_004b2ec1
    JMP 0x004b2ebb                      ; 004b2ec3
        ;   XREF to: 004b2ebb (UNCONDITIONAL_JUMP)  ; LAB_004b2ebb
    TEST EAX,EAX                        ; 004b2ec5
        ;   Label: LAB_004b2ec5
    JNZ 0x004b2eda                      ; 004b2ec7
        ;   XREF to: 004b2eda (CONDITIONAL_JUMP)  ; LAB_004b2eda
    CMP byte ptr [EBP],0x0              ; 004b2ec9
    JZ 0x004b2eb7                       ; 004b2ecd
        ;   XREF to: 004b2eb7 (CONDITIONAL_JUMP)  ; LAB_004b2eb7
    INC EBX                             ; 004b2ecf
    MOV EAX,EBX                         ; 004b2ed0
    POP EBX                             ; 004b2ed2
    POP ESI                             ; 004b2ed3
    ADD ESP,0x4                         ; 004b2ed4
    POP EBP                             ; 004b2ed7
    POP EDI                             ; 004b2ed8
    RET                                 ; 004b2ed9
    INC EBX                             ; 004b2eda
        ;   Label: LAB_004b2eda
    CMP EBX,dword ptr [ESP + 0x24]      ; 004b2edb
    JL 0x004b2e77                       ; 004b2edf
        ;   XREF to: 004b2e77 (CONDITIONAL_JUMP)  ; LAB_004b2e77
    MOV EAX,EBX                         ; 004b2ee1
    POP EBX                             ; 004b2ee3
    POP ESI                             ; 004b2ee4
    ADD ESP,0x4                         ; 004b2ee5
    POP EBP                             ; 004b2ee8
    POP EDI                             ; 004b2ee9
    RET                                 ; 004b2eea


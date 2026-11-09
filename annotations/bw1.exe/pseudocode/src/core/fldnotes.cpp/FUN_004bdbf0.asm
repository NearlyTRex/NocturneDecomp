; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004bdbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   core_event.cpp_FUN_004a1d00 at 004a37bd
;
; Referenced Globals:
;   TerminatedCString s_No_such_entry_s_005e0143
;   TerminatedCString s_s_is_not_a_map_005e0156
;   TerminatedCString s_No_such_annotion_s_found_005e0168
;   undefined4 DAT_01cc4470
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bbfd0
;   core_fldnotes.cpp_FUN_004bc540
;   crt_unknown.c_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bdbf0
        ;   Label: core_fldnotes.cpp_FUN_004bdbf0
    PUSH ESI                            ; 004bdbf1
    PUSH EDI                            ; 004bdbf2
    PUSH EBP                            ; 004bdbf3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004bdbf4
    MOV EDX,dword ptr [0x01cc4470]      ; 004bdbf8 | DAT_01cc4470
    XOR EBP,EBP                         ; 004bdbfe
    XOR EBX,EBX                         ; 004bdc00
    TEST EDX,EDX                        ; 004bdc02
    JLE 0x004bdc7a                      ; 004bdc04
        ;   XREF to: 004bdc7a (CONDITIONAL_JUMP)  ; LAB_004bdc7a
    MOV ESI,0x1cc4474                   ; 004bdc0a
    PUSH EDI                            ; 004bdc0f
        ;   Label: LAB_004bdc0f
    PUSH ESI                            ; 004bdc10
    CALL core_fldnotes.cpp_FUN_004bbfd0 ; 004bdc11
        ;   XREF to: 004bbfd0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bbfd0()
    ADD ESP,0x8                         ; 004bdc16
    MOV EDX,EAX                         ; 004bdc19
    TEST EAX,EAX                        ; 004bdc1b
    JZ 0x004bdc69                       ; 004bdc1d
        ;   XREF to: 004bdc69 (CONDITIONAL_JUMP)  ; LAB_004bdc69
    TEST EBP,EBP                        ; 004bdc1f
    JZ 0x004bdc26                       ; 004bdc21
        ;   XREF to: 004bdc26 (CONDITIONAL_JUMP)  ; LAB_004bdc26
    MOV dword ptr [EBP],EBX             ; 004bdc23
    MOV EAX,EDX                         ; 004bdc26
        ;   Label: LAB_004bdc26
    MOV EDX,EAX                         ; 004bdc28
        ;   Label: LAB_004bdc28
    TEST EAX,EAX                        ; 004bdc2a
    JZ 0x004bdc7e                       ; 004bdc2c
        ;   XREF to: 004bdc7e (CONDITIONAL_JUMP)  ; LAB_004bdc7e
    MOV EBX,dword ptr [EAX + 0x140]     ; 004bdc2e
    CMP EBX,0x5                         ; 004bdc34
    JZ 0x004bdc3e                       ; 004bdc37
        ;   XREF to: 004bdc3e (CONDITIONAL_JUMP)  ; LAB_004bdc3e
    CMP EBX,0x6                         ; 004bdc39
    JNZ 0x004bdc9c                      ; 004bdc3c
        ;   XREF to: 004bdc9c (CONDITIONAL_JUMP)  ; LAB_004bdc9c
    IMUL EAX,dword ptr [EDX + 0x158],0x970 ; 004bdc3e
        ;   Label: LAB_004bdc3e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004bdc48
    PUSH EBP                            ; 004bdc4c
    ADD EAX,0x1cc55d0                   ; 004bdc4d
    PUSH EAX                            ; 004bdc52
    CALL core_fldnotes.cpp_FUN_004bc540 ; 004bdc53
        ;   XREF to: 004bc540 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bc540()
    ADD ESP,0x8                         ; 004bdc58
    TEST EAX,EAX                        ; 004bdc5b
    JZ 0x004bdcba                       ; 004bdc5d
        ;   XREF to: 004bdcba (CONDITIONAL_JUMP)  ; LAB_004bdcba
    MOV EAX,0x1                         ; 004bdc5f
    POP EBP                             ; 004bdc64
    POP EDI                             ; 004bdc65
    POP ESI                             ; 004bdc66
    POP EBX                             ; 004bdc67
    RET                                 ; 004bdc68
    MOV ECX,dword ptr [0x01cc4470]      ; 004bdc69 | DAT_01cc4470
        ;   Label: LAB_004bdc69
    INC EBX                             ; 004bdc6f
    ADD ESI,0x2e4                       ; 004bdc70
    CMP EBX,ECX                         ; 004bdc76
    JL 0x004bdc0f                       ; 004bdc78
        ;   XREF to: 004bdc0f (CONDITIONAL_JUMP)  ; LAB_004bdc0f
    XOR EAX,EAX                         ; 004bdc7a
        ;   Label: LAB_004bdc7a
    JMP 0x004bdc28                      ; 004bdc7c
        ;   XREF to: 004bdc28 (UNCONDITIONAL_JUMP)  ; LAB_004bdc28
    MOV EDI,dword ptr [ESP + 0x18]      ; 004bdc7e
        ;   Label: LAB_004bdc7e
    PUSH EDI                            ; 004bdc82
    PUSH 0x5e0143                       ; 004bdc83 | = "No such entry '%s'"
    MOV EBP,dword ptr [ESP + 0x28]      ; 004bdc88
    PUSH EBP                            ; 004bdc8c
    CALL crt_unknown.c_FUN_005bfb40     ; 004bdc8d
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004bdc92
    XOR EAX,EAX                         ; 004bdc95
    POP EBP                             ; 004bdc97
    POP EDI                             ; 004bdc98
    POP ESI                             ; 004bdc99
    POP EBX                             ; 004bdc9a
    RET                                 ; 004bdc9b
    MOV EBX,dword ptr [ESP + 0x18]      ; 004bdc9c
        ;   Label: LAB_004bdc9c
    PUSH EBX                            ; 004bdca0
    PUSH 0x5e0156                       ; 004bdca1 | = "'%s' is not a map"
    MOV ESI,dword ptr [ESP + 0x28]      ; 004bdca6
    PUSH ESI                            ; 004bdcaa
    CALL crt_unknown.c_FUN_005bfb40     ; 004bdcab
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0xc                         ; 004bdcb0
    XOR EAX,EAX                         ; 004bdcb3
    POP EBP                             ; 004bdcb5
    POP EDI                             ; 004bdcb6
    POP ESI                             ; 004bdcb7
    POP EBX                             ; 004bdcb8
    RET                                 ; 004bdcb9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004bdcba
        ;   Label: LAB_004bdcba
    PUSH EAX                            ; 004bdcbe
    PUSH EBP                            ; 004bdcbf
    PUSH 0x5e0168                       ; 004bdcc0 | = "No such annotion '%s' found on map '%s'"
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004bdcc5
    PUSH ECX                            ; 004bdcc9
    CALL crt_unknown.c_FUN_005bfb40     ; 004bdcca
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfb40()
    ADD ESP,0x10                        ; 004bdccf
    XOR EAX,EAX                         ; 004bdcd2
    POP EBP                             ; 004bdcd4
    POP EDI                             ; 004bdcd5
    POP ESI                             ; 004bdcd6
    POP EBX                             ; 004bdcd7
    RET                                 ; 004bdcd8


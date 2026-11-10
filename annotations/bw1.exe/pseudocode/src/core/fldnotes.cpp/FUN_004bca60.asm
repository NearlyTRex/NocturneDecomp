; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004bca60(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004bbd10 at 004bbe0d
;
; Referenced Globals:
;   TerminatedCString s_core_fldnotes_cpp_005dfc7d
;   TerminatedCString s_Out_of_memory_005dfc92
;   undefined4 DAT_005dfca0
;   TerminatedCString s_core_fldnotes_cpp_005dfca5
;   TerminatedCString s_NotesMap_paginate_unable_005dfcba
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bb290
;   core_fldnotes.cpp_FUN_004bb510
;   core_fldnotes.cpp_FUN_004bcb10
;   core_main.c_FUN_005030e0
;   crt_unknown.c_debugAllocTracked1_FUN_005c0f32
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bca60
        ;   Label: core_fldnotes.cpp_FUN_004bca60
    PUSH ESI                            ; 004bca61
    PUSH EBP                            ; 004bca62
    MOV ESI,dword ptr [ESP + 0x14]      ; 004bca63
    PUSH 0x1c                           ; 004bca67
    CALL crt_unknown.c_debugAllocTracked1_FUN_005c0f32 ; 004bca69
        ;   XREF to: 005c0f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_debugAllocTracked1_FUN_005c0f32()
    ADD ESP,0x4                         ; 004bca6e
    TEST EAX,EAX                        ; 004bca71
    JNZ 0x004bcab7                      ; 004bca73
        ;   XREF to: 004bcab7 (CONDITIONAL_JUMP)  ; LAB_004bcab7
    MOV EBX,EAX                         ; 004bca75
        ;   Label: LAB_004bca75
    TEST EAX,EAX                        ; 004bca77
    JNZ 0x004bcaa0                      ; 004bca79
        ;   XREF to: 004bcaa0 (CONDITIONAL_JUMP)  ; LAB_004bcaa0
    PUSH EDI                            ; 004bca7b
    MOV ECX,0x5dfc7d                    ; 004bca7c | = "..\\core\\fldnotes.cpp"
    MOV EDI,0x894                       ; 004bca81
    PUSH 0x5dfc92                       ; 004bca86 | = "Out of memory"
    MOV dword ptr [0x01d1d400],ECX      ; 004bca8b | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004bca91 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bca97
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bca9c
    POP EDI                             ; 004bca9f
    PUSH EBX                            ; 004bcaa0
        ;   Label: LAB_004bcaa0
    PUSH ESI                            ; 004bcaa1
    CALL core_fldnotes.cpp_FUN_004bb510 ; 004bcaa2
        ;   XREF to: 004bb510 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb510()
    ADD ESP,0x8                         ; 004bcaa7
    TEST EAX,EAX                        ; 004bcaaa
    JZ 0x004bcac7                       ; 004bcaac
        ;   XREF to: 004bcac7 (CONDITIONAL_JUMP)  ; LAB_004bcac7
    MOV EAX,0x1                         ; 004bcaae
        ;   Label: LAB_004bcaae
    POP EBP                             ; 004bcab3
    POP ESI                             ; 004bcab4
    POP EBX                             ; 004bcab5
    RET                                 ; 004bcab6
    MOV EDX,dword ptr [ESP + 0x10]      ; 004bcab7
        ;   Label: LAB_004bcab7
    PUSH EDX                            ; 004bcabb
    PUSH EAX                            ; 004bcabc
    CALL core_fldnotes.cpp_FUN_004bcb10 ; 004bcabd
        ;   XREF to: 004bcb10 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bcb10()
    ADD ESP,0x8                         ; 004bcac2
    JMP 0x004bca75                      ; 004bcac5
        ;   XREF to: 004bca75 (UNCONDITIONAL_JUMP)  ; LAB_004bca75
    PUSH 0x5dfca0                       ; 004bcac7 | DAT_005dfca0
        ;   Label: LAB_004bcac7
    PUSH ESI                            ; 004bcacc
    CALL core_fldnotes.cpp_FUN_004bb290 ; 004bcacd
        ;   XREF to: 004bb290 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb290()
    ADD ESP,0x8                         ; 004bcad2
    PUSH EBX                            ; 004bcad5
    PUSH ESI                            ; 004bcad6
    CALL core_fldnotes.cpp_FUN_004bb510 ; 004bcad7
        ;   XREF to: 004bb510 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bb510()
    ADD ESP,0x8                         ; 004bcadc
    TEST EAX,EAX                        ; 004bcadf
    JNZ 0x004bcaae                      ; 004bcae1
        ;   XREF to: 004bcaae (CONDITIONAL_JUMP)  ; LAB_004bcaae
    MOV EBP,0x5dfca5                    ; 004bcae3 | = "..\\core\\fldnotes.cpp"
    MOV EAX,0x89b                       ; 004bcae8
    PUSH 0x5dfcba                       ; 004bcaed | = "NotesMap::paginate - unable to add re..."
    MOV dword ptr [0x01d1d400],EBP      ; 004bcaf2 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004bcaf8 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004bcafd
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004bcb02
    MOV EAX,0x1                         ; 004bcb05
    POP EBP                             ; 004bcb0a
    POP ESI                             ; 004bcb0b
    POP EBX                             ; 004bcb0c
    RET                                 ; 004bcb0d


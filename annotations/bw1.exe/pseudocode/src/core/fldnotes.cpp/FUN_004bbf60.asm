; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004bbf60(int param_1)
;
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004bdaa0 at 004bdaaf
;   core_fldnotes.cpp_NotesSection_dtor_FUN_004bbf40 at 004bbf46
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004bbcf0
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bbf60
        ;   Label: core_fldnotes.cpp_FUN_004bbf60
    PUSH ESI                            ; 004bbf61
    PUSH EDI                            ; 004bbf62
    MOV EDI,dword ptr [ESP + 0x10]      ; 004bbf63
    MOV EDX,dword ptr [EDI + 0x150]     ; 004bbf67
    XOR EBX,EBX                         ; 004bbf6d
    TEST EDX,EDX                        ; 004bbf6f
    JLE 0x004bbf8d                      ; 004bbf71
        ;   XREF to: 004bbf8d (CONDITIONAL_JUMP)  ; LAB_004bbf8d
    MOV ESI,EDI                         ; 004bbf73
    MOV EAX,dword ptr [ESI + 0x154]     ; 004bbf75
        ;   Label: LAB_004bbf75
    TEST EAX,EAX                        ; 004bbf7b
    JNZ 0x004bbfaf                      ; 004bbf7d
        ;   XREF to: 004bbfaf (CONDITIONAL_JUMP)  ; LAB_004bbfaf
    INC EBX                             ; 004bbf7f
        ;   Label: LAB_004bbf7f
    MOV ECX,dword ptr [EDI + 0x150]     ; 004bbf80
    ADD ESI,0x4                         ; 004bbf86
    CMP EBX,ECX                         ; 004bbf89
    JL 0x004bbf75                       ; 004bbf8b
        ;   XREF to: 004bbf75 (CONDITIONAL_JUMP)  ; LAB_004bbf75
    MOV dword ptr [EDI + 0x140],0x0     ; 004bbf8d
        ;   Label: LAB_004bbf8d
    MOV dword ptr [EDI + 0x144],0x0     ; 004bbf97
    MOV dword ptr [EDI + 0x150],0x0     ; 004bbfa1
    POP EDI                             ; 004bbfab
    POP ESI                             ; 004bbfac
    POP EBX                             ; 004bbfad
    RET                                 ; 004bbfae
    PUSH 0x0                            ; 004bbfaf
        ;   Label: LAB_004bbfaf
    PUSH EAX                            ; 004bbfb1
    CALL core_fldnotes.cpp_FUN_004bbcf0 ; 004bbfb2
        ;   XREF to: 004bbcf0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004bbcf0()
    ADD ESP,0x8                         ; 004bbfb7
    PUSH EAX                            ; 004bbfba
    CALL crt_unknown.c_FUN_005c0344     ; 004bbfbb
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004bbfc0
    JMP 0x004bbf7f                      ; 004bbfc3
        ;   XREF to: 004bbf7f (UNCONDITIONAL_JUMP)  ; LAB_004bbf7f


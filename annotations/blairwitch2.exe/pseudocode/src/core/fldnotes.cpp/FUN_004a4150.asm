; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fldnotes_cpp_FUN_004a4150(undefined4 *param_1)
;
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a3e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a4150
        ;   Label: core_fldnotes.cpp_FUN_004a4150
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a4151
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a4155
    PUSH EDX                            ; 004a4158
    MOV ECX,dword ptr [EAX]             ; 004a4159
    PUSH ECX                            ; 004a415b
    MOV EBX,dword ptr [EAX + 0x18]      ; 004a415c
    PUSH EBX                            ; 004a415f
    CALL core_fldnotes.cpp_FUN_004a3e40 ; 004a4160
        ;   XREF to: 004a3e40 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a3e40()
    ADD ESP,0xc                         ; 004a4165
    POP EBX                             ; 004a4168
    RET                                 ; 004a4169


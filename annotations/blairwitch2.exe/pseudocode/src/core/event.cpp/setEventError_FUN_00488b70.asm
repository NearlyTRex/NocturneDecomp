; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_setEventError_FUN_00488b70(char *source_file,int source_line,char *error_message)
;
; Parameters:
; char *           Stack[0x4]:4   source_file
; int              Stack[0x8]:4   source_line
; char *           Stack[0xc]:4   error_message
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00488b70
        ;   Label: core_event.cpp_setEventError_FUN_00488b70
    PUSH EDI                            ; 00488b71
    MOV ESI,dword ptr [ESP + 0x14]      ; 00488b72
    MOV EDI,0x1c3dd10                   ; 00488b76
    PUSH EDI                            ; 00488b7b
    MOV AL,byte ptr [ESI]               ; 00488b7c
        ;   Label: LAB_00488b7c
    MOV byte ptr [EDI],AL               ; 00488b7e
    CMP AL,0x0                          ; 00488b80
    JZ 0x00488b94                       ; 00488b82
        ;   XREF to: 00488b94 (CONDITIONAL_JUMP)  ; LAB_00488b94
    MOV AL,byte ptr [ESI + 0x1]         ; 00488b84
    ADD ESI,0x2                         ; 00488b87
    MOV byte ptr [EDI + 0x1],AL         ; 00488b8a
    ADD EDI,0x2                         ; 00488b8d
    CMP AL,0x0                          ; 00488b90
    JNZ 0x00488b7c                      ; 00488b92
        ;   XREF to: 00488b7c (CONDITIONAL_JUMP)  ; LAB_00488b7c
    POP EDI                             ; 00488b94
        ;   Label: LAB_00488b94
    MOV EAX,0xffffffff                  ; 00488b95
    POP EDI                             ; 00488b9a
    POP ESI                             ; 00488b9b
    RET                                 ; 00488b9c


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_event_cpp_setEventError_FUN_0048b7c0(char *source_file,int source_line,char *error_message)
;
; Parameters:
; char *           Stack[0x4]:4   source_file
; int              Stack[0x8]:4   source_line
; char *           Stack[0xc]:4   error_message
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048b7c0
        ;   Label: core_event.cpp_setEventError_FUN_0048b7c0
    PUSH EDI                            ; 0048b7c1
    MOV ESI,dword ptr [ESP + 0x14]      ; 0048b7c2
    MOV EDI,0x1c734b0                   ; 0048b7c6
    PUSH EDI                            ; 0048b7cb
    MOV AL,byte ptr [ESI]               ; 0048b7cc
        ;   Label: LAB_0048b7cc
    MOV byte ptr [EDI],AL               ; 0048b7ce
    CMP AL,0x0                          ; 0048b7d0
    JZ 0x0048b7e4                       ; 0048b7d2
        ;   XREF to: 0048b7e4 (CONDITIONAL_JUMP)  ; LAB_0048b7e4
    MOV AL,byte ptr [ESI + 0x1]         ; 0048b7d4
    ADD ESI,0x2                         ; 0048b7d7
    MOV byte ptr [EDI + 0x1],AL         ; 0048b7da
    ADD EDI,0x2                         ; 0048b7dd
    CMP AL,0x0                          ; 0048b7e0
    JNZ 0x0048b7cc                      ; 0048b7e2
        ;   XREF to: 0048b7cc (CONDITIONAL_JUMP)  ; LAB_0048b7cc
    POP EDI                             ; 0048b7e4
        ;   Label: LAB_0048b7e4
    MOV EAX,0xffffffff                  ; 0048b7e5
    POP EDI                             ; 0048b7ea
    POP ESI                             ; 0048b7eb
    RET                                 ; 0048b7ec


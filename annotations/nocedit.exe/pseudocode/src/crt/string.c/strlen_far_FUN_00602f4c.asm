; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_string.c_strlen_far_FUN_00602f4c(char * string_offset, ushort segment, int max_length)
;
; Parameters:
; char *           Stack[0x4]:4   string_offset
; ushort           Stack[0x8]:2   segment
; int              Stack[0xc]:4   max_length
;
; XREF[1]:
;   crt_stdio.c_ConvertFormatSpec_FUN_00603238 at 00603780
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602f4c
        ;   Label: crt_string.c_strlen_far_FUN_00602f4c
    PUSH ESI                            ; 00602f4d
    PUSH EDI                            ; 00602f4e
    PUSH ES                             ; 00602f4f
    MOV EDI,dword ptr [ESP + 0x18]      ; 00602f50
    MOV EDX,dword ptr [ESP + 0x14]      ; 00602f54
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00602f58
    MOV ES,DI                           ; 00602f5c
    XOR EAX,EAX                         ; 00602f5e
    MOV EBX,EDX                         ; 00602f60
        ;   Label: LAB_00602f60
    MOV CL,byte ptr ES:[EBX]            ; 00602f62
    INC EDX                             ; 00602f65
    TEST CL,CL                          ; 00602f66
    JZ 0x00602d72                       ; 00602f68 | LAB_00602d72
        ;   XREF to: 00602d72 (CONDITIONAL_JUMP)
    CMP EAX,ESI                         ; 00602f6e
    JZ 0x00602d72                       ; 00602f70 | LAB_00602d72
        ;   XREF to: 00602d72 (CONDITIONAL_JUMP)
    INC EAX                             ; 00602f76
    JMP 0x00602f60                      ; 00602f77 | LAB_00602f60
        ;   XREF to: 00602f60 (UNCONDITIONAL_JUMP)


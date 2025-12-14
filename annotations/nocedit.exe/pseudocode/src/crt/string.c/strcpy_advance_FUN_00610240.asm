; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_string.c_strcpy_advance_FUN_00610240(char * dest, char * src)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
;
; XREF[2]:
;   crt_process.c_build_cmdline_FUN_00610258 at 0061033a
;   crt_process.c_build_command_line_FUN_006103a4 at 006103bc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00610240
        ;   Label: crt_string.c_strcpy_advance_FUN_00610240
    MOV EAX,dword ptr [ESP + 0x8]       ; 00610241
    MOV EDX,dword ptr [ESP + 0xc]       ; 00610245
    MOV BL,byte ptr [EDX]               ; 00610249
        ;   Label: LAB_00610249
    MOV byte ptr [EAX],BL               ; 0061024b
    TEST BL,BL                          ; 0061024d
    JZ 0x00610255                       ; 0061024f
        ;   XREF to: 00610255 (CONDITIONAL_JUMP)  ; LAB_00610255
    INC EAX                             ; 00610251
    INC EDX                             ; 00610252
    JMP 0x00610249                      ; 00610253
        ;   XREF to: 00610249 (UNCONDITIONAL_JUMP)  ; LAB_00610249
    POP EBX                             ; 00610255
        ;   Label: LAB_00610255
    RET                                 ; 00610256


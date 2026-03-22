; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_process_c_build_command_line_FUN_006103a4(char *program_name,char **argv,char *buffer,int skip_program_name)
;
; Parameters:
; char *           Stack[0x4]:4   program_name
; char * *         Stack[0x8]:4   argv
; char *           Stack[0xc]:4   buffer
; int              Stack[0x10]:4   skip_program_name
;
; XREF[1]:
;   crt_process.c_spawn_FUN_006105a0 at 006105be
;
; Called Functions:
;   crt_string.c_strcpy_advance_FUN_00610240
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006103a4
        ;   Label: crt_process.c_build_command_line_FUN_006103a4
    PUSH EDI                            ; 006103a5
    PUSH EBP                            ; 006103a6
    MOV EBX,dword ptr [ESP + 0x14]      ; 006103a7
    MOV EAX,dword ptr [ESP + 0x18]      ; 006103ab
    CMP dword ptr [ESP + 0x1c],0x0      ; 006103af
    JNZ 0x006103c8                      ; 006103b4
        ;   XREF to: 006103c8 (CONDITIONAL_JUMP)  ; LAB_006103c8
    MOV ECX,dword ptr [ESP + 0x10]      ; 006103b6
    PUSH ECX                            ; 006103ba
    PUSH EAX                            ; 006103bb
    CALL crt_string.c_strcpy_advance_FUN_00610240 ; 006103bc
        ;   XREF to: 00610240 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strcpy_advance_FUN_00610240(char * dest, char * src)
    ADD ESP,0x8                         ; 006103c1
    MOV byte ptr [EAX],0x20             ; 006103c4
    INC EAX                             ; 006103c7
    CMP dword ptr [EBX],0x0             ; 006103c8
        ;   Label: LAB_006103c8
    JZ 0x006103f2                       ; 006103cb
        ;   XREF to: 006103f2 (CONDITIONAL_JUMP)  ; LAB_006103f2
    MOV EDI,dword ptr [EBX + 0x4]       ; 006103cd
    ADD EBX,0x4                         ; 006103d0
    TEST EDI,EDI                        ; 006103d3
    JZ 0x006103f2                       ; 006103d5
        ;   XREF to: 006103f2 (CONDITIONAL_JUMP)  ; LAB_006103f2
    MOV EBP,dword ptr [EBX]             ; 006103d7
        ;   Label: LAB_006103d7
    PUSH EBP                            ; 006103d9
    PUSH EAX                            ; 006103da
    ADD EBX,0x4                         ; 006103db
    CALL crt_string.c_strcpy_advance_FUN_00610240 ; 006103de
        ;   XREF to: 00610240 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strcpy_advance_FUN_00610240(char * dest, char * src)
    MOV EDX,dword ptr [EBX]             ; 006103e3
    ADD ESP,0x8                         ; 006103e5
    TEST EDX,EDX                        ; 006103e8
    JZ 0x006103f2                       ; 006103ea
        ;   XREF to: 006103f2 (CONDITIONAL_JUMP)  ; LAB_006103f2
    MOV byte ptr [EAX],0x20             ; 006103ec
    INC EAX                             ; 006103ef
    JMP 0x006103d7                      ; 006103f0
        ;   XREF to: 006103d7 (UNCONDITIONAL_JUMP)  ; LAB_006103d7
    MOV byte ptr [EAX],0x0              ; 006103f2
        ;   Label: LAB_006103f2
    POP EBP                             ; 006103f5
    POP EDI                             ; 006103f6
    POP EBX                             ; 006103f7
    RET                                 ; 006103f8


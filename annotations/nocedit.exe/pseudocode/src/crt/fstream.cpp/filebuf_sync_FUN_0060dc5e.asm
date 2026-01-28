; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __watcallStack int __watcallStack crt_fstream_cpp_filebuf_sync_FUN_0060dc5e(filebuf *this_ptr)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9 at 0060be1d
;
; Called Functions:
;   crt_stdio.c_lseek_FUN_00606690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060dc5e
        ;   Label: crt_fstream.cpp_filebuf_sync_FUN_0060dc5e
    PUSH EBP                            ; 0060dc5f
    MOV EBP,ESP                         ; 0060dc60
    MOV EBX,dword ptr [EBP + 0xc]       ; 0060dc62
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060dc65
    SUB EAX,dword ptr [EBX + 0x18]      ; 0060dc68
    JNZ 0x0060dca1                      ; 0060dc6b
        ;   XREF to: 0060dca1 (CONDITIONAL_JUMP)  ; LAB_0060dca1
    MOV EAX,dword ptr [EBX + 0x10]      ; 0060dc6d
    MOV ECX,dword ptr [EBX + 0x14]      ; 0060dc70
    SUB EAX,ECX                         ; 0060dc73
    JZ 0x0060dcb2                       ; 0060dc75
        ;   XREF to: 0060dcb2 (CONDITIONAL_JUMP)  ; LAB_0060dcb2
    TEST byte ptr [EBX + 0x30],0x80     ; 0060dc77
    JZ 0x0060dcb7                       ; 0060dc7b
        ;   XREF to: 0060dcb7 (CONDITIONAL_JUMP)  ; LAB_0060dcb7
    MOV ECX,dword ptr [EBX + 0x10]      ; 0060dc7d
    XOR EDX,EDX                         ; 0060dc80
    MOV EAX,ECX                         ; 0060dc82
    TEST ECX,ECX                        ; 0060dc84
    JZ 0x0060dcc0                       ; 0060dc86
        ;   XREF to: 0060dcc0 (CONDITIONAL_JUMP)  ; LAB_0060dcc0
    DEC EAX                             ; 0060dc88
        ;   Label: LAB_0060dc88
    MOV ECX,dword ptr [EBX + 0x14]      ; 0060dc89
    CMP EAX,ECX                         ; 0060dc8c
    JC 0x0060dcc0                       ; 0060dc8e
        ;   XREF to: 0060dcc0 (CONDITIONAL_JUMP)  ; LAB_0060dcc0
    CMP byte ptr [EAX],0xa              ; 0060dc90
    SETZ CL                             ; 0060dc93
    AND ECX,0xff                        ; 0060dc96
    INC ECX                             ; 0060dc9c
    SUB EDX,ECX                         ; 0060dc9d
    JMP 0x0060dc88                      ; 0060dc9f
        ;   XREF to: 0060dc88 (UNCONDITIONAL_JUMP)  ; LAB_0060dc88
    PUSH -0x1                           ; 0060dca1
        ;   Label: LAB_0060dca1
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060dca3
    PUSH EBX                            ; 0060dca6
    CALL dword ptr [EAX + 0xc]          ; 0060dca7
    ADD ESP,0x8                         ; 0060dcaa
    CMP EAX,-0x1                        ; 0060dcad
    JZ 0x0060dcb4                       ; 0060dcb0
        ;   XREF to: 0060dcb4 (CONDITIONAL_JUMP)  ; LAB_0060dcb4
    XOR EAX,EAX                         ; 0060dcb2
        ;   Label: LAB_0060dcb2
    POP EBP                             ; 0060dcb4
        ;   Label: LAB_0060dcb4
    POP EBX                             ; 0060dcb5
    RET                                 ; 0060dcb6
    MOV EAX,ECX                         ; 0060dcb7
        ;   Label: LAB_0060dcb7
    MOV EDX,dword ptr [EBX + 0x10]      ; 0060dcb9
    SUB EAX,EDX                         ; 0060dcbc
    MOV EDX,EAX                         ; 0060dcbe
    PUSH 0x1                            ; 0060dcc0
        ;   Label: LAB_0060dcc0
    PUSH EDX                            ; 0060dcc2
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060dcc3
    PUSH EAX                            ; 0060dcc6
    CALL crt_stdio.c_lseek_FUN_00606690 ; 0060dcc7
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 0060dccc
    TEST EAX,EAX                        ; 0060dccf
    JL 0x0060dced                       ; 0060dcd1
        ;   XREF to: 0060dced (CONDITIONAL_JUMP)  ; LAB_0060dced
    MOV dword ptr [EBX + 0xc],0x0       ; 0060dcd3
    MOV dword ptr [EBX + 0x14],0x0      ; 0060dcda
    MOV dword ptr [EBX + 0x10],0x0      ; 0060dce1
    XOR EAX,EAX                         ; 0060dce8
    POP EBP                             ; 0060dcea
    POP EBX                             ; 0060dceb
    RET                                 ; 0060dcec
    MOV EAX,0xffffffff                  ; 0060dced
        ;   Label: LAB_0060dced
    POP EBP                             ; 0060dcf2
    POP EBX                             ; 0060dcf3
    RET                                 ; 0060dcf4


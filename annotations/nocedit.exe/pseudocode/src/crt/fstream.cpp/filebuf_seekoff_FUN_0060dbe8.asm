; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __watcallStack crt_fstream_cpp_filebuf_seekoff_FUN_0060dbe8(filebuf *this_ptr,long offset,int direction,int mode)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
; long             Stack[0x8]:4   offset
; int              Stack[0xc]:4   direction
; int              Stack[0x10]:4   mode
;
; Called Functions:
;   crt_stdio.c_lseek_FUN_00606690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060dbe8
        ;   Label: crt_fstream.cpp_filebuf_seekoff_FUN_0060dbe8
    PUSH ESI                            ; 0060dbe9
    PUSH EBP                            ; 0060dbea
    MOV EBP,ESP                         ; 0060dbeb
    MOV EBX,dword ptr [EBP + 0x10]      ; 0060dbed
    MOV ESI,dword ptr [EBP + 0x18]      ; 0060dbf0
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060dbf3
    CMP EAX,-0x1                        ; 0060dbf6
    JZ 0x0060dc2a                       ; 0060dbf9
        ;   XREF to: 0060dc2a (CONDITIONAL_JUMP)  ; LAB_0060dc2a
    MOV EAX,dword ptr [EBX + 0x20]      ; 0060dbfb
    SUB EAX,dword ptr [EBX + 0x18]      ; 0060dbfe
    JNZ 0x0060dc2e                      ; 0060dc01
        ;   XREF to: 0060dc2e (CONDITIONAL_JUMP)  ; LAB_0060dc2e
    MOV EAX,dword ptr [EBX + 0x10]      ; 0060dc03
    SUB EAX,dword ptr [EBX + 0x14]      ; 0060dc06
    JNZ 0x0060dc2e                      ; 0060dc09
        ;   XREF to: 0060dc2e (CONDITIONAL_JUMP)  ; LAB_0060dc2e
    CMP ESI,0x1                         ; 0060dc0b
        ;   Label: LAB_0060dc0b
    JNC 0x0060dc55                      ; 0060dc0e
        ;   XREF to: 0060dc55 (CONDITIONAL_JUMP)  ; LAB_0060dc55
    TEST ESI,ESI                        ; 0060dc10
    JNZ 0x0060dc4c                      ; 0060dc12
        ;   XREF to: 0060dc4c (CONDITIONAL_JUMP)  ; LAB_0060dc4c
    XOR EAX,EAX                         ; 0060dc14
    PUSH EAX                            ; 0060dc16
        ;   Label: LAB_0060dc16
    MOV ESI,dword ptr [EBP + 0x14]      ; 0060dc17
    PUSH ESI                            ; 0060dc1a
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0060dc1b
    PUSH EAX                            ; 0060dc1e
    CALL crt_stdio.c_lseek_FUN_00606690 ; 0060dc1f
        ;   XREF to: 00606690 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)
    ADD ESP,0xc                         ; 0060dc24
    CMP EAX,-0x1                        ; 0060dc27
    POP EBP                             ; 0060dc2a
        ;   Label: LAB_0060dc2a
    POP ESI                             ; 0060dc2b
    POP EBX                             ; 0060dc2c
    RET                                 ; 0060dc2d
    PUSH EBX                            ; 0060dc2e
        ;   Label: LAB_0060dc2e
    MOV EAX,dword ptr [EBX + 0x28]      ; 0060dc2f
    CALL dword ptr [EAX + 0x20]         ; 0060dc32
    ADD ESP,0x4                         ; 0060dc35
    CMP EAX,-0x1                        ; 0060dc38
    JNZ 0x0060dc0b                      ; 0060dc3b
        ;   XREF to: 0060dc0b (CONDITIONAL_JUMP)  ; LAB_0060dc0b
    POP EBP                             ; 0060dc3d
    POP ESI                             ; 0060dc3e
    POP EBX                             ; 0060dc3f
    RET                                 ; 0060dc40
    MOV EAX,0x1                         ; 0060dc41
        ;   Label: LAB_0060dc41
    JMP 0x0060dc16                      ; 0060dc46
        ;   XREF to: 0060dc16 (UNCONDITIONAL_JUMP)  ; LAB_0060dc16
    MOV EAX,ESI                         ; 0060dc48
        ;   Label: LAB_0060dc48
    JMP 0x0060dc16                      ; 0060dc4a
        ;   XREF to: 0060dc16 (UNCONDITIONAL_JUMP)  ; LAB_0060dc16
    MOV EAX,0xffffffff                  ; 0060dc4c
        ;   Label: LAB_0060dc4c
    POP EBP                             ; 0060dc51
    POP ESI                             ; 0060dc52
    POP EBX                             ; 0060dc53
    RET                                 ; 0060dc54
    JBE 0x0060dc41                      ; 0060dc55
        ;   XREF to: 0060dc41 (CONDITIONAL_JUMP)  ; LAB_0060dc41
        ;   Label: LAB_0060dc55
    CMP ESI,0x2                         ; 0060dc57
    JZ 0x0060dc48                       ; 0060dc5a
        ;   XREF to: 0060dc48 (CONDITIONAL_JUMP)  ; LAB_0060dc48
    JMP 0x0060dc4c                      ; 0060dc5c
        ;   XREF to: 0060dc4c (UNCONDITIONAL_JUMP)  ; LAB_0060dc4c


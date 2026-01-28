; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl crt_fstream_cpp_filebuf_open_FUN_00608c15(filebuf *this_ptr,char *filename,int mode,int permissions)
;
; Parameters:
; filebuf *        Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   mode
; int              Stack[0x10]:4   permissions
;
; XREF[2]:
;   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 at 006064cb
;   crt_fstream.cpp_openFile_FUN_00600e85 at 00600eab
;
; Called Functions:
;   crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00608c15
        ;   Label: crt_fstream.cpp_filebuf_open_FUN_00608c15
    PUSH ESI                            ; 00608c16
    PUSH EBP                            ; 00608c17
    MOV EBX,dword ptr [ESP + 0x10]      ; 00608c18
    CMP dword ptr [EBX + 0x2c],-0x1     ; 00608c1c
    JNZ 0x00608cb4                      ; 00608c20
        ;   XREF to: 00608cb4 (CONDITIONAL_JUMP)  ; LAB_00608cb4
    MOV AH,byte ptr [ESP + 0x18]        ; 00608c26
    TEST AH,0x8                         ; 00608c2a
    JNZ 0x00608cba                      ; 00608c2d
        ;   XREF to: 00608cba (CONDITIONAL_JUMP)  ; LAB_00608cba
    MOV DH,byte ptr [ESP + 0x18]        ; 00608c33
        ;   Label: LAB_00608c33
    TEST DH,0x2                         ; 00608c37
    JZ 0x00608c4a                       ; 00608c3a
        ;   XREF to: 00608c4a (CONDITIONAL_JUMP)  ; LAB_00608c4a
    TEST DH,0xd                         ; 00608c3c
    JNZ 0x00608c4a                      ; 00608c3f
        ;   XREF to: 00608c4a (CONDITIONAL_JUMP)  ; LAB_00608c4a
    MOV CH,DH                           ; 00608c41
    OR CH,0x10                          ; 00608c43
    MOV byte ptr [ESP + 0x18],CH        ; 00608c46
    TEST byte ptr [ESP + 0x19],0x1      ; 00608c4a
        ;   Label: LAB_00608c4a
    JZ 0x00608c58                       ; 00608c4f
        ;   XREF to: 00608c58 (CONDITIONAL_JUMP)  ; LAB_00608c58
    TEST byte ptr [ESP + 0x18],0x80     ; 00608c51
    JNZ 0x00608cb4                      ; 00608c56
        ;   XREF to: 00608cb4 (CONDITIONAL_JUMP)  ; LAB_00608cb4
    MOV DL,byte ptr [ESP + 0x18]        ; 00608c58
        ;   Label: LAB_00608c58
    TEST DL,0x40                        ; 00608c5c
    JZ 0x00608c66                       ; 00608c5f
        ;   XREF to: 00608c66 (CONDITIONAL_JUMP)  ; LAB_00608c66
    TEST DL,0x20                        ; 00608c61
    JNZ 0x00608cb4                      ; 00608c64
        ;   XREF to: 00608cb4 (CONDITIONAL_JUMP)  ; LAB_00608cb4
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00608c66
        ;   Label: LAB_00608c66
    PUSH ECX                            ; 00608c6a
    LEA EAX,[ESP + 0x1c]                ; 00608c6b
    PUSH EAX                            ; 00608c6f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00608c70
    PUSH ESI                            ; 00608c74
    CALL crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340 ; 00608c75
        ;   XREF to: 0060c340 (UNCONDITIONAL_CALL)  ; int crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340(char * filename, int * iostream_mode, int permissions)
    ADD ESP,0xc                         ; 00608c7a
    MOV dword ptr [EBX + 0x2c],EAX      ; 00608c7d
    TEST EAX,EAX                        ; 00608c80
    JL 0x00608cc8                       ; 00608c82
        ;   XREF to: 00608cc8 (CONDITIONAL_JUMP)  ; LAB_00608cc8
    MOV CL,byte ptr [EBX + 0x39]        ; 00608c84
    MOV EAX,dword ptr [ESP + 0x18]      ; 00608c87
    AND CL,0xfe                         ; 00608c8b
    MOV dword ptr [EBX + 0x30],EAX      ; 00608c8e
    MOV byte ptr [EBX + 0x39],CL        ; 00608c91
    TEST byte ptr [ESP + 0x18],0x4      ; 00608c94
    JZ 0x00608cae                       ; 00608c99
        ;   XREF to: 00608cae (CONDITIONAL_JUMP)  ; LAB_00608cae
    MOV EBP,dword ptr [ESP + 0x18]      ; 00608c9b
    PUSH EBP                            ; 00608c9f
    PUSH 0x2                            ; 00608ca0
    PUSH 0x0                            ; 00608ca2
    MOV EAX,dword ptr [EBX + 0x28]      ; 00608ca4
    PUSH EBX                            ; 00608ca7
    CALL dword ptr [EAX + 0x18]         ; 00608ca8
    ADD ESP,0x10                        ; 00608cab
    MOV EAX,EBX                         ; 00608cae
        ;   Label: LAB_00608cae
    POP EBP                             ; 00608cb0
    POP ESI                             ; 00608cb1
    POP EBX                             ; 00608cb2
    RET                                 ; 00608cb3
    XOR EAX,EAX                         ; 00608cb4
        ;   Label: LAB_00608cb4
    POP EBP                             ; 00608cb6
    POP ESI                             ; 00608cb7
    POP EBX                             ; 00608cb8
    RET                                 ; 00608cb9
    MOV DL,AH                           ; 00608cba
        ;   Label: LAB_00608cba
    OR DL,0x2                           ; 00608cbc
    MOV byte ptr [ESP + 0x18],DL        ; 00608cbf
    JMP 0x00608c33                      ; 00608cc3
        ;   XREF to: 00608c33 (UNCONDITIONAL_JUMP)  ; LAB_00608c33
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00608cc8
        ;   Label: LAB_00608cc8
    JMP 0x00608cb4                      ; 00608ccf
        ;   XREF to: 00608cb4 (UNCONDITIONAL_JUMP)  ; LAB_00608cb4


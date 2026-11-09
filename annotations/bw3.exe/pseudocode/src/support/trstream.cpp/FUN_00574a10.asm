; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_00574a10(int *param_1,char *param_2,char *param_3,char *param_4)
;
;
; XREF[1]:
;   engine_2d.c_FUN_00402940 at 00402a15
;
; Called Functions:
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574a10
        ;   Label: support_trstream.cpp_FUN_00574a10
    PUSH ESI                            ; 00574a11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00574a12
    PUSH EBX                            ; 00574a16
    MOV EAX,dword ptr [EBX]             ; 00574a17
    CALL dword ptr [EAX + 0x18]         ; 00574a19
    ADD ESP,0x4                         ; 00574a1c
    MOV EDX,dword ptr [ESP + 0x18]      ; 00574a1f
    PUSH EDX                            ; 00574a23
    MOV ECX,dword ptr [ESP + 0x18]      ; 00574a24
    PUSH ECX                            ; 00574a28
    MOV ESI,dword ptr [ESP + 0x18]      ; 00574a29
    PUSH ESI                            ; 00574a2d
    CALL engine_dosio.cpp_FUN_004659c0  ; 00574a2e
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00574a33
    MOV dword ptr [EBX + 0x4],EAX       ; 00574a36
    TEST EAX,EAX                        ; 00574a39
    JZ 0x00574a45                       ; 00574a3b
        ;   XREF to: 00574a45 (CONDITIONAL_JUMP)  ; LAB_00574a45
    MOV EAX,0x1                         ; 00574a3d
    POP ESI                             ; 00574a42
    POP EBX                             ; 00574a43
    RET                                 ; 00574a44
    PUSH EBX                            ; 00574a45
        ;   Label: LAB_00574a45
    MOV EAX,dword ptr [EBX]             ; 00574a46
    CALL dword ptr [EAX + 0x18]         ; 00574a48
    ADD ESP,0x4                         ; 00574a4b
    XOR EAX,EAX                         ; 00574a4e
    POP ESI                             ; 00574a50
    POP EBX                             ; 00574a51
    RET                                 ; 00574a52


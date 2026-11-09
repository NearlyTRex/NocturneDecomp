; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_005a1a20(int *param_1,char *param_2,char *param_3,char *param_4)
;
;
; XREF[1]:
;   engine_2d.c_FUN_00402940 at 00402a15
;
; Called Functions:
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1a20
        ;   Label: support_trstream.cpp_FUN_005a1a20
    PUSH ESI                            ; 005a1a21
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a1a22
    PUSH EBX                            ; 005a1a26
    MOV EAX,dword ptr [EBX]             ; 005a1a27
    CALL dword ptr [EAX + 0x18]         ; 005a1a29
    ADD ESP,0x4                         ; 005a1a2c
    MOV EDX,dword ptr [ESP + 0x18]      ; 005a1a2f
    PUSH EDX                            ; 005a1a33
    MOV ECX,dword ptr [ESP + 0x18]      ; 005a1a34
    PUSH ECX                            ; 005a1a38
    MOV ESI,dword ptr [ESP + 0x18]      ; 005a1a39
    PUSH ESI                            ; 005a1a3d
    CALL engine_dosio.cpp_FUN_00479180  ; 005a1a3e
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005a1a43
    MOV dword ptr [EBX + 0x4],EAX       ; 005a1a46
    TEST EAX,EAX                        ; 005a1a49
    JZ 0x005a1a55                       ; 005a1a4b
        ;   XREF to: 005a1a55 (CONDITIONAL_JUMP)  ; LAB_005a1a55
    MOV EAX,0x1                         ; 005a1a4d
    POP ESI                             ; 005a1a52
    POP EBX                             ; 005a1a53
    RET                                 ; 005a1a54
    PUSH EBX                            ; 005a1a55
        ;   Label: LAB_005a1a55
    MOV EAX,dword ptr [EBX]             ; 005a1a56
    CALL dword ptr [EAX + 0x18]         ; 005a1a58
    ADD ESP,0x4                         ; 005a1a5b
    XOR EAX,EAX                         ; 005a1a5e
    POP ESI                             ; 005a1a60
    POP EBX                             ; 005a1a61
    RET                                 ; 005a1a62


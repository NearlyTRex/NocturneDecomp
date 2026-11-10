; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_0057ddd0(int *param_1,char *param_2,char *param_3,char *param_4)
;
;
; XREF[1]:
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a11
;
; Called Functions:
;   engine_dosio.cpp_FUN_00460c70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057ddd0
        ;   Label: support_trstream.cpp_FUN_0057ddd0
    PUSH ESI                            ; 0057ddd1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0057ddd2
    PUSH EBX                            ; 0057ddd6
    MOV EAX,dword ptr [EBX]             ; 0057ddd7
    CALL dword ptr [EAX + 0x18]         ; 0057ddd9
    ADD ESP,0x4                         ; 0057dddc
    MOV EDX,dword ptr [ESP + 0x18]      ; 0057dddf
    PUSH EDX                            ; 0057dde3
    MOV ECX,dword ptr [ESP + 0x18]      ; 0057dde4
    PUSH ECX                            ; 0057dde8
    MOV ESI,dword ptr [ESP + 0x18]      ; 0057dde9
    PUSH ESI                            ; 0057dded
    CALL engine_dosio.cpp_FUN_00460c70  ; 0057ddee
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 0057ddf3
    MOV dword ptr [EBX + 0x4],EAX       ; 0057ddf6
    TEST EAX,EAX                        ; 0057ddf9
    JZ 0x0057de05                       ; 0057ddfb
        ;   XREF to: 0057de05 (CONDITIONAL_JUMP)  ; LAB_0057de05
    MOV EAX,0x1                         ; 0057ddfd
    POP ESI                             ; 0057de02
    POP EBX                             ; 0057de03
    RET                                 ; 0057de04
    PUSH EBX                            ; 0057de05
        ;   Label: LAB_0057de05
    MOV EAX,dword ptr [EBX]             ; 0057de06
    CALL dword ptr [EAX + 0x18]         ; 0057de08
    ADD ESP,0x4                         ; 0057de0b
    XOR EAX,EAX                         ; 0057de0e
    POP ESI                             ; 0057de10
    POP EBX                             ; 0057de11
    RET                                 ; 0057de12


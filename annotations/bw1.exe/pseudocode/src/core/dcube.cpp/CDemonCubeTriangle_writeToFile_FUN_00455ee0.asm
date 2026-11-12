; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455ee0(CDemonCubeTriangle *this_ptr,_FILE *param_2,int param_3)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; Referenced Globals:
;   undefined4 DAT_0152c2cc
;   undefined4 DAT_0152c2d0
;   undefined4 DAT_0152c2d4
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005c1a70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455ee0
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455ee0
    PUSH ESI                            ; 00455ee1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00455ee2
    MOV ESI,dword ptr [ESP + 0x14]      ; 00455ee6
    MOV ECX,0xc                         ; 00455eea
    MOV EAX,dword ptr [EBX]             ; 00455eef
    XOR EDX,EDX                         ; 00455ef1
    SUB EAX,ESI                         ; 00455ef3
    DIV ECX                             ; 00455ef5
    MOV [0x0152c2cc],EAX                ; 00455ef7 | DAT_0152c2cc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00455efc
    XOR EDX,EDX                         ; 00455eff
    SUB EAX,ESI                         ; 00455f01
    DIV ECX                             ; 00455f03
    MOV [0x0152c2d0],EAX                ; 00455f05 | DAT_0152c2d0
    MOV EAX,dword ptr [EBX + 0x8]       ; 00455f0a
    XOR EDX,EDX                         ; 00455f0d
    SUB EAX,ESI                         ; 00455f0f
    DIV ECX                             ; 00455f11
    MOV EDX,dword ptr [ESP + 0x10]      ; 00455f13
    PUSH EDX                            ; 00455f17
    PUSH 0x4                            ; 00455f18
    PUSH 0x3                            ; 00455f1a
    PUSH 0x152c2cc                      ; 00455f1c
    MOV [0x0152c2d4],EAX                ; 00455f21 | DAT_0152c2d4
    CALL crt_stdio.c_fwrite_FUN_005c1a70 ; 00455f26
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005c1a70(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00455f2b
    MOV ECX,dword ptr [ESP + 0x10]      ; 00455f2e
    PUSH ECX                            ; 00455f32
    PUSH 0x1                            ; 00455f33
    PUSH 0x14                           ; 00455f35
    ADD EBX,0xc                         ; 00455f37
    PUSH EBX                            ; 00455f3a
    CALL crt_stdio.c_fwrite_FUN_005c1a70 ; 00455f3b
        ;   XREF to: 005c1a70 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005c1a70(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00455f40
    POP ESI                             ; 00455f43
    POP EBX                             ; 00455f44
    RET                                 ; 00455f45


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_004447b0(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; CVector3f *      Stack[0xc]:4   vertex_buffer_base
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_load_FUN_004467a0 at 00446821
;
; Referenced Globals:
;   undefined4 DAT_01510dcc
;   undefined4 DAT_01510dd0
;   undefined4 DAT_01510dd4
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005b87c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004447b0
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004447b0
    PUSH ESI                            ; 004447b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004447b2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004447b6
    MOV EDX,dword ptr [ESP + 0x10]      ; 004447ba
    PUSH EDX                            ; 004447be
    PUSH 0x4                            ; 004447bf
    PUSH 0x3                            ; 004447c1
    PUSH 0x1510dcc                      ; 004447c3 | DAT_01510dcc
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 004447c8
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    MOV EDX,dword ptr [0x01510dcc]      ; 004447cd | DAT_01510dcc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004447d3
    SUB EAX,EDX                         ; 004447da
    SHL EAX,0x2                         ; 004447dc
    LEA EDX,[ESI + EAX*0x1]             ; 004447df
    MOV dword ptr [EBX],EDX             ; 004447e2
    MOV EDX,dword ptr [0x01510dd0]      ; 004447e4 | DAT_01510dd0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004447ea
    SUB EAX,EDX                         ; 004447f1
    SHL EAX,0x2                         ; 004447f3
    LEA EDX,[ESI + EAX*0x1]             ; 004447f6
    ADD ESP,0x10                        ; 004447f9
    MOV dword ptr [EBX + 0x4],EDX       ; 004447fc
    MOV ECX,dword ptr [ESP + 0x10]      ; 004447ff
    MOV EDX,dword ptr [0x01510dd4]      ; 00444803 | DAT_01510dd4
    PUSH ECX                            ; 00444809
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044480a
    PUSH 0x1                            ; 00444811
    SUB EAX,EDX                         ; 00444813
    PUSH 0x14                           ; 00444815
    SHL EAX,0x2                         ; 00444817
    ADD EBX,0xc                         ; 0044481a
    ADD ESI,EAX                         ; 0044481d
    PUSH EBX                            ; 0044481f
    MOV dword ptr [EBX + -0x4],ESI      ; 00444820
    CALL crt_stdio.c_fread_FUN_005b87c0 ; 00444823
        ;   XREF to: 005b87c0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005b87c0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00444828
    POP ESI                             ; 0044482b
    POP EBX                             ; 0044482c
    RET                                 ; 0044482d


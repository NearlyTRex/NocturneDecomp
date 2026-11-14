; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00444830(CDemonCubeTriangle *this_ptr,_FILE *param_2,int param_3)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; Referenced Globals:
;   undefined4 DAT_01510dcc
;   undefined4 DAT_01510dd0
;   undefined4 DAT_01510dd4
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005b9690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444830
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00444830
    PUSH ESI                            ; 00444831
    MOV EBX,dword ptr [ESP + 0xc]       ; 00444832
    MOV ESI,dword ptr [ESP + 0x14]      ; 00444836
    MOV ECX,0xc                         ; 0044483a
    MOV EAX,dword ptr [EBX]             ; 0044483f
    XOR EDX,EDX                         ; 00444841
    SUB EAX,ESI                         ; 00444843
    DIV ECX                             ; 00444845
    MOV [0x01510dcc],EAX                ; 00444847 | DAT_01510dcc
    MOV EAX,dword ptr [EBX + 0x4]       ; 0044484c
    XOR EDX,EDX                         ; 0044484f
    SUB EAX,ESI                         ; 00444851
    DIV ECX                             ; 00444853
    MOV [0x01510dd0],EAX                ; 00444855 | DAT_01510dd0
    MOV EAX,dword ptr [EBX + 0x8]       ; 0044485a
    XOR EDX,EDX                         ; 0044485d
    SUB EAX,ESI                         ; 0044485f
    DIV ECX                             ; 00444861
    MOV EDX,dword ptr [ESP + 0x10]      ; 00444863
    PUSH EDX                            ; 00444867
    PUSH 0x4                            ; 00444868
    PUSH 0x3                            ; 0044486a
    PUSH 0x1510dcc                      ; 0044486c
    MOV [0x01510dd4],EAX                ; 00444871 | DAT_01510dd4
    CALL crt_stdio.c_fwrite_FUN_005b9690 ; 00444876
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005b9690(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0044487b
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044487e
    PUSH ECX                            ; 00444882
    PUSH 0x1                            ; 00444883
    PUSH 0x14                           ; 00444885
    ADD EBX,0xc                         ; 00444887
    PUSH EBX                            ; 0044488a
    CALL crt_stdio.c_fwrite_FUN_005b9690 ; 0044488b
        ;   XREF to: 005b9690 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005b9690(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00444890
    POP ESI                             ; 00444893
    POP EBX                             ; 00444894
    RET                                 ; 00444895


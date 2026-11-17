; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00452030(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; CVector3f *      Stack[0xc]:4   vertex_buffer_base
;
; Referenced Globals:
;   uint[3] g_TempTriangleIndices
;   undefined4 g_TempTriangleIndices[1]
;   undefined4 g_TempTriangleIndices[2]
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005a48e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00452030
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00452030
    PUSH ESI                            ; 00452031
    MOV EBX,dword ptr [ESP + 0xc]       ; 00452032
    MOV ESI,dword ptr [ESP + 0x14]      ; 00452036
    MOV ECX,0xc                         ; 0045203a
    MOV EAX,dword ptr [EBX]             ; 0045203f
    XOR EDX,EDX                         ; 00452041
    SUB EAX,ESI                         ; 00452043
    DIV ECX                             ; 00452045
    MOV [0x01548b7c],EAX                ; 00452047 | g_TempTriangleIndices
    MOV EAX,dword ptr [EBX + 0x4]       ; 0045204c
    XOR EDX,EDX                         ; 0045204f
    SUB EAX,ESI                         ; 00452051
    DIV ECX                             ; 00452053
    MOV [0x01548b80],EAX                ; 00452055 | g_TempTriangleIndices[1]
    MOV EAX,dword ptr [EBX + 0x8]       ; 0045205a
    XOR EDX,EDX                         ; 0045205d
    SUB EAX,ESI                         ; 0045205f
    DIV ECX                             ; 00452061
    MOV EDX,dword ptr [ESP + 0x10]      ; 00452063
    PUSH EDX                            ; 00452067
    PUSH 0x4                            ; 00452068
    PUSH 0x3                            ; 0045206a
    PUSH 0x1548b7c                      ; 0045206c
    MOV [0x01548b84],EAX                ; 00452071 | g_TempTriangleIndices[2]
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 00452076
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005a48e0(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045207b
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045207e
    PUSH ECX                            ; 00452082
    PUSH 0x1                            ; 00452083
    PUSH 0x14                           ; 00452085
    ADD EBX,0xc                         ; 00452087
    PUSH EBX                            ; 0045208a
    CALL crt_stdio.c_fwrite_FUN_005a48e0 ; 0045208b
        ;   XREF to: 005a48e0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005a48e0(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 00452090
    POP ESI                             ; 00452093
    POP EBX                             ; 00452094
    RET                                 ; 00452095


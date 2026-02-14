; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcube_cpp_CDemonCubeTriangle_writeToFile_FUN_00455250(CDemonCubeTriangle *this_ptr,_FILE *file_handle,CVector3f *vertex_buffer_base)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; CVector3f *      Stack[0xc]:4   vertex_buffer_base
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_save_FUN_00457430 at 004574c7
;
; Referenced Globals:
;   uint[3] g_TempTriangleIndices
;   undefined4 g_TempTriangleIndices[1]
;   undefined4 g_TempTriangleIndices[2]
;
; Called Functions:
;   crt_stdio.c_fwrite_FUN_005fdc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00455250
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_writeToFile_FUN_00455250
    PUSH ESI                            ; 00455251
    MOV EBX,dword ptr [ESP + 0xc]       ; 00455252
    MOV ESI,dword ptr [ESP + 0x14]      ; 00455256
    MOV ECX,0xc                         ; 0045525a
    MOV EAX,dword ptr [EBX]             ; 0045525f
    XOR EDX,EDX                         ; 00455261
    SUB EAX,ESI                         ; 00455263
    DIV ECX                             ; 00455265
    MOV [0x015c4824],EAX                ; 00455267 | g_TempTriangleIndices
    MOV EAX,dword ptr [EBX + 0x4]       ; 0045526c
    XOR EDX,EDX                         ; 0045526f
    SUB EAX,ESI                         ; 00455271
    DIV ECX                             ; 00455273
    MOV [0x015c4828],EAX                ; 00455275 | g_TempTriangleIndices[1]
    MOV EAX,dword ptr [EBX + 0x8]       ; 0045527a
    XOR EDX,EDX                         ; 0045527d
    SUB EAX,ESI                         ; 0045527f
    DIV ECX                             ; 00455281
    MOV EDX,dword ptr [ESP + 0x10]      ; 00455283
    PUSH EDX                            ; 00455287
    PUSH 0x4                            ; 00455288
    PUSH 0x3                            ; 0045528a
    PUSH 0x15c4824                      ; 0045528c | g_TempTriangleIndices
    MOV [0x015c482c],EAX                ; 00455291 | g_TempTriangleIndices[2]
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 00455296
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0045529b
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045529e
    PUSH ECX                            ; 004552a2
    PUSH 0x1                            ; 004552a3
    PUSH 0x14                           ; 004552a5
    ADD EBX,0xc                         ; 004552a7
    PUSH EBX                            ; 004552aa
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 004552ab
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004552b0
    POP ESI                             ; 004552b3
    POP EBX                             ; 004552b4
    RET                                 ; 004552b5


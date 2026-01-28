; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0 (CDemonCubeTriangle *this_ptr,FILE *file_handle,CVector3f *vertex_buffer_base)
;
; Parameters:
; CDemonCubeTriangle * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   file_handle
; CVector3f *      Stack[0xc]:4   vertex_buffer_base
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_load_FUN_00457530 at 004575b1
;
; Referenced Globals:
;   uint[3] g_TempTriangleIndices
;   undefined4 g_TempTriangleIndices[1]
;   undefined4 g_TempTriangleIndices[2]
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005fd990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004551d0
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_004551d0
    PUSH ESI                            ; 004551d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004551d2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004551d6
    MOV EDX,dword ptr [ESP + 0x10]      ; 004551da
    PUSH EDX                            ; 004551de
    PUSH 0x4                            ; 004551df
    PUSH 0x3                            ; 004551e1
    PUSH 0x15c4824                      ; 004551e3 | g_TempTriangleIndices
    CALL crt_stdio.c_fread_FUN_005fd990 ; 004551e8
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    MOV EDX,dword ptr [0x015c4824]      ; 004551ed | g_TempTriangleIndices
    LEA EAX,[EDX*0x4 + 0x0]             ; 004551f3
    SUB EAX,EDX                         ; 004551fa
    SHL EAX,0x2                         ; 004551fc
    LEA EDX,[ESI + EAX*0x1]             ; 004551ff
    MOV dword ptr [EBX],EDX             ; 00455202
    MOV EDX,dword ptr [0x015c4828]      ; 00455204 | g_TempTriangleIndices[1]
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045520a
    SUB EAX,EDX                         ; 00455211
    SHL EAX,0x2                         ; 00455213
    LEA EDX,[ESI + EAX*0x1]             ; 00455216
    ADD ESP,0x10                        ; 00455219
    MOV dword ptr [EBX + 0x4],EDX       ; 0045521c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045521f
    MOV EDX,dword ptr [0x015c482c]      ; 00455223 | g_TempTriangleIndices[2]
    PUSH ECX                            ; 00455229
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045522a
    PUSH 0x1                            ; 00455231
    SUB EAX,EDX                         ; 00455233
    PUSH 0x14                           ; 00455235
    SHL EAX,0x2                         ; 00455237
    ADD EBX,0xc                         ; 0045523a
    ADD ESI,EAX                         ; 0045523d
    PUSH EBX                            ; 0045523f
    MOV dword ptr [EBX + -0x4],ESI      ; 00455240
    CALL crt_stdio.c_fread_FUN_005fd990 ; 00455243
        ;   XREF to: 005fd990 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005fd990(void * buffer, SIZE_T size, SIZE_T count, FILE * file)
    ADD ESP,0x10                        ; 00455248
    POP ESI                             ; 0045524b
    POP EBX                             ; 0045524c
    RET                                 ; 0045524d


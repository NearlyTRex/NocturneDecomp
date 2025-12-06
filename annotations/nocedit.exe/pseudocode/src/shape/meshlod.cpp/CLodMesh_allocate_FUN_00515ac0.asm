; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0(CLodMesh * this_ptr, int vertex_count, int tri_count, int submesh_count)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_count
; int              Stack[0xc]:4   tri_count
; int              Stack[0x10]:4   submesh_count
;
; XREF[5]:
;   core_skeledit.cpp_FUN_0058c190 at 0058c552
;   shape_meshlod.cpp_CLodMesh_copyFrom_FUN_0051a8c0 at 0051a8d9
;   shape_meshlod.cpp_CLodMesh_importFromEditorGlobals_FUN_0051b080 at 0051b0f4
;   shape_meshlod.cpp_CLodMesh_parseS3DFileVariant_FUN_0051adf0 at 0051aef3
;   shape_meshlod.cpp_CLodMesh_parseS3DFile_FUN_0051aa60 at 0051ab96
;
; Referenced Globals:
;   TerminatedCString s_shape_meshlod_cpp_0063740a
;   TerminatedCString s_shape_meshlod_cpp_0063741f
;   TerminatedCString s_shape_meshlod_cpp_00637434
;   TerminatedCString s_shape_meshlod_cpp_00637449
;   TerminatedCString s_No_mem_0063745e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350
;   shape_meshlod.cpp_CLodMesh_free_FUN_00515970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515ac0
        ;   Label: shape_meshlod.cpp_CLodMesh_allocate_FUN_00515ac0
    PUSH ESI                            ; 00515ac1
    PUSH EDI                            ; 00515ac2
    PUSH EBP                            ; 00515ac3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00515ac4
    PUSH EBX                            ; 00515ac8
    CALL shape_meshlod.cpp_CLodMesh_free_FUN_00515970 ; 00515ac9 | void shape_meshlod.cpp_CLodMesh_free_FUN_00515970(CLodMesh * this_ptr)
        ;   XREF to: 00515970 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00515ace
    MOV EAX,dword ptr [ESP + 0x18]      ; 00515ad1
    MOV dword ptr [EBX + 0x3c],EAX      ; 00515ad5
    PUSH 0x231                          ; 00515ad8
    MOV dword ptr [EBX],EAX             ; 00515add
    MOV EAX,dword ptr [ESP + 0x20]      ; 00515adf
    PUSH 0x63740a                       ; 00515ae3 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_0063740a = ..\shape\meshlod.cpp
    MOV dword ptr [EBX + 0x40],EAX      ; 00515ae8
    PUSH 0x4c4                          ; 00515aeb
    MOV EDX,dword ptr [EBX + 0x3c]      ; 00515af0
    MOV dword ptr [EBX + 0x8],EAX       ; 00515af3
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00515af6
    PUSH EDX                            ; 00515afa
    MOV dword ptr [EBX + 0x10],EAX      ; 00515afb
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 00515afe | void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00515b03
    PUSH 0x232                          ; 00515b06
    PUSH 0x63741f                       ; 00515b0b | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_0063741f = ..\shape\meshlod.cpp
    PUSH 0x8c                           ; 00515b10
    MOV ECX,dword ptr [EBX + 0x40]      ; 00515b15
    PUSH ECX                            ; 00515b18
    MOV dword ptr [EBX + 0x4],EAX       ; 00515b19
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 00515b1c | void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00515b21
    PUSH 0x233                          ; 00515b24
    PUSH 0x637434                       ; 00515b29 | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00637434 = ..\shape\meshlod.cpp
    PUSH 0x48                           ; 00515b2e
    MOV ESI,dword ptr [EBX + 0x10]      ; 00515b30
    PUSH ESI                            ; 00515b33
    MOV dword ptr [EBX + 0xc],EAX       ; 00515b34
    CALL shape_memdbg.cpp_debugCalloc_FUN_0050f350 ; 00515b37 | void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)
        ;   XREF to: 0050f350 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00515b3c
    MOV EDI,dword ptr [EBX + 0x3c]      ; 00515b3f
    MOV dword ptr [EBX + 0x14],EAX      ; 00515b42
    TEST EDI,EDI                        ; 00515b45
    JLE 0x00515b4f                      ; 00515b47 | LAB_00515b4f
        ;   XREF to: 00515b4f (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x4],0x0       ; 00515b49
    JZ 0x00515b6c                       ; 00515b4d | LAB_00515b6c
        ;   XREF to: 00515b6c (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x40],0x0      ; 00515b4f
        ;   Label: LAB_00515b4f
    JLE 0x00515b5b                      ; 00515b53 | LAB_00515b5b
        ;   XREF to: 00515b5b (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0xc],0x0       ; 00515b55
    JZ 0x00515b6c                       ; 00515b59 | LAB_00515b6c
        ;   XREF to: 00515b6c (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x10],0x0      ; 00515b5b
        ;   Label: LAB_00515b5b
    JLE 0x00515b67                      ; 00515b5f | LAB_00515b67
        ;   XREF to: 00515b67 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x14],0x0      ; 00515b61
    JZ 0x00515b6c                       ; 00515b65 | LAB_00515b6c
        ;   XREF to: 00515b6c (CONDITIONAL_JUMP)
    POP EBP                             ; 00515b67
        ;   Label: LAB_00515b67
    POP EDI                             ; 00515b68
    POP ESI                             ; 00515b69
    POP EBX                             ; 00515b6a
    RET                                 ; 00515b6b
    MOV EDI,0x637449                    ; 00515b6c | = "..\\shape\\meshlod.cpp" | s_shape_meshlod_cpp_00637449 = ..\shape\meshlod.cpp
        ;   Label: LAB_00515b6c
    MOV EBP,0x23a                       ; 00515b71
    PUSH 0x63745e                       ; 00515b76 | = "No mem!" | s_No_mem_0063745e = No mem!
    MOV dword ptr [0x02f0ca48],EDI      ; 00515b7b | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 00515b81 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00515b87 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00515b8c
    POP EBP                             ; 00515b8f
    POP EDI                             ; 00515b90
    POP ESI                             ; 00515b91
    POP EBX                             ; 00515b92
    RET                                 ; 00515b93


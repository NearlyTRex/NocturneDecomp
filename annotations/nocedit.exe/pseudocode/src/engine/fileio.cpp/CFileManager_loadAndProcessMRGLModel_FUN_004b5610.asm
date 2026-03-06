; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610(CFileManager *this_ptr,char *filename)
;
; Parameters:
; CFileManager *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; Called Functions:
;   engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0
;   engine_model.c_freeMRGLData_FUN_005280b0
;   engine_model.c_loadModelFile_FUN_00527ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5610
        ;   Label: engine_fileio.cpp_CFileManager_loadAndProcessMRGLModel_FUN_004b5610
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b5611
    PUSH EDX                            ; 004b5615
    CALL engine_model.c_loadModelFile_FUN_00527ec0 ; 004b5616
        ;   XREF to: 00527ec0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_model.c_loadModelFile_FUN_00527ec0(char * filename)
    ADD ESP,0x4                         ; 004b561b
    PUSH EAX                            ; 004b561e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b561f
    PUSH ECX                            ; 004b5623
    MOV EBX,EAX                         ; 004b5624
    CALL engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0 ; 004b5626
        ;   XREF to: 004b54e0 (UNCONDITIONAL_CALL)  ; void engine_fileio.cpp_CFileManager_processMRGLNode_FUN_004b54e0(CFileManager * this_ptr, SMRGLHeaderExtended * mrgl_node)
    ADD ESP,0x8                         ; 004b562b
    PUSH EBX                            ; 004b562e
    CALL engine_model.c_freeMRGLData_FUN_005280b0 ; 004b562f
        ;   XREF to: 005280b0 (UNCONDITIONAL_CALL)  ; void engine_model.c_freeMRGLData_FUN_005280b0(SMRGLHeaderExtended * mrgl_data)
    ADD ESP,0x4                         ; 004b5634
    POP EBX                             ; 004b5637
    RET                                 ; 004b5638


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_004044a0(SMRGLHeaderExtended *prim)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   prim
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_005774e5
;   TerminatedCString s_Bad_MRGL_struct_005774f4
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x5774e5                    ; 004044a0 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_badMRGLStruct_FUN_004044a0
    MOV ECX,0x119                       ; 004044a5
    PUSH 0x5774f4                       ; 004044aa | = "Bad MRGL struct"
    MOV dword ptr [0x01cc4800],EDX      ; 004044af | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004044b5 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004044bb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004044c0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004044c3
    RET                                 ; 004044c7


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_00403800(SMRGLHeaderExtended *prim)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   prim
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_005ca332
;   TerminatedCString s_Bad_MRGL_struct_005ca341
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca332                    ; 00403800 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_badMRGLStruct_FUN_00403800
    MOV ECX,0x122                       ; 00403805
    PUSH 0x5ca341                       ; 0040380a | = "Bad MRGL struct"
    MOV dword ptr [0x01d046a0],EDX      ; 0040380f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00403815 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040381b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00403820
    MOV EAX,dword ptr [ESP + 0x4]       ; 00403823
    RET                                 ; 00403827


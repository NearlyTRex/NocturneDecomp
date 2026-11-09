; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_badMRGLStruct_FUN_004037b0(SMRGLHeaderExtended *prim)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   prim
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_005b534d
;   TerminatedCString s_Bad_MRGL_struct_005b535c
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b534d                    ; 004037b0 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_badMRGLStruct_FUN_004037b0
    MOV ECX,0x11b                       ; 004037b5
    PUSH 0x5b535c                       ; 004037ba | = "Bad MRGL struct"
    MOV dword ptr [0x01d71de0],EDX      ; 004037bf | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004037c5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004037cb
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004037d0
    MOV EAX,dword ptr [ESP + 0x4]       ; 004037d3
    RET                                 ; 004037d7


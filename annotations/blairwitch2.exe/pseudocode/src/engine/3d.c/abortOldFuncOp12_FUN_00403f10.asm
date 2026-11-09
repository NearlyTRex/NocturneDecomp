; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp12_FUN_00403f10(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_005ca381
;   TerminatedCString s_Old_func_005ca390
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca381                    ; 00403f10 | = "..\\engine\\3d.c"
        ;   Label: engine_3d.c_abortOldFuncOp12_FUN_00403f10
    MOV ECX,0x383                       ; 00403f15
    PUSH 0x5ca390                       ; 00403f1a | = "Old func"
    MOV dword ptr [0x01d046a0],EDX      ; 00403f1f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00403f25 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00403f2b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00403f30
    XOR EAX,EAX                         ; 00403f33
    RET                                 ; 00403f35


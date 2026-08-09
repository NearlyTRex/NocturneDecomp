; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_oldFunction3_FUN_004051e0(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Called Functions:
;   engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004051e0
        ;   Label: engine_3d.c_oldFunction3_FUN_004051e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004051e1
    MOV EAX,dword ptr [EBX + 0x4]       ; 004051e5
    ADD EAX,EBX                         ; 004051e8
    PUSH EAX                            ; 004051ea
    CALL engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80 ; 004051eb
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; void engine_3d.c_dispatchMRGLBlockChain_FUN_00408e80(SMRGLHeaderExtended * chain)
    ADD ESP,0x4                         ; 004051f0
    LEA EAX,[EBX + 0x8]                 ; 004051f3
    POP EBX                             ; 004051f6
    RET                                 ; 004051f7


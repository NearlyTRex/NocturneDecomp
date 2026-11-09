; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp28_FUN_00404e10(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
;
; Referenced Globals:
;   TerminatedCString s_Old_func_d_005ca315
;   TerminatedCString s_engine_3d_c_005ca323
;   undefined4 DAT_0070ca84
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404e10
        ;   Label: engine_3d.c_abortOldFuncOp28_FUN_00404e10
    SUB ESP,0x50                        ; 00404e11
    MOV EAX,dword ptr [ESP + 0x58]      ; 00404e14
    MOV EDX,dword ptr [EAX]             ; 00404e18
    PUSH EDX                            ; 00404e1a
    PUSH 0x5ca315                       ; 00404e1b | = "Old func : %d"
    LEA EAX,[ESP + 0x8]                 ; 00404e20
    PUSH EAX                            ; 00404e24
    MOV EBX,0xe2                        ; 00404e25
    CALL crt_unknown.c_FUN_005b7790     ; 00404e2a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0xc                         ; 00404e2f
    MOV EAX,ESP                         ; 00404e32
    MOV ECX,0x5ca323                    ; 00404e34 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 00404e39
    MOV dword ptr [0x01d046a4],EBX      ; 00404e3a | DAT_01d046a4
    MOV dword ptr [0x01d046a0],ECX      ; 00404e40 | DAT_01d046a0
    CALL core_main.c_FUN_004e4500       ; 00404e46
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    MOV EAX,0x70ca84                    ; 00404e4b | DAT_0070ca84
    ADD ESP,0x4                         ; 00404e50
    ADD ESP,0x50                        ; 00404e53
    POP EBX                             ; 00404e56
    RET                                 ; 00404e57


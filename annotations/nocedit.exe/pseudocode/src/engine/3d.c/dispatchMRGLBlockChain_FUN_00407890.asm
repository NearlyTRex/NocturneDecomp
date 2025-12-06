; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_dispatchMRGLBlockChain_FUN_00407890(SMRGLHeaderExtended * chain)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   chain
;
; XREF[2]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_00407aa0 at 00407b4e
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_00501f30 at 005022b1
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_00613474
;   TerminatedCString s_Bad_pointer_00613483
;   TerminatedCString s_engine_3d_c_00613490
;   TerminatedCString s_Bad_code_0061349f
;   MRGLBlockHandlerFunc*[67] g_MRGLBlockHandlerTable
;   uint g_VertexProcessingEnabled = 0x1
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407890
        ;   Label: engine_3d.c_dispatchMRGLBlockChain_FUN_00407890
    PUSH ESI                            ; 00407891
    PUSH EDI                            ; 00407892
    PUSH EBP                            ; 00407893
    MOV EBX,dword ptr [ESP + 0x14]      ; 00407894
    MOV ESI,EBX                         ; 00407898
    TEST EBX,EBX                        ; 0040789a
    JZ 0x004078dd                       ; 0040789c | LAB_004078dd
        ;   XREF to: 004078dd (CONDITIONAL_JUMP)
    MOV EDI,0x613490                    ; 0040789e | = "..\\engine\\3d.c" | s_engine_3d_c_00613490 = ..\engine\3d.c
        ;   Label: LAB_0040789e
    MOV EBP,0xc68                       ; 004078a3
    MOV EBX,dword ptr [ESI]             ; 004078a8
        ;   Label: LAB_004078a8
    TEST EBX,EBX                        ; 004078aa
    JZ 0x00407902                       ; 004078ac | LAB_00407902
        ;   XREF to: 00407902 (CONDITIONAL_JUMP)
    JL 0x004078b5                       ; 004078ae | LAB_004078b5
        ;   XREF to: 004078b5 (CONDITIONAL_JUMP)
    CMP EBX,0x43                        ; 004078b0
    JL 0x004078ce                       ; 004078b3 | LAB_004078ce
        ;   XREF to: 004078ce (CONDITIONAL_JUMP)
    PUSH 0x61349f                       ; 004078b5 | = "Bad code!" | s_Bad_code_0061349f = Bad code!
        ;   Label: LAB_004078b5
    MOV dword ptr [0x02f0ca48],EDI      ; 004078ba | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 004078c0 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004078c6 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004078cb
    PUSH ESI                            ; 004078ce
        ;   Label: LAB_004078ce
    CALL dword ptr [EBX*0x4 + 0x66df88] ; 004078cf | MRGLBlockHandlerFunc *[67] g_MRGLBlockHandlerTable
    MOV ESI,EAX                         ; 004078d6
    ADD ESP,0x4                         ; 004078d8
    JMP 0x004078a8                      ; 004078db | LAB_004078a8
        ;   XREF to: 004078a8 (UNCONDITIONAL_JUMP)
    MOV EDX,0x613474                    ; 004078dd | = "..\\engine\\3d.c" | s_engine_3d_c_00613474 = ..\engine\3d.c
        ;   Label: LAB_004078dd
    MOV ECX,0xc5f                       ; 004078e2
    PUSH 0x613483                       ; 004078e7 | = "Bad pointer!" | s_Bad_pointer_00613483 = Bad pointer!
    MOV dword ptr [0x02f0ca48],EDX      ; 004078ec | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004078f2 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004078f8 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004078fd
    JMP 0x0040789e                      ; 00407900 | LAB_0040789e
        ;   XREF to: 0040789e (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x006793bc],0x1      ; 00407902 | uint g_VertexProcessingEnabled
        ;   Label: LAB_00407902
    POP EBP                             ; 0040790c
    POP EDI                             ; 0040790d
    POP ESI                             ; 0040790e
    POP EBX                             ; 0040790f
    RET                                 ; 00407910


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_3d.c_addFaceIfVisible_FUN_004079c0(SMRGLHeaderPrimitive * cull_reference, SMRGLHeaderPrimitive * face_to_queue)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   cull_reference
; SMRGLHeaderPrimitive * Stack[0x8]:4   face_to_queue
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_006134f3
;   TerminatedCString s_renderFaceList_too_many__00613502
;   int g_RenderFaceCount
;   SMRGLHeaderPrimitive*[2000] g_RenderFaceArray
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_3d.c_isVisiblePlane_FUN_00403950
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004079c0
        ;   Label: engine_3d.c_addFaceIfVisible_FUN_004079c0
    ADD EAX,0x8                         ; 004079c4
    PUSH EAX                            ; 004079c7
    CALL engine_3d.c_isVisiblePlane_FUN_00403950 ; 004079c8
        ;   XREF to: 00403950 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403950(SClipPlane * plane)
    ADD ESP,0x4                         ; 004079cd
    TEST EAX,EAX                        ; 004079d0
    JZ 0x004079fb                       ; 004079d2
        ;   XREF to: 004079fb (CONDITIONAL_JUMP)  ; LAB_004079fb
    PUSH ESI                            ; 004079d4
    CMP dword ptr [0x00820070],0x7d0    ; 004079d5 | g_RenderFaceCount
    JGE 0x004079fc                      ; 004079df
        ;   XREF to: 004079fc (CONDITIONAL_JUMP)  ; LAB_004079fc
    MOV EAX,[0x00820070]                ; 004079e1 | g_RenderFaceCount
        ;   Label: LAB_004079e1
    MOV EDX,dword ptr [ESP + 0x8]       ; 004079e6
    LEA ESI,[EAX + 0x1]                 ; 004079ea
    MOV dword ptr [EAX*0x4 + 0x820074],EDX ; 004079ed | g_RenderFaceArray
    MOV dword ptr [0x00820070],ESI      ; 004079f4 | g_RenderFaceCount
    POP ESI                             ; 004079fa
    RET                                 ; 004079fb
        ;   Label: LAB_004079fb
    PUSH EBX                            ; 004079fc
        ;   Label: LAB_004079fc
    MOV ECX,0x6134f3                    ; 004079fd | = "..\\engine\\3d.c"
    MOV EBX,0xca7                       ; 00407a02
    PUSH 0x613502                       ; 00407a07 | = "renderFaceList - too many faces"
    MOV dword ptr [0x02f0ca48],ECX      ; 00407a0c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 00407a12 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00407a18
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00407a1d
    POP EBX                             ; 00407a20
    JMP 0x004079e1                      ; 00407a21
        ;   XREF to: 004079e1 (UNCONDITIONAL_JUMP)  ; LAB_004079e1


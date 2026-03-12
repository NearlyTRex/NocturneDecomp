; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl shape_design_c_findVertexListInModel_FUN_00468000(SMRGLHeaderExtended *model_ptr)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   model_ptr
;
; XREF[2]:
;   shape_design.c_applyVertexCentering_FUN_004680f0 at 00468100
;   shape_design.c_centerKeyframeModels_FUN_004681a0 at 00468204
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061cbd9
;   TerminatedCString s_Can_t_find_vlist_0061cbeb
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_model.c_getMRGLSize_FUN_00528700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468000
        ;   Label: shape_design.c_findVertexListInModel_FUN_00468000
    PUSH ESI                            ; 00468001
    PUSH EDI                            ; 00468002
    PUSH EBP                            ; 00468003
    MOV EBP,ESP                         ; 00468004
    SUB ESP,0xc                         ; 00468006
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046800c
        ;   Label: LAB_0046800c
    CMP byte ptr [EAX],0x2              ; 0046800f
    JZ 0x0046801c                       ; 00468012
        ;   XREF to: 0046801c (CONDITIONAL_JUMP)  ; LAB_0046801c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00468014
    CMP byte ptr [EAX],0x0              ; 00468017
    JNZ 0x0046801e                      ; 0046801a
        ;   XREF to: 0046801e (CONDITIONAL_JUMP)  ; LAB_0046801e
    JMP 0x0046802f                      ; 0046801c
        ;   XREF to: 0046802f (UNCONDITIONAL_JUMP)  ; LAB_0046802f
        ;   Label: LAB_0046801c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046801e
        ;   Label: LAB_0046801e
    PUSH EAX                            ; 00468021
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 00468022
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 00468027
    ADD dword ptr [EBP + 0x14],EAX      ; 0046802a
    JMP 0x0046800c                      ; 0046802d
        ;   XREF to: 0046800c (UNCONDITIONAL_JUMP)  ; LAB_0046800c
    CMP dword ptr [EBP + 0x14],0x0      ; 0046802f
        ;   Label: LAB_0046802f
    JNZ 0x00468057                      ; 00468033
        ;   XREF to: 00468057 (CONDITIONAL_JUMP)  ; LAB_00468057
    MOV dword ptr [0x02f0ca48],0x61cbd9 ; 00468035 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x21ce   ; 0046803f | g_CurrentLineNumber
    MOV EAX,0x61cbeb                    ; 00468049 | = "Can't find vlist"
    PUSH EAX                            ; 0046804e | = "Can't find vlist"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046804f
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00468054
    MOV EAX,dword ptr [EBP + 0x14]      ; 00468057
        ;   Label: LAB_00468057
    MOV dword ptr [EBP + -0x4],EAX      ; 0046805a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046805d
    ADD EAX,0xc                         ; 00468060
    MOV dword ptr [EBP + -0x8],EAX      ; 00468063
    MOV EAX,dword ptr [EBP + -0x8]      ; 00468066
    MOV dword ptr [EBP + -0xc],EAX      ; 00468069
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046806c
    MOV ESP,EBP                         ; 0046806f
    POP EBP                             ; 00468071
    POP EDI                             ; 00468072
    POP ESI                             ; 00468073
    POP EBX                             ; 00468074
    RET                                 ; 00468075


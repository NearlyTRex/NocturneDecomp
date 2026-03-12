; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_dsemodel_cpp_CDSEModel_convertVertex_FUN_0048f6f0(CDSEModel *this_ptr,int vertex_id)
;
; Parameters:
; CDSEModel *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_id
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770 at 0048f8ef
;
; Referenced Globals:
;   TerminatedCString s_shape_dsemodel_cpp_006224b9
;   TerminatedCString s_CDSEModel_convertVertex__006224cf
;   int[5000] g_VertexIdRegistry
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f6f0
        ;   Label: shape_dsemodel.cpp_CDSEModel_convertVertex_FUN_0048f6f0
    PUSH ESI                            ; 0048f6f1
    PUSH EDI                            ; 0048f6f2
    PUSH EBP                            ; 0048f6f3
    MOV EBP,ESP                         ; 0048f6f4
    SUB ESP,0x8                         ; 0048f6f6
    MOV dword ptr [EBP + -0x4],0x0      ; 0048f6fc
    JMP 0x0048f70b                      ; 0048f703
        ;   XREF to: 0048f70b (UNCONDITIONAL_JUMP)  ; LAB_0048f70b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f705
        ;   Label: LAB_0048f705
    INC dword ptr [EBP + -0x4]          ; 0048f708
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f70b
        ;   Label: LAB_0048f70b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f70e
    CMP EAX,dword ptr [EDX]             ; 0048f711
    JGE 0x0048f730                      ; 0048f713
        ;   XREF to: 0048f730 (CONDITIONAL_JUMP)  ; LAB_0048f730
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f715
    SHL EAX,0x2                         ; 0048f718
    MOV EAX,dword ptr [EAX + 0x2c9b328] ; 0048f71b | g_VertexIdRegistry
    CMP EAX,dword ptr [EBP + 0x18]      ; 0048f721
    JNZ 0x0048f72e                      ; 0048f724
        ;   XREF to: 0048f72e (CONDITIONAL_JUMP)  ; LAB_0048f72e
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f726
    MOV dword ptr [EBP + -0x8],EAX      ; 0048f729
    JMP 0x0048f759                      ; 0048f72c
        ;   XREF to: 0048f759 (UNCONDITIONAL_JUMP)  ; LAB_0048f759
    JMP 0x0048f705                      ; 0048f72e
        ;   XREF to: 0048f705 (UNCONDITIONAL_JUMP)  ; LAB_0048f705
        ;   Label: LAB_0048f72e
    MOV dword ptr [0x02f0ca48],0x6224b9 ; 0048f730 | g_CurrentFilename | = "..\\shape\\dsemodel.cpp"
        ;   Label: LAB_0048f730
    MOV dword ptr [0x02f0ca4c],0x5a     ; 0048f73a | g_CurrentLineNumber
    MOV EAX,0x6224cf                    ; 0048f744 | = "CDSEModel::convertVertex - Vertex not..."
    PUSH EAX                            ; 0048f749 | = "CDSEModel::convertVertex - Vertex not..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048f74a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048f74f
    MOV dword ptr [EBP + -0x8],0xffffffff ; 0048f752
    MOV EAX,dword ptr [EBP + -0x8]      ; 0048f759
        ;   Label: LAB_0048f759
    MOV ESP,EBP                         ; 0048f75c
    POP EBP                             ; 0048f75e
    POP EDI                             ; 0048f75f
    POP ESI                             ; 0048f760
    POP EBX                             ; 0048f761
    RET                                 ; 0048f762


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_dsemodel_cpp_CDSEModel_logVertex_FUN_0048f660(CDSEModel *this_ptr,int vertex_id)
;
; Parameters:
; CDSEModel *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   vertex_id
; Local Variables:
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_dsemodel.cpp_CDSEModel_processModelPart_FUN_0048f770 at 0048f884
;
; Referenced Globals:
;   TerminatedCString s_shape_dsemodel_cpp_00622462
;   TerminatedCString s_CDSEModel_logVertex_Rich_00622478
;   int[5000] g_VertexIdRegistry
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f660
        ;   Label: shape_dsemodel.cpp_CDSEModel_logVertex_FUN_0048f660
    PUSH ESI                            ; 0048f661
    PUSH EDI                            ; 0048f662
    PUSH EBP                            ; 0048f663
    MOV EBP,ESP                         ; 0048f664
    SUB ESP,0x4                         ; 0048f666
    MOV dword ptr [EBP + -0x4],0x0      ; 0048f66c
    JMP 0x0048f67b                      ; 0048f673
        ;   XREF to: 0048f67b (UNCONDITIONAL_JUMP)  ; LAB_0048f67b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f675
        ;   Label: LAB_0048f675
    INC dword ptr [EBP + -0x4]          ; 0048f678
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f67b
        ;   Label: LAB_0048f67b
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f67e
    CMP EAX,dword ptr [EDX]             ; 0048f681
    JGE 0x0048f69a                      ; 0048f683
        ;   XREF to: 0048f69a (CONDITIONAL_JUMP)  ; LAB_0048f69a
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f685
    SHL EAX,0x2                         ; 0048f688
    MOV EAX,dword ptr [EAX + 0x2c9b328] ; 0048f68b | g_VertexIdRegistry
    CMP EAX,dword ptr [EBP + 0x18]      ; 0048f691
    JNZ 0x0048f698                      ; 0048f694
        ;   XREF to: 0048f698 (CONDITIONAL_JUMP)  ; LAB_0048f698
    JMP 0x0048f69a                      ; 0048f696
        ;   XREF to: 0048f69a (UNCONDITIONAL_JUMP)  ; LAB_0048f69a
    JMP 0x0048f675                      ; 0048f698
        ;   XREF to: 0048f675 (UNCONDITIONAL_JUMP)  ; LAB_0048f675
        ;   Label: LAB_0048f698
    MOV EAX,dword ptr [EBP + -0x4]      ; 0048f69a
        ;   Label: LAB_0048f69a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048f69d
    CMP EAX,dword ptr [EDX]             ; 0048f6a0
    JNZ 0x0048f6e7                      ; 0048f6a2
        ;   XREF to: 0048f6e7 (CONDITIONAL_JUMP)  ; LAB_0048f6e7
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f6a4
    MOV EDX,dword ptr [EAX]             ; 0048f6a7
    SHL EDX,0x2                         ; 0048f6a9
    MOV EAX,dword ptr [EBP + 0x18]      ; 0048f6ac
    MOV dword ptr [EDX + 0x2c9b328],EAX ; 0048f6af | g_VertexIdRegistry
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f6b5
    INC dword ptr [EAX]                 ; 0048f6b8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048f6ba
    CMP dword ptr [EAX],0x1388          ; 0048f6bd
    JL 0x0048f6e7                       ; 0048f6c3
        ;   XREF to: 0048f6e7 (CONDITIONAL_JUMP)  ; LAB_0048f6e7
    MOV dword ptr [0x02f0ca48],0x622462 ; 0048f6c5 | g_CurrentFilename | = "..\\shape\\dsemodel.cpp"
    MOV dword ptr [0x02f0ca4c],0x4a     ; 0048f6cf | g_CurrentLineNumber
    MOV EAX,0x622478                    ; 0048f6d9 | = "CDSEModel::logVertex - Rich, you need..."
    PUSH EAX                            ; 0048f6de | = "CDSEModel::logVertex - Rich, you need..."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0048f6df
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0048f6e4
    MOV ESP,EBP                         ; 0048f6e7
        ;   Label: LAB_0048f6e7
    POP EBP                             ; 0048f6e9
    POP EDI                             ; 0048f6ea
    POP ESI                             ; 0048f6eb
    POP EBX                             ; 0048f6ec
    RET                                 ; 0048f6ed


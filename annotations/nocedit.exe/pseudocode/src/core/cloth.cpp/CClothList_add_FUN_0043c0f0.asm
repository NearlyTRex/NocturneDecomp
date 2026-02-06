; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cloth_cpp_CClothList_add_FUN_0043c0f0(CClothList *this_ptr,char *filename)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[2]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040fd67
;   core_stranger.cpp_CStranger_ctor_FUN_005bb120 at 005bb497
;
; Referenced Globals:
;   TerminatedCString s_core_cloth_cpp_006185de
;   TerminatedCString s_CClothList_add_list_is_f_006185f0
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c0f0
        ;   Label: core_cloth.cpp_CClothList_add_FUN_0043c0f0
    PUSH ESI                            ; 0043c0f1
    PUSH EDI                            ; 0043c0f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0043c0f3
    CMP dword ptr [EBX],0xa             ; 0043c0f7
    JGE 0x0043c140                      ; 0043c0fa
        ;   XREF to: 0043c140 (CONDITIONAL_JUMP)  ; LAB_0043c140
    MOV EDX,dword ptr [EBX]             ; 0043c0fc
        ;   Label: LAB_0043c0fc
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043c0fe
    ADD EAX,EDX                         ; 0043c105
    LEA EDI,[EBX + 0x4]                 ; 0043c107
    SHL EAX,0x3                         ; 0043c10a
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043c10d
    ADD EDI,EAX                         ; 0043c111
    PUSH EDI                            ; 0043c113
    MOV AL,byte ptr [ESI]               ; 0043c114
        ;   Label: LAB_0043c114
    MOV byte ptr [EDI],AL               ; 0043c116
    CMP AL,0x0                          ; 0043c118
    JZ 0x0043c12c                       ; 0043c11a
        ;   XREF to: 0043c12c (CONDITIONAL_JUMP)  ; LAB_0043c12c
    MOV AL,byte ptr [ESI + 0x1]         ; 0043c11c
    ADD ESI,0x2                         ; 0043c11f
    MOV byte ptr [EDI + 0x1],AL         ; 0043c122
    ADD EDI,0x2                         ; 0043c125
    CMP AL,0x0                          ; 0043c128
    JNZ 0x0043c114                      ; 0043c12a
        ;   XREF to: 0043c114 (CONDITIONAL_JUMP)  ; LAB_0043c114
    POP EDI                             ; 0043c12c
        ;   Label: LAB_0043c12c
    MOV EAX,dword ptr [EBX]             ; 0043c12d
    MOV dword ptr [EBX + EAX*0x4 + 0x194],0x0 ; 0043c12f
    INC dword ptr [EBX]                 ; 0043c13a
    POP EDI                             ; 0043c13c
    POP ESI                             ; 0043c13d
    POP EBX                             ; 0043c13e
    RET                                 ; 0043c13f
    MOV ECX,0x6185de                    ; 0043c140 | = "..\\core\\cloth.cpp"
        ;   Label: LAB_0043c140
    MOV ESI,0x5d1                       ; 0043c145
    PUSH 0x6185f0                       ; 0043c14a | = "CClothList::add - list is full"
    MOV dword ptr [0x02f0ca48],ECX      ; 0043c14f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0043c155 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0043c15b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043c160
    JMP 0x0043c0fc                      ; 0043c163
        ;   XREF to: 0043c0fc (UNCONDITIONAL_JUMP)  ; LAB_0043c0fc


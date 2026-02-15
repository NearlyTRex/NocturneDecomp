; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_design_c_getVertexCountFromModel_FUN_00468080(SMRGLHeaderExtended *model_ptr)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_applyVertexCentering_FUN_004680f0 at 0046810f
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061cbfc
;   TerminatedCString s_Can_t_find_vlist_0061cc0e
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_model.c_getMRGLSize_FUN_00528700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468080
        ;   Label: shape_design.c_getVertexCountFromModel_FUN_00468080
    PUSH ESI                            ; 00468081
    PUSH EDI                            ; 00468082
    PUSH EBP                            ; 00468083
    MOV EBP,ESP                         ; 00468084
    SUB ESP,0x8                         ; 00468086
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046808c
        ;   Label: LAB_0046808c
    CMP byte ptr [EAX],0x2              ; 0046808f
    JZ 0x0046809c                       ; 00468092
        ;   XREF to: 0046809c (CONDITIONAL_JUMP)  ; LAB_0046809c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00468094
    CMP byte ptr [EAX],0x0              ; 00468097
    JNZ 0x0046809e                      ; 0046809a
        ;   XREF to: 0046809e (CONDITIONAL_JUMP)  ; LAB_0046809e
    JMP 0x004680af                      ; 0046809c
        ;   XREF to: 004680af (UNCONDITIONAL_JUMP)  ; LAB_004680af
        ;   Label: LAB_0046809c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046809e
        ;   Label: LAB_0046809e
    PUSH EAX                            ; 004680a1
    CALL engine_model.c_getMRGLSize_FUN_00528700 ; 004680a2
        ;   XREF to: 00528700 (UNCONDITIONAL_CALL)  ; int engine_model.c_getMRGLSize_FUN_00528700(SMRGLHeaderExtended * header)
    ADD ESP,0x4                         ; 004680a7
    ADD dword ptr [EBP + 0x14],EAX      ; 004680aa
    JMP 0x0046808c                      ; 004680ad
        ;   XREF to: 0046808c (UNCONDITIONAL_JUMP)  ; LAB_0046808c
    CMP dword ptr [EBP + 0x14],0x0      ; 004680af
        ;   Label: LAB_004680af
    JNZ 0x004680d7                      ; 004680b3
        ;   XREF to: 004680d7 (CONDITIONAL_JUMP)  ; LAB_004680d7
    MOV dword ptr [0x02f0ca48],0x61cbfc ; 004680b5 | g_CurrentFilename | = "..\\shape\\design.c"
    MOV dword ptr [0x02f0ca4c],0x21e2   ; 004680bf | g_CurrentLineNumber
    MOV EAX,0x61cc0e                    ; 004680c9 | = "Can't find vlist"
    PUSH EAX                            ; 004680ce | = "Can't find vlist"
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004680cf
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004680d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 004680d7
        ;   Label: LAB_004680d7
    MOV dword ptr [EBP + -0x4],EAX      ; 004680da
    MOV EAX,dword ptr [EBP + -0x4]      ; 004680dd
    MOV EAX,dword ptr [EAX + 0x8]       ; 004680e0
    MOV dword ptr [EBP + -0x8],EAX      ; 004680e3
    MOV EAX,dword ptr [EBP + -0x8]      ; 004680e6
    MOV ESP,EBP                         ; 004680e9
    POP EBP                             ; 004680eb
    POP EDI                             ; 004680ec
    POP ESI                             ; 004680ed
    POP EBX                             ; 004680ee
    RET                                 ; 004680ef


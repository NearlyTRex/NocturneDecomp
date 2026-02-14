; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_design_c_qsortByOriginalIndex_FUN_004677c0(SVertexPair *vertex_pair1,SVertexPair *vertex_pair2)
;
; Parameters:
; SVertexPair *    Stack[0x4]:4   vertex_pair1
; SVertexPair *    Stack[0x8]:4   vertex_pair2
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_vertexReducer_FUN_00467850 at 00467cf5
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061c9ef
;   TerminatedCString s_Hell_froze_0061ca01
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004677c0
        ;   Label: shape_design.c_qsortByOriginalIndex_FUN_004677c0
    PUSH ESI                            ; 004677c1
    PUSH EDI                            ; 004677c2
    PUSH EBP                            ; 004677c3
    MOV EBP,ESP                         ; 004677c4
    SUB ESP,0xc                         ; 004677c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004677cc
    CMP EAX,dword ptr [EBP + 0x18]      ; 004677cf
    JNZ 0x004677dd                      ; 004677d2
        ;   XREF to: 004677dd (CONDITIONAL_JUMP)  ; LAB_004677dd
    MOV dword ptr [EBP + -0xc],0x0      ; 004677d4
    JMP 0x00467838                      ; 004677db
        ;   XREF to: 00467838 (UNCONDITIONAL_JUMP)  ; LAB_00467838
    MOV EAX,dword ptr [EBP + 0x14]      ; 004677dd
        ;   Label: LAB_004677dd
    MOV EAX,dword ptr [EAX]             ; 004677e0
    MOV dword ptr [EBP + -0x8],EAX      ; 004677e2
    MOV EAX,dword ptr [EBP + 0x18]      ; 004677e5
    MOV EAX,dword ptr [EAX]             ; 004677e8
    MOV dword ptr [EBP + -0x4],EAX      ; 004677ea
    MOV EAX,dword ptr [EBP + -0x8]      ; 004677ed
    CMP EAX,dword ptr [EBP + -0x4]      ; 004677f0
    JGE 0x004677fe                      ; 004677f3
        ;   XREF to: 004677fe (CONDITIONAL_JUMP)  ; LAB_004677fe
    MOV dword ptr [EBP + -0xc],0xffffffff ; 004677f5
    JMP 0x00467838                      ; 004677fc
        ;   XREF to: 00467838 (UNCONDITIONAL_JUMP)  ; LAB_00467838
    MOV EAX,dword ptr [EBP + -0x8]      ; 004677fe
        ;   Label: LAB_004677fe
    CMP EAX,dword ptr [EBP + -0x4]      ; 00467801
    JLE 0x0046780f                      ; 00467804
        ;   XREF to: 0046780f (CONDITIONAL_JUMP)  ; LAB_0046780f
    MOV dword ptr [EBP + -0xc],0x1      ; 00467806
    JMP 0x00467838                      ; 0046780d
        ;   XREF to: 00467838 (UNCONDITIONAL_JUMP)  ; LAB_00467838
    MOV dword ptr [0x02f0ca48],0x61c9ef ; 0046780f | g_CurrentFilename | = "..\\shape\\design.c"
        ;   Label: LAB_0046780f
    MOV dword ptr [0x02f0ca4c],0x2078   ; 00467819 | g_CurrentLineNumber
    MOV EAX,0x61ca01                    ; 00467823 | = "Hell froze."
    PUSH EAX                            ; 00467828 | = "Hell froze."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00467829
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0046782e
    MOV dword ptr [EBP + -0xc],0x0      ; 00467831
    MOV EAX,dword ptr [EBP + -0xc]      ; 00467838
        ;   Label: LAB_00467838
    MOV ESP,EBP                         ; 0046783b
    POP EBP                             ; 0046783d
    POP EDI                             ; 0046783e
    POP ESI                             ; 0046783f
    POP EBX                             ; 00467840
    RET                                 ; 00467841


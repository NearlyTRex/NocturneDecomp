; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_design_c_qsortByVertexX_FUN_004676f0(SVertexPair *a,SVertexPair *b)
;
; Parameters:
; SVertexPair *    Stack[0x4]:4   a
; SVertexPair *    Stack[0x8]:4   b
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_vertexReducer_FUN_00467850 at 00467a58
;
; Referenced Globals:
;   TerminatedCString s_shape_design_c_0061c9d1
;   TerminatedCString s_Hell_froze_0061c9e3
;   SVertexData[20000] g_LoadedVertices
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004676f0
        ;   Label: shape_design.c_qsortByVertexX_FUN_004676f0
    PUSH ESI                            ; 004676f1
    PUSH EDI                            ; 004676f2
    PUSH EBP                            ; 004676f3
    MOV EBP,ESP                         ; 004676f4
    SUB ESP,0x14                        ; 004676f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004676fc
    CMP EAX,dword ptr [EBP + 0x18]      ; 004676ff
    JNZ 0x00467710                      ; 00467702
        ;   XREF to: 00467710 (CONDITIONAL_JUMP)  ; LAB_00467710
    MOV dword ptr [EBP + -0x14],0x0     ; 00467704
    JMP 0x004677ad                      ; 0046770b
        ;   XREF to: 004677ad (UNCONDITIONAL_JUMP)  ; LAB_004677ad
    MOV EAX,dword ptr [EBP + 0x14]      ; 00467710
        ;   Label: LAB_00467710
    MOV EAX,dword ptr [EAX]             ; 00467713
    MOV dword ptr [EBP + -0x10],EAX     ; 00467715
    MOV EAX,dword ptr [EBP + 0x18]      ; 00467718
    MOV EAX,dword ptr [EAX]             ; 0046771b
    MOV dword ptr [EBP + -0xc],EAX      ; 0046771d
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00467720
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00467724 | g_LoadedVertices
    MOV dword ptr [EBP + -0x8],EAX      ; 0046772a
    IMUL EAX,dword ptr [EBP + -0xc],0x14 ; 0046772d
    MOV EAX,dword ptr [EAX + 0x162640c] ; 00467731 | g_LoadedVertices
    MOV dword ptr [EBP + -0x4],EAX      ; 00467737
    FLD float ptr [EBP + -0x8]          ; 0046773a
    FCOMP float ptr [EBP + -0x4]        ; 0046773d
    FNSTSW AX                           ; 00467740
    SAHF                                ; 00467742
    JNC 0x0046774e                      ; 00467743
        ;   XREF to: 0046774e (CONDITIONAL_JUMP)  ; LAB_0046774e
    MOV dword ptr [EBP + -0x14],0xffffffff ; 00467745
    JMP 0x004677ad                      ; 0046774c
        ;   XREF to: 004677ad (UNCONDITIONAL_JUMP)  ; LAB_004677ad
    FLD float ptr [EBP + -0x8]          ; 0046774e
        ;   Label: LAB_0046774e
    FCOMP float ptr [EBP + -0x4]        ; 00467751
    FNSTSW AX                           ; 00467754
    SAHF                                ; 00467756
    JBE 0x00467762                      ; 00467757
        ;   XREF to: 00467762 (CONDITIONAL_JUMP)  ; LAB_00467762
    MOV dword ptr [EBP + -0x14],0x1     ; 00467759
    JMP 0x004677ad                      ; 00467760
        ;   XREF to: 004677ad (UNCONDITIONAL_JUMP)  ; LAB_004677ad
    MOV EAX,dword ptr [EBP + -0x10]     ; 00467762
        ;   Label: LAB_00467762
    CMP EAX,dword ptr [EBP + -0xc]      ; 00467765
    JGE 0x00467773                      ; 00467768
        ;   XREF to: 00467773 (CONDITIONAL_JUMP)  ; LAB_00467773
    MOV dword ptr [EBP + -0x14],0xffffffff ; 0046776a
    JMP 0x004677ad                      ; 00467771
        ;   XREF to: 004677ad (UNCONDITIONAL_JUMP)  ; LAB_004677ad
    MOV EAX,dword ptr [EBP + -0x10]     ; 00467773
        ;   Label: LAB_00467773
    CMP EAX,dword ptr [EBP + -0xc]      ; 00467776
    JLE 0x00467784                      ; 00467779
        ;   XREF to: 00467784 (CONDITIONAL_JUMP)  ; LAB_00467784
    MOV dword ptr [EBP + -0x14],0x1     ; 0046777b
    JMP 0x004677ad                      ; 00467782
        ;   XREF to: 004677ad (UNCONDITIONAL_JUMP)  ; LAB_004677ad
    MOV dword ptr [0x02f0ca48],0x61c9d1 ; 00467784 | g_CurrentFilename | = "..\\shape\\design.c"
        ;   Label: LAB_00467784
    MOV dword ptr [0x02f0ca4c],0x2062   ; 0046778e | g_CurrentLineNumber
    MOV EAX,0x61c9e3                    ; 00467798 | = "Hell froze."
    PUSH EAX                            ; 0046779d | = "Hell froze."
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0046779e
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004677a3
    MOV dword ptr [EBP + -0x14],0x0     ; 004677a6
    MOV EAX,dword ptr [EBP + -0x14]     ; 004677ad
        ;   Label: LAB_004677ad
    MOV ESP,EBP                         ; 004677b0
    POP EBP                             ; 004677b2
    POP EDI                             ; 004677b3
    POP ESI                             ; 004677b4
    POP EBX                             ; 004677b5
    RET                                 ; 004677b6


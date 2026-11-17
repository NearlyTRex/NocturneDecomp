; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pop_FUN_004e9810(void)
;
;
; XREF[2]:
;   engine_drender.cpp_pop_FUN_0046b4a0 at 0046b4a0
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_0047ff50 at 0047ffe8
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005dc7e6
;   TerminatedCString s_Matrix_unbalance2_005dc7f9
;   int g_INT_01c38b6c
;   int g_INT_01c38b70
;   int g_INT_01c38b74
;   int g_INT_01c38b90
;   int g_INT_01c38b94
;   int g_INT_01c38b98
;   int g_INT_01c38b9c
;   int g_INT_01c38ba0
;   int g_INT_01c38ba4
;   int g_INT_01c38ba8
;   int g_INT_01c38bac
;   int g_INT_01c38bb0
;   int g_INT_01c38bb4
;   ... and 5 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d05014]      ; 004e9810 | g_INT_01d05014
        ;   Label: engine_matrix.c_pop_FUN_004e9810
    DEC EDX                             ; 004e9816
    MOV dword ptr [0x01d05014],EDX      ; 004e9817 | g_INT_01d05014
    TEST EDX,EDX                        ; 004e981d
    JL 0x004e98ed                       ; 004e981f
        ;   XREF to: 004e98ed (CONDITIONAL_JUMP)  ; LAB_004e98ed
    MOV EAX,[0x01d05014]                ; 004e9825 | g_INT_01d05014
        ;   Label: LAB_004e9825
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05018] ; 004e982a
    MOV dword ptr [0x01c38b9c],EDX      ; 004e9831 | g_INT_01c38b9c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05040] ; 004e9837
    MOV dword ptr [0x01c38ba0],EDX      ; 004e983e | g_INT_01c38ba0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05068] ; 004e9844
    MOV dword ptr [0x01c38ba4],EDX      ; 004e984b | g_INT_01c38ba4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05090] ; 004e9851
    MOV dword ptr [0x01c38ba8],EDX      ; 004e9858 | g_INT_01c38ba8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d050b8] ; 004e985e
    MOV dword ptr [0x01c38bac],EDX      ; 004e9865 | g_INT_01c38bac
    MOV EDX,dword ptr [EAX*0x4 + 0x1d050e0] ; 004e986b
    MOV dword ptr [0x01c38bb0],EDX      ; 004e9872 | g_INT_01c38bb0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05108] ; 004e9878
    MOV dword ptr [0x01c38bb4],EDX      ; 004e987f | g_INT_01c38bb4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05130] ; 004e9885
    MOV dword ptr [0x01c38bb8],EDX      ; 004e988c | g_INT_01c38bb8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05158] ; 004e9892
    MOV dword ptr [0x01c38bbc],EDX      ; 004e9899 | g_INT_01c38bbc
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05180] ; 004e989f
    MOV dword ptr [0x01c38b6c],EDX      ; 004e98a6 | g_INT_01c38b6c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d051a8] ; 004e98ac
    MOV dword ptr [0x01c38b70],EDX      ; 004e98b3 | g_INT_01c38b70
    MOV EDX,dword ptr [EAX*0x4 + 0x1d051d0] ; 004e98b9
    MOV dword ptr [0x01c38b74],EDX      ; 004e98c0 | g_INT_01c38b74
    MOV EDX,dword ptr [EAX*0x4 + 0x1d051f8] ; 004e98c6
    MOV dword ptr [0x01c38b90],EDX      ; 004e98cd | g_INT_01c38b90
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05220] ; 004e98d3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05248] ; 004e98da
    MOV dword ptr [0x01c38b94],EDX      ; 004e98e1 | g_INT_01c38b94
    MOV [0x01c38b98],EAX                ; 004e98e7 | g_INT_01c38b98
    RET                                 ; 004e98ec
    PUSH ESI                            ; 004e98ed
        ;   Label: LAB_004e98ed
    PUSH EBX                            ; 004e98ee
    MOV EBX,0x5dc7e6                    ; 004e98ef | = "..\\engine\\matrix.c"
    MOV ESI,0x358                       ; 004e98f4
    PUSH 0x5dc7f9                       ; 004e98f9 | = "Matrix unbalance2"
    MOV dword ptr [0x01d046a0],EBX      ; 004e98fe | g_CHAR_PTR_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004e9904 | g_INT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 004e990a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 004e990f
    POP EBX                             ; 004e9912
    POP ESI                             ; 004e9913
    JMP 0x004e9825                      ; 004e9914
        ;   XREF to: 004e9825 (UNCONDITIONAL_JUMP)  ; LAB_004e9825


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pop_FUN_004e5ef0(void)
;
;
; XREF[2]:
;   engine_drender.cpp_pop_FUN_0046d080 at 0046d080
;   shape_edittool.cpp_CEditorTools_draw3DAxisLabelsAt_FUN_00481150 at 004811e8
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005c6f22
;   TerminatedCString s_Matrix_unbalance2_005c6f35
;   int g_INT_01c6e2cc
;   int g_INT_01c6e2d0
;   int g_INT_01c6e2d4
;   int g_INT_01c6e2f0
;   int g_INT_01c6e2f4
;   int g_INT_01c6e2f8
;   int g_INT_01c6e2fc
;   int g_INT_01c6e300
;   int g_INT_01c6e304
;   int g_INT_01c6e308
;   int g_INT_01c6e30c
;   int g_INT_01c6e310
;   int g_INT_01c6e314
;   ... and 5 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d726a0]      ; 004e5ef0 | g_INT_01d726a0
        ;   Label: engine_matrix.c_pop_FUN_004e5ef0
    DEC EDX                             ; 004e5ef6
    MOV dword ptr [0x01d726a0],EDX      ; 004e5ef7 | g_INT_01d726a0
    TEST EDX,EDX                        ; 004e5efd
    JL 0x004e5fcd                       ; 004e5eff
        ;   XREF to: 004e5fcd (CONDITIONAL_JUMP)  ; LAB_004e5fcd
    MOV EAX,[0x01d726a0]                ; 004e5f05 | g_INT_01d726a0
        ;   Label: LAB_004e5f05
    MOV EDX,dword ptr [EAX*0x4 + 0x1d726a4] ; 004e5f0a
    MOV dword ptr [0x01c6e2fc],EDX      ; 004e5f11 | g_INT_01c6e2fc
    MOV EDX,dword ptr [EAX*0x4 + 0x1d726cc] ; 004e5f17
    MOV dword ptr [0x01c6e300],EDX      ; 004e5f1e | g_INT_01c6e300
    MOV EDX,dword ptr [EAX*0x4 + 0x1d726f4] ; 004e5f24
    MOV dword ptr [0x01c6e304],EDX      ; 004e5f2b | g_INT_01c6e304
    MOV EDX,dword ptr [EAX*0x4 + 0x1d7271c] ; 004e5f31
    MOV dword ptr [0x01c6e308],EDX      ; 004e5f38 | g_INT_01c6e308
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72744] ; 004e5f3e
    MOV dword ptr [0x01c6e30c],EDX      ; 004e5f45 | g_INT_01c6e30c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d7276c] ; 004e5f4b
    MOV dword ptr [0x01c6e310],EDX      ; 004e5f52 | g_INT_01c6e310
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72794] ; 004e5f58
    MOV dword ptr [0x01c6e314],EDX      ; 004e5f5f | g_INT_01c6e314
    MOV EDX,dword ptr [EAX*0x4 + 0x1d727bc] ; 004e5f65
    MOV dword ptr [0x01c6e318],EDX      ; 004e5f6c | g_INT_01c6e318
    MOV EDX,dword ptr [EAX*0x4 + 0x1d727e4] ; 004e5f72
    MOV dword ptr [0x01c6e31c],EDX      ; 004e5f79 | g_INT_01c6e31c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d7280c] ; 004e5f7f
    MOV dword ptr [0x01c6e2cc],EDX      ; 004e5f86 | g_INT_01c6e2cc
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72834] ; 004e5f8c
    MOV dword ptr [0x01c6e2d0],EDX      ; 004e5f93 | g_INT_01c6e2d0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d7285c] ; 004e5f99
    MOV dword ptr [0x01c6e2d4],EDX      ; 004e5fa0 | g_INT_01c6e2d4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d72884] ; 004e5fa6
    MOV dword ptr [0x01c6e2f0],EDX      ; 004e5fad | g_INT_01c6e2f0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d728ac] ; 004e5fb3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d728d4] ; 004e5fba
    MOV dword ptr [0x01c6e2f4],EDX      ; 004e5fc1 | g_INT_01c6e2f4
    MOV [0x01c6e2f8],EAX                ; 004e5fc7 | g_INT_01c6e2f8
    RET                                 ; 004e5fcc
    PUSH ESI                            ; 004e5fcd
        ;   Label: LAB_004e5fcd
    PUSH EBX                            ; 004e5fce
    MOV EBX,0x5c6f22                    ; 004e5fcf | = "..\\engine\\matrix.c"
    MOV ESI,0x358                       ; 004e5fd4
    PUSH 0x5c6f35                       ; 004e5fd9 | = "Matrix unbalance2"
    MOV dword ptr [0x01d71de0],EBX      ; 004e5fde | g_CHAR_PTR_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004e5fe4 | g_INT_01d71de4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 004e5fea
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x4                         ; 004e5fef
    POP EBX                             ; 004e5ff2
    POP ESI                             ; 004e5ff3
    JMP 0x004e5f05                      ; 004e5ff4
        ;   XREF to: 004e5f05 (UNCONDITIONAL_JUMP)  ; LAB_004e5f05


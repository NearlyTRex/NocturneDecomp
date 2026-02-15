; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_showModelPartsList_FUN_0045dbe0(void)
;
; Local Variables:
; undefined        Stack[-0xcc]:1  local_cc
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   TerminatedCString s_Part_d_s_0061b43b
;   int g_WindowHeight = 0xc8
;   SModelPartName[500] g_ModelPartNames
;   int g_PartsCount
;
; Called Functions:
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045dbe0
        ;   Label: shape_design.c_showModelPartsList_FUN_0045dbe0
    PUSH ESI                            ; 0045dbe1
    PUSH EDI                            ; 0045dbe2
    PUSH EBP                            ; 0045dbe3
    MOV EBP,ESP                         ; 0045dbe4
    SUB ESP,0xbc                        ; 0045dbe6
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045dbec
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    MOV dword ptr [EBP + -0x10],0x0     ; 0045dbf1
    JMP 0x0045dc12                      ; 0045dbf8
        ;   XREF to: 0045dc12 (UNCONDITIONAL_JUMP)  ; LAB_0045dc12
    MOV ECX,0xb                         ; 0045dbfa
        ;   Label: LAB_0045dbfa
    MOV EAX,[0x00679398]                ; 0045dbff | g_WindowHeight
    MOV EDX,dword ptr [0x00679398]      ; 0045dc04 | g_WindowHeight
    SAR EDX,0x1f                        ; 0045dc0a
    IDIV ECX                            ; 0045dc0d
    ADD dword ptr [EBP + -0x10],EAX     ; 0045dc0f
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045dc12
        ;   Label: LAB_0045dc12
    CMP EAX,dword ptr [0x01e528a0]      ; 0045dc15 | g_PartsCount
    JGE 0x0045dcb2                      ; 0045dc1b
        ;   XREF to: 0045dcb2 (CONDITIONAL_JUMP)  ; LAB_0045dcb2
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0045dc21
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV dword ptr [EBP + -0xc],0x0      ; 0045dc26
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045dc2d
    MOV dword ptr [EBP + -0x8],EAX      ; 0045dc30
    JMP 0x0045dc3b                      ; 0045dc33
        ;   XREF to: 0045dc3b (UNCONDITIONAL_JUMP)  ; LAB_0045dc3b
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045dc35
        ;   Label: LAB_0045dc35
    INC dword ptr [EBP + -0x8]          ; 0045dc38
    MOV ECX,0xb                         ; 0045dc3b
        ;   Label: LAB_0045dc3b
    MOV EAX,[0x00679398]                ; 0045dc40 | g_WindowHeight
    MOV EDX,dword ptr [0x00679398]      ; 0045dc45 | g_WindowHeight
    SAR EDX,0x1f                        ; 0045dc4b
    IDIV ECX                            ; 0045dc4e
    ADD EAX,dword ptr [EBP + -0x10]     ; 0045dc50
    CMP EAX,dword ptr [EBP + -0x8]      ; 0045dc53
    JLE 0x0045dca3                      ; 0045dc56
        ;   XREF to: 0045dca3 (CONDITIONAL_JUMP)  ; LAB_0045dca3
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045dc58
    CMP EAX,dword ptr [0x01e528a0]      ; 0045dc5b | g_PartsCount
    JGE 0x0045dca1                      ; 0045dc61
        ;   XREF to: 0045dca1 (CONDITIONAL_JUMP)  ; LAB_0045dca1
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 0045dc63
    MOV EDX,0x1e50190                   ; 0045dc67 | g_ModelPartNames
    ADD EAX,EDX                         ; 0045dc6c
    PUSH EAX                            ; 0045dc6e
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045dc6f
    PUSH EAX                            ; 0045dc72
    MOV EAX,0x61b43b                    ; 0045dc73 | = "Part %d : %s"
    PUSH EAX                            ; 0045dc78 | = "Part %d : %s"
    LEA EAX,[EBP + 0xffffff44]          ; 0045dc79
    PUSH EAX                            ; 0045dc7f
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0045dc80
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0045dc85
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045dc88
    PUSH EAX                            ; 0045dc8b
    PUSH 0x0                            ; 0045dc8c
    LEA EAX,[EBP + 0xffffff44]          ; 0045dc8e
    PUSH EAX                            ; 0045dc94
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0045dc95
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 0045dc9a
    ADD dword ptr [EBP + -0xc],0xb      ; 0045dc9d
    JMP 0x0045dc35                      ; 0045dca1
        ;   XREF to: 0045dc35 (UNCONDITIONAL_JUMP)  ; LAB_0045dc35
        ;   Label: LAB_0045dca1
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0045dca3
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0045dca3
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 0045dca8
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    JMP 0x0045dbfa                      ; 0045dcad
        ;   XREF to: 0045dbfa (UNCONDITIONAL_JUMP)  ; LAB_0045dbfa
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 0045dcb2
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
        ;   Label: LAB_0045dcb2
    MOV ESP,EBP                         ; 0045dcb7
    POP EBP                             ; 0045dcb9
    POP EDI                             ; 0045dcba
    POP ESI                             ; 0045dcbb
    POP EBX                             ; 0045dcbc
    RET                                 ; 0045dcbd


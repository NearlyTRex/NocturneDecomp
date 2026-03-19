; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_crushModel_FUN_00469bd0(void)
;
; Local Variables:
; int              Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f704
;
; Referenced Globals:
;   TerminatedCString s_Model_crushed_Hit_a_key_0061d090
;   int g_VertexCount
;   undefined4 g_LoadedVertices[0].vertex.y
;
; Called Functions:
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00469bd0
        ;   Label: shape_design.c_crushModel_FUN_00469bd0
    PUSH ESI                            ; 00469bd1
    PUSH EDI                            ; 00469bd2
    PUSH EBP                            ; 00469bd3
    MOV EBP,ESP                         ; 00469bd4
    SUB ESP,0x8                         ; 00469bd6
    MOV dword ptr [EBP + -0x4],0x461c3c00 ; 00469bdc
    MOV dword ptr [EBP + -0x8],0x0      ; 00469be3
    JMP 0x00469bf2                      ; 00469bea
        ;   XREF to: 00469bf2 (UNCONDITIONAL_JUMP)  ; LAB_00469bf2
    MOV EAX,dword ptr [EBP + -0x8]      ; 00469bec
        ;   Label: LAB_00469bec
    INC dword ptr [EBP + -0x8]          ; 00469bef
    MOV EAX,dword ptr [EBP + -0x8]      ; 00469bf2
        ;   Label: LAB_00469bf2
    CMP EAX,dword ptr [0x01626408]      ; 00469bf5 | g_VertexCount
    JGE 0x00469c1e                      ; 00469bfb
        ;   XREF to: 00469c1e (CONDITIONAL_JUMP)  ; LAB_00469c1e
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 00469bfd
    FLD float ptr [EAX + 0x1626410]     ; 00469c01 | g_LoadedVertices[0].vertex.y
    FCOMP float ptr [EBP + -0x4]        ; 00469c07
    FNSTSW AX                           ; 00469c0a
    SAHF                                ; 00469c0c
    JNC 0x00469c1c                      ; 00469c0d
        ;   XREF to: 00469c1c (CONDITIONAL_JUMP)  ; LAB_00469c1c
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 00469c0f
    MOV EAX,dword ptr [EAX + 0x1626410] ; 00469c13 | g_LoadedVertices[0].vertex.y
    MOV dword ptr [EBP + -0x4],EAX      ; 00469c19
    JMP 0x00469bec                      ; 00469c1c
        ;   XREF to: 00469bec (UNCONDITIONAL_JUMP)  ; LAB_00469bec
        ;   Label: LAB_00469c1c
    MOV dword ptr [EBP + -0x8],0x0      ; 00469c1e
        ;   Label: LAB_00469c1e
    JMP 0x00469c2d                      ; 00469c25
        ;   XREF to: 00469c2d (UNCONDITIONAL_JUMP)  ; LAB_00469c2d
    MOV EAX,dword ptr [EBP + -0x8]      ; 00469c27
        ;   Label: LAB_00469c27
    INC dword ptr [EBP + -0x8]          ; 00469c2a
    MOV EAX,dword ptr [EBP + -0x8]      ; 00469c2d
        ;   Label: LAB_00469c2d
    CMP EAX,dword ptr [0x01626408]      ; 00469c30 | g_VertexCount
    JGE 0x00469c47                      ; 00469c36
        ;   XREF to: 00469c47 (CONDITIONAL_JUMP)  ; LAB_00469c47
    IMUL EDX,dword ptr [EBP + -0x8],0x14 ; 00469c38
    MOV EAX,dword ptr [EBP + -0x4]      ; 00469c3c
    MOV dword ptr [EDX + 0x1626410],EAX ; 00469c3f | g_LoadedVertices[0].vertex.y
    JMP 0x00469c27                      ; 00469c45
        ;   XREF to: 00469c27 (UNCONDITIONAL_JUMP)  ; LAB_00469c27
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00469c47
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
        ;   Label: LAB_00469c47
    PUSH 0x0                            ; 00469c4c
    PUSH 0x0                            ; 00469c4e
    MOV EAX,0x61d090                    ; 00469c50 | = "Model crushed.  Hit a key..."
    PUSH EAX                            ; 00469c55 | = "Model crushed.  Hit a key..."
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00469c56
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00469c5b
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 00469c5e
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00469c63
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
    MOV ESP,EBP                         ; 00469c68
    POP EBP                             ; 00469c6a
    POP EDI                             ; 00469c6b
    POP ESI                             ; 00469c6c
    POP EBX                             ; 00469c6d
    RET                                 ; 00469c6e


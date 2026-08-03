; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_pushViewport_FUN_004ce7c0(int x,int y,int width,int height)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_pushViewport_FUN_00460e40 at 00460e56
;   shape_edittool.cpp_FUN_004722b0 at 0047234f
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005882c3
;   TerminatedCString s_Too_many_3D_windows_005882d6
;   undefined4 DAT_005b7648
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01c00c58
;   undefined4 DAT_01c00c5c
;   undefined4 DAT_01c00c60
;   undefined4 DAT_01c00c64
;   undefined4 DAT_01c039c4
;   undefined4 DAT_01c039c8
;   undefined4 DAT_01c039cc
;   undefined4 DAT_01c039d0
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   engine_2d.c_setupViewportAndClipping_FUN_00401e30
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004ce7c0
        ;   Label: engine_matrix.c_pushViewport_FUN_004ce7c0
    MOV EAX,[0x01cc53d0]                ; 004ce7c1 | DAT_01cc53d0
    MOV EDX,dword ptr [0x01c039c4]      ; 004ce7c6 | DAT_01c039c4
    MOV dword ptr [EAX*0x4 + 0x1cc549c],EDX ; 004ce7cc
    MOV EDX,dword ptr [0x01c039c8]      ; 004ce7d3 | DAT_01c039c8
    MOV dword ptr [EAX*0x4 + 0x1cc54c4],EDX ; 004ce7d9
    MOV EDX,dword ptr [0x01c039cc]      ; 004ce7e0 | DAT_01c039cc
    MOV dword ptr [EAX*0x4 + 0x1cc54ec],EDX ; 004ce7e6
    MOV EDX,dword ptr [0x01c039d0]      ; 004ce7ed | DAT_01c039d0
    MOV dword ptr [EAX*0x4 + 0x1cc5514],EDX ; 004ce7f3
    MOV EDX,dword ptr [0x01c039d4]      ; 004ce7fa | DAT_01c039d4
    MOV dword ptr [EAX*0x4 + 0x1cc553c],EDX ; 004ce800
    MOV EDX,dword ptr [0x01c039d8]      ; 004ce807 | DAT_01c039d8
    MOV dword ptr [EAX*0x4 + 0x1cc5564],EDX ; 004ce80d
    MOV EDX,dword ptr [0x01c039dc]      ; 004ce814 | DAT_01c039dc
    MOV dword ptr [EAX*0x4 + 0x1cc558c],EDX ; 004ce81a
    MOV EDX,dword ptr [0x01c039e0]      ; 004ce821 | DAT_01c039e0
    MOV dword ptr [EAX*0x4 + 0x1cc55b4],EDX ; 004ce827
    MOV EDX,dword ptr [0x01c039e4]      ; 004ce82e | DAT_01c039e4
    MOV dword ptr [EAX*0x4 + 0x1cc55dc],EDX ; 004ce834
    MOV EDX,dword ptr [0x01c00c48]      ; 004ce83b | DAT_01c00c48
    MOV dword ptr [EAX*0x4 + 0x1cc53d4],EDX ; 004ce841
    MOV EDX,dword ptr [0x01c00c4c]      ; 004ce848 | DAT_01c00c4c
    MOV dword ptr [EAX*0x4 + 0x1cc53fc],EDX ; 004ce84e
    MOV EDX,dword ptr [0x01c00c50]      ; 004ce855 | DAT_01c00c50
    MOV dword ptr [EAX*0x4 + 0x1cc5424],EDX ; 004ce85b
    MOV EDX,dword ptr [0x01c00c54]      ; 004ce862 | DAT_01c00c54
    MOV dword ptr [EAX*0x4 + 0x1cc544c],EDX ; 004ce868
    MOV EDX,dword ptr [0x005b7648]      ; 004ce86f | DAT_005b7648
    MOV dword ptr [EAX*0x4 + 0x1cc5474],EDX ; 004ce875
    MOV EDX,dword ptr [0x01c00c58]      ; 004ce87c | DAT_01c00c58
    MOV dword ptr [EAX*0x4 + 0x1cc5604],EDX ; 004ce882
    MOV EDX,dword ptr [0x01c00c60]      ; 004ce889 | DAT_01c00c60
    MOV dword ptr [EAX*0x4 + 0x1cc562c],EDX ; 004ce88f
    MOV EDX,dword ptr [0x01c00c5c]      ; 004ce896 | DAT_01c00c5c
    MOV dword ptr [EAX*0x4 + 0x1cc5654],EDX ; 004ce89c
    MOV EDX,dword ptr [0x01c00c64]      ; 004ce8a3 | DAT_01c00c64
    MOV dword ptr [EAX*0x4 + 0x1cc567c],EDX ; 004ce8a9
    LEA EDX,[EAX + 0x1]                 ; 004ce8b0
    MOV dword ptr [0x01cc53d0],EDX      ; 004ce8b3 | DAT_01cc53d0
    CMP EDX,0xa                         ; 004ce8b9
    JGE 0x004ce8f1                      ; 004ce8bc
        ;   XREF to: 004ce8f1 (CONDITIONAL_JUMP)  ; LAB_004ce8f1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ce8be
        ;   Label: LAB_004ce8be
    ADD EAX,dword ptr [ESP + 0x14]      ; 004ce8c2
    MOV EBP,dword ptr [ESP + 0x10]      ; 004ce8c6
    PUSH EAX                            ; 004ce8ca
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ce8cb
    ADD EAX,EBP                         ; 004ce8cf
    PUSH EAX                            ; 004ce8d1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004ce8d2
    PUSH EAX                            ; 004ce8d6
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ce8d7
    PUSH EDX                            ; 004ce8db
    CALL engine_2d.c_setupViewportAndClipping_FUN_00401e30 ; 004ce8dc
        ;   XREF to: 00401e30 (UNCONDITIONAL_CALL)  ; void engine_2d.c_setupViewportAndClipping_FUN_00401e30(int left, int top, int right, int bottom)
    MOV ECX,0x10000                     ; 004ce8e1
    ADD ESP,0x10                        ; 004ce8e6
    MOV dword ptr [0x005b7648],ECX      ; 004ce8e9 | DAT_005b7648
    POP EBP                             ; 004ce8ef
    RET                                 ; 004ce8f0
    PUSH ESI                            ; 004ce8f1
        ;   Label: LAB_004ce8f1
    PUSH EBX                            ; 004ce8f2
    MOV EBX,0x5882c3                    ; 004ce8f3 | = "..\\engine\\matrix.c"
    MOV ESI,0x53d                       ; 004ce8f8
    PUSH 0x5882d6                       ; 004ce8fd | = "Too many 3D windows"
    MOV dword ptr [0x01cc4800],EBX      ; 004ce902 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004ce908 | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004ce90e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004ce913
    POP EBX                             ; 004ce916
    POP ESI                             ; 004ce917
    JMP 0x004ce8be                      ; 004ce918
        ;   XREF to: 004ce8be (UNCONDITIONAL_JUMP)  ; LAB_004ce8be


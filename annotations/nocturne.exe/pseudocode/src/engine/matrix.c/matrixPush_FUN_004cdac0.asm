; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPush_FUN_004cdac0(void)
;
;
; XREF[3]:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004d5860 at 004d5911
;   core_mimic.cpp_mirrorXTransform_FUN_004d43c0 at 004d43c3
;   engine_drender.cpp_CDemonRenderer_matrixPush_FUN_00460be0 at 00460be0
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_0058820f
;   TerminatedCString s_Matrix_unbalance_00588222
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EAX,[0x01cc5174]                ; 004cdac0 | DAT_01cc5174
        ;   Label: engine_matrix.c_matrixPush_FUN_004cdac0
    MOV EDX,dword ptr [0x01c039b8]      ; 004cdac5 | DAT_01c039b8
    MOV dword ptr [EAX*0x4 + 0x1cc52e0],EDX ; 004cdacb
    MOV EDX,dword ptr [0x01c039bc]      ; 004cdad2 | DAT_01c039bc
    MOV dword ptr [EAX*0x4 + 0x1cc5308],EDX ; 004cdad8
    MOV EDX,dword ptr [0x01c039c0]      ; 004cdadf | DAT_01c039c0
    MOV dword ptr [EAX*0x4 + 0x1cc5330],EDX ; 004cdae5
    MOV EDX,dword ptr [0x01c039dc]      ; 004cdaec | DAT_01c039dc
    MOV dword ptr [EAX*0x4 + 0x1cc5358],EDX ; 004cdaf2
    MOV EDX,dword ptr [0x01c039e0]      ; 004cdaf9 | DAT_01c039e0
    MOV dword ptr [EAX*0x4 + 0x1cc5380],EDX ; 004cdaff
    MOV EDX,dword ptr [0x01c039e4]      ; 004cdb06 | DAT_01c039e4
    MOV dword ptr [EAX*0x4 + 0x1cc53a8],EDX ; 004cdb0c
    MOV EDX,dword ptr [0x01c039e8]      ; 004cdb13 | DAT_01c039e8
    MOV dword ptr [EAX*0x4 + 0x1cc5178],EDX ; 004cdb19
    MOV EDX,dword ptr [0x01c039ec]      ; 004cdb20 | DAT_01c039ec
    MOV dword ptr [EAX*0x4 + 0x1cc51a0],EDX ; 004cdb26
    MOV EDX,dword ptr [0x01c039f0]      ; 004cdb2d | DAT_01c039f0
    MOV dword ptr [EAX*0x4 + 0x1cc51c8],EDX ; 004cdb33
    MOV EDX,dword ptr [0x01c039f4]      ; 004cdb3a | DAT_01c039f4
    MOV dword ptr [EAX*0x4 + 0x1cc51f0],EDX ; 004cdb40
    MOV EDX,dword ptr [0x01c039f8]      ; 004cdb47 | DAT_01c039f8
    MOV dword ptr [EAX*0x4 + 0x1cc5218],EDX ; 004cdb4d
    MOV EDX,dword ptr [0x01c039fc]      ; 004cdb54 | DAT_01c039fc
    MOV dword ptr [EAX*0x4 + 0x1cc5240],EDX ; 004cdb5a
    MOV EDX,dword ptr [0x01c03a00]      ; 004cdb61 | DAT_01c03a00
    MOV dword ptr [EAX*0x4 + 0x1cc5268],EDX ; 004cdb67
    MOV EDX,dword ptr [0x01c03a04]      ; 004cdb6e | DAT_01c03a04
    MOV dword ptr [EAX*0x4 + 0x1cc5290],EDX ; 004cdb74
    MOV EDX,dword ptr [0x01c03a08]      ; 004cdb7b | DAT_01c03a08
    MOV dword ptr [EAX*0x4 + 0x1cc52b8],EDX ; 004cdb81
    LEA EDX,[EAX + 0x1]                 ; 004cdb88
    MOV dword ptr [0x01cc5174],EDX      ; 004cdb8b | DAT_01cc5174
    CMP EDX,0x9                         ; 004cdb91
    JG 0x004cdb97                       ; 004cdb94
        ;   XREF to: 004cdb97 (CONDITIONAL_JUMP)  ; LAB_004cdb97
    RET                                 ; 004cdb96
    PUSH ESI                            ; 004cdb97
        ;   Label: LAB_004cdb97
    PUSH EBX                            ; 004cdb98
    MOV EBX,0x58820f                    ; 004cdb99 | = "..\\engine\\matrix.c"
    MOV ESI,0x348                       ; 004cdb9e
    PUSH 0x588222                       ; 004cdba3 | = "Matrix unbalance"
    MOV dword ptr [0x01cc4800],EBX      ; 004cdba8 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004cdbae | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004cdbb4
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004cdbb9
    POP EBX                             ; 004cdbbc
    POP ESI                             ; 004cdbbd
    RET                                 ; 004cdbbe


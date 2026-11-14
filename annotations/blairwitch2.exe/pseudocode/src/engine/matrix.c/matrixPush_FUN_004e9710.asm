; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPush_FUN_004e9710(void)
;
;
; XREF[3]:
;   core_mimic.cpp_CMimic_renderMirrored_FUN_004f1890 at 004f1950
;   core_mimic.cpp_mirrorXTransform_FUN_004f0280 at 004f0283
;   engine_drender.cpp_matrixPush_FUN_0046b490 at 0046b490
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005dc7c2
;   TerminatedCString s_Matrix_unbalance_005dc7d5
;   undefined4 DAT_01c38b6c
;   undefined4 DAT_01c38b70
;   undefined4 DAT_01c38b74
;   undefined4 DAT_01c38b90
;   undefined4 DAT_01c38b94
;   undefined4 DAT_01c38b98
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EAX,[0x01d05014]                ; 004e9710 | DAT_01d05014
        ;   Label: engine_matrix.c_matrixPush_FUN_004e9710
    MOV EDX,dword ptr [0x01c38b6c]      ; 004e9715 | DAT_01c38b6c
    MOV dword ptr [EAX*0x4 + 0x1d05180],EDX ; 004e971b
    MOV EDX,dword ptr [0x01c38b70]      ; 004e9722 | DAT_01c38b70
    MOV dword ptr [EAX*0x4 + 0x1d051a8],EDX ; 004e9728
    MOV EDX,dword ptr [0x01c38b74]      ; 004e972f | DAT_01c38b74
    MOV dword ptr [EAX*0x4 + 0x1d051d0],EDX ; 004e9735
    MOV EDX,dword ptr [0x01c38b90]      ; 004e973c | DAT_01c38b90
    MOV dword ptr [EAX*0x4 + 0x1d051f8],EDX ; 004e9742
    MOV EDX,dword ptr [0x01c38b94]      ; 004e9749 | DAT_01c38b94
    MOV dword ptr [EAX*0x4 + 0x1d05220],EDX ; 004e974f
    MOV EDX,dword ptr [0x01c38b98]      ; 004e9756 | DAT_01c38b98
    MOV dword ptr [EAX*0x4 + 0x1d05248],EDX ; 004e975c
    MOV EDX,dword ptr [0x01c38b9c]      ; 004e9763 | DAT_01c38b9c
    MOV dword ptr [EAX*0x4 + 0x1d05018],EDX ; 004e9769
    MOV EDX,dword ptr [0x01c38ba0]      ; 004e9770 | DAT_01c38ba0
    MOV dword ptr [EAX*0x4 + 0x1d05040],EDX ; 004e9776
    MOV EDX,dword ptr [0x01c38ba4]      ; 004e977d | DAT_01c38ba4
    MOV dword ptr [EAX*0x4 + 0x1d05068],EDX ; 004e9783
    MOV EDX,dword ptr [0x01c38ba8]      ; 004e978a | DAT_01c38ba8
    MOV dword ptr [EAX*0x4 + 0x1d05090],EDX ; 004e9790
    MOV EDX,dword ptr [0x01c38bac]      ; 004e9797 | DAT_01c38bac
    MOV dword ptr [EAX*0x4 + 0x1d050b8],EDX ; 004e979d
    MOV EDX,dword ptr [0x01c38bb0]      ; 004e97a4 | DAT_01c38bb0
    MOV dword ptr [EAX*0x4 + 0x1d050e0],EDX ; 004e97aa
    MOV EDX,dword ptr [0x01c38bb4]      ; 004e97b1 | DAT_01c38bb4
    MOV dword ptr [EAX*0x4 + 0x1d05108],EDX ; 004e97b7
    MOV EDX,dword ptr [0x01c38bb8]      ; 004e97be | DAT_01c38bb8
    MOV dword ptr [EAX*0x4 + 0x1d05130],EDX ; 004e97c4
    MOV EDX,dword ptr [0x01c38bbc]      ; 004e97cb | DAT_01c38bbc
    MOV dword ptr [EAX*0x4 + 0x1d05158],EDX ; 004e97d1
    LEA EDX,[EAX + 0x1]                 ; 004e97d8
    MOV dword ptr [0x01d05014],EDX      ; 004e97db | DAT_01d05014
    CMP EDX,0x9                         ; 004e97e1
    JG 0x004e97e7                       ; 004e97e4
        ;   XREF to: 004e97e7 (CONDITIONAL_JUMP)  ; LAB_004e97e7
    RET                                 ; 004e97e6
    PUSH ESI                            ; 004e97e7
        ;   Label: LAB_004e97e7
    PUSH EBX                            ; 004e97e8
    MOV EBX,0x5dc7c2                    ; 004e97e9 | = "..\\engine\\matrix.c"
    MOV ESI,0x34b                       ; 004e97ee
    PUSH 0x5dc7d5                       ; 004e97f3 | = "Matrix unbalance"
    MOV dword ptr [0x01d046a0],EBX      ; 004e97f8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004e97fe | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004e9804
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004e9809
    POP EBX                             ; 004e980c
    POP ESI                             ; 004e980d
    RET                                 ; 004e980e


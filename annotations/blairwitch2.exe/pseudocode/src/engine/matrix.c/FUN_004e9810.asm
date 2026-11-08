; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e9810(void)
;
;
; XREF[1]:
;   thunk_FUN_004e9810 at 0046b4a0
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005dc7e6
;   TerminatedCString s_Matrix_unbalance2_005dc7f9
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
;   FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01d05014]      ; 004e9810 | DAT_01d05014
        ;   Label: FUN_004e9810
    DEC EDX                             ; 004e9816
    MOV dword ptr [0x01d05014],EDX      ; 004e9817 | DAT_01d05014
    TEST EDX,EDX                        ; 004e981d
    JL 0x004e98ed                       ; 004e981f
        ;   XREF to: 004e98ed (CONDITIONAL_JUMP)  ; LAB_004e98ed
    MOV EAX,[0x01d05014]                ; 004e9825 | DAT_01d05014
        ;   Label: LAB_004e9825
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05018] ; 004e982a
    MOV dword ptr [0x01c38b9c],EDX      ; 004e9831 | DAT_01c38b9c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05040] ; 004e9837
    MOV dword ptr [0x01c38ba0],EDX      ; 004e983e | DAT_01c38ba0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05068] ; 004e9844
    MOV dword ptr [0x01c38ba4],EDX      ; 004e984b | DAT_01c38ba4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05090] ; 004e9851
    MOV dword ptr [0x01c38ba8],EDX      ; 004e9858 | DAT_01c38ba8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d050b8] ; 004e985e
    MOV dword ptr [0x01c38bac],EDX      ; 004e9865 | DAT_01c38bac
    MOV EDX,dword ptr [EAX*0x4 + 0x1d050e0] ; 004e986b
    MOV dword ptr [0x01c38bb0],EDX      ; 004e9872 | DAT_01c38bb0
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05108] ; 004e9878
    MOV dword ptr [0x01c38bb4],EDX      ; 004e987f | DAT_01c38bb4
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05130] ; 004e9885
    MOV dword ptr [0x01c38bb8],EDX      ; 004e988c | DAT_01c38bb8
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05158] ; 004e9892
    MOV dword ptr [0x01c38bbc],EDX      ; 004e9899 | DAT_01c38bbc
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05180] ; 004e989f
    MOV dword ptr [0x01c38b6c],EDX      ; 004e98a6 | DAT_01c38b6c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d051a8] ; 004e98ac
    MOV dword ptr [0x01c38b70],EDX      ; 004e98b3 | DAT_01c38b70
    MOV EDX,dword ptr [EAX*0x4 + 0x1d051d0] ; 004e98b9
    MOV dword ptr [0x01c38b74],EDX      ; 004e98c0 | DAT_01c38b74
    MOV EDX,dword ptr [EAX*0x4 + 0x1d051f8] ; 004e98c6
    MOV dword ptr [0x01c38b90],EDX      ; 004e98cd | DAT_01c38b90
    MOV EDX,dword ptr [EAX*0x4 + 0x1d05220] ; 004e98d3
    MOV EAX,dword ptr [EAX*0x4 + 0x1d05248] ; 004e98da
    MOV dword ptr [0x01c38b94],EDX      ; 004e98e1 | DAT_01c38b94
    MOV [0x01c38b98],EAX                ; 004e98e7 | DAT_01c38b98
    RET                                 ; 004e98ec
    PUSH ESI                            ; 004e98ed
        ;   Label: LAB_004e98ed
    PUSH EBX                            ; 004e98ee
    MOV EBX,0x5dc7e6                    ; 004e98ef | = "..\\engine\\matrix.c"
    MOV ESI,0x358                       ; 004e98f4
    PUSH 0x5dc7f9                       ; 004e98f9 | = "Matrix unbalance2"
    MOV dword ptr [0x01d046a0],EBX      ; 004e98fe | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004e9904 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004e990a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004e990f
    POP EBX                             ; 004e9912
    POP ESI                             ; 004e9913
    JMP 0x004e9825                      ; 004e9914
        ;   XREF to: 004e9825 (UNCONDITIONAL_JUMP)  ; LAB_004e9825


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_baron_cpp_FUN_00410400(int param_1,int param_2)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_004319e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00410400
        ;   Label: core_baron.cpp_FUN_00410400
    MOV EDX,dword ptr [ESP + 0x8]       ; 00410404
    MOV ECX,dword ptr [EAX + 0x27b0]    ; 00410408
    TEST ECX,ECX                        ; 0041040e
    JZ 0x00410413                       ; 00410410
        ;   XREF to: 00410413 (CONDITIONAL_JUMP)  ; LAB_00410413
    RET                                 ; 00410412
    PUSH EDX                            ; 00410413
        ;   Label: LAB_00410413
    PUSH EAX                            ; 00410414
    MOV dword ptr [EDX + 0x4],ECX       ; 00410415
    CALL core_charactr.cpp_FUN_004319e0 ; 00410418
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319e0()
    ADD ESP,0x8                         ; 0041041d


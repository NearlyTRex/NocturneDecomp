; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054c060(int param_1)
;
;
; XREF[2]:
;   FUN_0054bf80 at 0054bf94
;   FUN_0054bfe0 at 0054bfe7
;
; Called Functions:
;   FUN_005a30b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c060
        ;   Label: FUN_0054c060
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054c061
    MOV EDX,dword ptr [EBX + 0x2324]    ; 0054c065
    TEST EDX,EDX                        ; 0054c06b
    JNZ 0x0054c071                      ; 0054c06d
        ;   XREF to: 0054c071 (CONDITIONAL_JUMP)  ; LAB_0054c071
    POP EBX                             ; 0054c06f
    RET                                 ; 0054c070
    PUSH EDX                            ; 0054c071
        ;   Label: LAB_0054c071
    CALL FUN_005a30b6                   ; 0054c072
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0054c077
    MOV dword ptr [EBX + 0x2324],0x0    ; 0054c07a
    POP EBX                             ; 0054c084
    RET                                 ; 0054c085


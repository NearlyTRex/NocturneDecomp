; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005afef8(int param_1)
;
;
; XREF[1]:
;   FUN_005b0088 at 005b00c5
;
; Referenced Globals:
;   void* PTR_FUN_006079a0 = 005a7f3c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afef8
        ;   Label: FUN_005afef8
    MOV EBX,dword ptr [ESP + 0x8]       ; 005afef9
    CMP EBX,0x7                         ; 005afefd
    JZ 0x005aff07                       ; 005aff00
        ;   XREF to: 005aff07 (CONDITIONAL_JUMP)  ; LAB_005aff07
    CMP EBX,0x4                         ; 005aff02
    JNZ 0x005aff10                      ; 005aff05
        ;   XREF to: 005aff10 (CONDITIONAL_JUMP)  ; LAB_005aff10
    MOV EAX,dword ptr [EBX*0x8 + 0x607e8c] ; 005aff07
        ;   Label: LAB_005aff07
    POP EBX                             ; 005aff0e
    RET                                 ; 005aff0f
    CALL dword ptr [0x006079a0]         ; 005aff10 | PTR_FUN_006079a0
        ;   Label: LAB_005aff10
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x5c] ; 005aff16
    POP EBX                             ; 005aff1a
    RET                                 ; 005aff1b


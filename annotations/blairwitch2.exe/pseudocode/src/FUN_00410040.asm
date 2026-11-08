; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00410040(int param_1,int param_2)
;
;
; XREF[2]:
;   FUN_00410080 at 00410156
;   FUN_00410a30 at 00410ab1
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410040
        ;   Label: FUN_00410040
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410041
    MOV EAX,dword ptr [ESP + 0xc]       ; 00410045
    MOV EDX,dword ptr [EBX + 0x25718]   ; 00410049
    CMP EAX,EDX                         ; 0041004f
    JNZ 0x00410057                      ; 00410051
        ;   XREF to: 00410057 (CONDITIONAL_JUMP)  ; LAB_00410057
    TEST EDX,EDX                        ; 00410053
    JNZ 0x00410059                      ; 00410055
        ;   XREF to: 00410059 (CONDITIONAL_JUMP)  ; LAB_00410059
    POP EBX                             ; 00410057
        ;   Label: LAB_00410057
    RET                                 ; 00410058
    PUSH 0x1                            ; 00410059
        ;   Label: LAB_00410059
    PUSH 0x7                            ; 0041005b
    LEA EAX,[EBX + 0x2b4]               ; 0041005d
    PUSH EAX                            ; 00410063
    CALL FUN_00503620                   ; 00410064
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00410069
    MOV dword ptr [EBX + 0x25718],0x0   ; 0041006c
    POP EBX                             ; 00410076
    RET                                 ; 00410077


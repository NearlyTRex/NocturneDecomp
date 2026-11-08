; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045dda0(undefined4 param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_docCannotDie_005d086f
;   undefined4 DAT_006141f0
;
; Called Functions:
;   FUN_004281d0
;   FUN_0048e340
;
; *****************************************************************************

section .text

    PUSH 0x5d086f                       ; 0045dda0 | = "docCannotDie"
        ;   Label: FUN_0045dda0
    MOV EDX,dword ptr [0x006141f0]      ; 0045dda5 | DAT_006141f0
    PUSH EDX                            ; 0045ddab
    CALL FUN_0048e340                   ; 0045ddac
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 0045ddb1
    TEST EAX,EAX                        ; 0045ddb4
    JZ 0x0045ddbb                       ; 0045ddb6
        ;   XREF to: 0045ddbb (CONDITIONAL_JUMP)  ; LAB_0045ddbb
    XOR EAX,EAX                         ; 0045ddb8
    RET                                 ; 0045ddba
    MOV ECX,dword ptr [ESP + 0x4]       ; 0045ddbb
        ;   Label: LAB_0045ddbb
    PUSH ECX                            ; 0045ddbf
    CALL FUN_004281d0                   ; 0045ddc0
        ;   XREF to: 004281d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004281d0()
    ADD ESP,0x4                         ; 0045ddc5
    RET                                 ; 0045ddc8


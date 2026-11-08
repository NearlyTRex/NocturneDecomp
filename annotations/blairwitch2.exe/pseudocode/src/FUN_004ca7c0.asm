; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * FUN_004ca7c0(uint param_1)
;
;
; XREF[2]:
;   FUN_0040cb60 at 0040cdaa
;   FUN_0049cd50 at 0049cf7a
;
; Referenced Globals:
;   undefined4 DAT_005d9665
;   TerminatedCString s_leaves_005d966a
;   undefined4 DAT_005d9671
;   undefined4 DAT_005d9676
;   undefined4 DAT_005d967b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ca7c0
        ;   Label: FUN_004ca7c0
    CMP EAX,0x2                         ; 004ca7c4
    JNC 0x004ca7e6                      ; 004ca7c7
        ;   XREF to: 004ca7e6 (CONDITIONAL_JUMP)  ; LAB_004ca7e6
    CMP EAX,0x1                         ; 004ca7c9
    JNZ 0x004ca7f4                      ; 004ca7cc
        ;   XREF to: 004ca7f4 (CONDITIONAL_JUMP)  ; LAB_004ca7f4
    MOV EAX,0x5d9665                    ; 004ca7ce | DAT_005d9665
    RET                                 ; 004ca7d3
    MOV EAX,0x5d966a                    ; 004ca7d4 | = "leaves"
        ;   Label: LAB_004ca7d4
    RET                                 ; 004ca7d9
    MOV EAX,0x5d9671                    ; 004ca7da | DAT_005d9671
        ;   Label: LAB_004ca7da
    RET                                 ; 004ca7df
    MOV EAX,0x5d9676                    ; 004ca7e0 | DAT_005d9676
        ;   Label: LAB_004ca7e0
    RET                                 ; 004ca7e5
    JBE 0x004ca7da                      ; 004ca7e6
        ;   XREF to: 004ca7da (CONDITIONAL_JUMP)  ; LAB_004ca7da
        ;   Label: LAB_004ca7e6
    CMP EAX,0x7                         ; 004ca7e8
    JC 0x004ca7f4                       ; 004ca7eb
        ;   XREF to: 004ca7f4 (CONDITIONAL_JUMP)  ; LAB_004ca7f4
    JBE 0x004ca7e0                      ; 004ca7ed
        ;   XREF to: 004ca7e0 (CONDITIONAL_JUMP)  ; LAB_004ca7e0
    CMP EAX,0xe                         ; 004ca7ef
    JZ 0x004ca7d4                       ; 004ca7f2
        ;   XREF to: 004ca7d4 (CONDITIONAL_JUMP)  ; LAB_004ca7d4
    MOV EAX,0x5d967b                    ; 004ca7f4 | DAT_005d967b
        ;   Label: LAB_004ca7f4
    RET                                 ; 004ca7f9


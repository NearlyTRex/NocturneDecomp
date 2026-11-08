; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057d760(int param_1)
;
;
; XREF[2]:
;   FUN_00433ff0 at 00434030
;   FUN_00434070 at 004340ba
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0057d760
        ;   Label: FUN_0057d760
    CMP dword ptr [EAX + 0x4],0x0       ; 0057d764
    JNZ 0x0057d776                      ; 0057d768
        ;   XREF to: 0057d776 (CONDITIONAL_JUMP)  ; LAB_0057d776
    LEA EAX,[EAX]                       ; 0057d76a
    MOV EAX,0xffffffff                  ; 0057d770
    RET                                 ; 0057d775
    MOV EAX,dword ptr [EAX + 0xc]       ; 0057d776
        ;   Label: LAB_0057d776
    RET                                 ; 0057d779


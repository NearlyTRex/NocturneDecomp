; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __IsZeroMan(int *param_1)
;
;
; XREF[1]:
;   __ld12cvt at 10009fb4
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 10009e90
        ;   Label: __IsZeroMan
    MOV ECX,dword ptr [ESP + 0x4]       ; 10009e92
    CMP dword ptr [ECX],0x0             ; 10009e96
        ;   Label: LAB_10009e96
    JNZ 0x10009eaa                      ; 10009e99
        ;   XREF to: 10009eaa (CONDITIONAL_JUMP)  ; LAB_10009eaa
    ADD ECX,0x4                         ; 10009e9b
    INC EAX                             ; 10009e9e
    CMP EAX,0x3                         ; 10009e9f
    JL 0x10009e96                       ; 10009ea2
        ;   XREF to: 10009e96 (CONDITIONAL_JUMP)  ; LAB_10009e96
    MOV EAX,0x1                         ; 10009ea4
    RET                                 ; 10009ea9
    XOR EAX,EAX                         ; 10009eaa
        ;   Label: LAB_10009eaa
    RET                                 ; 10009eac


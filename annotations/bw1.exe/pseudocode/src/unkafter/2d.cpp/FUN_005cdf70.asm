; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_2d_cpp_FUN_005cdf70(byte *param_1,byte *param_2)
;
;
; XREF[2]:
;   unkafter_2d.cpp_FUN_005cdb10 at 005cdb49
;   unkafter_zombie.cpp_FUN_005cc9f0 at 005cca5e
;
; Referenced Globals:
;   undefined4 DAT_02c9f6e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdf70
        ;   Label: unkafter_2d.cpp_FUN_005cdf70
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cdf71
    MOV EDX,dword ptr [ESP + 0xc]       ; 005cdf75
    MOV BL,byte ptr [EAX]               ; 005cdf79
    CMP BL,byte ptr [EDX]               ; 005cdf7b
    JNZ 0x005cdfbe                      ; 005cdf7d
        ;   XREF to: 005cdfbe (CONDITIONAL_JUMP)  ; LAB_005cdfbe
    CMP dword ptr [0x02c9f6e0],0x0      ; 005cdf7f | DAT_02c9f6e0
    JZ 0x005cdfa7                       ; 005cdf86
        ;   XREF to: 005cdfa7 (CONDITIONAL_JUMP)  ; LAB_005cdfa7
    XOR EBX,EBX                         ; 005cdf88
    MOV BL,byte ptr [EAX]               ; 005cdf8a
    MOV BL,byte ptr [EBX + 0x2c9f6f1]   ; 005cdf8c
    AND BL,0x1                          ; 005cdf92
    AND EBX,0xff                        ; 005cdf95
    JZ 0x005cdfa7                       ; 005cdf9b
        ;   XREF to: 005cdfa7 (CONDITIONAL_JUMP)  ; LAB_005cdfa7
    MOV BL,byte ptr [EAX + 0x1]         ; 005cdf9d
    MOV CL,byte ptr [EDX + 0x1]         ; 005cdfa0
    CMP BL,CL                           ; 005cdfa3
    JNZ 0x005cdfab                      ; 005cdfa5
        ;   XREF to: 005cdfab (CONDITIONAL_JUMP)  ; LAB_005cdfab
    XOR EAX,EAX                         ; 005cdfa7
        ;   Label: LAB_005cdfa7
    POP EBX                             ; 005cdfa9
    RET                                 ; 005cdfaa
    MOV AL,BL                           ; 005cdfab
        ;   Label: LAB_005cdfab
    AND EAX,0xff                        ; 005cdfad
    MOV DL,CL                           ; 005cdfb2
    AND EDX,0xff                        ; 005cdfb4
    SUB EAX,EDX                         ; 005cdfba
    POP EBX                             ; 005cdfbc
    RET                                 ; 005cdfbd
    XOR EBX,EBX                         ; 005cdfbe
        ;   Label: LAB_005cdfbe
    MOV BL,byte ptr [EAX]               ; 005cdfc0
    XOR EAX,EAX                         ; 005cdfc2
    MOV AL,byte ptr [EDX]               ; 005cdfc4
    SUB EBX,EAX                         ; 005cdfc6
    MOV EAX,EBX                         ; 005cdfc8
    POP EBX                             ; 005cdfca
    RET                                 ; 005cdfcb


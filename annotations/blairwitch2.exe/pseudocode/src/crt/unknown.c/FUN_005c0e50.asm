; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c0e50(byte *param_1)
;
;
; XREF[8]:
;   crt_file.c_makepath_FUN_005b9f4c at 005b9ff6
;   crt_unknown.c_FUN_005c0cf0 at 005c0d0f
;   crt_unknown.c_FUN_005c0d60 at 005c0d9f
;   unkafter_2d.cpp_FUN_005c5810 at 005c582b
;   unkafter_2d.cpp_FUN_005c5c00 at 005c5c39
;   unkafter_2d.cpp_FUN_005c6690 at 005c66a8
;   unkafter_morph.cpp_FUN_005c33f0 at 005c344e
;   unkafter_morph.cpp_FUN_005c46f0 at 005c470c
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x026807f0],0x0      ; 005c0e50 | DAT_026807f0
        ;   Label: crt_unknown.c_FUN_005c0e50
    JZ 0x005c0e76                       ; 005c0e57
        ;   XREF to: 005c0e76 (CONDITIONAL_JUMP)  ; LAB_005c0e76
    MOV EDX,dword ptr [ESP + 0x4]       ; 005c0e59
    XOR EAX,EAX                         ; 005c0e5d
    MOV AL,byte ptr [EDX]               ; 005c0e5f
    MOV AL,byte ptr [EAX + 0x2680801]   ; 005c0e61
    AND AL,0x1                          ; 005c0e67
    AND EAX,0xff                        ; 005c0e69
    JZ 0x005c0e76                       ; 005c0e6e
        ;   XREF to: 005c0e76 (CONDITIONAL_JUMP)  ; LAB_005c0e76
    MOV EAX,0x2                         ; 005c0e70
    RET                                 ; 005c0e75
    MOV EAX,0x1                         ; 005c0e76
        ;   Label: LAB_005c0e76
    RET                                 ; 005c0e7b


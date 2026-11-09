; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c0e30(undefined4 param_1,char *param_2)
;
;
; XREF[4]:
;   crt_file.c_makepath_FUN_005b9f4c at 005b9fed
;   unkafter_2d.cpp_FUN_005c5810 at 005c5820
;   unkafter_2d.cpp_FUN_005c5c00 at 005c5c2e
;   unkafter_2d.cpp_FUN_005c6690 at 005c669d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0e30
        ;   Label: crt_unknown.c_FUN_005c0e30
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c0e31
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c0e35
    TEST DH,0xff                        ; 005c0e39
    JZ 0x005c0e4a                       ; 005c0e3c
        ;   XREF to: 005c0e4a (CONDITIONAL_JUMP)  ; LAB_005c0e4a
    MOV EBX,EDX                         ; 005c0e3e
    MOV byte ptr [EAX + 0x1],DL         ; 005c0e40
    SHR EBX,0x8                         ; 005c0e43
    MOV byte ptr [EAX],BL               ; 005c0e46
    POP EBX                             ; 005c0e48
    RET                                 ; 005c0e49
    MOV byte ptr [EAX],DL               ; 005c0e4a
        ;   Label: LAB_005c0e4a
    POP EBX                             ; 005c0e4c
    RET                                 ; 005c0e4d


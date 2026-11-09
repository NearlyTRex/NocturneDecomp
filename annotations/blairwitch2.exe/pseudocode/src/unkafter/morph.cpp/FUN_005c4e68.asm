; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_morph_cpp_FUN_005c4e68(int param_1)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005c4ff8 at 005c5035
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4e68
        ;   Label: unkafter_morph.cpp_FUN_005c4e68
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c4e69
    CMP EBX,0x7                         ; 005c4e6d
    JZ 0x005c4e77                       ; 005c4e70
        ;   XREF to: 005c4e77 (CONDITIONAL_JUMP)  ; LAB_005c4e77
    CMP EBX,0x4                         ; 005c4e72
    JNZ 0x005c4e80                      ; 005c4e75
        ;   XREF to: 005c4e80 (CONDITIONAL_JUMP)  ; LAB_005c4e80
    MOV EAX,dword ptr [EBX*0x8 + 0x61f768] ; 005c4e77
        ;   Label: LAB_005c4e77
    POP EBX                             ; 005c4e7e
    RET                                 ; 005c4e7f
    CALL dword ptr [0x0061f2a4]         ; 005c4e80 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: LAB_005c4e80
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x5c] ; 005c4e86
    POP EBX                             ; 005c4e8a
    RET                                 ; 005c4e8b


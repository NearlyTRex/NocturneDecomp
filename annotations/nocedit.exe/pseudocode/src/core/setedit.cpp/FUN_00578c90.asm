; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_setedit.cpp_FUN_00578c90()
;
; Local Variables:
; undefined1       Stack[-0x2cc]:1  local_2cc
; undefined1       Stack[-0x13c]:1  local_13c
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 00578d98
;
; Referenced Globals:
;   TerminatedCString s_s_c_00646bc0
;   TerminatedCString s_ESC_00646bca
;   TerminatedCString s_Y_00646bce
;   TerminatedCString s_N_00646bd0
;   TerminatedCString s_s_s_00646bd2
;   CKeys* g_CKeysPtr = 02dcd7d4
;   void* g_CKeysPtr
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   engine_2d.c_drawText_FUN_00401fd0
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578c90
        ;   Label: core_setedit.cpp_FUN_00578c90
    PUSH ESI                            ; 00578c91
    PUSH EDI                            ; 00578c92
    PUSH EBP                            ; 00578c93
    SUB ESP,0x2bc                       ; 00578c94
    CMP dword ptr [ESP + 0x2d8],0x0     ; 00578c9a
    JZ 0x00578d53                       ; 00578ca2
        ;   XREF to: 00578d53 (CONDITIONAL_JUMP)  ; LAB_00578d53
    MOV AL,0x59                         ; 00578ca8
    XOR EBX,EBX                         ; 00578caa
        ;   Label: LAB_00578caa
    MOV BL,AL                           ; 00578cac
    PUSH EBX                            ; 00578cae
    MOV ECX,dword ptr [ESP + 0x2d8]     ; 00578caf
    PUSH ECX                            ; 00578cb6
    PUSH 0x646bc0                       ; 00578cb7 | = "%s? [%c] "
    LEA EAX,[ESP + 0x19c]               ; 00578cbc
    PUSH EAX                            ; 00578cc3
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00578cc4
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00578cc9
    MOV ESI,dword ptr [ESP + 0x2d0]     ; 00578ccc
    PUSH ESI                            ; 00578cd3
    PUSH 0x0                            ; 00578cd4
    LEA EAX,[ESP + 0x198]               ; 00578cd6
    PUSH EAX                            ; 00578cdd
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00578cde
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00578ce3
    MOV EDI,dword ptr [0x0067cf44]      ; 00578ce6 | g_CKeysPtr
        ;   Label: LAB_00578ce6
    PUSH EDI                            ; 00578cec | g_CKeysPtr
    CALL engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470 ; 00578ced
        ;   XREF to: 00502470 (UNCONDITIONAL_CALL)  ; int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this)
    ADD ESP,0x4                         ; 00578cf2
    MOV EDX,EAX                         ; 00578cf5
    CMP EAX,0x1b                        ; 00578cf7
    JZ 0x00578d5a                       ; 00578cfa
        ;   XREF to: 00578d5a (CONDITIONAL_JUMP)  ; LAB_00578d5a
    CMP EAX,0xd                         ; 00578cfc
    JNZ 0x00578d03                      ; 00578cff
        ;   XREF to: 00578d03 (CONDITIONAL_JUMP)  ; LAB_00578d03
    MOV EDX,EBX                         ; 00578d01
    CMP EDX,0x59                        ; 00578d03
        ;   Label: LAB_00578d03
    JZ 0x00578d66                       ; 00578d06
        ;   XREF to: 00578d66 (CONDITIONAL_JUMP)  ; LAB_00578d66
    CMP EDX,0x4e                        ; 00578d08
    JNZ 0x00578ce6                      ; 00578d0b
        ;   XREF to: 00578ce6 (CONDITIONAL_JUMP)  ; LAB_00578ce6
    MOV EAX,0x646bd0                    ; 00578d0d | = "N"
    XOR EBX,EBX                         ; 00578d12
    PUSH EAX                            ; 00578d14 | = "ESC" | s_Y_00646bce | s_N_00646bd0
        ;   Label: LAB_00578d14
    LEA EAX,[ESP + 0x194]               ; 00578d15
    PUSH EAX                            ; 00578d1c
    PUSH 0x646bd2                       ; 00578d1d | = "%s %s"
    LEA EAX,[ESP + 0xc]                 ; 00578d22
    PUSH EAX                            ; 00578d26
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00578d27
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 00578d2c
    MOV EBP,dword ptr [ESP + 0x2d0]     ; 00578d2f
    PUSH EBP                            ; 00578d36
    PUSH 0x0                            ; 00578d37
    LEA EAX,[ESP + 0x8]                 ; 00578d39
    PUSH EAX                            ; 00578d3d
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 00578d3e
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 00578d43
    MOV EAX,EBX                         ; 00578d46
    ADD ESP,0x2bc                       ; 00578d48
    POP EBP                             ; 00578d4e
    POP EDI                             ; 00578d4f
    POP ESI                             ; 00578d50
    POP EBX                             ; 00578d51
    RET                                 ; 00578d52
    MOV AL,0x4e                         ; 00578d53
        ;   Label: LAB_00578d53
    JMP 0x00578caa                      ; 00578d55
        ;   XREF to: 00578caa (UNCONDITIONAL_JUMP)  ; LAB_00578caa
    MOV EAX,0x646bca                    ; 00578d5a | = "ESC"
        ;   Label: LAB_00578d5a
    MOV EBX,0xffffffff                  ; 00578d5f
    JMP 0x00578d14                      ; 00578d64
        ;   XREF to: 00578d14 (UNCONDITIONAL_JUMP)  ; LAB_00578d14
    MOV EAX,0x646bce                    ; 00578d66 | = "Y"
        ;   Label: LAB_00578d66
    MOV EBX,0x1                         ; 00578d6b
    JMP 0x00578d14                      ; 00578d70
        ;   XREF to: 00578d14 (UNCONDITIONAL_JUMP)  ; LAB_00578d14


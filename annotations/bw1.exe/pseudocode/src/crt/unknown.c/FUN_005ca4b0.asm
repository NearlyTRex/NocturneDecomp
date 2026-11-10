; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005ca4b0(LPSTR param_1)
;
;
; XREF[4]:
;   crt_unknown.c_FUN_005c394c at 005c3979
;   crt_unknown.c_FUN_005c3b90 at 005c3bbb
;   crt_unknown.c_FUN_005c3c08 at 005c418f
;   crt_unknown.c_FUN_005cc610 at 005cc647
;
; Referenced Globals:
;   void* PTR_WideCharToMultiByte_005d0684 = 001d12e2
;   undefined4 DAT_00626ad8
;
; Called Functions:
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ca4b0
        ;   Label: crt_unknown.c_FUN_005ca4b0
    TEST EAX,EAX                        ; 005ca4b4
    JNZ 0x005ca4b9                      ; 005ca4b6
        ;   XREF to: 005ca4b9 (CONDITIONAL_JUMP)  ; LAB_005ca4b9
    RET                                 ; 005ca4b8
    PUSH 0x0                            ; 005ca4b9
        ;   Label: LAB_005ca4b9
    PUSH 0x0                            ; 005ca4bb
    PUSH 0x2                            ; 005ca4bd
    PUSH EAX                            ; 005ca4bf
    PUSH 0x1                            ; 005ca4c0
    LEA EAX,[ESP + 0x1c]                ; 005ca4c2
    PUSH EAX                            ; 005ca4c6
    PUSH 0x200                          ; 005ca4c7
    MOV EDX,dword ptr [0x00626ad8]      ; 005ca4cc | DAT_00626ad8
    PUSH EDX                            ; 005ca4d2
    CALL dword ptr CS:[0x5d0684]        ; 005ca4d3 | PTR_WideCharToMultiByte_005d0684
    TEST EAX,EAX                        ; 005ca4da
    JZ 0x005ca4df                       ; 005ca4dc
        ;   XREF to: 005ca4df (CONDITIONAL_JUMP)  ; LAB_005ca4df
    RET                                 ; 005ca4de
    MOV EAX,0xffffffff                  ; 005ca4df
        ;   Label: LAB_005ca4df
    RET                                 ; 005ca4e4


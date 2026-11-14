; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c21b0(LPSTR param_1)
;
;
; XREF[4]:
;   crt_unknown.c_FUN_005bb67c at 005bb6a9
;   crt_unknown.c_FUN_005bb8c0 at 005bb8eb
;   crt_unknown.c_FUN_005bb938 at 005bbebf
;   crt_unknown.c_FUN_005c4310 at 005c4347
;
; Referenced Globals:
;   void* PTR_WideCharToMultiByte_005c8670 = 001c92a6
;   undefined4 DAT_0061f758
;
; Called Functions:
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c21b0
        ;   Label: crt_unknown.c_FUN_005c21b0
    TEST EAX,EAX                        ; 005c21b4
    JNZ 0x005c21b9                      ; 005c21b6
        ;   XREF to: 005c21b9 (CONDITIONAL_JUMP)  ; LAB_005c21b9
    RET                                 ; 005c21b8
    PUSH 0x0                            ; 005c21b9
        ;   Label: LAB_005c21b9
    PUSH 0x0                            ; 005c21bb
    PUSH 0x2                            ; 005c21bd
    PUSH EAX                            ; 005c21bf
    PUSH 0x1                            ; 005c21c0
    LEA EAX,[ESP + 0x1c]                ; 005c21c2
    PUSH EAX                            ; 005c21c6
    PUSH 0x200                          ; 005c21c7
    MOV EDX,dword ptr [0x0061f758]      ; 005c21cc | DAT_0061f758
    PUSH EDX                            ; 005c21d2
    CALL dword ptr CS:[0x5c8670]        ; 005c21d3 | PTR_WideCharToMultiByte_005c8670
    TEST EAX,EAX                        ; 005c21da
    JZ 0x005c21df                       ; 005c21dc
        ;   XREF to: 005c21df (CONDITIONAL_JUMP)  ; LAB_005c21df
    RET                                 ; 005c21de
    MOV EAX,0xffffffff                  ; 005c21df
        ;   Label: LAB_005c21df
    RET                                 ; 005c21e4


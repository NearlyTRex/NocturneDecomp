; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_asgaya_cpp_FUN_005ad320(LPSTR param_1)
;
;
; XREF[4]:
;   crt_unknown.c_FUN_005a67bc at 005a67e9
;   crt_unknown.c_FUN_005a6a00 at 005a6a2b
;   crt_unknown.c_FUN_005a6a78 at 005a6fff
;   unkafter_asgaya.cpp_FUN_005af1d0 at 005af207
;
; Referenced Globals:
;   void* PTR_WideCharToMultiByte_005b3684 = 001b42e8
;   undefined4 DAT_00607e7c
;
; Called Functions:
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ad320
        ;   Label: unkafter_asgaya.cpp_FUN_005ad320
    TEST EAX,EAX                        ; 005ad324
    JNZ 0x005ad329                      ; 005ad326
        ;   XREF to: 005ad329 (CONDITIONAL_JUMP)  ; LAB_005ad329
    RET                                 ; 005ad328
    PUSH 0x0                            ; 005ad329
        ;   Label: LAB_005ad329
    PUSH 0x0                            ; 005ad32b
    PUSH 0x2                            ; 005ad32d
    PUSH EAX                            ; 005ad32f
    PUSH 0x1                            ; 005ad330
    LEA EAX,[ESP + 0x1c]                ; 005ad332
    PUSH EAX                            ; 005ad336
    PUSH 0x200                          ; 005ad337
    MOV EDX,dword ptr [0x00607e7c]      ; 005ad33c | DAT_00607e7c
    PUSH EDX                            ; 005ad342
    CALL dword ptr CS:[0x5b3684]        ; 005ad343 | PTR_WideCharToMultiByte_005b3684
    TEST EAX,EAX                        ; 005ad34a
    JZ 0x005ad34f                       ; 005ad34c
        ;   XREF to: 005ad34f (CONDITIONAL_JUMP)  ; LAB_005ad34f
    RET                                 ; 005ad34e
    MOV EAX,0xffffffff                  ; 005ad34f
        ;   Label: LAB_005ad34f
    RET                                 ; 005ad354


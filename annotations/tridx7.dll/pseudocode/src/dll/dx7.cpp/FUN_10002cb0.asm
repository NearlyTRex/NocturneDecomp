; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 dll_dx7_cpp_FUN_10002cb0(int *param_1)
;
;
; XREF[4]:
;   dll_dx7.cpp_APIDLLsetColorTable16_FUN_10004b30 at 10004b8c
;   dll_dx7.cpp_APIDLLunlockHoldBuffer_FUN_100053a0 at 100053bf
;   dll_dx7.cpp_FUN_10002c50 at 10002c80
;   dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80 at 10003ba1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10002cb0
        ;   Label: dll_dx7.cpp_FUN_10002cb0
    TEST EAX,EAX                        ; 10002cb4
    JNZ 0x10002cbe                      ; 10002cb6
        ;   XREF to: 10002cbe (CONDITIONAL_JUMP)  ; LAB_10002cbe
    MOV EAX,0x1                         ; 10002cb8
    RET                                 ; 10002cbd
    PUSH 0x0                            ; 10002cbe
        ;   Label: LAB_10002cbe
    PUSH EAX                            ; 10002cc0
    MOV EAX,dword ptr [EAX]             ; 10002cc1
    CALL dword ptr [EAX + 0x80]         ; 10002cc3
    CMP EAX,0x88760248                  ; 10002cc9
    JZ 0x10002cd7                       ; 10002cce
        ;   XREF to: 10002cd7 (CONDITIONAL_JUMP)  ; LAB_10002cd7
    TEST EAX,EAX                        ; 10002cd0
    JZ 0x10002cd7                       ; 10002cd2
        ;   XREF to: 10002cd7 (CONDITIONAL_JUMP)  ; LAB_10002cd7
    XOR EAX,EAX                         ; 10002cd4
    RET                                 ; 10002cd6
    MOV EAX,0x1                         ; 10002cd7
        ;   Label: LAB_10002cd7
    RET                                 ; 10002cdc


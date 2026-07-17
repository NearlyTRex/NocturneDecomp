; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_FUN_10002e20(int *param_1,undefined4 *param_2)
;
; Parameters:
; int *            Stack[0x4]:4   param_1
; undefined4 *     Stack[0x8]:4   param_2
;
; XREF[4]:
;   dll_dx7.cpp_APIDLLlockHoldBuffer_FUN_10005350 at 1000535b
;   dll_dx7.cpp_APIDLLsetColorTable16_FUN_10004b30 at 10004b6d
;   dll_dx7.cpp_FUN_10002dc0 at 10002dda
;   dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80 at 10003b5c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 10002e20
        ;   Label: dll_dx7.cpp_FUN_10002e20
    PUSH ESI                            ; 10002e24
    PUSH EDI                            ; 10002e25
    TEST EDX,EDX                        ; 10002e26
    JNZ 0x10002e2f                      ; 10002e28
        ;   XREF to: 10002e2f (CONDITIONAL_JUMP)  ; LAB_10002e2f
    XOR EAX,EAX                         ; 10002e2a
    POP EDI                             ; 10002e2c
    POP ESI                             ; 10002e2d
    RET                                 ; 10002e2e
    MOV ESI,dword ptr [ESP + 0x10]      ; 10002e2f
        ;   Label: LAB_10002e2f
    XOR EAX,EAX                         ; 10002e33
    MOV EDI,ESI                         ; 10002e35
    MOV ECX,0x1f                        ; 10002e37
    STOSD.REP ES:EDI                    ; 10002e3c
    PUSH EAX                            ; 10002e3e
    PUSH 0x1                            ; 10002e3f
    PUSH ESI                            ; 10002e41
    MOV dword ptr [ESI],0x7c            ; 10002e42
    PUSH EAX                            ; 10002e48
    PUSH EDX                            ; 10002e49
    MOV EAX,dword ptr [EDX]             ; 10002e4a
    CALL dword ptr [EAX + 0x64]         ; 10002e4c
    POP EDI                             ; 10002e4f
    CMP EAX,0x1                         ; 10002e50
    SBB EAX,EAX                         ; 10002e53
    POP ESI                             ; 10002e55
    NEG EAX                             ; 10002e56
    RET                                 ; 10002e58


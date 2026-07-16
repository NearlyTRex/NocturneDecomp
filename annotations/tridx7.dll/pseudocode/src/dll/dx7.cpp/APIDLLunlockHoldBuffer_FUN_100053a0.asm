; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLunlockHoldBuffer_FUN_100053a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_10014178
;   undefined4 DAT_10014180
;   undefined4 DAT_100141b8
;   undefined4 DAT_10138fb4
;   undefined4 DAT_10225848
;   undefined4 DAT_1022584c
;
; Called Functions:
;   dll_dx7.cpp_FUN_10002cb0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 100053a0
        ;   Label: dll_dx7.cpp_APIDLLunlockHoldBuffer_FUN_100053a0
    MOV ECX,dword ptr [0x10014178]      ; 100053a1 | DAT_10014178
    PUSH EDI                            ; 100053a7
    TEST ECX,ECX                        ; 100053a8
    JLE 0x100053b9                      ; 100053aa
        ;   XREF to: 100053b9 (CONDITIONAL_JUMP)  ; LAB_100053b9
    MOV ESI,0x10225848                  ; 100053ac | DAT_10225848
    MOV EDI,dword ptr [0x10138fb4]      ; 100053b1 | DAT_10138fb4
    MOVSD.REP ES:EDI,ESI                ; 100053b7 | DAT_10225848 | DAT_1022584c
    MOV EAX,[0x100141b8]                ; 100053b9 | DAT_100141b8
        ;   Label: LAB_100053b9
    PUSH EAX                            ; 100053be
    CALL dll_dx7.cpp_FUN_10002cb0       ; 100053bf
        ;   XREF to: 10002cb0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10002cb0()
    ADD ESP,0x4                         ; 100053c4
    TEST EAX,EAX                        ; 100053c7
    JNZ 0x100053d0                      ; 100053c9
        ;   XREF to: 100053d0 (CONDITIONAL_JUMP)  ; LAB_100053d0
    XOR EAX,EAX                         ; 100053cb
    POP EDI                             ; 100053cd
    POP ESI                             ; 100053ce
    RET                                 ; 100053cf
    CMP dword ptr [0x10014180],0x0      ; 100053d0 | DAT_10014180
        ;   Label: LAB_100053d0
    JNZ 0x100053de                      ; 100053d7
        ;   XREF to: 100053de (CONDITIONAL_JUMP)  ; LAB_100053de
    XOR EAX,EAX                         ; 100053d9
    POP EDI                             ; 100053db
    POP ESI                             ; 100053dc
    RET                                 ; 100053dd
    PUSH 0x0                            ; 100053de
        ;   Label: LAB_100053de
    MOV EAX,[0x100141b8]                ; 100053e0 | DAT_100141b8
    PUSH 0x0                            ; 100053e5
    MOV ECX,dword ptr [0x10014180]      ; 100053e7 | DAT_10014180
    PUSH 0x0                            ; 100053ed
    PUSH EAX                            ; 100053ef
    PUSH 0x0                            ; 100053f0
    MOV EAX,dword ptr [ECX]             ; 100053f2
    PUSH ECX                            ; 100053f4
    CALL dword ptr [EAX + 0x14]         ; 100053f5
    MOV EAX,0x1                         ; 100053f8
    POP EDI                             ; 100053fd
    POP ESI                             ; 100053fe
    RET                                 ; 100053ff


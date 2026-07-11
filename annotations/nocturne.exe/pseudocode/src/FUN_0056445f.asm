; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_0056445f(int param_1,undefined4 param_2)
;
;
; XREF[22]:
;   FUN_00409ea0 at 00409ed7
;   FUN_00438f30 at 00438f57
;   FUN_004673a0 at 004673ae
;   FUN_00473b80 at 00473bad
;   FUN_00474cf0 at 00474d43
;   FUN_004e1150 at 004e1172
;   FUN_004f8840 at 004f8877
;   FUN_00517cc0 at 00517cdf
;   FUN_00517ec0 at 00517f0a
;   FUN_0051b6e0 at 0051b72d
;   ... and 12 more
;
; Called Functions:
;   FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056445f
        ;   Label: FUN_0056445f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00564460
    TEST EAX,EAX                        ; 00564464
    JNZ 0x0056446e                      ; 00564466
        ;   XREF to: 0056446e (CONDITIONAL_JUMP)  ; LAB_0056446e
    XOR EBX,EBX                         ; 00564468
    MOV EAX,EBX                         ; 0056446a
    POP EBX                             ; 0056446c
    RET                                 ; 0056446d
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056446e
        ;   Label: LAB_0056446e
    LEA EBX,[EAX + -0x4]                ; 00564472
    PUSH EDX                            ; 00564475
    MOV ECX,dword ptr [EBX]             ; 00564476
    PUSH ECX                            ; 00564478
    PUSH EAX                            ; 00564479
    CALL FUN_0056494f                   ; 0056447a
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined FUN_0056494f()
    ADD ESP,0xc                         ; 0056447f
    MOV EAX,EBX                         ; 00564482
    POP EBX                             ; 00564484
    RET                                 ; 00564485


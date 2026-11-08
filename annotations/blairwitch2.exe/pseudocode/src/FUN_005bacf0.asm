; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005bacf0(LPCSTR param_1,LPCSTR param_2)
;
;
; XREF[1]:
;   FUN_004d8530 at 004d8721
;
; Referenced Globals:
;   void* PTR_MoveFileA_005c85ec = 001c903c
;
; Called Functions:
;   FUN_005c036c
;   MoveFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bacf0
        ;   Label: FUN_005bacf0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005bacf1
    PUSH EDX                            ; 005bacf5
    MOV EBX,dword ptr [ESP + 0xc]       ; 005bacf6
    PUSH EBX                            ; 005bacfa
    CALL dword ptr CS:[0x5c85ec]        ; 005bacfb | PTR_MoveFileA_005c85ec
    TEST EAX,EAX                        ; 005bad02
    JNZ 0x005bad0d                      ; 005bad04
        ;   XREF to: 005bad0d (CONDITIONAL_JUMP)  ; LAB_005bad0d
    CALL FUN_005c036c                   ; 005bad06
        ;   XREF to: 005c036c (UNCONDITIONAL_CALL)  ; undefined FUN_005c036c()
    POP EBX                             ; 005bad0b
    RET                                 ; 005bad0c
    XOR EAX,EAX                         ; 005bad0d
        ;   Label: LAB_005bad0d
    POP EBX                             ; 005bad0f
    RET                                 ; 005bad10


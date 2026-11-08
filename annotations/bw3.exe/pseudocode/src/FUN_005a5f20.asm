; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a5f20(LPCSTR param_1,LPCSTR param_2)
;
;
; XREF[1]:
;   FUN_004d8640 at 004d8831
;
; Referenced Globals:
;   void* PTR_MoveFileA_005b3600 = 001b407e
;
; Called Functions:
;   FUN_005ab46c
;   MoveFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5f20
        ;   Label: FUN_005a5f20
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a5f21
    PUSH EDX                            ; 005a5f25
    MOV EBX,dword ptr [ESP + 0xc]       ; 005a5f26
    PUSH EBX                            ; 005a5f2a
    CALL dword ptr CS:[0x5b3600]        ; 005a5f2b | PTR_MoveFileA_005b3600
    TEST EAX,EAX                        ; 005a5f32
    JNZ 0x005a5f3d                      ; 005a5f34
        ;   XREF to: 005a5f3d (CONDITIONAL_JUMP)  ; LAB_005a5f3d
    CALL FUN_005ab46c                   ; 005a5f36
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined FUN_005ab46c()
    POP EBX                             ; 005a5f3b
    RET                                 ; 005a5f3c
    XOR EAX,EAX                         ; 005a5f3d
        ;   Label: LAB_005a5f3d
    POP EBX                             ; 005a5f3f
    RET                                 ; 005a5f40


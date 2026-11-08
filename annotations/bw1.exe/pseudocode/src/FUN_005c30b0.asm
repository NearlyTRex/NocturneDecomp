; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c30b0(LPCSTR param_1,LPCSTR param_2)
;
;
; XREF[1]:
;   FUN_004f4720 at 004f4911
;
; Referenced Globals:
;   void* PTR_MoveFileA_005d0600 = 001d1078
;
; Called Functions:
;   FUN_005c862c
;   MoveFileA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c30b0
        ;   Label: FUN_005c30b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c30b1
    PUSH EDX                            ; 005c30b5
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c30b6
    PUSH EBX                            ; 005c30ba
    CALL dword ptr CS:[0x5d0600]        ; 005c30bb | PTR_MoveFileA_005d0600
    TEST EAX,EAX                        ; 005c30c2
    JNZ 0x005c30cd                      ; 005c30c4
        ;   XREF to: 005c30cd (CONDITIONAL_JUMP)  ; LAB_005c30cd
    CALL FUN_005c862c                   ; 005c30c6
        ;   XREF to: 005c862c (UNCONDITIONAL_CALL)  ; undefined FUN_005c862c()
    POP EBX                             ; 005c30cb
    RET                                 ; 005c30cc
    XOR EAX,EAX                         ; 005c30cd
        ;   Label: LAB_005c30cd
    POP EBX                             ; 005c30cf
    RET                                 ; 005c30d0


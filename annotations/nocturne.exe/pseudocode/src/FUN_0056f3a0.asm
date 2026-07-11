; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056f3a0(LPSTR param_1)
;
;
; XREF[4]:
;   FUN_0056966c at 00569699
;   FUN_005698b0 at 005698db
;   FUN_00569928 at 00569eaf
;   FUN_00570bd0 at 00570c07
;
; Referenced Globals:
;   void* PTR_WideCharToMultiByte_005755e4 = 00176118
;   undefined4 DAT_005c2144
;
; Called Functions:
;   WideCharToMultiByte
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056f3a0
        ;   Label: FUN_0056f3a0
    TEST EAX,EAX                        ; 0056f3a4
    JNZ 0x0056f3a9                      ; 0056f3a6
        ;   XREF to: 0056f3a9 (CONDITIONAL_JUMP)  ; LAB_0056f3a9
    RET                                 ; 0056f3a8
    PUSH 0x0                            ; 0056f3a9
        ;   Label: LAB_0056f3a9
    PUSH 0x0                            ; 0056f3ab
    PUSH 0x2                            ; 0056f3ad
    PUSH EAX                            ; 0056f3af
    PUSH 0x1                            ; 0056f3b0
    LEA EAX,[ESP + 0x1c]                ; 0056f3b2
    PUSH EAX                            ; 0056f3b6
    PUSH 0x200                          ; 0056f3b7
    MOV EDX,dword ptr [0x005c2144]      ; 0056f3bc | DAT_005c2144
    PUSH EDX                            ; 0056f3c2
    CALL dword ptr CS:[0x5755e4]        ; 0056f3c3 | PTR_WideCharToMultiByte_005755e4
    TEST EAX,EAX                        ; 0056f3ca
    JZ 0x0056f3cf                       ; 0056f3cc
        ;   XREF to: 0056f3cf (CONDITIONAL_JUMP)  ; LAB_0056f3cf
    RET                                 ; 0056f3ce
    MOV EAX,0xffffffff                  ; 0056f3cf
        ;   Label: LAB_0056f3cf
    RET                                 ; 0056f3d4


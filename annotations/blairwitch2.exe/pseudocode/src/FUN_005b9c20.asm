; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b9c20(LPCSTR param_1)
;
;
; XREF[2]:
;   FUN_004613b0 at 004613fe
;   FUN_004bb9b0 at 004bba66
;
; Referenced Globals:
;   void* PTR_CreateDirectoryA_005c8510 = 001c8c40
;
; Called Functions:
;   CreateDirectoryA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005b9c20
        ;   Label: FUN_005b9c20
    MOV EDX,dword ptr [ESP + 0x8]       ; 005b9c22
    PUSH EDX                            ; 005b9c26
    CALL dword ptr CS:[0x5c8510]        ; 005b9c27 | PTR_CreateDirectoryA_005c8510
    TEST EAX,EAX                        ; 005b9c2e
    JZ 0x005c036c                       ; 005b9c30
        ;   XREF to: 005c036c (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 005b9c36
    RET                                 ; 005b9c38


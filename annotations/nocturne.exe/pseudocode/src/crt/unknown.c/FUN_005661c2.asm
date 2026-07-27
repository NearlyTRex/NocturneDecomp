; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005661c2(int param_1,undefined4 param_2,char *param_3)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005661f4 at 00566211
;   crt_unknown.c_FUN_0056621a at 0056622a
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005644a7
;   FUN_0056d99b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005661c2
        ;   Label: crt_unknown.c_FUN_005661c2
    MOV ECX,dword ptr [ESP + 0xc]       ; 005661c6
    TEST EDX,EDX                        ; 005661ca
    JZ 0x005661ea                       ; 005661cc
        ;   XREF to: 005661ea (CONDITIONAL_JUMP)  ; LAB_005661ea
    XOR EAX,EAX                         ; 005661ce
    MOV AL,byte ptr [ECX]               ; 005661d0
    CMP EAX,0x4                         ; 005661d2
    JNZ 0x005661ed                      ; 005661d5
        ;   XREF to: 005661ed (CONDITIONAL_JUMP)  ; LAB_005661ed
    MOV EAX,0x56d99b                    ; 005661d7
    PUSH ECX                            ; 005661dc
        ;   Label: LAB_005661dc
    MOV ECX,dword ptr [ESP + 0xc]       ; 005661dd
    PUSH ECX                            ; 005661e1
    PUSH EDX                            ; 005661e2
    CALL EAX                            ; 005661e3 | undefined FUN_0056d99b()
    ADD ESP,0xc                         ; 005661e5
    MOV EDX,EAX                         ; 005661e8
    MOV EAX,EDX                         ; 005661ea
        ;   Label: LAB_005661ea
    RET                                 ; 005661ec
    MOV EAX,0x5644a7                    ; 005661ed
        ;   Label: LAB_005661ed
    JMP 0x005661dc                      ; 005661f2
        ;   XREF to: 005661dc (UNCONDITIONAL_JUMP)  ; LAB_005661dc


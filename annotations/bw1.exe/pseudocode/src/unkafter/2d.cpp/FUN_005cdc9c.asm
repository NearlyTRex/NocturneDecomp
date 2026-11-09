; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * unkafter_2d_cpp_FUN_005cdc9c(int *param_1)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cc4d2 at 005cc555
;
; Called Functions:
;   crt_unknown.c_FUN_005c8e45
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cdc9c
        ;   Label: unkafter_2d.cpp_FUN_005cdc9c
    MOV EBX,dword ptr [ESP + 0x8]       ; 005cdc9d
    MOV EAX,dword ptr [EBX]             ; 005cdca1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cdca3
    CMP dword ptr [EBX + EAX*0x1 + 0x10],0x0 ; 005cdca6
    JZ 0x005cdcb1                       ; 005cdcab
        ;   XREF to: 005cdcb1 (CONDITIONAL_JUMP)  ; LAB_005cdcb1
    MOV EAX,EBX                         ; 005cdcad
        ;   Label: LAB_005cdcad
    POP EBX                             ; 005cdcaf
    RET                                 ; 005cdcb0
    MOV EAX,dword ptr [EBX]             ; 005cdcb1
        ;   Label: LAB_005cdcb1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cdcb3
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005cdcb6
    PUSH EAX                            ; 005cdcba
    MOV EDX,dword ptr [EAX + 0x28]      ; 005cdcbb
    CALL dword ptr [EDX + 0x20]         ; 005cdcbe
    ADD ESP,0x4                         ; 005cdcc1
    CMP EAX,-0x1                        ; 005cdcc4
    JNZ 0x005cdcad                      ; 005cdcc7
        ;   XREF to: 005cdcad (CONDITIONAL_JUMP)  ; LAB_005cdcad
    MOV EAX,dword ptr [EBX]             ; 005cdcc9
    MOV EAX,dword ptr [EAX + 0x4]       ; 005cdccb
    PUSH 0x2                            ; 005cdcce
    ADD EAX,EBX                         ; 005cdcd0
    PUSH EAX                            ; 005cdcd2
    CALL crt_unknown.c_FUN_005c8e45     ; 005cdcd3
        ;   XREF to: 005c8e45 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8e45()
    ADD ESP,0x8                         ; 005cdcd8
    MOV EAX,EBX                         ; 005cdcdb
    POP EBX                             ; 005cdcdd
    RET                                 ; 005cdcde


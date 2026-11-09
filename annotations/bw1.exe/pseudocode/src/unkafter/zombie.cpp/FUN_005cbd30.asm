; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cbd30(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0062621d
;   undefined4 DAT_006267b8
;
; Called Functions:
;   unkafter_2d.cpp_FUN_005cd4be
;   unkafter_2d.cpp_FUN_005cd6c4
;   unkafter_2d.cpp_FUN_005cd881
;   unkafter_2d.cpp_FUN_005cda1e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cbd30
        ;   Label: unkafter_zombie.cpp_FUN_005cbd30
    SUB ESP,0x10                        ; 005cbd31
    MOV dword ptr [ESP + 0x8],0xc0000000 ; 005cbd34
    MOV dword ptr [ESP + 0xc],0x4150017e ; 005cbd3c
    MOV dword ptr [ESP],0x80000000      ; 005cbd44
    MOV dword ptr [ESP + 0x4],0x4147ffff ; 005cbd4b
    CMP byte ptr [0x0062621d],0x3       ; 005cbd53 | DAT_0062621d
    JC 0x005cbda5                       ; 005cbd5a
        ;   XREF to: 005cbda5 (CONDITIONAL_JUMP)  ; LAB_005cbda5
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cbd5c
    MOV EDX,dword ptr [ESP + 0xc]       ; 005cbd60
    MOV EBX,dword ptr [ESP]             ; 005cbd64
    MOV ECX,dword ptr [ESP + 0x4]       ; 005cbd67
    CALL unkafter_2d.cpp_FUN_005cd4be   ; 005cbd6b
        ;   XREF to: 005cd4be (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005cd4be()
    MOV EBX,dword ptr [ESP]             ; 005cbd70
    MOV ECX,dword ptr [ESP + 0x4]       ; 005cbd73
    CALL unkafter_2d.cpp_FUN_005cd881   ; 005cbd77
        ;   XREF to: 005cd881 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005cd881()
    MOV EBX,EAX                         ; 005cbd7c
    MOV ECX,EDX                         ; 005cbd7e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005cbd80
    MOV EDX,dword ptr [ESP + 0xc]       ; 005cbd84
    CALL unkafter_2d.cpp_FUN_005cd6c4   ; 005cbd88
        ;   XREF to: 005cd6c4 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005cd6c4()
    MOV EBX,0xe2308c3a                  ; 005cbd8d
    MOV ECX,0x3e45798e                  ; 005cbd92
    CALL unkafter_2d.cpp_FUN_005cda1e   ; 005cbd97
        ;   XREF to: 005cda1e (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005cda1e()
    JLE 0x005cbda5                      ; 005cbd9c
        ;   XREF to: 005cbda5 (CONDITIONAL_JUMP)  ; LAB_005cbda5
    OR byte ptr [0x006267b8],0x1        ; 005cbd9e | DAT_006267b8
    ADD ESP,0x10                        ; 005cbda5
        ;   Label: LAB_005cbda5
    POP EBX                             ; 005cbda8
    RET                                 ; 005cbda9


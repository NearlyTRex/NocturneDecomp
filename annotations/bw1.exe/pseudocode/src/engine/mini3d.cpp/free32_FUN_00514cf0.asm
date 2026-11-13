; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_free32_FUN_00514cf0(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[1]:
;   engine_mini3d.cpp_kill_FUN_00511050 at 00511057
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514cf0
        ;   Label: engine_mini3d.cpp_free32_FUN_00514cf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514cf1
    TEST EBX,EBX                        ; 00514cf5
    JZ 0x00514d0e                       ; 00514cf7
        ;   XREF to: 00514d0e (CONDITIONAL_JUMP)  ; LAB_00514d0e
    MOV AL,byte ptr [EBX + -0x1]        ; 00514cf9
        ;   Label: LAB_00514cf9
    AND EAX,0xff                        ; 00514cfc
    SUB EBX,EAX                         ; 00514d01
    PUSH EBX                            ; 00514d03
    CALL crt_unknown.c_FUN_005c09f0     ; 00514d04
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00514d09
    POP EBX                             ; 00514d0c
    RET                                 ; 00514d0d
    MOV EDX,0x5e8ee8                    ; 00514d0e
        ;   Label: LAB_00514d0e
    MOV ECX,0xdfe                       ; 00514d13
    PUSH 0x5e8efd                       ; 00514d18
    MOV dword ptr [0x01d1d400],EDX      ; 00514d1d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00514d23 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00514d29
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00514d2e
    JMP 0x00514cf9                      ; 00514d31
        ;   XREF to: 00514cf9 (UNCONDITIONAL_JUMP)  ; LAB_00514cf9


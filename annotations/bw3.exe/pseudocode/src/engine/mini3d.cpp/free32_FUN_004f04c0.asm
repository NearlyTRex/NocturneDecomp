; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_free32_FUN_004f04c0(void *ptr)
;
; Parameters:
; void *           Stack[0x4]:4   ptr
;
; XREF[1]:
;   engine_mini3d.cpp_kill_FUN_004ec820 at 004ec827
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f04c0
        ;   Label: engine_mini3d.cpp_free32_FUN_004f04c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f04c1
    TEST EBX,EBX                        ; 004f04c5
    JZ 0x004f04de                       ; 004f04c7
        ;   XREF to: 004f04de (CONDITIONAL_JUMP)  ; LAB_004f04de
    MOV AL,byte ptr [EBX + -0x1]        ; 004f04c9
        ;   Label: LAB_004f04c9
    AND EAX,0xff                        ; 004f04cc
    SUB EBX,EAX                         ; 004f04d1
    PUSH EBX                            ; 004f04d3
    CALL crt_unknown.c_FUN_005a3770     ; 004f04d4
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 004f04d9
    POP EBX                             ; 004f04dc
    RET                                 ; 004f04dd
    MOV EDX,0x5c81ea                    ; 004f04de
        ;   Label: LAB_004f04de
    MOV ECX,0xdfe                       ; 004f04e3
    PUSH 0x5c81ff                       ; 004f04e8
    MOV dword ptr [0x01d71de0],EDX      ; 004f04ed | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004f04f3 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f04f9
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f04fe
    JMP 0x004f04c9                      ; 004f0501
        ;   XREF to: 004f04c9 (UNCONDITIONAL_JUMP)  ; LAB_004f04c9


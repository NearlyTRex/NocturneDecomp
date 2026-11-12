; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004b9f70(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d310
;   undefined4 DAT_0152d240
;   undefined4 DAT_01cc7f1c
;   undefined4 DAT_01cc7f20
;   undefined4 DAT_01cc7f24
;   undefined4 DAT_01cc7f28
;   undefined4 DAT_01cc7f2c
;   undefined4 DAT_01cc7f30
;   undefined4 DAT_01cc7f38
;   undefined4 DAT_01cc8000
;
; Called Functions:
;   engine_2d.c_fillRectColor_FUN_004031c0
;   engine_font.cpp_FUN_004c1dd0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b9f70
        ;   Label: core_flashlit.cpp_FUN_004b9f70
    PUSH EBP                            ; 004b9f71
    MOV EDX,dword ptr [0x0061d310]      ; 004b9f72 | DAT_0061d310
    TEST EDX,EDX                        ; 004b9f78
    JL 0x004b9f9f                       ; 004b9f7a
        ;   XREF to: 004b9f9f (CONDITIONAL_JUMP)  ; LAB_004b9f9f
    MOV ECX,dword ptr [0x01cc8000]      ; 004b9f7c | DAT_01cc8000
    TEST ECX,ECX                        ; 004b9f82
    JNZ 0x004b9fa2                      ; 004b9f84
        ;   XREF to: 004b9fa2 (CONDITIONAL_JUMP)  ; LAB_004b9fa2
    MOV ESI,0xffffffff                  ; 004b9f86
    XOR AH,AH                           ; 004b9f8b
    MOV dword ptr [0x01cc7f1c],ECX      ; 004b9f8d | DAT_01cc7f1c
    MOV byte ptr [0x01cc7f38],AH        ; 004b9f93 | DAT_01cc7f38
    MOV dword ptr [0x0061d310],ESI      ; 004b9f99 | DAT_0061d310
    POP EBP                             ; 004b9f9f
        ;   Label: LAB_004b9f9f
    POP ESI                             ; 004b9fa0
    RET                                 ; 004b9fa1
    PUSH EBX                            ; 004b9fa2
        ;   Label: LAB_004b9fa2
    MOV EAX,[0x01cc7f28]                ; 004b9fa3 | DAT_01cc7f28
    PUSH 0x0                            ; 004b9fa8
    DEC EAX                             ; 004b9faa
    PUSH EAX                            ; 004b9fab
    MOV EAX,[0x01cc7f24]                ; 004b9fac | DAT_01cc7f24
    DEC EAX                             ; 004b9fb1
    PUSH EAX                            ; 004b9fb2
    MOV EBP,dword ptr [0x01cc7f20]      ; 004b9fb3 | DAT_01cc7f20
    PUSH EBP                            ; 004b9fb9
    PUSH EDX                            ; 004b9fba
    CALL engine_2d.c_fillRectColor_FUN_004031c0 ; 004b9fbb
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_fillRectColor_FUN_004031c0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004b9fc0
    PUSH -0x1                           ; 004b9fc3
    PUSH 0xff                           ; 004b9fc5
    MOV EDX,dword ptr [0x01cc7f30]      ; 004b9fca | DAT_01cc7f30
    PUSH EDX                            ; 004b9fd0
    MOV ECX,dword ptr [0x01cc7f2c]      ; 004b9fd1 | DAT_01cc7f2c
    PUSH ECX                            ; 004b9fd7
    PUSH 0x1cc7f38                      ; 004b9fd8
    MOV EBX,dword ptr [0x0152d240]      ; 004b9fdd | DAT_0152d240
    PUSH EBX                            ; 004b9fe3
    CALL engine_font.cpp_FUN_004c1dd0   ; 004b9fe4
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    ADD ESP,0x18                        ; 004b9fe9
    POP EBX                             ; 004b9fec
    POP EBP                             ; 004b9fed
    POP ESI                             ; 004b9fee
    RET                                 ; 004b9fef


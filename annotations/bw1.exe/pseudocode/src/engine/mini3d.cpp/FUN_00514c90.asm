; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00514c90(int param_1)
;
;
; XREF[1]:
;   unkafter_minecar.cpp_FUN_0051102e at 00511035
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514c90
        ;   Label: engine_mini3d.cpp_FUN_00514c90
    MOV EAX,dword ptr [ESP + 0x8]       ; 00514c91
    SHL EAX,0x5                         ; 00514c95
    ADD EAX,0x20                        ; 00514c98
    PUSH EAX                            ; 00514c9b
    CALL crt_unknown.c_FUN_005c08d0     ; 00514c9c
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00514ca1
    MOV EBX,EAX                         ; 00514ca4
    TEST EAX,EAX                        ; 00514ca6
    JZ 0x00514cb8                       ; 00514ca8
        ;   XREF to: 00514cb8 (CONDITIONAL_JUMP)  ; LAB_00514cb8
    LEA EAX,[EBX + 0x20]                ; 00514caa
    AND AL,0xe0                         ; 00514cad
    MOV BH,AL                           ; 00514caf
    SUB BH,BL                           ; 00514cb1
    MOV byte ptr [EAX + -0x1],BH        ; 00514cb3
    POP EBX                             ; 00514cb6
    RET                                 ; 00514cb7
    PUSH ESI                            ; 00514cb8
        ;   Label: LAB_00514cb8
    MOV ESI,dword ptr [ESP + 0xc]       ; 00514cb9
    PUSH ESI                            ; 00514cbd
    MOV EDX,0x5e8e97                    ; 00514cbe
    MOV ECX,0xddf                       ; 00514cc3
    PUSH 0x5e8eac                       ; 00514cc8
    MOV dword ptr [0x01d1d400],EDX      ; 00514ccd | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00514cd3 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00514cd9
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00514cde
    POP ESI                             ; 00514ce1
    LEA EAX,[EBX + 0x20]                ; 00514ce2
    AND AL,0xe0                         ; 00514ce5
    MOV BH,AL                           ; 00514ce7
    SUB BH,BL                           ; 00514ce9
    MOV byte ptr [EAX + -0x1],BH        ; 00514ceb
    POP EBX                             ; 00514cee
    RET                                 ; 00514cef


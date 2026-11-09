; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00433cd0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_STAND_005d5df0
;   undefined4 DAT_005d5df7
;
; Called Functions:
;   core_motion.cpp_FUN_00524150
;   core_motion.cpp_FUN_00524a00
;   core_motion.cpp_FUN_00524a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433cd0
        ;   Label: core_charactr.cpp_FUN_00433cd0
    PUSH ESI                            ; 00433cd1
    SUB ESP,0x4                         ; 00433cd2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00433cd5
    PUSH ESI                            ; 00433cd9
    MOV EAX,dword ptr [ESI + 0x154]     ; 00433cda
    CALL dword ptr [EAX + 0x10c]        ; 00433ce0
    ADD ESP,0x4                         ; 00433ce6
    CMP EAX,0x1                         ; 00433ce9
    JG 0x00433d09                       ; 00433cec
        ;   XREF to: 00433d09 (CONDITIONAL_JUMP)  ; LAB_00433d09
    MOV AH,byte ptr [ESI + 0x24a8]      ; 00433cee
    LEA EBX,[ESI + 0x158]               ; 00433cf4
    TEST AH,AH                          ; 00433cfa
    JNZ 0x00433d0d                      ; 00433cfc
        ;   XREF to: 00433d0d (CONDITIONAL_JUMP)  ; LAB_00433d0d
    MOV EAX,0x1                         ; 00433cfe
        ;   Label: LAB_00433cfe
    ADD ESP,0x4                         ; 00433d03
        ;   Label: LAB_00433d03
    POP ESI                             ; 00433d06
    POP EBX                             ; 00433d07
    RET                                 ; 00433d08
    XOR EAX,EAX                         ; 00433d09
        ;   Label: LAB_00433d09
    JMP 0x00433d03                      ; 00433d0b
        ;   XREF to: 00433d03 (UNCONDITIONAL_JUMP)  ; LAB_00433d03
    PUSH 0x0                            ; 00433d0d
        ;   Label: LAB_00433d0d
    PUSH 0x5d5df0                       ; 00433d0f | = "STAND"
    PUSH EBX                            ; 00433d14
    CALL core_motion.cpp_FUN_00524a00   ; 00433d15
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00433d1a
    PUSH EAX                            ; 00433d1d
    CALL core_motion.cpp_FUN_00524150   ; 00433d1e
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00433d23
    TEST EAX,EAX                        ; 00433d26
    JL 0x00433cfe                       ; 00433d28
        ;   XREF to: 00433cfe (CONDITIONAL_JUMP)  ; LAB_00433cfe
    PUSH EAX                            ; 00433d2a
    PUSH EBX                            ; 00433d2b
    CALL core_motion.cpp_FUN_00524a40   ; 00433d2c
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x8],EAX       ; 00433d31
    FLD float ptr [ESP + 0x8]           ; 00433d35
    ADD ESP,0x8                         ; 00433d39
    FCOMP double ptr [0x005d5df7]       ; 00433d3c | DAT_005d5df7
    FNSTSW AX                           ; 00433d42
    SAHF                                ; 00433d44
    JBE 0x00433cfe                      ; 00433d45
        ;   XREF to: 00433cfe (CONDITIONAL_JUMP)  ; LAB_00433cfe
    XOR EAX,EAX                         ; 00433d47
    ADD ESP,0x4                         ; 00433d49
    POP ESI                             ; 00433d4c
    POP EBX                             ; 00433d4d
    RET                                 ; 00433d4e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447d50(int *param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00447db0 at 00447e3b
;
; Referenced Globals:
;   TerminatedCString s_core_course_cpp_005d714e
;   TerminatedCString s_CCourse_allocMemory_out_005d7161
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   FUN_00447ee0
;   FUN_005030e0
;   FUN_005c1268
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447d50
        ;   Label: FUN_00447d50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00447d51
    PUSH EBX                            ; 00447d55
    CALL FUN_00447ee0                   ; 00447d56
        ;   XREF to: 00447ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00447ee0()
    ADD ESP,0x4                         ; 00447d5b
    MOV EAX,dword ptr [ESP + 0xc]       ; 00447d5e
    MOV dword ptr [EBX],EAX             ; 00447d62
    SHL EAX,0x2                         ; 00447d64
    MOV EDX,EAX                         ; 00447d67
    SHL EAX,0x3                         ; 00447d69
    SUB EAX,EDX                         ; 00447d6c
    PUSH EAX                            ; 00447d6e
    CALL FUN_005c1268                   ; 00447d6f
        ;   XREF to: 005c1268 (UNCONDITIONAL_CALL)  ; undefined FUN_005c1268()
    ADD ESP,0x4                         ; 00447d74
    MOV dword ptr [EBX + 0x4],EAX       ; 00447d77
    TEST EAX,EAX                        ; 00447d7a
    JZ 0x00447d80                       ; 00447d7c
        ;   XREF to: 00447d80 (CONDITIONAL_JUMP)  ; LAB_00447d80
    POP EBX                             ; 00447d7e
    RET                                 ; 00447d7f
    MOV ECX,0x5d714e                    ; 00447d80 | = "..\\core\\course.cpp"
        ;   Label: LAB_00447d80
    MOV EBX,0x6e                        ; 00447d85
    PUSH 0x5d7161                       ; 00447d8a | = "CCourse::allocMemory - out of hunk!"
    MOV dword ptr [0x01d1d400],ECX      ; 00447d8f | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00447d95 | DAT_01d1d404
    CALL FUN_005030e0                   ; 00447d9b
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 00447da0
    POP EBX                             ; 00447da3
    RET                                 ; 00447da4


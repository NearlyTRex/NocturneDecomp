; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_dcamera_cpp_CDemonCamera_allocLight_FUN_0043d1f0(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_00b667a4
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x00b667a4]      ; 0043d1f0 | DAT_00b667a4
        ;   Label: core_dcamera.cpp_CDemonCamera_allocLight_FUN_0043d1f0
    LEA EAX,[ECX*0x4 + 0x0]             ; 0043d1f6
    ADD EAX,ECX                         ; 0043d1fd
    SHL EAX,0xc                         ; 0043d1ff
    MOV EDX,EAX                         ; 0043d202
    SHL EAX,0x4                         ; 0043d204
    SUB EAX,EDX                         ; 0043d207
    INC ECX                             ; 0043d209
    ADD EAX,0xb667a8                    ; 0043d20a
    CMP ECX,0x18                        ; 0043d20f
    JBE 0x0043d216                      ; 0043d212
        ;   XREF to: 0043d216 (CONDITIONAL_JUMP)  ; LAB_0043d216
    XOR EAX,EAX                         ; 0043d214
    MOV dword ptr [0x00b667a4],ECX      ; 0043d216 | DAT_00b667a4
        ;   Label: LAB_0043d216
    RET                                 ; 0043d21c


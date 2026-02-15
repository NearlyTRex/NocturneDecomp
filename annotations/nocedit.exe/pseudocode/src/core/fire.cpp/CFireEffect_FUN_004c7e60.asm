; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_FUN_004c7e60(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a846f
;
; Referenced Globals:
;   int INT_02d655a8
;
; Called Functions:
;   core_fire.cpp_FUN_004c17c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c7e60
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c7e60
    PUSH EDI                            ; 004c7e61
    PUSH EBP                            ; 004c7e62
    MOV EDX,dword ptr [0x02d655a8]      ; 004c7e63 | INT_02d655a8
    LEA EAX,[EDX*0x8 + 0x0]             ; 004c7e69
    ADD EAX,EDX                         ; 004c7e70
    SHL EAX,0x3                         ; 004c7e72
    INC EDX                             ; 004c7e75
    ADD EAX,0x2d655ac                   ; 004c7e76
    MOV dword ptr [0x02d655a8],EDX      ; 004c7e7b | INT_02d655a8
    CMP EDX,0x40                        ; 004c7e81
    JL 0x004c7e90                       ; 004c7e84
        ;   XREF to: 004c7e90 (CONDITIONAL_JUMP)  ; LAB_004c7e90
    PUSH EBX                            ; 004c7e86
    XOR EBX,EBX                         ; 004c7e87
    MOV dword ptr [0x02d655a8],EBX      ; 004c7e89 | INT_02d655a8
    POP EBX                             ; 004c7e8f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004c7e90
        ;   Label: LAB_004c7e90
    PUSH ESI                            ; 004c7e94
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004c7e95
    PUSH EDI                            ; 004c7e99
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004c7e9a
    PUSH EBP                            ; 004c7e9e
    PUSH EAX                            ; 004c7e9f
    CALL core_fire.cpp_FUN_004c17c0     ; 004c7ea0
        ;   XREF to: 004c17c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004c17c0()
    ADD ESP,0x10                        ; 004c7ea5
    POP EBP                             ; 004c7ea8
    POP EDI                             ; 004c7ea9
    POP ESI                             ; 004c7eaa
    RET                                 ; 004c7eab


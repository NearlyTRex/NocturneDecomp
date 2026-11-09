; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f311e(undefined4 *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09918
;   undefined4 DAT_01d0991c
;   undefined4 DAT_01d0c398
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004f311e
        ;   Label: engine_mini3d.cpp_FUN_004f311e
    PUSH ESI                            ; 004f3120
    PUSH EDI                            ; 004f3121
    MOV EDX,dword ptr [0x01d0991c]      ; 004f3122 | DAT_01d0991c
    INC EDX                             ; 004f3128
    MOV dword ptr [0x01d0991c],EDX      ; 004f3129 | DAT_01d0991c
    CMP EDX,0x9                         ; 004f312f
    JG 0x004f3168                       ; 004f3132
        ;   XREF to: 004f3168 (CONDITIONAL_JUMP)  ; LAB_004f3168
    MOV EAX,[0x01d0991c]                ; 004f3134 | DAT_01d0991c
        ;   Label: LAB_004f3134
    SHL EAX,0x2                         ; 004f3139
    MOV EDX,EAX                         ; 004f313c
    SHL EAX,0x4                         ; 004f313e
    SUB EAX,EDX                         ; 004f3141
    MOV ECX,0xf                         ; 004f3143
    ADD EAX,0x1d09920                   ; 004f3148
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f314d
    MOV EDI,EAX                         ; 004f3151
    MOVSD.REP ES:EDI,ESI                ; 004f3153
    MOV EDI,0x1                         ; 004f3155
    MOV [0x01d09918],EAX                ; 004f315a | DAT_01d09918
    MOV dword ptr [0x01d0c398],EDI      ; 004f315f | DAT_01d0c398
    POP EDI                             ; 004f3165
    POP ESI                             ; 004f3166
    RET                                 ; 004f3167
    PUSH EBX                            ; 004f3168
        ;   Label: LAB_004f3168
    MOV EBX,0x5ddb3c                    ; 004f3169
    MOV ESI,0x488                       ; 004f316e
    PUSH 0x5ddb51                       ; 004f3173
    MOV dword ptr [0x01d046a0],EBX      ; 004f3178 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004f317e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f3184
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f3189
    POP EBX                             ; 004f318c
    JMP 0x004f3134                      ; 004f318d
        ;   XREF to: 004f3134 (UNCONDITIONAL_JUMP)  ; LAB_004f3134


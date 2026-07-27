; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00467250(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_0057dfce
;   TerminatedCString s_CDemonRaytrace_allocCube_0057dfe1
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_unknown.c_FUN_00565c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467250
        ;   Label: core_dtrace.cpp_FUN_00467250
    PUSH EBP                            ; 00467251
    MOV EBX,dword ptr [ESP + 0xc]       ; 00467252
    MOV EAX,dword ptr [EBX + 0x40]      ; 00467256
    IMUL EAX,dword ptr [EBX + 0x44]     ; 00467259
    IMUL EAX,dword ptr [EBX + 0x48]     ; 0046725d
    PUSH EAX                            ; 00467261
    PUSH 0x58                           ; 00467262
    CALL crt_unknown.c_FUN_00565c50     ; 00467264
        ;   XREF to: 00565c50 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00565c50()
    ADD ESP,0x8                         ; 00467269
    MOV dword ptr [EBX + 0x4c],EAX      ; 0046726c
    TEST EAX,EAX                        ; 0046726f
    JZ 0x00467276                       ; 00467271
        ;   XREF to: 00467276 (CONDITIONAL_JUMP)  ; LAB_00467276
    POP EBP                             ; 00467273
    POP EBX                             ; 00467274
    RET                                 ; 00467275
    PUSH EDI                            ; 00467276
        ;   Label: LAB_00467276
    MOV EDI,0x57dfce                    ; 00467277 | = "..\\core\\dtrace.cpp"
    MOV EBP,0x88                        ; 0046727c
    PUSH 0x57dfe1                       ; 00467281 | = "CDemonRaytrace::allocCubeList - Out o..."
    MOV dword ptr [0x01cc4800],EDI      ; 00467286 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBP      ; 0046728c | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00467292
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00467297
    POP EDI                             ; 0046729a
    POP EBP                             ; 0046729b
    POP EBX                             ; 0046729c
    RET                                 ; 0046729d


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3240(int param_1,int param_2)
;
;
; XREF[1]:
;   FUN_004a5700 at 004a5878
;
; Called Functions:
;   FUN_004a2780
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004a3240
        ;   Label: FUN_004a3240
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a3244
    TEST EDX,EDX                        ; 004a3248
    JL 0x004a3251                       ; 004a324a
        ;   XREF to: 004a3251 (CONDITIONAL_JUMP)  ; LAB_004a3251
    CMP EDX,dword ptr [ECX + 0x38]      ; 004a324c
    JL 0x004a3252                       ; 004a324f
        ;   XREF to: 004a3252 (CONDITIONAL_JUMP)  ; LAB_004a3252
    RET                                 ; 004a3251
        ;   Label: LAB_004a3251
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a3252
        ;   Label: LAB_004a3252
    ADD EAX,EDX                         ; 004a3259
    SHL EAX,0x4                         ; 004a325b
    ADD EAX,EDX                         ; 004a325e
    SHL EAX,0x2                         ; 004a3260
    MOV EDX,dword ptr [ECX + 0x3c]      ; 004a3263
    ADD EAX,EDX                         ; 004a3266
    PUSH EAX                            ; 004a3268
    CALL FUN_004a2780                   ; 004a3269
        ;   XREF to: 004a2780 (UNCONDITIONAL_CALL)  ; undefined FUN_004a2780()
    ADD ESP,0x4                         ; 004a326e
    RET                                 ; 004a3271


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_platfrm_cpp_CPlatform_startMovement_FUN_0053a340(CPlatform *this_ptr,float goal_param,float movement_rate)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   goal_param
; float            Stack[0xc]:4   movement_rate
;
; XREF[2]:
;   core_platfrm.cpp_CPlatform_process_FUN_00539810 at 0053989a
;   core_script.cpp_CScript_step_FUN_00544460 at 0054837e
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0053a340
        ;   Label: core_platfrm.cpp_CPlatform_startMovement_FUN_0053a340
    MOV EAX,dword ptr [ESP + 0x8]       ; 0053a344
    MOV dword ptr [EDX + 0x2e0],EAX     ; 0053a348
    FLD float ptr [EDX + 0x2e0]         ; 0053a34e
    FLDZ                                ; 0053a354
    FCOMPP                              ; 0053a356
    FNSTSW AX                           ; 0053a358
    SAHF                                ; 0053a35a
    JA 0x0053a3af                       ; 0053a35b
        ;   XREF to: 0053a3af (CONDITIONAL_JUMP)  ; LAB_0053a3af
    FLD float ptr [EDX + 0x2e0]         ; 0053a35d
        ;   Label: LAB_0053a35d
    FLD1                                ; 0053a363
    FCOMPP                              ; 0053a365
    FNSTSW AX                           ; 0053a367
    SAHF                                ; 0053a369
    JNC 0x0053a376                      ; 0053a36a
        ;   XREF to: 0053a376 (CONDITIONAL_JUMP)  ; LAB_0053a376
    MOV dword ptr [EDX + 0x2e0],0x3f800000 ; 0053a36c
    MOV EAX,dword ptr [ESP + 0xc]       ; 0053a376
        ;   Label: LAB_0053a376
    MOV dword ptr [EDX + 0x2e4],EAX     ; 0053a37a
    FLD float ptr [ESP + 0x8]           ; 0053a380
    FCOMP float ptr [EDX + 0x2dc]       ; 0053a384
    FNSTSW AX                           ; 0053a38a
    SAHF                                ; 0053a38c
    JBE 0x0053a399                      ; 0053a38d
        ;   XREF to: 0053a399 (CONDITIONAL_JUMP)  ; LAB_0053a399
    MOV dword ptr [EDX + 0x2d4],0x3     ; 0053a38f
    JNC 0x0053a3a5                      ; 0053a399
        ;   XREF to: 0053a3a5 (CONDITIONAL_JUMP)  ; LAB_0053a3a5
        ;   Label: LAB_0053a399
    MOV dword ptr [EDX + 0x2d4],0x4     ; 0053a39b
    CMP byte ptr [EDX + 0x480],0x0      ; 0053a3a5
        ;   Label: LAB_0053a3a5
    JNZ 0x0053a3bb                      ; 0053a3ac
        ;   XREF to: 0053a3bb (CONDITIONAL_JUMP)  ; LAB_0053a3bb
    RET                                 ; 0053a3ae
    MOV dword ptr [EDX + 0x2e0],0x0     ; 0053a3af
        ;   Label: LAB_0053a3af
    JMP 0x0053a35d                      ; 0053a3b9
        ;   XREF to: 0053a35d (UNCONDITIONAL_JUMP)  ; LAB_0053a35d
    LEA ECX,[EDX + 0x480]               ; 0053a3bb
        ;   Label: LAB_0053a3bb
    PUSH ECX                            ; 0053a3c1
    MOV EAX,dword ptr [EDX + 0x154]     ; 0053a3c2
    PUSH EDX                            ; 0053a3c8
    CALL dword ptr [EAX + 0x30]         ; 0053a3c9
    ADD ESP,0x8                         ; 0053a3cc
    RET                                 ; 0053a3cf


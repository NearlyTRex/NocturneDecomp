; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_script_cpp_CScript_processTimer_FUN_00530310(CScript *this_ptr,float delta_time,float *timer_value)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; float *          Stack[0xc]:4   timer_value
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052bcce
;
; Referenced Globals:
;   TerminatedCString s_core_script_cpp_005cfa68
;   TerminatedCString s_CScript_processTimer_inv_005cfa7b
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530310
        ;   Label: core_script.cpp_CScript_processTimer_FUN_00530310
    PUSH ESI                            ; 00530311
    MOV EBX,dword ptr [ESP + 0xc]       ; 00530312
    MOV ESI,dword ptr [ESP + 0x14]      ; 00530316
    FLD float ptr [ESP + 0x10]          ; 0053031a
    FLDZ                                ; 0053031e
    FCOMPP                              ; 00530320
    FNSTSW AX                           ; 00530322
    SAHF                                ; 00530324
    JA 0x00530358                       ; 00530325
        ;   XREF to: 00530358 (CONDITIONAL_JUMP)  ; LAB_00530358
    FLDZ                                ; 00530327
        ;   Label: LAB_00530327
    FCOMP float ptr [EBX + 0x48]        ; 00530329
    FNSTSW AX                           ; 0053032c
    SAHF                                ; 0053032e
    JBE 0x00530338                      ; 0053032f
        ;   XREF to: 00530338 (CONDITIONAL_JUMP)  ; LAB_00530338
    MOV EAX,dword ptr [ESP + 0x10]      ; 00530331
    MOV dword ptr [EBX + 0x48],EAX      ; 00530335
    FLD float ptr [EBX + 0x48]          ; 00530338
        ;   Label: LAB_00530338
    FCOMP float ptr [ESI]               ; 0053033b
    FNSTSW AX                           ; 0053033d
    SAHF                                ; 0053033f
    JA 0x0053037d                       ; 00530340
        ;   XREF to: 0053037d (CONDITIONAL_JUMP)  ; LAB_0053037d
    FLD float ptr [EBX + 0x48]          ; 00530342
    FSUBR float ptr [ESI]               ; 00530345
    MOV EAX,0x1                         ; 00530347
    FSTP float ptr [ESI]                ; 0053034c
    MOV dword ptr [EBX + 0x48],0x0      ; 0053034e
    POP ESI                             ; 00530355
    POP EBX                             ; 00530356
    RET                                 ; 00530357
    MOV EDX,0x5cfa68                    ; 00530358 | = "..\\core\\script.cpp"
        ;   Label: LAB_00530358
    MOV ECX,0xf83                       ; 0053035d
    PUSH 0x5cfa7b                       ; 00530362 | = "CScript::processTimer - invalidTimeTo..."
    MOV dword ptr [0x01d71de0],EDX      ; 00530367 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0053036d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00530373
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00530378
    JMP 0x00530327                      ; 0053037b
        ;   XREF to: 00530327 (UNCONDITIONAL_JUMP)  ; LAB_00530327
    FLD float ptr [ESI]                 ; 0053037d
        ;   Label: LAB_0053037d
    FSUBR float ptr [EBX + 0x48]        ; 0053037f
    XOR EAX,EAX                         ; 00530382
    FSTP float ptr [EBX + 0x48]         ; 00530384
    MOV dword ptr [ESI],0x0             ; 00530387
    POP ESI                             ; 0053038d
    POP EBX                             ; 0053038e
    RET                                 ; 0053038f


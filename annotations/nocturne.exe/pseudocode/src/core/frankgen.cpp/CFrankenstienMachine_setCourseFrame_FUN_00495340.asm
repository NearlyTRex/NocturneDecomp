; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_00495340(int param_1,float param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004950a0 at 004950ca
;
; Referenced Globals:
;   TerminatedCString s_core_frankgen_cpp_00581dbb
;   TerminatedCString s_CFrankenstienMachine_set_00581dd0
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_0043b800
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495340
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_00495340
    PUSH ESI                            ; 00495341
    PUSH EDI                            ; 00495342
    PUSH EBP                            ; 00495343
    MOV EBP,ESP                         ; 00495344
    SUB ESP,0xc                         ; 00495346
    AND ESP,0xfffffff8                  ; 00495349
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049534c
    LEA EAX,[EBX + 0x2f8]               ; 0049534f
    MOV EAX,dword ptr [EAX]             ; 00495355
    MOV ESI,EAX                         ; 00495357
    CMP EAX,0x1                         ; 00495359
    JL 0x004953cd                       ; 0049535c
        ;   XREF to: 004953cd (CONDITIONAL_JUMP)  ; LAB_004953cd
    FLD float ptr [EBP + 0x18]          ; 0049535e
        ;   Label: LAB_0049535e
    FLD float ptr [EBX + 0x154]         ; 00495361
    FSUB ST0,ST1                        ; 00495367
    MOV dword ptr [ESP + 0x8],ESI       ; 00495369
    FILD dword ptr [ESP + 0x8]          ; 0049536d
    FMULP                               ; 00495371
    FLD float ptr [EBP + 0x1c]          ; 00495373
    FSUBRP ST2,ST0                      ; 00495376
    FDIVRP                              ; 00495378
    FST float ptr [ESP]                 ; 0049537a
    FLDZ                                ; 0049537d
    FCOMPP                              ; 0049537f
    FNSTSW AX                           ; 00495381
    SAHF                                ; 00495383
    JBE 0x0049538b                      ; 00495384
        ;   XREF to: 0049538b (CONDITIONAL_JUMP)  ; LAB_0049538b
    XOR EDI,EDI                         ; 00495386
    MOV dword ptr [ESP],EDI             ; 00495388
    DEC ESI                             ; 0049538b
        ;   Label: LAB_0049538b
    MOV dword ptr [ESP + 0x8],ESI       ; 0049538c
    FLD float ptr [ESP]                 ; 00495390
    FILD dword ptr [ESP + 0x8]          ; 00495393
    FSTP float ptr [ESP + 0x4]          ; 00495397
    FCOMP float ptr [ESP + 0x4]         ; 0049539b
    FNSTSW AX                           ; 0049539f
    SAHF                                ; 004953a1
    JBE 0x004953ab                      ; 004953a2
        ;   XREF to: 004953ab (CONDITIONAL_JUMP)  ; LAB_004953ab
    MOV EAX,dword ptr [ESP + 0x4]       ; 004953a4
    MOV dword ptr [ESP],EAX             ; 004953a8
    LEA EAX,[EBX + 0x30]                ; 004953ab
        ;   Label: LAB_004953ab
    PUSH EAX                            ; 004953ae
    LEA EAX,[EBX + 0x20]                ; 004953af
    PUSH EAX                            ; 004953b2
    ADD EBX,0x2f8                       ; 004953b3
    PUSH dword ptr [ESP + 0x8]          ; 004953b9
    PUSH EBX                            ; 004953bd
    CALL core_course.cpp_CCourse_evaluate_FUN_0043b800 ; 004953be
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; undefined core_course.cpp_CCourse_evaluate_FUN_0043b800()
    ADD ESP,0x10                        ; 004953c3
    MOV ESP,EBP                         ; 004953c6
    POP EBP                             ; 004953c8
    POP EDI                             ; 004953c9
    POP ESI                             ; 004953ca
    POP EBX                             ; 004953cb
    RET                                 ; 004953cc
    MOV EDX,0x581dbb                    ; 004953cd | = "..\\core\\frankgen.cpp"
        ;   Label: LAB_004953cd
    MOV ECX,0x1dc                       ; 004953d2
    PUSH 0x581dd0                       ; 004953d7 | = "CFrankenstienMachine::setCourseFrame ..."
    MOV dword ptr [0x01cc4800],EDX      ; 004953dc | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004953e2 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004953e8
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004953ed
    JMP 0x0049535e                      ; 004953f0
        ;   XREF to: 0049535e (UNCONDITIONAL_JUMP)  ; LAB_0049535e


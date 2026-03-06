; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(CFrankenstienMachine *this_ptr,float start_frame,float end_frame)
;
; Parameters:
; CFrankenstienMachine * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   start_frame
; float            Stack[0xc]:4   end_frame
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004d2190 at 004d21ba
;
; Referenced Globals:
;   TerminatedCString s_core_frankgen_cpp_0062ab98
;   TerminatedCString s_CFrankenstienMachine_set_0062abad
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_course.cpp_CCourse_evaluate_FUN_00442710
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2430
        ;   Label: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
    PUSH ESI                            ; 004d2431
    PUSH EDI                            ; 004d2432
    PUSH EBP                            ; 004d2433
    MOV EBP,ESP                         ; 004d2434
    SUB ESP,0xc                         ; 004d2436
    AND ESP,0xfffffff8                  ; 004d2439
    MOV EBX,dword ptr [EBP + 0x14]      ; 004d243c
    LEA EAX,[EBX + 0x300]               ; 004d243f
    MOV EAX,dword ptr [EAX]             ; 004d2445
    MOV ESI,EAX                         ; 004d2447
    CMP EAX,0x1                         ; 004d2449
    JL 0x004d24bd                       ; 004d244c
        ;   XREF to: 004d24bd (CONDITIONAL_JUMP)  ; LAB_004d24bd
    FLD float ptr [EBP + 0x18]          ; 004d244e
        ;   Label: LAB_004d244e
    FLD float ptr [EBX + 0x15c]         ; 004d2451
    FSUB ST0,ST1                        ; 004d2457
    MOV dword ptr [ESP + 0x8],ESI       ; 004d2459
    FILD dword ptr [ESP + 0x8]          ; 004d245d
    FMULP                               ; 004d2461
    FLD float ptr [EBP + 0x1c]          ; 004d2463
    FSUBRP ST2,ST0                      ; 004d2466
    FDIVRP                              ; 004d2468
    FST float ptr [ESP]                 ; 004d246a
    FLDZ                                ; 004d246d
    FCOMPP                              ; 004d246f
    FNSTSW AX                           ; 004d2471
    SAHF                                ; 004d2473
    JBE 0x004d247b                      ; 004d2474
        ;   XREF to: 004d247b (CONDITIONAL_JUMP)  ; LAB_004d247b
    XOR EDI,EDI                         ; 004d2476
    MOV dword ptr [ESP],EDI             ; 004d2478
    DEC ESI                             ; 004d247b
        ;   Label: LAB_004d247b
    MOV dword ptr [ESP + 0x8],ESI       ; 004d247c
    FLD float ptr [ESP]                 ; 004d2480
    FILD dword ptr [ESP + 0x8]          ; 004d2483
    FSTP float ptr [ESP + 0x4]          ; 004d2487
    FCOMP float ptr [ESP + 0x4]         ; 004d248b
    FNSTSW AX                           ; 004d248f
    SAHF                                ; 004d2491
    JBE 0x004d249b                      ; 004d2492
        ;   XREF to: 004d249b (CONDITIONAL_JUMP)  ; LAB_004d249b
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d2494
    MOV dword ptr [ESP],EAX             ; 004d2498
    LEA EAX,[EBX + 0x30]                ; 004d249b
        ;   Label: LAB_004d249b
    PUSH EAX                            ; 004d249e
    LEA EAX,[EBX + 0x20]                ; 004d249f
    PUSH EAX                            ; 004d24a2
    ADD EBX,0x300                       ; 004d24a3
    PUSH dword ptr [ESP + 0x8]          ; 004d24a9
    PUSH EBX                            ; 004d24ad
    CALL core_course.cpp_CCourse_evaluate_FUN_00442710 ; 004d24ae
        ;   XREF to: 00442710 (UNCONDITIONAL_CALL)  ; void core_course.cpp_CCourse_evaluate_FUN_00442710(CCourse * this_ptr, float time, CVector3f * out_pos, CVector3f * out_euler)
    ADD ESP,0x10                        ; 004d24b3
    MOV ESP,EBP                         ; 004d24b6
    POP EBP                             ; 004d24b8
    POP EDI                             ; 004d24b9
    POP ESI                             ; 004d24ba
    POP EBX                             ; 004d24bb
    RET                                 ; 004d24bc
    MOV EDX,0x62ab98                    ; 004d24bd | = "..\\core\\frankgen.cpp"
        ;   Label: LAB_004d24bd
    MOV ECX,0x1dc                       ; 004d24c2
    PUSH 0x62abad                       ; 004d24c7 | = "CFrankenstienMachine::setCourseFrame ..."
    MOV dword ptr [0x02f0ca48],EDX      ; 004d24cc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004d24d2 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004d24d8
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004d24dd
    JMP 0x004d244e                      ; 004d24e0
        ;   XREF to: 004d244e (UNCONDITIONAL_JUMP)  ; LAB_004d244e


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_process_FUN_005542c0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_game.cpp_CGame_process_FUN_004d8060 at 004d81f9
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054f979
;
; Referenced Globals:
;   undefined4 DAT_005f0b5a
;   TerminatedCString s_soff_005f0b5f
;   undefined4 DAT_005f0b65
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_01fe4cb8
;   undefined4 DAT_01fe4e38
;   undefined4 DAT_01fe4e3c
;
; Called Functions:
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_setutil.cpp_C3DSLight_process_FUN_0055d1a0
;   crt_string.c__strnicmp_FUN_005c1210
;   crt_unknown.c_sprintf_FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005542c0
        ;   Label: core_set.cpp_CDemonSet_process_FUN_005542c0
    PUSH ESI                            ; 005542c1
    PUSH EDI                            ; 005542c2
    PUSH EBP                            ; 005542c3
    SUB ESP,0x108                       ; 005542c4
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005542ca
    MOV EDX,dword ptr [EAX + 0x19a2c]   ; 005542d1
    XOR EBP,EBP                         ; 005542d7
    TEST EDX,EDX                        ; 005542d9
    JLE 0x0055430a                      ; 005542db
        ;   XREF to: 0055430a (CONDITIONAL_JUMP)  ; LAB_0055430a
    MOV dword ptr [ESP + 0x104],EBP     ; 005542dd
    LEA EDI,[EAX + 0x19a30]             ; 005542e4
    MOV EAX,dword ptr [EDI]             ; 005542ea
        ;   Label: LAB_005542ea
    MOV ESI,EDI                         ; 005542ec
    TEST EAX,EAX                        ; 005542ee
    JZ 0x00554315                       ; 005542f0
        ;   XREF to: 00554315 (CONDITIONAL_JUMP)  ; LAB_00554315
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005542f2
        ;   Label: LAB_005542f2
    INC EBP                             ; 005542f9
    MOV ECX,dword ptr [EAX + 0x19a2c]   ; 005542fa
    ADD EDI,0x1898                      ; 00554300
    CMP EBP,ECX                         ; 00554306
    JL 0x005542ea                       ; 00554308
        ;   XREF to: 005542ea (CONDITIONAL_JUMP)  ; LAB_005542ea
    ADD ESP,0x108                       ; 0055430a
        ;   Label: LAB_0055430a
    POP EBP                             ; 00554310
    POP EDI                             ; 00554311
    POP ESI                             ; 00554312
    POP EBX                             ; 00554313
    RET                                 ; 00554314
    MOV EBX,dword ptr [ESP + 0x104]     ; 00554315
        ;   Label: LAB_00554315
    MOV EBX,dword ptr [EBX + 0x1fe4cb8] ; 0055431c | DAT_01fe4cb8
    TEST EBX,EBX                        ; 00554322
    JZ 0x0055430a                       ; 00554324
        ;   XREF to: 0055430a (CONDITIONAL_JUMP)  ; LAB_0055430a
    MOV ECX,dword ptr [0x01fe4e38]      ; 00554326 | DAT_01fe4e38
    MOV dword ptr [ESP + 0x100],EAX     ; 0055432c
    TEST ECX,ECX                        ; 00554333
    JLE 0x00554355                      ; 00554335
        ;   XREF to: 00554355 (CONDITIONAL_JUMP)  ; LAB_00554355
    LEA EDX,[ECX*0x4 + 0x0]             ; 00554337
    CMP EBX,dword ptr [EAX + 0x1fe4e3c] ; 0055433e | DAT_01fe4e3c
        ;   Label: LAB_0055433e
    JNZ 0x00554411                      ; 00554344
        ;   XREF to: 00554411 (CONDITIONAL_JUMP)  ; LAB_00554411
    MOV dword ptr [ESP + 0x100],0x1     ; 0055434a
    MOV EDX,dword ptr [ESP + 0x100]     ; 00554355
        ;   Label: LAB_00554355
    PUSH EDX                            ; 0055435c
    PUSH EBX                            ; 0055435d
    PUSH ESI                            ; 0055435e
    CALL core_setutil.cpp_C3DSLight_process_FUN_0055d1a0 ; 0055435f
        ;   XREF to: 0055d1a0 (UNCONDITIONAL_CALL)  ; void core_setutil.cpp_C3DSLight_process_FUN_0055d1a0(C3DSLight * this_ptr, CDemonLight * light, int apply_filter_flag)
    ADD ESP,0xc                         ; 00554364
    LEA EAX,[ESI + 0x4]                 ; 00554367
    PUSH EAX                            ; 0055436a
    PUSH 0x5f0b5a                       ; 0055436b | DAT_005f0b5a
    LEA EAX,[ESP + 0x8]                 ; 00554370
    PUSH EAX                            ; 00554374
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 00554375
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 0055437a
    MOV EAX,ESP                         ; 0055437d
    PUSH EAX                            ; 0055437f
    MOV ECX,dword ptr [0x0061b4d0]      ; 00554380 | DAT_0061b4d0
    PUSH ECX                            ; 00554386
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 00554387
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0055438c
    TEST EAX,EAX                        ; 0055438f
    JZ 0x0055439d                       ; 00554391
        ;   XREF to: 0055439d (CONDITIONAL_JUMP)  ; LAB_0055439d
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 00554393
    LEA EAX,[ESI + 0x4]                 ; 0055439d
        ;   Label: LAB_0055439d
    PUSH EAX                            ; 005543a0
    PUSH 0x5f0b5f                       ; 005543a1 | = "%soff"
    LEA EAX,[ESP + 0x8]                 ; 005543a6
    PUSH EAX                            ; 005543aa
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005543ab
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005543b0
    MOV EAX,ESP                         ; 005543b3
    PUSH EAX                            ; 005543b5
    MOV EAX,[0x0061b4d0]                ; 005543b6 | DAT_0061b4d0
    PUSH EAX                            ; 005543bb
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005543bc
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005543c1
    TEST EAX,EAX                        ; 005543c4
    JZ 0x005543d2                       ; 005543c6
        ;   XREF to: 005543d2 (CONDITIONAL_JUMP)  ; LAB_005543d2
    MOV dword ptr [EBX + 0x1cb4],0x0    ; 005543c8
    PUSH 0x4                            ; 005543d2
        ;   Label: LAB_005543d2
    PUSH 0x5f0b65                       ; 005543d4 | DAT_005f0b65
    ADD ESI,0x4                         ; 005543d9
    PUSH ESI                            ; 005543dc
    CALL crt_string.c__strnicmp_FUN_005c1210 ; 005543dd
        ;   XREF to: 005c1210 (UNCONDITIONAL_CALL)  ; int crt_string.c__strnicmp_FUN_005c1210(char * str1, char * str2, int count)
    ADD ESP,0xc                         ; 005543e2
    TEST EAX,EAX                        ; 005543e5
    JNZ 0x00554404                      ; 005543e7
        ;   XREF to: 00554404 (CONDITIONAL_JUMP)  ; LAB_00554404
    MOV EAX,dword ptr [ESP + 0x11c]     ; 005543e9
    MOV EDX,dword ptr [EAX + 0x15ae5c]  ; 005543f0
    TEST EDX,EDX                        ; 005543f6
    JZ 0x00554421                       ; 005543f8
        ;   XREF to: 00554421 (CONDITIONAL_JUMP)  ; LAB_00554421
    MOV dword ptr [EBX + 0x1cb4],0x1    ; 005543fa
    ADD dword ptr [ESP + 0x104],0x4     ; 00554404
        ;   Label: LAB_00554404
    JMP 0x005542f2                      ; 0055440c
        ;   XREF to: 005542f2 (UNCONDITIONAL_JUMP)  ; LAB_005542f2
    ADD EAX,0x4                         ; 00554411
        ;   Label: LAB_00554411
    CMP EAX,EDX                         ; 00554414
    JL 0x0055433e                       ; 00554416
        ;   XREF to: 0055433e (CONDITIONAL_JUMP)  ; LAB_0055433e
    JMP 0x00554355                      ; 0055441c
        ;   XREF to: 00554355 (UNCONDITIONAL_JUMP)  ; LAB_00554355
    MOV dword ptr [EBX + 0x1cb4],EDX    ; 00554421
        ;   Label: LAB_00554421
    ADD dword ptr [ESP + 0x104],0x4     ; 00554427
    JMP 0x005542f2                      ; 0055442f
        ;   XREF to: 005542f2 (UNCONDITIONAL_JUMP)  ; LAB_005542f2


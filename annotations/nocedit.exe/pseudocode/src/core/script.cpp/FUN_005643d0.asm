; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_script_cpp_FUN_005643d0(void)
;
; Local Variables:
; undefined1       Stack[-0x33c]:1  local_33c
; undefined1       Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_script.cpp_CScript_FUN_00565e70 at 00565efd
;
; Referenced Globals:
;   TerminatedCString s_Template_bug_can_t_show__00643d50
;   undefined4 s_emplate_bug,_can't_show_usage_00643d51
;   undefined4 s_mplate_bug,_can't_show_usage_00643d52
;   undefined4 s_plate_bug,_can't_show_usage_00643d53
;   TerminatedCString s_s_00643d6f
;
; Called Functions:
;   core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005643d0
        ;   Label: core_script.cpp_FUN_005643d0
    PUSH ESI                            ; 005643d1
    PUSH EDI                            ; 005643d2
    PUSH EBP                            ; 005643d3
    SUB ESP,0x32c                       ; 005643d4
    MOV EBP,dword ptr [ESP + 0x340]     ; 005643da
    MOV EDI,dword ptr [ESP + 0x344]     ; 005643e1
    XOR EDX,EDX                         ; 005643e8
    XOR ESI,ESI                         ; 005643ea
    MOV dword ptr [ESP + 0x328],EDX     ; 005643ec
    MOV EAX,dword ptr [ESP + 0x328]     ; 005643f3
        ;   Label: LAB_005643f3
    ADD EAX,EDI                         ; 005643fa
    MOV DL,byte ptr [EAX]               ; 005643fc
    LEA EBX,[ESI + EBP*0x1]             ; 005643fe
    TEST DL,DL                          ; 00564401
    JZ 0x0056448e                       ; 00564403
        ;   XREF to: 0056448e (CONDITIONAL_JUMP)  ; LAB_0056448e
    CMP DL,0x3c                         ; 00564409
    JZ 0x0056442e                       ; 0056440c
        ;   XREF to: 0056442e (CONDITIONAL_JUMP)  ; LAB_0056442e
    MOV EAX,dword ptr [ESP + 0x328]     ; 0056440e
    LEA ECX,[EAX + 0x1]                 ; 00564415
    LEA EBX,[EDI + EAX*0x1]             ; 00564418
    MOV EAX,ESI                         ; 0056441b
    MOV dword ptr [ESP + 0x328],ECX     ; 0056441d
    LEA EDX,[EAX + EBP*0x1]             ; 00564424
    MOV AL,byte ptr [EBX]               ; 00564427
    INC ESI                             ; 00564429
    MOV byte ptr [EDX],AL               ; 0056442a
    JMP 0x005643f3                      ; 0056442c
        ;   XREF to: 005643f3 (UNCONDITIONAL_JUMP)  ; LAB_005643f3
    LEA EAX,[ESP + 0x328]               ; 0056442e
        ;   Label: LAB_0056442e
    PUSH EAX                            ; 00564435
    PUSH EDI                            ; 00564436
    LEA EAX,[ESP + 0x8]                 ; 00564437
    PUSH EAX                            ; 0056443b
    CALL core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0 ; 0056443c
        ;   XREF to: 00560de0 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CCmdParm_setTemplateText_FUN_00560de0(CCmdParm * this_ptr, char * template_text, int * parse_cursor)
    ADD ESP,0xc                         ; 00564441
    TEST EAX,EAX                        ; 00564444
    JZ 0x00564462                       ; 00564446
        ;   XREF to: 00564462 (CONDITIONAL_JUMP)  ; LAB_00564462
    LEA EAX,[ESP + 0x2c0]               ; 00564448
    PUSH EAX                            ; 0056444f
    PUSH 0x643d6f                       ; 00564450 | = "<%s>"
    PUSH EBX                            ; 00564455
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 00564456
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0056445b
    ADD ESI,EAX                         ; 0056445e
    JMP 0x005643f3                      ; 00564460
        ;   XREF to: 005643f3 (UNCONDITIONAL_JUMP)  ; LAB_005643f3
    MOV ESI,0x643d50                    ; 00564462 | = "Template bug, can't show usage"
        ;   Label: LAB_00564462
    MOV EDI,EBP                         ; 00564467
    PUSH EDI                            ; 00564469
    MOV AL,byte ptr [ESI]               ; 0056446a | = "Template bug, can't show usage" | s_mplate_bug,_can't_show_usage_00643d52
        ;   Label: LAB_0056446a
    MOV byte ptr [EDI],AL               ; 0056446c
    CMP AL,0x0                          ; 0056446e
    JZ 0x00564482                       ; 00564470
        ;   XREF to: 00564482 (CONDITIONAL_JUMP)  ; LAB_00564482
    MOV AL,byte ptr [ESI + 0x1]         ; 00564472 | s_emplate_bug,_can't_show_usage_00643d51 | s_plate_bug,_can't_show_usage_00643d53
    ADD ESI,0x2                         ; 00564475
    MOV byte ptr [EDI + 0x1],AL         ; 00564478
    ADD EDI,0x2                         ; 0056447b
    CMP AL,0x0                          ; 0056447e
    JNZ 0x0056446a                      ; 00564480
        ;   XREF to: 0056446a (CONDITIONAL_JUMP)  ; LAB_0056446a
    POP EDI                             ; 00564482
        ;   Label: LAB_00564482
    ADD ESP,0x32c                       ; 00564483
    POP EBP                             ; 00564489
    POP EDI                             ; 0056448a
    POP ESI                             ; 0056448b
    POP EBX                             ; 0056448c
    RET                                 ; 0056448d
    MOV byte ptr [EBX],DL               ; 0056448e
        ;   Label: LAB_0056448e
    ADD ESP,0x32c                       ; 00564490
    POP EBP                             ; 00564496
    POP EDI                             ; 00564497
    POP ESI                             ; 00564498
    POP EBX                             ; 00564499
    RET                                 ; 0056449a


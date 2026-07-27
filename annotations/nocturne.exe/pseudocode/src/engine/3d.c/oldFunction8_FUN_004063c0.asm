; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * engine_3d_c_oldFunction8_FUN_004063c0(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
;
; Referenced Globals:
;   TerminatedCString s_Old_func_d_005774c8
;   TerminatedCString s_engine_3d_c_005774d6
;   undefined4 DAT_006b0288
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004063c0
        ;   Label: engine_3d.c_oldFunction8_FUN_004063c0
    SUB ESP,0x50                        ; 004063c1
    MOV EAX,dword ptr [ESP + 0x58]      ; 004063c4
    MOV EDX,dword ptr [EAX]             ; 004063c8
    PUSH EDX                            ; 004063ca
    PUSH 0x5774c8                       ; 004063cb | = "Old func : %d"
    LEA EAX,[ESP + 0x8]                 ; 004063d0
    PUSH EAX                            ; 004063d4
    MOV EBX,0xd9                        ; 004063d5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004063da
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 004063df
    MOV EAX,ESP                         ; 004063e2
    MOV ECX,0x5774d6                    ; 004063e4 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 004063e9
    MOV dword ptr [0x01cc4804],EBX      ; 004063ea | INT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 004063f0 | PTR_01cc4800
    CALL core_main.c_FUN_004c8440       ; 004063f6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    MOV EAX,0x6b0288                    ; 004063fb | DAT_006b0288
    ADD ESP,0x4                         ; 00406400
    ADD ESP,0x50                        ; 00406403
    POP EBX                             ; 00406406
    RET                                 ; 00406407


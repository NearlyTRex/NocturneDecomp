; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined * engine_3d_c_FUN_00404430(undefined4 *param_1)
;
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
;
; Referenced Globals:
;   TerminatedCString s_Old_func_d_005774c8
;   TerminatedCString s_engine_3d_c_005774d6
;   undefined4 DAT_006b0288
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404430
        ;   Label: engine_3d.c_FUN_00404430
    SUB ESP,0x50                        ; 00404431
    MOV EAX,dword ptr [ESP + 0x58]      ; 00404434
    MOV EDX,dword ptr [EAX]             ; 00404438
    PUSH EDX                            ; 0040443a
    PUSH 0x5774c8                       ; 0040443b | = "Old func : %d"
    LEA EAX,[ESP + 0x8]                 ; 00404440
    PUSH EAX                            ; 00404444
    MOV EBX,0xd9                        ; 00404445
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0040444a
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0040444f
    MOV EAX,ESP                         ; 00404452
    MOV ECX,0x5774d6                    ; 00404454 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 00404459
    MOV dword ptr [0x01cc4804],EBX      ; 0040445a | DAT_01cc4804
    MOV dword ptr [0x01cc4800],ECX      ; 00404460 | DAT_01cc4800
    CALL FUN_004c8440                   ; 00404466
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    MOV EAX,0x6b0288                    ; 0040446b | DAT_006b0288
    ADD ESP,0x4                         ; 00404470
    ADD ESP,0x50                        ; 00404473
    POP EBX                             ; 00404476
    RET                                 ; 00404477


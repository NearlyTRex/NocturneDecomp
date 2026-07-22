; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00403500(undefined4 param_1)
;
;
; XREF[1]:
;   engine_2d.c_FUN_00403460 at 0040349e
;
; Referenced Globals:
;   TerminatedCString s_wb_00577207
;   TerminatedCString s_fog_0057720a
;   TerminatedCString s_engine_2d_c_0057720e
;   string s_Unable_to_write_light_tab_0057721d
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_00563380
;   crt_stdio.c_fwrite_FUN_00563a50
;   engine_dosio.cpp_getFile_FUN_00456a60
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403500
        ;   Label: engine_2d.c_FUN_00403500
    PUSH 0x577207                       ; 00403501 | = "wb"
    MOV EDX,dword ptr [ESP + 0xc]       ; 00403506
    PUSH EDX                            ; 0040350a
    PUSH 0x57720a                       ; 0040350b | = "fog"
    CALL engine_dosio.cpp_getFile_FUN_00456a60 ; 00403510
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined engine_dosio.cpp_getFile_FUN_00456a60()
    ADD ESP,0xc                         ; 00403515
    MOV EBX,EAX                         ; 00403518
    TEST EAX,EAX                        ; 0040351a
    JZ 0x0040353e                       ; 0040351c
        ;   XREF to: 0040353e (CONDITIONAL_JUMP)  ; LAB_0040353e
    PUSH EBX                            ; 0040351e
        ;   Label: LAB_0040351e
    PUSH 0x20                           ; 0040351f
    PUSH 0x100                          ; 00403521
    PUSH 0x1bf5620                      ; 00403526
    CALL crt_stdio.c_fwrite_FUN_00563a50 ; 0040352b
        ;   XREF to: 00563a50 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fwrite_FUN_00563a50()
    ADD ESP,0x10                        ; 00403530
    PUSH EBX                            ; 00403533
    CALL crt_stdio.c_fclose_FUN_00563380 ; 00403534
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_00563380()
    ADD ESP,0x4                         ; 00403539
    POP EBX                             ; 0040353c
    RET                                 ; 0040353d
    PUSH ESI                            ; 0040353e
        ;   Label: LAB_0040353e
    MOV ECX,0x57720e                    ; 0040353f | = "..\\engine\\2d.c"
    MOV ESI,0x738                       ; 00403544
    PUSH 0x57721d                       ; 00403549 | = "Unable to write light tab"
    MOV dword ptr [0x01cc4800],ECX      ; 0040354e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00403554 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040355a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0040355f
    POP ESI                             ; 00403562
    JMP 0x0040351e                      ; 00403563
        ;   XREF to: 0040351e (UNCONDITIONAL_JUMP)  ; LAB_0040351e


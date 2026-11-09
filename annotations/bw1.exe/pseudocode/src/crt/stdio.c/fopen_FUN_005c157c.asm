; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_fopen_FUN_005c157c(undefined4 param_1,undefined4 param_2)
;
;
; XREF[26]:
;   cockpit_pkbitmap.cpp_FUN_00538130 at 0053813f
;   core_event.cpp_FUN_004a1d00 at 004a1e87
;   core_event.cpp_FUN_004a9870 at 004a9954
;   core_event.cpp_FUN_004a9a60 at 004a9b44
;   core_game.cpp_FUN_004d6420 at 004d64ff
;   core_game.cpp_FUN_004d6990 at 004d6d0b
;   core_game.cpp_FUN_004d7250 at 004d72d9
;   core_main.c_FUN_005032a0 at 005032d7
;   core_podmain.cpp_FUN_0053d580 at 0053d59b
;   core_script.cpp_CScript_step_FUN_00544460 at 005477b4
;   ... and 16 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c1520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c157c
        ;   Label: crt_stdio.c_fopen_FUN_005c157c
    PUSH 0x0                            ; 005c157d
    MOV EDX,dword ptr [ESP + 0x10]      ; 005c157f
    PUSH EDX                            ; 005c1583
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c1584
    PUSH EBX                            ; 005c1588
    CALL crt_unknown.c_FUN_005c1520     ; 005c1589
        ;   XREF to: 005c1520 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1520()
    ADD ESP,0xc                         ; 005c158e
    POP EBX                             ; 005c1591
    RET                                 ; 005c1592


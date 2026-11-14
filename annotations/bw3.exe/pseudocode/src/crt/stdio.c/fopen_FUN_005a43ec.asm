; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_stdio_c_fopen_FUN_005a43ec(char *filename,char *mode)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
;
; XREF[26]:
;   cockpit_pkbitmap.cpp_FUN_0050fe10 at 0050fe1f
;   core_event.cpp_FUN_0048c2e0 at 0048c464
;   core_event.cpp_FUN_004946f0 at 004947d4
;   core_event.cpp_FUN_004948e0 at 004949c4
;   core_game.cpp_FUN_004bda10 at 004bdaef
;   core_game.cpp_FUN_004bdfb0 at 004be351
;   core_game.cpp_FUN_004be8d0 at 004be966
;   core_main.c_initializeGameSystems_FUN_004e44e0 at 004e4517
;   core_podmain.cpp_FUN_005152e0 at 005152fb
;   core_script.cpp_CScript_step_FUN_00529a70 at 0052ce9d
;   ... and 16 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a4390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a43ec
        ;   Label: crt_stdio.c_fopen_FUN_005a43ec
    PUSH 0x0                            ; 005a43ed
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a43ef
    PUSH EDX                            ; 005a43f3
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a43f4
    PUSH EBX                            ; 005a43f8
    CALL crt_unknown.c_FUN_005a4390     ; 005a43f9
        ;   XREF to: 005a4390 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a4390()
    ADD ESP,0xc                         ; 005a43fe
    POP EBX                             ; 005a4401
    RET                                 ; 005a4402


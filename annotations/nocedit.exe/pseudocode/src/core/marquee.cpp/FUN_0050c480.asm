; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_marquee.cpp_FUN_0050c480()
;
;
; Referenced Globals:
;   TerminatedCString s_DATA_s_00635a1c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c480
        ;   Label: core_marquee.cpp_FUN_0050c480
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050c481
    PUSH EDX                            ; 0050c485
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050c486
    PUSH ECX                            ; 0050c48a
    CALL core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0 ; 0050c48b | void core_actor.cpp_CDemonActor_writeDependencies_FUN_0040cfd0(CDemonActor * this_ptr, FILE * file_handle)
        ;   XREF to: 0040cfd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0050c490
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050c493
    ADD EAX,0x158                       ; 0050c497
    PUSH EAX                            ; 0050c49c
    PUSH 0x635a1c                       ; 0050c49d | = "DATA\\%s\n" | s_DATA_s_00635a1c = DATA\%s

    MOV EBX,dword ptr [ESP + 0x14]      ; 0050c4a2
    PUSH EBX                            ; 0050c4a6
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 0050c4a7 | int crt_stdio.c_fprintf_FUN_005fe6d0(FILE * file, char * format)
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0050c4ac
    POP EBX                             ; 0050c4af
    RET                                 ; 0050c4b0


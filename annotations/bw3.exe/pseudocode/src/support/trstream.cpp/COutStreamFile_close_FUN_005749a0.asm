; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamFile_close_FUN_005749a0(COutStreamFile *this_ptr)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_game.cpp_FUN_004bda10 at 004bddfd
;   core_game.cpp_FUN_004bdfb0 at 004be33f
;   engine_2d.c_loadOrBuildColorMap_FUN_00402940 at 00402a65
;   support_trstream.cpp_COutStreamFile_dtor_FUN_00574850 at 00574863
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005a3a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005749a0
        ;   Label: support_trstream.cpp_COutStreamFile_close_FUN_005749a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005749a1
    MOV EDX,dword ptr [EBX + 0x4]       ; 005749a5
    TEST EDX,EDX                        ; 005749a8
    JNZ 0x005749b3                      ; 005749aa
        ;   XREF to: 005749b3 (CONDITIONAL_JUMP)  ; LAB_005749b3
    MOV EAX,0x1                         ; 005749ac
    POP EBX                             ; 005749b1
    RET                                 ; 005749b2
    PUSH EDX                            ; 005749b3
        ;   Label: LAB_005749b3
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 005749b4
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 005749b9
    MOV dword ptr [EBX + 0x4],0x0       ; 005749bc
    MOV EAX,0x1                         ; 005749c3
    POP EBX                             ; 005749c8
    RET                                 ; 005749c9


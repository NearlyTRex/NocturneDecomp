; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_mission.cpp_FUN_00522c60(FILE * file_handle)
;
; Parameters:
; FILE *           Stack[0x4]:4   file_handle
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522c60
        ;   Label: core_mission.cpp_FUN_00522c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00522c61
    PUSH EBX                            ; 00522c65
        ;   Label: LAB_00522c65
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 00522c66 | int crt_stdio.c_fgetc_FUN_005fe840(FILE * file)
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00522c6b
    TEST EAX,EAX                        ; 00522c6e
    JL 0x00522c77                       ; 00522c70 | LAB_00522c77
        ;   XREF to: 00522c77 (CONDITIONAL_JUMP)
    CMP EAX,0xa                         ; 00522c72
    JNZ 0x00522c65                      ; 00522c75 | LAB_00522c65
        ;   XREF to: 00522c65 (CONDITIONAL_JUMP)
    POP EBX                             ; 00522c77
        ;   Label: LAB_00522c77
    RET                                 ; 00522c78


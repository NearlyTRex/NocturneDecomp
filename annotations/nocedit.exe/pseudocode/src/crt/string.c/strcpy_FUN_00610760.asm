; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * crt_string.c_strcpy_FUN_00610760(char * dest, char * src)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
;
; XREF[2]:
;   crt_process.c_build_cmdline_FUN_00610258 at 0061035c
;   crt_process.c_spawnvp_FUN_0060f39c at 0060f788
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00610760
        ;   Label: crt_string.c_strcpy_FUN_00610760
    MOV EDX,dword ptr [ESP + 0x8]       ; 00610764
    PUSH EAX                            ; 00610768
    MOV CL,byte ptr [EDX]               ; 00610769
        ;   Label: LAB_00610769
    MOV byte ptr [EAX],CL               ; 0061076b
    CMP CL,0x0                          ; 0061076d
    JZ 0x00610783                       ; 00610770 | LAB_00610783
        ;   XREF to: 00610783 (CONDITIONAL_JUMP)
    MOV CL,byte ptr [EDX + 0x1]         ; 00610772
    ADD EDX,0x2                         ; 00610775
    MOV byte ptr [EAX + 0x1],CL         ; 00610778
    ADD EAX,0x2                         ; 0061077b
    CMP CL,0x0                          ; 0061077e
    JNZ 0x00610769                      ; 00610781 | LAB_00610769
        ;   XREF to: 00610769 (CONDITIONAL_JUMP)
    POP EAX                             ; 00610783
        ;   Label: LAB_00610783
    RET                                 ; 00610784


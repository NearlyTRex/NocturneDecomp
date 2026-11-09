; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_asgaya_cpp_FUN_005aee30(FILETIME *param_1,LPWORD param_2,LPWORD param_3)
;
; Local Variables:
; undefined        Stack[-0xc]:1  local_c
;
; XREF[1]:
;   crt_unknown.c_FUN_005aaed4 at 005ab088
;
; Referenced Globals:
;   void* PTR_FileTimeToDosDateTime_005b3548 = 001b3d1a
;   void* PTR_FileTimeToLocalFileTime_005b354c = 001b3d32
;
; Called Functions:
;   FileTimeToDosDateTime
;   FileTimeToLocalFileTime
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aee30
        ;   Label: unkafter_asgaya.cpp_FUN_005aee30
    SUB ESP,0x8                         ; 005aee31
    MOV EAX,ESP                         ; 005aee34
    PUSH EAX                            ; 005aee36
    MOV EDX,dword ptr [ESP + 0x14]      ; 005aee37
    PUSH EDX                            ; 005aee3b
    MOV EBX,dword ptr [ESP + 0x20]      ; 005aee3c
    CALL dword ptr CS:[0x5b354c]        ; 005aee40 | PTR_FileTimeToLocalFileTime_005b354c
    PUSH EBX                            ; 005aee47
    MOV ECX,dword ptr [ESP + 0x18]      ; 005aee48
    PUSH ECX                            ; 005aee4c
    LEA EAX,[ESP + 0x8]                 ; 005aee4d
    PUSH EAX                            ; 005aee51
    CALL dword ptr CS:[0x5b3548]        ; 005aee52 | PTR_FileTimeToDosDateTime_005b3548
    ADD ESP,0x8                         ; 005aee59
    POP EBX                             ; 005aee5c
    RET                                 ; 005aee5d


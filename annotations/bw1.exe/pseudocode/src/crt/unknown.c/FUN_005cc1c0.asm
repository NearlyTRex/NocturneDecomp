; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005cc1c0(FILETIME *param_1,LPWORD param_2,LPWORD param_3)
;
; Local Variables:
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   crt_unknown.c_FUN_005c8094 at 005c8248
;   crt_unknown.c_FUN_005cc224 at 005cc23a
;
; Referenced Globals:
;   void* PTR_FileTimeToDosDateTime_005d054c = 001d0d2c
;   void* PTR_FileTimeToLocalFileTime_005d0550 = 001d0d44
;
; Called Functions:
;   FileTimeToDosDateTime
;   FileTimeToLocalFileTime
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc1c0
        ;   Label: crt_unknown.c_FUN_005cc1c0
    SUB ESP,0x8                         ; 005cc1c1
    MOV EAX,ESP                         ; 005cc1c4
    PUSH EAX                            ; 005cc1c6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005cc1c7
    PUSH EDX                            ; 005cc1cb
    MOV EBX,dword ptr [ESP + 0x20]      ; 005cc1cc
    CALL dword ptr CS:[0x5d0550]        ; 005cc1d0 | PTR_FileTimeToLocalFileTime_005d0550
    PUSH EBX                            ; 005cc1d7
    MOV ECX,dword ptr [ESP + 0x18]      ; 005cc1d8
    PUSH ECX                            ; 005cc1dc
    LEA EAX,[ESP + 0x8]                 ; 005cc1dd
    PUSH EAX                            ; 005cc1e1
    CALL dword ptr CS:[0x5d054c]        ; 005cc1e2 | PTR_FileTimeToDosDateTime_005d054c
    ADD ESP,0x8                         ; 005cc1e9
    POP EBX                             ; 005cc1ec
    RET                                 ; 005cc1ed


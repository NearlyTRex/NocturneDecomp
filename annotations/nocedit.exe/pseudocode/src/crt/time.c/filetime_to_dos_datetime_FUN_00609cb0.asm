; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_time.c_filetime_to_dos_datetime_FUN_00609cb0(FILETIME * filetime, WORD * dos_date, WORD * dos_time)
;
; Parameters:
; FILETIME *       Stack[0x4]:4   filetime
; WORD *           Stack[0x8]:4   dos_date
; WORD *           Stack[0xc]:4   dos_time
;
; XREF[1]:
;   crt_io.c_stat_FUN_00607e64 at 00608056
;
; Referenced Globals:
;   FileTimeToDosDateTime* g_FileTimeToDosDateTimeFunc = 00211d2e
;   FileTimeToLocalFileTime* g_FileTimeToLocalFileTimeFunc = 00211d46
;
; Called Functions:
;   FileTimeToDosDateTime
;   FileTimeToLocalFileTime
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609cb0
        ;   Label: crt_time.c_filetime_to_dos_datetime_FUN_00609cb0
    SUB ESP,0x8                         ; 00609cb1
    MOV EAX,ESP                         ; 00609cb4
    PUSH EAX                            ; 00609cb6
    MOV EDX,dword ptr [ESP + 0x14]      ; 00609cb7
    PUSH EDX                            ; 00609cbb
    MOV EBX,dword ptr [ESP + 0x20]      ; 00609cbc
    CALL dword ptr CS:[0x611540]        ; 00609cc0 | g_FileTimeToLocalFileTimeFunc
    PUSH EBX                            ; 00609cc7
    MOV ECX,dword ptr [ESP + 0x18]      ; 00609cc8
    PUSH ECX                            ; 00609ccc
    LEA EAX,[ESP + 0x8]                 ; 00609ccd
    PUSH EAX                            ; 00609cd1
    CALL dword ptr CS:[0x61153c]        ; 00609cd2 | g_FileTimeToDosDateTimeFunc
    ADD ESP,0x8                         ; 00609cd9
    POP EBX                             ; 00609cdc
    RET                                 ; 00609cdd


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; time_t __cdecl crt_time_c_filetime_to_time_t_FUN_00609da0(FILETIME *filetime)
;
; Parameters:
; FILETIME *       Stack[0x4]:4   filetime
; Local Variables:
; _tm              Stack[-0x40]:36  _Stack_40
; _SYSTEMTIME      Stack[-0x1c]:16  _Stack_1c
; _FILETIME        Stack[-0xc]:8  local_c
;
; XREF[1]:
;   crt_io.c_convertFileInfo_FUN_00602264 at 006022a1
;
; Referenced Globals:
;   FILE_TIME_TO_LOCAL_FILE_TIME_FUNC* g_FileTimeToLocalFileTimeFunc = 00211d46
;   FILE_TIME_TO_SYSTEM_TIME_FUNC* g_FileTimeToSystemTimeFunc = 00211d60
;
; Called Functions:
;   crt_time.c__mktime_FUN_00600f80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00609da0
        ;   Label: crt_time.c_filetime_to_time_t_FUN_00609da0
    SUB ESP,0x3c                        ; 00609da1
    MOV EDX,dword ptr [ESP + 0x44]      ; 00609da4
    CMP dword ptr [EDX],0x0             ; 00609da8
    JNZ 0x00609dbd                      ; 00609dab
        ;   XREF to: 00609dbd (CONDITIONAL_JUMP)  ; LAB_00609dbd
    CMP dword ptr [EDX + 0x4],0x0       ; 00609dad
    JNZ 0x00609dbd                      ; 00609db1
        ;   XREF to: 00609dbd (CONDITIONAL_JUMP)  ; LAB_00609dbd
    MOV EAX,0xffffffff                  ; 00609db3
    ADD ESP,0x3c                        ; 00609db8
    POP ESI                             ; 00609dbb
    RET                                 ; 00609dbc
    LEA EAX,[ESP + 0x34]                ; 00609dbd
        ;   Label: LAB_00609dbd
    PUSH EAX                            ; 00609dc1
    PUSH EDX                            ; 00609dc2
    CALL dword ptr CS:[0x611540]        ; 00609dc3 | g_FileTimeToLocalFileTimeFunc
    TEST EAX,EAX                        ; 00609dca
    JNZ 0x00609dd8                      ; 00609dcc
        ;   XREF to: 00609dd8 (CONDITIONAL_JUMP)  ; LAB_00609dd8
    MOV EAX,0xffffffff                  ; 00609dce
    ADD ESP,0x3c                        ; 00609dd3
    POP ESI                             ; 00609dd6
    RET                                 ; 00609dd7
    LEA EAX,[ESP + 0x24]                ; 00609dd8
        ;   Label: LAB_00609dd8
    PUSH EAX                            ; 00609ddc
    LEA EAX,[ESP + 0x38]                ; 00609ddd
    PUSH EAX                            ; 00609de1
    CALL dword ptr CS:[0x611544]        ; 00609de2 | g_FileTimeToSystemTimeFunc
    TEST EAX,EAX                        ; 00609de9
    JNZ 0x00609df7                      ; 00609deb
        ;   XREF to: 00609df7 (CONDITIONAL_JUMP)  ; LAB_00609df7
    MOV EAX,0xffffffff                  ; 00609ded
    ADD ESP,0x3c                        ; 00609df2
    POP ESI                             ; 00609df5
    RET                                 ; 00609df6
    XOR EAX,EAX                         ; 00609df7
        ;   Label: LAB_00609df7
    MOV AX,word ptr [ESP + 0x24]        ; 00609df9
    SUB EAX,0x76c                       ; 00609dfe
    MOV dword ptr [ESP + 0x14],EAX      ; 00609e03
    XOR EAX,EAX                         ; 00609e07
    MOV AX,word ptr [ESP + 0x26]        ; 00609e09
    DEC EAX                             ; 00609e0e
    MOV dword ptr [ESP + 0x10],EAX      ; 00609e0f
    XOR EAX,EAX                         ; 00609e13
    MOV AX,word ptr [ESP + 0x2a]        ; 00609e15
    MOV dword ptr [ESP + 0xc],EAX       ; 00609e1a
    XOR EAX,EAX                         ; 00609e1e
    MOV AX,word ptr [ESP + 0x2c]        ; 00609e20
    MOV dword ptr [ESP + 0x8],EAX       ; 00609e25
    XOR EAX,EAX                         ; 00609e29
    MOV AX,word ptr [ESP + 0x2e]        ; 00609e2b
    MOV dword ptr [ESP + 0x4],EAX       ; 00609e30
    XOR EAX,EAX                         ; 00609e34
    MOV AX,word ptr [ESP + 0x30]        ; 00609e36
    MOV dword ptr [ESP],EAX             ; 00609e3b
    XOR EAX,EAX                         ; 00609e3e
    MOV AX,word ptr [ESP + 0x28]        ; 00609e40
    MOV dword ptr [ESP + 0x18],EAX      ; 00609e45
    MOV EAX,ESP                         ; 00609e49
    MOV ESI,0xffffffff                  ; 00609e4b
    PUSH EAX                            ; 00609e50
    MOV dword ptr [ESP + 0x20],ESI      ; 00609e51
    MOV dword ptr [ESP + 0x24],ESI      ; 00609e55
    CALL crt_time.c__mktime_FUN_00600f80 ; 00609e59
        ;   XREF to: 00600f80 (UNCONDITIONAL_CALL)  ; time_t crt_time.c__mktime_FUN_00600f80(_tm * timeptr)
    ADD ESP,0x4                         ; 00609e5e
    ADD ESP,0x3c                        ; 00609e61
    POP ESI                             ; 00609e64
    RET                                 ; 00609e65


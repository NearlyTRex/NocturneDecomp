; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl time_t crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0(WORD dos_date, WORD dos_time)
;
; Parameters:
; typedef WORD ushort Stack[0x4]:2   dos_date
; typedef WORD ushort Stack[0x8]:2   dos_time
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   crt_io.c_stat_FUN_00607e64 at 00608100
;
; Called Functions:
;   crt_time.c_mktime_FUN_00600f80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060c1e0
        ;   Label: crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0
    SUB ESP,0x24                        ; 0060c1e1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0060c1e4
    MOV EDX,dword ptr [ESP + 0x30]      ; 0060c1e8
    MOV EAX,EBX                         ; 0060c1ec
    AND EAX,0xfe00                      ; 0060c1ee
    SHR EAX,0x9                         ; 0060c1f3
    ADD EAX,0x50                        ; 0060c1f6
    MOV dword ptr [ESP + 0x14],EAX      ; 0060c1f9
    MOV EAX,EBX                         ; 0060c1fd
    AND EAX,0x1e0                       ; 0060c1ff
    SHR EAX,0x5                         ; 0060c204
    DEC EAX                             ; 0060c207
    MOV dword ptr [ESP + 0x10],EAX      ; 0060c208
    MOV EAX,EDX                         ; 0060c20c
    AND EAX,0xf800                      ; 0060c20e
    SHR EAX,0xb                         ; 0060c213
    MOV dword ptr [ESP + 0x8],EAX       ; 0060c216
    MOV EAX,EDX                         ; 0060c21a
    AND EAX,0x7e0                       ; 0060c21c
    SHR EAX,0x5                         ; 0060c221
    MOV dword ptr [ESP + 0x4],EAX       ; 0060c224
    MOV EAX,EDX                         ; 0060c228
    AND EAX,0x1f                        ; 0060c22a
    ADD EAX,EAX                         ; 0060c22d
    AND EBX,0x1f                        ; 0060c22f
    MOV dword ptr [ESP],EAX             ; 0060c232
    MOV EAX,ESP                         ; 0060c235
    MOV EDX,0xffffffff                  ; 0060c237
    PUSH EAX                            ; 0060c23c
    MOV dword ptr [ESP + 0x10],EBX      ; 0060c23d
    MOV dword ptr [ESP + 0x24],EDX      ; 0060c241
    CALL crt_time.c_mktime_FUN_00600f80 ; 0060c245
        ;   XREF to: 00600f80 (UNCONDITIONAL_CALL)  ; time_t crt_time.c_mktime_FUN_00600f80(tm * timeptr)
    ADD ESP,0x4                         ; 0060c24a
    ADD ESP,0x24                        ; 0060c24d
    POP EBX                             ; 0060c250
    RET                                 ; 0060c251


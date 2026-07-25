; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045db60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x1010]:1  local_1010
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_0045e370 at 0045e814
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   FUN_0045db00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045db60
        ;   Label: FUN_0045db60
    PUSH ESI                            ; 0045db61
    PUSH EDI                            ; 0045db62
    SUB ESP,0x1004                      ; 0045db63
    LEA EAX,[ESP + 0x1024]              ; 0045db69
    MOV dword ptr [ESP + 0x1000],EAX    ; 0045db70
    LEA EAX,[ESP + 0x1000]              ; 0045db77
    PUSH EAX                            ; 0045db7e
    MOV EDX,dword ptr [ESP + 0x1024]    ; 0045db7f
    PUSH EDX                            ; 0045db86
    LEA EAX,[ESP + 0x8]                 ; 0045db87
    PUSH EAX                            ; 0045db8b
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0045db8c
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_00563a08()
    ADD ESP,0xc                         ; 0045db91
    MOV EBX,dword ptr [ESP + 0x101c]    ; 0045db94
    PUSH EBX                            ; 0045db9b
    MOV ESI,dword ptr [ESP + 0x101c]    ; 0045db9c
    PUSH ESI                            ; 0045dba3
    LEA EAX,[ESP + 0x8]                 ; 0045dba4
    PUSH EAX                            ; 0045dba8
    MOV EDI,dword ptr [ESP + 0x1020]    ; 0045dba9
    XOR ECX,ECX                         ; 0045dbb0
    PUSH EDI                            ; 0045dbb2
    MOV dword ptr [ESP + 0x1010],ECX    ; 0045dbb3
    CALL FUN_0045db00                   ; 0045dbba
        ;   XREF to: 0045db00 (UNCONDITIONAL_CALL)  ; undefined FUN_0045db00()
    ADD ESP,0x10                        ; 0045dbbf
    ADD ESP,0x1004                      ; 0045dbc2
    POP EDI                             ; 0045dbc8
    POP ESI                             ; 0045dbc9
    POP EBX                             ; 0045dbca
    RET                                 ; 0045dbcb


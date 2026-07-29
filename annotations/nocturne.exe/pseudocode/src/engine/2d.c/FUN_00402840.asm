; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_2d_c_FUN_00402840(int param_1,int param_2,char *param_3)
;
; Local Variables:
; undefined        Stack[-0x100c]:1  local_100c
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_00563a08
;   engine_2d.c_FUN_004027f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402840
        ;   Label: engine_2d.c_FUN_00402840
    PUSH ESI                            ; 00402841
    SUB ESP,0x1004                      ; 00402842
    LEA EAX,[ESP + 0x101c]              ; 00402848
    MOV dword ptr [ESP + 0x1000],EAX    ; 0040284f
    LEA EAX,[ESP + 0x1000]              ; 00402856
    PUSH EAX                            ; 0040285d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0040285e
    PUSH EDX                            ; 00402865
    LEA EAX,[ESP + 0x8]                 ; 00402866
    PUSH EAX                            ; 0040286a
    CALL crt_stdio.c_vsprintf_FUN_00563a08 ; 0040286b
        ;   XREF to: 00563a08 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_00563a08(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 00402870
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402873
    PUSH EBX                            ; 0040287a
    MOV ESI,dword ptr [ESP + 0x1014]    ; 0040287b
    PUSH ESI                            ; 00402882
    LEA EAX,[ESP + 0x8]                 ; 00402883
    XOR ECX,ECX                         ; 00402887
    PUSH EAX                            ; 00402889
    MOV dword ptr [ESP + 0x100c],ECX    ; 0040288a
    CALL engine_2d.c_FUN_004027f0       ; 00402891
        ;   XREF to: 004027f0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_FUN_004027f0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00402896
    ADD ESP,0x1004                      ; 00402899
    POP ESI                             ; 0040289f
    POP EBX                             ; 004028a0
    RET                                 ; 004028a1


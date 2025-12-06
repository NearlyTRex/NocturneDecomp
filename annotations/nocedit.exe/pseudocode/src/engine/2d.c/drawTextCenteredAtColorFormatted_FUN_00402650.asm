; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650(char * format_string, int center_x, int y_pos, ...)
;
; Parameters:
; char *           Stack[0x4]:4   format_string
; int              Stack[0x8]:4   center_x
; int              Stack[0xc]:4   y_pos
; Local Variables:
; undefined        Stack[-0x100c]:1  local_100c
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;   engine_2d.c_drawTextCenteredAtColor_FUN_004025f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00402650
        ;   Label: engine_2d.c_drawTextCenteredAtColorFormatted_FUN_00402650
    PUSH ESI                            ; 00402651
    SUB ESP,0x1004                      ; 00402652
    LEA EAX,[ESP + 0x101c]              ; 00402658
    MOV dword ptr [ESP + 0x1000],EAX    ; 0040265f
    LEA EAX,[ESP + 0x1000]              ; 00402666
    PUSH EAX                            ; 0040266d
    MOV EDX,dword ptr [ESP + 0x101c]    ; 0040266e
    PUSH EDX                            ; 00402675
    LEA EAX,[ESP + 0x8]                 ; 00402676
    PUSH EAX                            ; 0040267a
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 0040267b | int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t * args)
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00402680
    MOV EBX,dword ptr [ESP + 0x1014]    ; 00402683
    PUSH EBX                            ; 0040268a
    MOV ESI,dword ptr [ESP + 0x1014]    ; 0040268b
    PUSH ESI                            ; 00402692
    LEA EAX,[ESP + 0x8]                 ; 00402693
    XOR ECX,ECX                         ; 00402697
    PUSH EAX                            ; 00402699
    MOV dword ptr [ESP + 0x100c],ECX    ; 0040269a
    CALL engine_2d.c_drawTextCenteredAtColor_FUN_004025f0 ; 004026a1 | void engine_2d.c_drawTextCenteredAtColor_FUN_004025f0(char * text, int center_x, int y_pos)
        ;   XREF to: 004025f0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004026a6
    ADD ESP,0x1004                      ; 004026a9
    POP ESI                             ; 004026af
    POP EBX                             ; 004026b0


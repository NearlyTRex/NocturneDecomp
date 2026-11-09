; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_teleport_cpp_FUN_00572260(void)
;
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00572260
        ;   Label: core_teleport.cpp_FUN_00572260
    SUB ESP,0x18                        ; 00572261
    MOV EAX,ESI                         ; 00572264
    MOV ECX,0xbf800000                  ; 00572266
    MOV ESI,0x40e00000                  ; 0057226b
    MOV EDI,0x41000000                  ; 00572270
    MOV EDX,0xc0e00000                  ; 00572275
    MOV dword ptr [ESP + 0x4],ECX       ; 0057227a
    MOV dword ptr [ESP + 0xc],ESI       ; 0057227e
    MOV dword ptr [ESP + 0x10],EDI      ; 00572282
    MOV dword ptr [ESP + 0x14],ESI      ; 00572286
    MOV ECX,0x6                         ; 0057228a
    MOV ESI,ESP                         ; 0057228f
    MOV EDI,EAX                         ; 00572291
    MOV dword ptr [ESP + 0x8],EDX       ; 00572293
    MOV dword ptr [ESP],EDX             ; 00572297
    MOVSD.REP ES:EDI,ESI                ; 0057229a
    ADD ESP,0x18                        ; 0057229c
    POP EDI                             ; 0057229f
    RET                                 ; 005722a0


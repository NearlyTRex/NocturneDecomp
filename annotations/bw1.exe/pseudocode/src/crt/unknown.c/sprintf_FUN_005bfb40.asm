; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_sprintf_FUN_005bfb40(char *buffer,char *format)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[172]:
;   cockpit_ckptutil.c_FUN_00438bd0 at 00438c0e
;   cockpit_ckptutil.c_FUN_00438e40 at 00438e7e
;   cockpit_ckptutil.c_FUN_0043908e at 00439108
;   cockpit_ckptutil.c_FUN_0043a200 at 0043a2fc
;   cockpit_ckptutil.c_FUN_0043b090 at 0043b1b7
;   cockpit_ckptutil.c_FUN_0043b2e0 at 0043b335
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00437490 at 00437580
;   cockpit_ckptutil.c_rotateBitmap_FUN_0043a040 at 0043a0cb
;   cockpit_ckptutil.c_traceConnectedEdges_FUN_0043a45e at 0043a56b
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0 at 00537efd
;   ... and 162 more
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005bfb18
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfb40
        ;   Label: crt_unknown.c_sprintf_FUN_005bfb40
    SUB ESP,0x4                         ; 005bfb41
    LEA EAX,[ESP + 0x14]                ; 005bfb44
    MOV dword ptr [ESP],EAX             ; 005bfb48
    MOV EAX,ESP                         ; 005bfb4b
    PUSH EAX                            ; 005bfb4d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005bfb4e
    PUSH EDX                            ; 005bfb52
    MOV EBX,dword ptr [ESP + 0x14]      ; 005bfb53
    PUSH EBX                            ; 005bfb57
    CALL crt_stdio.c_vsprintf_FUN_005bfb18 ; 005bfb58
        ;   XREF to: 005bfb18 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005bfb18()
    ADD ESP,0xc                         ; 005bfb5d
    ADD ESP,0x4                         ; 005bfb60
    POP EBX                             ; 005bfb63
    RET                                 ; 005bfb64


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_sprintf_FUN_005a28c0(char *buffer,char *format)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[172]:
;   cockpit_ckptutil.c_FUN_004367e0 at 0043681e
;   cockpit_ckptutil.c_FUN_00436a50 at 00436a8e
;   cockpit_ckptutil.c_FUN_00436c9e at 00436d18
;   cockpit_ckptutil.c_FUN_00437e10 at 00437f0c
;   cockpit_ckptutil.c_FUN_00438ca0 at 00438dc7
;   cockpit_ckptutil.c_FUN_00438ef0 at 00438f45
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_004350a0 at 00435190
;   cockpit_ckptutil.c_rotateBitmap_FUN_00437c50 at 00437cdb
;   cockpit_ckptutil.c_traceConnectedEdges_FUN_0043806e at 0043817b
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0050fa90 at 0050fbdd
;   ... and 162 more
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005a2898
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a28c0
        ;   Label: crt_unknown.c_sprintf_FUN_005a28c0
    SUB ESP,0x4                         ; 005a28c1
    LEA EAX,[ESP + 0x14]                ; 005a28c4
    MOV dword ptr [ESP],EAX             ; 005a28c8
    MOV EAX,ESP                         ; 005a28cb
    PUSH EAX                            ; 005a28cd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a28ce
    PUSH EDX                            ; 005a28d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a28d3
    PUSH EBX                            ; 005a28d7
    CALL crt_stdio.c_vsprintf_FUN_005a2898 ; 005a28d8
        ;   XREF to: 005a2898 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005a2898()
    ADD ESP,0xc                         ; 005a28dd
    ADD ESP,0x4                         ; 005a28e0
    POP EBX                             ; 005a28e3
    RET                                 ; 005a28e4


; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_unknown_c_sprintf_FUN_005b7790(char *buffer,char *format)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   format
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[171]:
;   cockpit_ckptutil.c_FUN_0042c520 at 0042c573
;   cockpit_ckptutil.c_FUN_0042dec0 at 0042defe
;   cockpit_ckptutil.c_FUN_0042e130 at 0042e16e
;   cockpit_ckptutil.c_FUN_0042e37e at 0042e3f8
;   cockpit_ckptutil.c_FUN_0042f330 at 0042f3bb
;   cockpit_ckptutil.c_FUN_0042f4f0 at 0042f5ec
;   cockpit_ckptutil.c_FUN_0042f74e at 0042f85b
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_0042c780 at 0042c86c
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00516a60 at 00516bad
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00517130 at 0051717a
;   ... and 161 more
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005b7768
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7790
        ;   Label: crt_unknown.c_sprintf_FUN_005b7790
    SUB ESP,0x4                         ; 005b7791
    LEA EAX,[ESP + 0x14]                ; 005b7794
    MOV dword ptr [ESP],EAX             ; 005b7798
    MOV EAX,ESP                         ; 005b779b
    PUSH EAX                            ; 005b779d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b779e
    PUSH EDX                            ; 005b77a2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b77a3
    PUSH EBX                            ; 005b77a7
    CALL crt_stdio.c_vsprintf_FUN_005b7768 ; 005b77a8
        ;   XREF to: 005b7768 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_vsprintf_FUN_005b7768()
    ADD ESP,0xc                         ; 005b77ad
    ADD ESP,0x4                         ; 005b77b0
    POP EBX                             ; 005b77b3
    RET                                 ; 005b77b4

